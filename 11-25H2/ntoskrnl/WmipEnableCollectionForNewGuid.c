/*
 * XREFs of WmipEnableCollectionForNewGuid @ 0x1409B364C
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x1409B3044 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x1409B91F4 (WmipUpdateDataSource.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     WmipFindGEByGuid @ 0x1409B5550 (WmipFindGEByGuid.c)
 *     WmipSendWmiIrp @ 0x1409B5630 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1409B5E78 (WmipUnreferenceEntry.c)
 *     WmipDoDisableRequest @ 0x1409B8E9C (WmipDoDisableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x1409B8F6C (WmipSendEnableDisableRequest.c)
 *     WmipDeliverWnodeToDS @ 0x140A92138 (WmipDeliverWnodeToDS.c)
 *     WmipReleaseCollectionEnabled @ 0x140AB8E14 (WmipReleaseCollectionEnabled.c)
 */

int __fastcall WmipEnableCollectionForNewGuid(_OWORD *a1, __int64 a2)
{
  __int64 GEByGuid; // rax
  _DWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  _BYTE v16[16]; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v17[2]; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF

  *(_OWORD *)&v17[0].LowPart = 0LL;
  memset(v18, 0, sizeof(v18));
  GEByGuid = WmipFindGEByGuid(a1, 0LL);
  v5 = (_DWORD *)GEByGuid;
  if ( GEByGuid )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( v5[22] )
    {
      v6 = *(_DWORD *)(a2 + 16);
      if ( (v6 & 0x82000) == 0 )
      {
        *(_DWORD *)(a2 + 16) = v6 | 0x2000;
        v5[4] |= 2u;
        KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
        v7 = *(_QWORD *)(a2 + 64);
        *(_OWORD *)((char *)v18 + 8) = *a1;
        v17[0].LowPart = 48;
        LOBYTE(v8) = 4;
        WmipSendWmiIrp(v8, *(unsigned int *)(v7 + 56), (char *)v18 + 8, 48LL, v17, v16);
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        while ( !v5[22] )
        {
          LOBYTE(v10) = 1;
          LOBYTE(v9) = 5;
          WmipSendEnableDisableRequest(v9, v5, v10);
          if ( !v5[22] )
            break;
          LOBYTE(v12) = 1;
          LOBYTE(v11) = 4;
          WmipSendEnableDisableRequest(v11, v5, v12);
        }
        v5[4] &= ~2u;
      }
    }
    if ( v5[23] && (*(_DWORD *)(a2 + 16) & 0x4004) == 4 )
    {
      v5[4] |= 4u;
      *(_DWORD *)(a2 + 16) |= 0x4000u;
      KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
      v13 = *(_QWORD *)(a2 + 64);
      *(_OWORD *)&v17[0].LowPart = 0LL;
      LOBYTE(v14) = 6;
      v17[0].LowPart = 48;
      memset(v18, 0, sizeof(v18));
      *(_OWORD *)((char *)v18 + 8) = *a1;
      WmipDeliverWnodeToDS(v14, v13, v17, 48LL);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( v5[23] )
      {
        v5[4] &= ~4u;
        WmipReleaseCollectionEnabled(v5);
      }
      else
      {
        WmipDoDisableRequest(v5, 0LL, 4LL);
      }
    }
    WmipUnreferenceEntry(&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  }
  return GEByGuid;
}

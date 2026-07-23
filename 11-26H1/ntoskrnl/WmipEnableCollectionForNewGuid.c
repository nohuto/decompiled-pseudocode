/*
 * XREFs of WmipEnableCollectionForNewGuid @ 0x140A0CDA0
 * Callers:
 *     WmipUpdateDataSource @ 0x140A09CB4 (WmipUpdateDataSource.c)
 *     WmipGenerateRegistrationNotification @ 0x140A0C7AC (WmipGenerateRegistrationNotification.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WmipReleaseCollectionEnabled @ 0x140A09BAC (WmipReleaseCollectionEnabled.c)
 *     WmipDoDisableRequest @ 0x140A0A320 (WmipDoDisableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x140A0A3D0 (WmipSendEnableDisableRequest.c)
 *     WmipFindGEByGuid @ 0x140A0D800 (WmipFindGEByGuid.c)
 *     WmipSendWmiIrp @ 0x140A0D8E4 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 *     WmipDeliverWnodeToDS @ 0x140B36718 (WmipDeliverWnodeToDS.c)
 */

int __fastcall WmipEnableCollectionForNewGuid(_OWORD *a1, __int64 a2)
{
  __int64 GEByGuid; // rax
  _DWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE v12[16]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v14[2]; // [rsp+50h] [rbp-30h] BYREF

  v13 = 0LL;
  memset(v14, 0, sizeof(v14));
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
        KeReleaseMutex(&WmipSMMutex, 0);
        v7 = *(_QWORD *)(a2 + 64);
        *(_OWORD *)((char *)v14 + 8) = *a1;
        LODWORD(v13) = 48;
        LOBYTE(v8) = 4;
        WmipSendWmiIrp(v8, *(unsigned int *)(v7 + 56), (char *)v14 + 8, 48LL, &v13, v12);
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        while ( !v5[22] )
        {
          WmipSendEnableDisableRequest(5, (__int64)v5, 1);
          if ( !v5[22] )
            break;
          WmipSendEnableDisableRequest(4, (__int64)v5, 1);
        }
        v5[4] &= ~2u;
      }
    }
    if ( v5[23] && (*(_DWORD *)(a2 + 16) & 0x4004) == 4 )
    {
      v5[4] |= 4u;
      *(_DWORD *)(a2 + 16) |= 0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      v9 = *(_QWORD *)(a2 + 64);
      v13 = 0LL;
      LOBYTE(v10) = 6;
      LODWORD(v13) = 48;
      memset(v14, 0, sizeof(v14));
      *(_OWORD *)((char *)v14 + 8) = *a1;
      WmipDeliverWnodeToDS(v10, v9, &v13, 48LL);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( v5[23] )
      {
        v5[4] &= ~4u;
        WmipReleaseCollectionEnabled((__int64)v5);
      }
      else
      {
        WmipDoDisableRequest((__int64)v5, 0, 4LL);
      }
    }
    WmipUnreferenceEntry(&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = KeReleaseMutex(&WmipSMMutex, 0);
  }
  return GEByGuid;
}

/*
 * XREFs of WmipDisableCollectionForRemovedGuid @ 0x140A0B87C
 * Callers:
 *     WmipUpdateDataSource @ 0x140A09CB4 (WmipUpdateDataSource.c)
 *     WmipGenerateRegistrationNotification @ 0x140A0C7AC (WmipGenerateRegistrationNotification.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WmipReleaseCollectionEnabled @ 0x140A09BAC (WmipReleaseCollectionEnabled.c)
 *     WmipSendEnableDisableRequest @ 0x140A0A3D0 (WmipSendEnableDisableRequest.c)
 *     WmipFindGEByGuid @ 0x140A0D800 (WmipFindGEByGuid.c)
 *     WmipSendWmiIrp @ 0x140A0D8E4 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 */

int __fastcall WmipDisableCollectionForRemovedGuid(_OWORD *a1, __int64 a2)
{
  __int64 GEByGuid; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE v11[16]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v12; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v13[2]; // [rsp+50h] [rbp-30h] BYREF

  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  GEByGuid = WmipFindGEByGuid(a1, 0LL);
  v5 = (_DWORD *)GEByGuid;
  if ( GEByGuid )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( v5[22] && (*(_DWORD *)(a2 + 16) & 0x82000) == 0x2000 )
    {
      *(_DWORD *)(a2 + 16) &= ~0x2000u;
      v5[4] |= 2u;
      KeReleaseMutex(&WmipSMMutex, 0);
      v6 = *(_QWORD *)(a2 + 64);
      *(_OWORD *)((char *)v13 + 8) = *a1;
      LODWORD(v12) = 48;
      LOBYTE(v7) = 5;
      WmipSendWmiIrp(v7, *(unsigned int *)(v6 + 56), (char *)v13 + 8, 48LL, &v12, v11);
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
    if ( v5[23] && (*(_DWORD *)(a2 + 16) & 0x4000) != 0 )
    {
      v5[4] |= 4u;
      *(_DWORD *)(a2 + 16) &= ~0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      v8 = *(_QWORD *)(a2 + 64);
      v12 = 0LL;
      LODWORD(v12) = 48;
      memset(v13, 0, sizeof(v13));
      LOBYTE(v9) = 7;
      *(_OWORD *)((char *)v13 + 8) = *a1;
      WmipSendWmiIrp(v9, *(unsigned int *)(v8 + 56), (char *)v13 + 8, 48LL, &v12, v11);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      while ( !v5[23] )
      {
        WmipSendEnableDisableRequest(7, (__int64)v5, 0);
        if ( !v5[23] )
          break;
        WmipSendEnableDisableRequest(6, (__int64)v5, 0);
      }
      v5[4] &= ~4u;
      WmipReleaseCollectionEnabled((__int64)v5);
    }
    WmipUnreferenceEntry(&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = KeReleaseMutex(&WmipSMMutex, 0);
  }
  return GEByGuid;
}

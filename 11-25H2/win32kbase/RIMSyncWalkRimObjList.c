/*
 * XREFs of RIMSyncWalkRimObjList @ 0x14011F9AC
 * Callers:
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x14011F640 (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x14011F78C (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     RIMSetSystemInputMode @ 0x14011F8FC (RIMSetSystemInputMode.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B77F0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     RIMSetTestModeStatus @ 0x1401D6BE0 (RIMSetTestModeStatus.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1401DA400 (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall RIMSyncWalkRimObjList(__int64 a1, __int64 a2, void (__fastcall *a3)(void *, __int64))
{
  int v4; // r12d
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rsi
  unsigned int v8; // ebx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *i; // r14
  _QWORD *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  void **v23; // rdi
  __int64 v24; // rbp
  void *v25; // rbx
  __int64 v26; // r14
  char *v28; // [rsp+78h] [rbp+20h]

  v4 = a1;
  if ( *(_BYTE *)(W32GetUserSessionState(a1, a2) + 168) )
  {
    v7 = 0LL;
    v28 = 0LL;
    v8 = 0;
    UserSessionState = W32GetUserSessionState(v6, v5);
    RIMLockExclusive(UserSessionState + 56);
    v12 = *(__int64 **)(W32GetUserSessionState(v11, v10) + 120);
    if ( v12 != (__int64 *)(W32GetUserSessionState(v14, v13) + 120) )
    {
      do
      {
        if ( !*((_BYTE *)v12 + 64) && !*((_BYTE *)v12 + 65) )
          ++v8;
        v12 = (__int64 *)*v12;
      }
      while ( v12 != (__int64 *)(W32GetUserSessionState(v16, v15) + 120) );
      if ( v8 )
      {
        v7 = (char *)Win32AllocPoolZInitImpl(256LL, 8LL * v8, 0x706D7452u);
        v28 = v7;
        v8 = 0;
        for ( i = *(_QWORD **)(W32GetUserSessionState(v18, v17) + 120);
              i != (_QWORD *)(W32GetUserSessionState(v16, v15) + 120);
              i = (_QWORD *)*i )
        {
          v20 = i - 2;
          if ( !*((_BYTE *)i + 64)
            && !*((_BYTE *)v20 + 81)
            && ObReferenceObjectByPointer(i - 2, 3u, ExRawInputManagerObjectType, 0) >= 0 )
          {
            v21 = v8++;
            *(_QWORD *)&v7[8 * v21] = v20;
          }
        }
      }
    }
    v22 = W32GetUserSessionState(v16, v15);
    RIMUnlockExclusive(v22 + 56);
    if ( v8 )
    {
      v23 = (void **)v7;
      v24 = v8;
      do
      {
        v25 = *v23;
        v26 = (__int64)*v23 + 760;
        if ( v4 == 1 )
        {
          RIMLockExclusive((__int64)v25 + 104);
          RIMLockExclusive(v26);
        }
        a3(v25, a2);
        if ( v4 == 1 )
        {
          RIMUnlockExclusive(v26);
          RIMUnlockExclusive((__int64)v25 + 104);
        }
        ObfDereferenceObject(v25);
        ++v23;
        --v24;
      }
      while ( v24 );
      v7 = v28;
    }
    if ( v7 )
      GreDeleteFastMutex(v7);
  }
}

/*
 * XREFs of RIMSyncWalkRimObjList @ 0x1400E9B8C
 * Callers:
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x1400E8ED8 (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1400E9684 (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 *     RIMSetSystemInputMode @ 0x1400E9970 (RIMSetSystemInputMode.c)
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1400E9A1C (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     RIMTraceAllDevices @ 0x1401C387C (RIMTraceAllDevices.c)
 *     RIMSetTestModeStatus @ 0x1401FE0D0 (RIMSetTestModeStatus.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall RIMSyncWalkRimObjList(int a1, __int64 a2, void (__fastcall *a3)(void *, __int64))
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  char *v8; // rsi
  unsigned int v9; // ebx
  __int64 UserSessionState; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 *v14; // rdi
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  _QWORD *i; // r14
  _QWORD *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  void **v31; // rdi
  __int64 v32; // rbp
  void *v33; // rbx
  __int64 v34; // r14
  char *v36; // [rsp+78h] [rbp+20h]

  if ( *(_BYTE *)(W32GetUserSessionState(a1, a2, (_DWORD)a3) + 168) )
  {
    v8 = 0LL;
    v36 = 0LL;
    v9 = 0;
    UserSessionState = W32GetUserSessionState(v6, v5, v7);
    RIMLockExclusive(UserSessionState + 56);
    v14 = *(__int64 **)(W32GetUserSessionState(v12, v11, v13) + 120);
    if ( v14 != (__int64 *)(W32GetUserSessionState(v16, v15, v17) + 120) )
    {
      do
      {
        if ( !*((_BYTE *)v14 + 64) && !*((_BYTE *)v14 + 65) )
          ++v9;
        v14 = (__int64 *)*v14;
      }
      while ( v14 != (__int64 *)(W32GetUserSessionState(v19, v18, v20) + 120) );
      if ( v9 )
      {
        v8 = (char *)Win32AllocPoolZInitImpl(256LL, 8LL * v9, 0x706D7452u);
        v36 = v8;
        v9 = 0;
        for ( i = *(_QWORD **)(W32GetUserSessionState(v22, v21, v23) + 120);
              i != (_QWORD *)(W32GetUserSessionState(v19, v18, v20) + 120);
              i = (_QWORD *)*i )
        {
          v25 = i - 2;
          if ( !*((_BYTE *)i + 64)
            && !*((_BYTE *)v25 + 81)
            && ObReferenceObjectByPointer(i - 2, 3u, ExRawInputManagerObjectType, 0) >= 0 )
          {
            v26 = v9++;
            *(_QWORD *)&v8[8 * v26] = v25;
          }
        }
      }
    }
    v27 = W32GetUserSessionState(v19, v18, v20);
    RIMUnlockExclusive(v27 + 56);
    if ( v9 )
    {
      v31 = (void **)v8;
      v32 = v9;
      do
      {
        v33 = *v31;
        v34 = (__int64)*v31 + 760;
        if ( a1 == 1 )
        {
          RIMLockExclusive((__int64)v33 + 104);
          RIMLockExclusive(v34);
        }
        a3(v33, a2);
        if ( a1 == 1 )
        {
          RIMUnlockExclusive(v34);
          RIMUnlockExclusive((__int64)v33 + 104);
        }
        ObfDereferenceObject(v33);
        ++v31;
        --v32;
      }
      while ( v32 );
      v8 = v36;
    }
    if ( v8 )
      GreDeleteFastMutex(v8, v28, v29, v30);
  }
}

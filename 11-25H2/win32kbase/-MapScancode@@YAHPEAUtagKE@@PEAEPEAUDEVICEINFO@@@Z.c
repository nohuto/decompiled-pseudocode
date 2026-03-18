/*
 * XREFs of ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x14002AF30
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1400FAA64 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     IsRemoteConnection @ 0x14002AFE4 (IsRemoteConnection.c)
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x14002B018 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall MapScancode(struct tagKE *a1, unsigned __int8 *a2, struct DEVICEINFO *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int16 v11; // bx
  __int16 *i; // rax
  __int16 v13; // ax

  if ( (unsigned int)IsRemoteConnection() )
    return 1LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v7, v6) + 12896) )
  {
    v11 = *(unsigned __int8 *)a1 | (*a2 << 8);
    for ( i = (__int16 *)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 12896) + 12LL); *(_DWORD *)i; i += 2 )
    {
      if ( HIWORD(*(_DWORD *)i) == v11 )
      {
        v13 = *i;
        *(_BYTE *)a1 = v13;
        *a2 = HIBYTE(v13);
        return MapFlexibleKeys(a1, *a2, a3);
      }
    }
  }
  return MapFlexibleKeys(a1, *a2, a3);
}

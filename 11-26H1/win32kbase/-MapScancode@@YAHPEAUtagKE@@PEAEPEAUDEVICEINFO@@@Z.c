/*
 * XREFs of ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x14007E904
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x140123CFC (ProcessKeyboardInputWorker.c)
 * Callees:
 *     IsRemoteConnection @ 0x14007E9B8 (IsRemoteConnection.c)
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x14007EC78 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall MapScancode(struct tagKE *a1, unsigned __int8 *a2, struct DEVICEINFO *a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int16 v13; // bx
  __int16 *i; // rax
  __int16 v15; // ax

  if ( (unsigned int)IsRemoteConnection() )
    return 1LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 12888) )
  {
    v13 = *(unsigned __int8 *)a1 | (*a2 << 8);
    for ( i = (__int16 *)(*(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 12888) + 12LL); *(_DWORD *)i; i += 2 )
    {
      if ( HIWORD(*(_DWORD *)i) == v13 )
      {
        v15 = *i;
        *(_BYTE *)a1 = v15;
        *a2 = HIBYTE(v15);
        return MapFlexibleKeys(a1, *a2, a3);
      }
    }
  }
  return MapFlexibleKeys(a1, *a2, a3);
}

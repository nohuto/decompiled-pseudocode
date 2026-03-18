/*
 * XREFs of SetSwapMouseButton @ 0x1400A6FF0
 * Callers:
 *     UnpackMouseSettings @ 0x140217504 (UnpackMouseSettings.c)
 * Callees:
 *     BroadcastSettingsUpdateToAllContainers @ 0x1400A8400 (BroadcastSettingsUpdateToAllContainers.c)
 */

char __fastcall SetSwapMouseButton(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // di
  __int64 v7; // rcx
  __int64 v8; // rdx
  bool v9; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx

  v2 = (unsigned __int8)a1;
  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
  v5 = *(_DWORD *)(v3 + 1988) != 0;
  if ( v5 != (_BYTE)v2 )
  {
    v7 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19872);
    *(_DWORD *)(v7 + 1988) = v2;
    v9 = *(_BYTE *)(W32GetUserSessionState(v7, v8) + 16352) == 0;
    *(_BYTE *)(W32GetUserSessionState(v11, v10) + 16352) = v9;
    BroadcastSettingsUpdateToAllContainers();
  }
  return v5;
}

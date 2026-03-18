/*
 * XREFs of SetSwapMouseButton @ 0x14017DF70
 * Callers:
 *     UnpackMouseSettings @ 0x14021C740 (UnpackMouseSettings.c)
 * Callees:
 *     BroadcastSettingsUpdateToAllContainers @ 0x1401C5BB0 (BroadcastSettingsUpdateToAllContainers.c)
 */

char __fastcall SetSwapMouseButton(int a1, int a2, int a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  char v7; // di
  __int64 v9; // rcx
  int v10; // edx
  int v11; // r8d
  bool v12; // bl
  int v13; // edx
  int v14; // ecx
  int v15; // r8d

  v3 = (unsigned __int8)a1;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19904);
  v7 = *(_DWORD *)(v4 + 1988) != 0;
  if ( v7 != (_BYTE)v3 )
  {
    v9 = *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 19904);
    *(_DWORD *)(v9 + 1988) = v3;
    v12 = *(_BYTE *)(W32GetUserSessionState(v9, v10, v11) + 16344) == 0;
    *(_BYTE *)(W32GetUserSessionState(v14, v13, v15) + 16344) = v12;
    BroadcastSettingsUpdateToAllContainers();
  }
  return v7;
}

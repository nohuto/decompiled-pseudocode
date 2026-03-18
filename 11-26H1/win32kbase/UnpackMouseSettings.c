/*
 * XREFs of UnpackMouseSettings @ 0x14021C740
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x14021F560 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     ResetAccelerationCurves @ 0x14008E3D0 (ResetAccelerationCurves.c)
 *     GetMouseSensitivity @ 0x14013FC60 (GetMouseSensitivity.c)
 *     SetSwapMouseButton @ 0x14017DF70 (SetSwapMouseButton.c)
 *     UpdateMouseSensitivity @ 0x140188F00 (UpdateMouseSensitivity.c)
 *     EditionxxxBroadcastSPIChange @ 0x1401C1AC8 (EditionxxxBroadcastSPIChange.c)
 */

_QWORD *__fastcall UnpackMouseSettings(int *a1, int a2, int a3)
{
  int v3; // edi
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rdx
  unsigned int v9; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rdx
  int v16; // ebx
  _QWORD *result; // rax
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rdx

  v3 = *a1;
  v5 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 19904);
  if ( v3 != *(_DWORD *)(v5 + 1988) )
  {
    LOBYTE(v6) = v3 != 0;
    SetSwapMouseButton(v6, v5, v7);
    EditionxxxBroadcastSPIChange(33LL, v8, 0);
  }
  v9 = a1[1];
  if ( v9 != GetMouseSensitivity(0LL, v5, v7) )
  {
    UpdateMouseSensitivity(v9, v10, v12);
    ResetAccelerationCurves(0, v13, v14);
    EditionxxxBroadcastSPIChange(113LL, v15, 0);
  }
  v16 = a1[2];
  result = (_QWORD *)W32GetUserSessionState(v11, v10, v12);
  v20 = result[2488];
  if ( v16 != *(_DWORD *)(v20 + 4988) )
  {
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v20, v18, v19) + 19904) + 4988LL) = v16;
    return EditionxxxBroadcastSPIChange(105LL, v21, 0);
  }
  return result;
}

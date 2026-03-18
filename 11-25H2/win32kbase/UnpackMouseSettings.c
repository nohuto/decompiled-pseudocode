/*
 * XREFs of UnpackMouseSettings @ 0x140217504
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x14021AC00 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     SetSwapMouseButton @ 0x1400A6FF0 (SetSwapMouseButton.c)
 *     UpdateMouseSensitivity @ 0x1400A7080 (UpdateMouseSensitivity.c)
 *     GetMouseSensitivity @ 0x140109100 (GetMouseSensitivity.c)
 *     ResetAccelerationCurves @ 0x14012B760 (ResetAccelerationCurves.c)
 *     EditionxxxBroadcastSPIChange @ 0x14023EC20 (EditionxxxBroadcastSPIChange.c)
 */

__int64 __fastcall UnpackMouseSettings(int *a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // ebx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx

  v2 = *a1;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
  if ( v2 != *(_DWORD *)(v4 + 1988) )
  {
    LOBYTE(v5) = v2 != 0;
    SetSwapMouseButton(v5, v4);
    EditionxxxBroadcastSPIChange(33LL, v6, 0LL);
  }
  v7 = a1[1];
  if ( v7 != GetMouseSensitivity(0LL, v4) )
  {
    UpdateMouseSensitivity(v7, v8);
    ResetAccelerationCurves(0LL, v10);
    EditionxxxBroadcastSPIChange(113LL, v11, 0LL);
  }
  v12 = a1[2];
  result = W32GetUserSessionState(v9, v8);
  v15 = *(_QWORD *)(result + 19872);
  if ( v12 != *(_DWORD *)(v15 + 4988) )
  {
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v15, v14) + 19872) + 4988LL) = v12;
    return EditionxxxBroadcastSPIChange(105LL, v16, 0LL);
  }
  return result;
}

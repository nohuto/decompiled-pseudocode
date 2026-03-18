/*
 * XREFs of HMValidateSharedHandleNoRip @ 0x140082658
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14007BDA0 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     rimInUserCritCreatePointerDeviceInfo @ 0x14007C0AC (rimInUserCritCreatePointerDeviceInfo.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x140082550 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ValidateHmonitorNoRip @ 0x140082640 (ValidateHmonitorNoRip.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140082FC0 (TransformRectBetweenCoordinateSpaces.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x14010AB30 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMValidateSharedHandleNoRip(int a1, int a2, int a3)
{
  __int16 v3; // esi^2
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d
  __int64 UserSessionState; // rbx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // rbx
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r14
  __int16 v20; // si
  __int64 v21; // rcx
  __int64 v22; // rbp

  v3 = HIWORD(a1);
  v4 = (unsigned __int16)a1;
  v5 = 0LL;
  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19904);
  if ( v4 < *(_QWORD *)(v6 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v7, v6, v8);
    v13 = *(_DWORD *)(W32GetUserSessionState(v11, v10, v12) + 19928) * v4;
    v14 = v13 + *(_QWORD *)(UserSessionState + 19920);
    v17 = W32GetUserSessionState(v13, v15, v16);
    v19 = *(_QWORD *)(v17 + 19864);
    v20 = v3 & 0x7FFF;
    v21 = (unsigned int)((v14 - *(_QWORD *)(v17 + 19920)) >> 5);
    v22 = 5 * v21;
    if ( ((v3 & 0x7FFF) == *(_WORD *)(v14 + 26) || v20 == 0x7FFF || !v20 && PsGetCurrentProcessWow64Process(v21, v18))
      && (*(_BYTE *)(v14 + 25) & 1) == 0
      && *(_BYTE *)(v14 + 24) == 12 )
    {
      return *(_QWORD *)(v19 + 8 * v22);
    }
  }
  return v5;
}

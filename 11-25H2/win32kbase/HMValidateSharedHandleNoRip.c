/*
 * XREFs of HMValidateSharedHandleNoRip @ 0x140064D58
 * Callers:
 *     rimInUserCritCreatePointerDeviceInfo @ 0x14002C2BC (rimInUserCritCreatePointerDeviceInfo.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14002D388 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140063190 (TransformRectBetweenCoordinateSpaces.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x140064A30 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x140064B14 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ValidateHmonitorNoRip @ 0x140064D40 (ValidateHmonitorNoRip.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x140220B58 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMValidateSharedHandleNoRip(__int64 a1, __int64 a2)
{
  __int16 v2; // esi^2
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r14
  __int16 v15; // si
  __int64 v16; // rbp

  v2 = WORD1(a1);
  v3 = (unsigned __int16)a1;
  v4 = 0LL;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
  if ( v3 < *(_QWORD *)(v5 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    v10 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v9, v8) + 19896) * v3);
    v11 = v10 + *(_QWORD *)(UserSessionState + 19888);
    v13 = W32GetUserSessionState(v10, v12);
    v14 = *(_QWORD *)(v13 + 19832);
    v15 = v2 & 0x7FFF;
    v16 = 5LL * (unsigned int)((v11 - *(_QWORD *)(v13 + 19888)) >> 5);
    if ( ((v2 & 0x7FFF) == *(_WORD *)(v11 + 26) || v15 == 0x7FFF || !v15 && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v11 + 25) & 1) == 0
      && *(_BYTE *)(v11 + 24) == 12 )
    {
      return *(_QWORD *)(v14 + 8 * v16);
    }
  }
  return v4;
}

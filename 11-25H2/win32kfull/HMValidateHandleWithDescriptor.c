/*
 * XREFs of HMValidateHandleWithDescriptor @ 0x14007AE48
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     NtUserEndDeferWindowPosEx @ 0x14004C490 (NtUserEndDeferWindowPosEx.c)
 *     NtUserDrawIconEx @ 0x140056290 (NtUserDrawIconEx.c)
 *     ?SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x14007A730 (-SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     NtUserDestroyCursor @ 0x14007AAF0 (NtUserDestroyCursor.c)
 *     NtUserGetIconInfo @ 0x14007ABF0 (NtUserGetIconInfo.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1400C2F84 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     fnHkINLPMSG @ 0x1400C4FD0 (fnHkINLPMSG.c)
 *     NtUserUnhookWindowsHookEx @ 0x1400C9430 (NtUserUnhookWindowsHookEx.c)
 *     NtUserUnhookWinEvent @ 0x1400CA120 (NtUserUnhookWinEvent.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1401310F0 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140131284 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     NtUserTranslateAccelerator @ 0x14016E580 (NtUserTranslateAccelerator.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1401A04B0 (NtUserGetRawInputDeviceInfo.c)
 *     _MapDesktopObject @ 0x1401AC150 (_MapDesktopObject.c)
 *     NtUserGetCursorFrameInfo @ 0x1401B0A60 (NtUserGetCursorFrameInfo.c)
 *     NtUserGetIconSize @ 0x1401C9450 (NtUserGetIconSize.c)
 *     NtUserCopyAcceleratorTable @ 0x1401D1B50 (NtUserCopyAcceleratorTable.c)
 *     NtUserLinkDpiCursor @ 0x1401D1F30 (NtUserLinkDpiCursor.c)
 *     NtUserAssociateInputContext @ 0x1401D2870 (NtUserAssociateInputContext.c)
 *     NtUserGetRequiredCursorSizes @ 0x1401D6C40 (NtUserGetRequiredCursorSizes.c)
 *     NtUserUpdateInputContext @ 0x1401D9550 (NtUserUpdateInputContext.c)
 *     NtUserCreateLocalMemHandle @ 0x1401D9E30 (NtUserCreateLocalMemHandle.c)
 *     NtUserQueryInputContext @ 0x1401E5180 (NtUserQueryInputContext.c)
 *     SfnTOUCH @ 0x1401FC5B0 (SfnTOUCH.c)
 *     NtUserGetTouchInputInfo @ 0x1402006B0 (NtUserGetTouchInputInfo.c)
 *     NtUserDestroyAcceleratorTable @ 0x140202140 (NtUserDestroyAcceleratorTable.c)
 *     NtUserGetGestureInfo @ 0x14020F000 (NtUserGetGestureInfo.c)
 *     NtUserRegisterEdgy @ 0x14020F790 (NtUserRegisterEdgy.c)
 *     SfnGESTURE @ 0x140210230 (SfnGESTURE.c)
 *     NtUserSetSystemCursor @ 0x14021B040 (NtUserSetSystemCursor.c)
 *     NtUserDeferWindowPosAndBand @ 0x1402487D0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserUserHandleGrantAccess @ 0x14024F3E0 (NtUserUserHandleGrantAccess.c)
 *     ?NtUserHandleGrantAccess@@YAHPEAX0_N@Z @ 0x14029314C (-NtUserHandleGrantAccess@@YAHPEAX0_N@Z.c)
 *     NtUserDestroyInputContext @ 0x1402954A0 (NtUserDestroyInputContext.c)
 *     NtUserDragObject @ 0x1402957F0 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x140295B70 (NtUserDrawCaptionTemp.c)
 *     NtUserFindExistingCursorIcon @ 0x140296850 (NtUserFindExistingCursorIcon.c)
 *     NtUserGetGestureExtArgs @ 0x140297B80 (NtUserGetGestureExtArgs.c)
 *     NtUserGetTouchValidationStatus @ 0x140298B60 (NtUserGetTouchValidationStatus.c)
 *     NtUserSetCalibrationData @ 0x14029E160 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorIconDataEx @ 0x14029E9C0 (NtUserSetCursorIconDataEx.c)
 *     NtUserSetDisplayMapping @ 0x14029EF10 (NtUserSetDisplayMapping.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B43B0 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1402E0EFC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall HMValidateHandleWithDescriptor(__int64 a1, __int64 a2)
{
  int v2; // r14d
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 *v14; // r15
  __int64 v15; // rcx
  __int16 v16; // ax
  char v17; // al
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v23; // ecx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v25; // rdx
  __int16 v26; // r8
  _QWORD *v27; // rax
  __int64 v28; // rax

  v2 = (unsigned __int8)a2;
  v3 = 0LL;
  W32GetCurrentThreadNonPaged(a1, a2);
  v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19872);
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(v8 + 8) )
    goto LABEL_22;
  UserSessionState = W32GetUserSessionState(v8, v7);
  v12 = *(_DWORD *)(W32GetUserSessionState(v11, v10) + 19896) * (unsigned int)(unsigned __int16)a1
      + *(_QWORD *)(UserSessionState + 19888);
  v14 = (__int64 *)HMPkheFromPhe(v12);
  v15 = 0x7FFFLL;
  v16 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v12 + 26)
    && v16 != 0x7FFF
    && (v16 || !PsGetCurrentProcessWow64Process(0x7FFFLL, v13)) )
  {
    goto LABEL_22;
  }
  LOBYTE(v15) = *(_BYTE *)(v12 + 25);
  if ( (v15 & 1) == 0 )
  {
    v17 = *(_BYTE *)(v12 + 24);
    if ( v17 == (_BYTE)v2 || (_BYTE)v2 == 0xFF && v17 )
    {
      v3 = *v14;
      if ( (v15 & 4) != 0 )
      {
        LOBYTE(v13) = v2;
        v15 = -(__int64)((unsigned int)HMSDCheck(a1, v13, 0LL) != 0);
        v3 &= v15;
      }
    }
  }
  if ( (*(_BYTE *)(v12 + 25) & 4) == 0 )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v15, v13);
    if ( CurrentThreadNonPaged )
      v19 = *CurrentThreadNonPaged;
    else
      v19 = 0LL;
    v20 = 3LL;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 528), 0, 0) & 0x20000000) == 0 )
      v20 = 2LL;
    v21 = -(__int64)((unsigned int)ValidateHandleSecure(a1, v20) != 0);
    v3 &= v21;
    if ( *(char *)(v12 + 25) < 0 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v21);
      v25 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        if ( *CurrentProcessWin32Process )
        {
          v26 = gahti[12 * *(unsigned __int8 *)(v12 + 24) + 6];
          if ( (v26 & 2) != 0 )
          {
            v27 = (_QWORD *)v14[1];
LABEL_40:
            if ( v27 && v27 != v25 )
              goto LABEL_22;
            goto LABEL_13;
          }
          if ( (v26 & 1) != 0 )
          {
            v28 = v14[1];
            if ( v28 )
            {
              v27 = *(_QWORD **)(v28 + 464);
              goto LABEL_40;
            }
          }
        }
      }
    }
  }
LABEL_13:
  if ( v3 )
    return v3;
LABEL_22:
  switch ( v2 )
  {
    case 1:
      v23 = 1400;
      break;
    case 2:
      v23 = 1401;
      break;
    case 3:
      v23 = 1402;
      break;
    case 4:
      v23 = 1405;
      break;
    case 5:
      v23 = 1404;
      break;
    case 8:
      v23 = 1403;
      break;
    default:
      v23 = 6;
      break;
  }
  UserSetLastError(v23);
  return 0LL;
}

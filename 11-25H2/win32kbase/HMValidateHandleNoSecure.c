/*
 * XREFs of HMValidateHandleNoSecure @ 0x140067260
 * Callers:
 *     NtUserGetPointerDeviceOrientation @ 0x14003B7F0 (NtUserGetPointerDeviceOrientation.c)
 *     GetWorkspaceId @ 0x140066AA0 (GetWorkspaceId.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x140066AC4 (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x140066C20 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     ResolveMouseOrPointerDevice @ 0x140067190 (ResolveMouseOrPointerDevice.c)
 *     IsTouchpadDevice @ 0x14006721C (IsTouchpadDevice.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1400D9F58 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA318 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1400E3C64 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 *     HMSDCheck @ 0x1400E3ED0 (HMSDCheck.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1400E5470 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     _IsPseudoDevice @ 0x14011C490 (_IsPseudoDevice.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14012CEA0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x140135908 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     _GetDeviceRects @ 0x140148150 (_GetDeviceRects.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x14014AFE0 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x14014F984 (-IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x140185E58 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140186278 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140187020 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140188830 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x14018ADE0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x14018B584 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14018DE2C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018E544 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1401A0250 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     CleanupTouchExtensibility @ 0x1401A1BD8 (CleanupTouchExtensibility.c)
 *     IsTouchpadCapable @ 0x1401A98E0 (IsTouchpadCapable.c)
 *     ReValidateHwndStrict @ 0x1401AC210 (ReValidateHwndStrict.c)
 *     NtMITPostWindowEventMessage @ 0x1401BB1F0 (NtMITPostWindowEventMessage.c)
 *     NtUserGetMinuserIdForBaseWindow @ 0x1401BD890 (NtUserGetMinuserIdForBaseWindow.c)
 *     UserDeleteBaseWindowHandle @ 0x1401C1A00 (UserDeleteBaseWindowHandle.c)
 *     GetPreparsedData @ 0x1401E1AF8 (GetPreparsedData.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1401F701C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1401F7170 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401FB1F0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FE1EC (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x140204180 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x140206CB4 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x140211228 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x14021C67C (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 *     SynthesizeMitTouchInput @ 0x14021C740 (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x14021CAC4 (SynthesizeTouchInputContainer.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14021DEC4 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall HMValidateHandleNoSecure(int a1, char a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // r14
  char v18; // al

  v4 = 0LL;
  W32GetCurrentThreadNonPaged();
  v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19872);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(v8 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v8, v7);
    v12 = *(_DWORD *)(W32GetUserSessionState(v11, v10) + 19896) * (unsigned int)(unsigned __int16)a1;
    v13 = v12 + *(_QWORD *)(UserSessionState + 19888);
    v15 = W32GetUserSessionState(v12, v14);
    v16 = *(_QWORD *)(v15 + 19832);
    v17 = 5LL * (unsigned int)((v13 - *(_QWORD *)(v15 + 19888)) >> 5);
    LOWORD(a1) = HIWORD(a1) & 0x7FFF;
    if ( ((HIWORD(a1) & 0x7FFF) == *(_WORD *)(v13 + 26)
       || (_WORD)a1 == 0x7FFF
       || !(_WORD)a1 && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v13 + 25) & 1) == 0 )
    {
      v18 = *(_BYTE *)(v13 + 24);
      if ( v18 == a2 || a2 == -1 && v18 )
        return *(_QWORD *)(v16 + 8 * v17);
    }
  }
  return v4;
}

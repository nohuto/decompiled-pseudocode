/*
 * XREFs of RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0
 * Callers:
 *     RIMGetDevicePropertiesLockfree @ 0x14002C3C0 (RIMGetDevicePropertiesLockfree.c)
 *     RIMGetSourceProcessId @ 0x14002CBA0 (RIMGetSourceProcessId.c)
 *     RIMRefreshDeviceAttributes @ 0x14002DEC0 (RIMRefreshDeviceAttributes.c)
 *     rimCreateDev @ 0x140061FCC (rimCreateDev.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1400FF970 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     NtUserInjectGenericHidInput @ 0x14011EB50 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectDeviceInput @ 0x14013AF50 (NtUserInjectDeviceInput.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x140158BD0 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMInjectInput @ 0x14015AA60 (RIMInjectInput.c)
 *     NtUserInjectKeyboardInput @ 0x140171970 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x140172360 (NtUserInjectMouseInput.c)
 *     RIMDeviceIoControl @ 0x14017EA70 (RIMDeviceIoControl.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140186278 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     NtUserRemoveInjectionDevice @ 0x14019B810 (NtUserRemoveInjectionDevice.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x14019DF44 (rimObsCheckForExistingDeviceHandle.c)
 *     NtSetPointerDeviceInputSpace @ 0x1401BBD50 (NtSetPointerDeviceInputSpace.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401BC380 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInjectPointerInput @ 0x1401BE260 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1401BFA20 (NtUserSetFeatureReportResponse.c)
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     NtRIMSetExtendedDeviceProperty @ 0x1401D8570 (NtRIMSetExtendedDeviceProperty.c)
 *     RIMAreSiblingDevices @ 0x1401DA140 (RIMAreSiblingDevices.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1401DA730 (RIMEnableMonitorMappingForDevice.c)
 *     RIMGetPhysicalDeviceRect @ 0x1401DB4D0 (RIMGetPhysicalDeviceRect.c)
 *     RIMRemoveInjectionDevice @ 0x1401DBD60 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1401DC2CC (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x14021C67C (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 *     ?CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z @ 0x14021D0B8 (-CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14021DEC4 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x14021E0EC (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x14021E250 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x14021E50C (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x14021E6D0 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14013B930 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectResolveHandle(char *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  char v5; // bp
  __int64 v6; // rdx
  NTSTATUS v7; // ebx
  bool v9; // di
  bool v10; // si
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v5 = (char)a1;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  if ( v7 < 0 )
  {
    v9 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 19336),
        4,
        1,
        11,
        (__int64)&WPP_4faad94a375d3941b1c61349de2555b2_Traceguids,
        v5,
        v7);
    }
  }
  else if ( *((_DWORD *)Object + 1) == 2 )
  {
    *a4 = Object;
  }
  else
  {
    v7 = -1073741788;
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v7;
}

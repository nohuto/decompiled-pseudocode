/*
 * XREFs of ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800F210C
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x1800F13C4 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x18002E484 (-GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x1800415C4 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSe.c)
 *     ?Initialize@?$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z@std@@@Z @ 0x180041E08 (-Initialize@-$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@QEAAXAEBV-$ComPtr@.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18004231C (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageS.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_VPTP_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x18004257C (-Initialize@-$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSes.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x18004BAD4 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_ACCESSIBILITY_TIMER@@@Z@std@@@Z @ 0x180077B60 (-Initialize@-$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z@std@@@Z @ 0x1800781CC (-Initialize@-$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMes.c)
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x1800851A0 (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 *     ?Initialize@?$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z@std@@@Z @ 0x18008903C (-Initialize@-$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessag.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z @ 0x1800921D4 (--4-$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z@std@@@Z @ 0x18009239C (-Initialize@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@U.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z@std@@@Z @ 0x1800925EC (-Initialize@-$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ??$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVKeyboardOverriderDispatcher@@AEAV?$ComPtr@UIMessageSession@@@12@@Z @ 0x1800F0400 (--$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV-$ComPtr@UIMessageSession@@@WRL@Micros.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@Z@std@@@Z @ 0x1800F1B88 (-Initialize@-$KernelInputConnection@U_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMes.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z@std@@@Z @ 0x1800F1D6C (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_PTP_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x1800F1F3C (-Initialize@-$KernelInputConnection@U_MIT_PTP_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::Initialize(
        Win32kInterop *this,
        struct IRawInputClient *a2,
        struct ISystemInputRouter *a3)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, char *); // rbx
  int v20; // eax
  int v21; // eax
  __int64 (__fastcall **v23)(); // [rsp+20h] [rbp-40h] BYREF
  Win32kInterop *v24; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v25)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  wil::details *v27; // [rsp+80h] [rbp+20h] BYREF

  v27 = 0LL;
  Microsoft::WRL::ComPtr<DWMCursorBroker>::operator=((__int64 *)this + 7, (__int64)a2);
  Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)this + 6, (__int64)a3);
  *((_BYTE *)this + 32) = 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
  v5 = CoreUICreate(&v27);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v5,
      (int)v23);
  Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)this + 62, &v27);
  if ( IsEdition(253345LL) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardOverriderDispatcher,KeyboardOverriderDispatcher,Microsoft::WRL::ComPtr<IMessageSession> &>(
           (KeyboardOverriderDispatcher **)this + 5,
           (__int64)&v27);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA1,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v6,
        (int)v23);
    v23 = off_1801E7E50;
    v24 = this;
    v25 = &v23;
    KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::Initialize(
      (_QWORD *)this + 143,
      &v27,
      v7,
      (__int64)&v23);
  }
  v23 = off_1801E59D0;
  v24 = this;
  v25 = &v23;
  KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize((_QWORD *)this + 71, &v27, 4u, (__int64)&v23);
  v23 = off_1801E5820;
  v24 = this;
  v25 = &v23;
  KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>::Initialize((_QWORD *)this + 107, &v27, v8, (__int64)&v23);
  v23 = off_1801E4750;
  v24 = this;
  v25 = &v23;
  KernelInputConnection<_MIT_ACCESSIBILITY_TIMER>::Initialize((_QWORD *)this + 125, &v27, v9, (__int64)&v23);
  ISMStatics::GetHotkeyRegistrationForwarder();
  v23 = off_1801E59A0;
  v24 = this;
  v25 = &v23;
  KernelInputConnection<_MIT_HOTKEY_REGISTRATION_MESSAGE>::Initialize((_QWORD *)this + 161, &v27, v10, (__int64)&v23);
  v23 = off_1801E58B0;
  v24 = this;
  v25 = &v23;
  KernelInputConnection<_MIT_MOUSE_INPUT_MESSAGE>::Initialize((_QWORD *)this + 197, &v27, v11, (__int64)&v23);
  v23 = off_1801E49D8;
  v24 = this;
  v25 = &v23;
  KernelInputConnection<_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE>::Initialize(
    (_QWORD *)this + 179,
    &v27,
    v12,
    (__int64)&v23);
  v23 = off_1801E5850;
  v24 = this;
  v25 = &v23;
  KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize((_QWORD *)this + 89, &v27, 7u, (__int64)&v23);
  v23 = off_1801E4A08;
  v24 = this;
  v25 = &v23;
  KernelInputConnection<_MIT_VPTP_INTEROP_MESSAGE>::Initialize((_QWORD *)this + 215, &v27, v13, (__int64)&v23);
  v23 = off_1801E58E0;
  v24 = this;
  v25 = &v23;
  KernelInputConnection<MIT_INPUTSTREAM_ENDED_MESSAGE>::Initialize((_QWORD *)this + 233, &v27, v14, (__int64)&v23);
  v23 = off_1801E5880;
  v24 = this;
  v25 = &v23;
  KernelInputConnection<MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::Initialize(
    (_QWORD *)this + 251,
    &v27,
    v15,
    (__int64)&v23);
  v23 = off_1801E7FA8;
  v24 = this;
  v25 = &v23;
  KernelInputConnection<_MIT_PTP_INTEROP_MESSAGE>::Initialize((_QWORD *)this + 269, &v27, v16, (__int64)&v23);
  v23 = off_1801E7F78;
  v24 = this;
  v25 = &v23;
  KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::Initialize((_QWORD *)this + 287, &v27, v17, (__int64)&v23);
  v18 = *((_QWORD *)this + 6);
  v19 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v18 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 54);
  v20 = v19(v18, (char *)this + 432);
  if ( v20 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x11D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v20,
      (int)v23);
  v21 = CursorNotificationProcessor::Initialize(
          (Win32kInterop *)((char *)this + 440),
          *((struct ICursorBroker **)this + 54));
  if ( v21 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x11E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v21,
      (int)v23);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
  return 0LL;
}

/*
 * XREFs of ?PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180564490
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?IsAppIdPinnedInternal@VirtualPinnedAppsHandler@@AEAA_NPEBG@Z @ 0x1801F0844 (-IsAppIdPinnedInternal@VirtualPinnedAppsHandler@@AEAA_NPEBG@Z.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802A7F6C (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802BECB8 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Pa.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180563EF0 (--1VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180564C44 (-StartActivity@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180565134 (-Stop@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualPinnedAppsHandler::PinView(VirtualPinnedAppsHandler *this, struct IApplicationView *a2)
{
  unsigned int v4; // ebx
  int (__fastcall *v5)(struct IApplicationView *, unsigned __int16 **); // rbx
  bool v6; // r8
  int v7; // eax
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, struct IVirtualDesktop **); // rbx
  struct IVirtualDesktop *v11; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v12; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D0h]
  __int64 v14; // [rsp+38h] [rbp-C8h]
  RTL_SRWLOCK *v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v16[42]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), v15);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"VirtualDesktopPinWindowActivity");
  v16[0] = (volatile signed __int32 *)&VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity *)v16);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 440LL))(*((_QWORD *)this + 6)) )
  {
    if ( !(*(unsigned int (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *))(*(_QWORD *)this + 128LL))(
            this,
            a2) )
    {
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v5 = *(int (__fastcall **)(struct IApplicationView *, unsigned __int16 **))(*(_QWORD *)a2 + 136LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v12);
      v13 = -1LL;
      v14 = -1LL;
      v6 = v5(a2, &v12) >= 0 && (unsigned __int8)VirtualPinnedAppsHandler::IsAppIdPinnedInternal(this, v12);
      v7 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, v6);
      v4 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD4,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v7);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v12);
        goto LABEL_12;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v12);
    }
    v11 = 0LL;
    v8 = *((_QWORD *)this + 6);
    v9 = *(void (__fastcall **)(__int64, struct IVirtualDesktop **))(*(_QWORD *)v8 + 368LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    v9(v8, &v11);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::Stop(
      (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity *)v16,
      a2,
      v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    v4 = 0;
    goto LABEL_12;
  }
  v4 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCE,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
    (const char *)0x8007139FLL);
LABEL_12:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::~VirtualDesktopPinWindowActivity(v16);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v15);
  return v4;
}

/*
 * XREFs of ?SetDesktopName@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180531130
 * Callers:
 *     ?SetDesktopName@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180531310 (-SetDesktopName@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?SetDesktopName@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180531320 (-SetDesktopName@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180296D24 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?GetSwitcherType@CVirtualDesktopManager@@AEAA?AW4SwitcherType@VirtualDesktop@@XZ @ 0x1802C9160 (-GetSwitcherType@CVirtualDesktopManager@@AEAA-AW4SwitcherType@VirtualDesktop@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18052E924 (--1VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180531668 (-StartActivity@VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@_NW4SwitcherType@3@@Z @ 0x180531E68 (-Stop@VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDes.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopManager::SetDesktopName(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        HSTRING a3)
{
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(struct IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  unsigned int SwitcherType; // eax
  __int64 v12; // r8
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  RTL_SRWLOCK *v15; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v16[42]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), &v15);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"VirtualDesktopSetNameActivity");
  v16[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity *)v16);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 12) + 32LL))(
         *((_QWORD *)this + 12),
         a2) )
  {
    v14 = 0LL;
    v7 = **(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    v8 = v7(a2, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v14);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v14 + 24LL))(v14, a3);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, HSTRING))(**((_QWORD **)this + 17) + 48LL))(
                *((_QWORD *)this + 17),
                a2,
                a3);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x39C,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
            (const char *)(unsigned int)v10);
        v8 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, HSTRING))(**((_QWORD **)this + 15) + 64LL))(
               *((_QWORD *)this + 15),
               a2,
               a3);
        v6 = v8;
        if ( v8 >= 0 )
        {
          SwitcherType = CVirtualDesktopManager::GetSwitcherType((__int64)this - 8);
          LOBYTE(v12) = a3 != 0LL;
          VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity::Stop(v16, a2, v12, SwitcherType);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
          v6 = 0;
          goto LABEL_13;
        }
        v9 = 926LL;
      }
      else
      {
        v9 = 920LL;
      }
    }
    else
    {
      v9 = 919LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  }
  else
  {
    v6 = -2147024809;
  }
LABEL_13:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity::~VirtualDesktopSetNameActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity *)v16);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v15);
  return v6;
}

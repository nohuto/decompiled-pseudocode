/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopSoftLandingHandler@@QEAAJPEAUIApplicationViewCollection@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x180568700
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopSoftLandingHandler@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopSoftLandingHandler@@AEAPEAUIApplicationViewCollection@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x1802B4D20 (--$MakeAndInitialize@VCVirtualDesktopSoftLandingHandler@@V1@AEAPEAUIApplicationViewCollection@@A.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180058064 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??$Register@UIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@_EP81@EAAJK@_EPEAVCVirtualDesktopSoftLandingHandler@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@_EP81@EAAJK@_EPEAVCVirtualDesktopSoftLandingHandler@@@Z @ 0x180080350 (--$Register@UIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktopNotification@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopSoftLandingHandler::RuntimeClassInitialize(
        CVirtualDesktopSoftLandingHandler *this,
        struct IApplicationViewCollection *a2,
        struct IVirtualDesktopNotificationServicePrivate *a3,
        struct IVirtualDesktopRegistryHelpers *a4)
{
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  int v13; // eax
  unsigned int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 5,
    (__int64)a2);
  v7 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IVirtualDesktopRegistryHelpers *))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 5) + 96LL))(
         *((_QWORD *)this + 5),
         ((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
         (char *)this + 48);
  v11 = v8;
  if ( v8 >= 0 )
  {
    v13 = ___Register_UIVirtualDesktopNotificationServicePrivate__P81_EAAJPEAUIVirtualDesktopNotification__PEAK__EP81_EAAJK__EPEAVCVirtualDesktopSoftLandingHandler___SmartCookie__QEAAJPEAUIVirtualDesktopNotificationServicePrivate__P81_EAAJPEAUIVirtualDesktopNotification__PEAK__EP81_EAAJK__EPEAVCVirtualDesktopSoftLandingHandler___Z(
            (__int64)this + 56,
            (__int64)a3,
            v9,
            v10,
            (__int64)this);
    v14 = v13;
    if ( v13 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopsoftlandinghandler.cpp",
        (const char *)(unsigned int)v13);
      return v14;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopsoftlandinghandler.cpp",
      (const char *)(unsigned int)v8);
    return v11;
  }
}

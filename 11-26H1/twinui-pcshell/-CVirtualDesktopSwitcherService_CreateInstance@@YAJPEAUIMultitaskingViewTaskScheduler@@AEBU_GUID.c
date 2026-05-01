/*
 * XREFs of ?CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x180135028
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180134CBC (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180063BA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopSwitcherService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopSwitcherService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x18013511C (--$MakeAndInitialize@VCVirtualDesktopSwitcherService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIVirtualDesktopSwitcherService@@UIVirtualDesktopSwitcherInvoker@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIVirtualDesktopSwitcherService@@UIVirtualDesktopSwitcherInvoker@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801351EC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCW_ea_1801351EC.c)
 *     ??1?$com_ptr_t@VCVirtualDesktopSwitcherService@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180218860 (--1-$com_ptr_t@VCVirtualDesktopSwitcherService@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualDesktopSwitcherService_CreateInstance(
        struct IMultitaskingViewTaskScheduler *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  volatile int *v5; // rdx
  unsigned int v6; // ebx
  volatile int *v7; // rdx
  __int64 v9; // rbx
  int v10; // eax
  int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMultitaskingViewTaskScheduler *v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v13 = a1;
  *a3 = 0LL;
  v14 = 0LL;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopSwitcherService,CVirtualDesktopSwitcherService,IMultitaskingViewTaskScheduler * &>(
         &v14,
         &v13);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v9 = v14;
    if ( v14 )
    {
      v10 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IVirtualDesktopSwitcherService,IVirtualDesktopSwitcherInvoker>>(
              v14,
              &GUID_f2943afe_cab3_4172_b1e9_59ba203c4a47,
              a3);
      v11 = v10;
      if ( v10 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x67A,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
          (const char *)(unsigned int)v10);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x71,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
          (const char *)(unsigned int)v11);
        wil::com_ptr_t<CVirtualDesktopSwitcherService,wil::err_exception_policy>::~com_ptr_t<CVirtualDesktopSwitcherService,wil::err_exception_policy>(&v14);
        return (unsigned int)v11;
      }
    }
    else
    {
      *a3 = 0LL;
    }
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
        v9,
        v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
      (const char *)(unsigned int)v4);
    if ( v14 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
        v14,
        v7);
    return v6;
  }
}

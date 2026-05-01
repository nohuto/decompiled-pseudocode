/*
 * XREFs of ?CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x180134E4C
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180134CBC (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIPPIAllUpViewService@@UIPPIAllUpViewInvoker@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180134F30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_180134F30.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIPPIAllUpViewService@@UIPPIAllUpViewInvoker@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180134F8C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_180134F8C.c)
 *     ??$MakeAndInitialize@VCPPIAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCPPIAllUpViewService@@@WRL@Microsoft@@@012@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x18029DC6C (--$MakeAndInitialize@VCPPIAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPPIAllUpViewService_CreateInstance(
        struct IMultitaskingViewTaskScheduler *a1,
        const struct _GUID *a2,
        void **a3)
{
  int CanCastTo; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMultitaskingViewTaskScheduler *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = a1;
  *a3 = 0LL;
  v9 = 0LL;
  CanCastTo = Microsoft::WRL::Details::MakeAndInitialize<CPPIAllUpViewService,CPPIAllUpViewService,IMultitaskingViewTaskScheduler * &>(
                &v9,
                &v8);
  if ( CanCastTo < 0 )
  {
    v6 = 82LL;
  }
  else
  {
    *a3 = 0LL;
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IPPIAllUpViewService,IPPIAllUpViewInvoker>::CanCastTo(
                  v9,
                  &GUID_6df90204_2291_4c35_98cd_722f8a0cad7e,
                  a3);
    if ( CanCastTo >= 0 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      goto LABEL_4;
    }
    v6 = 83LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewservice.cpp",
    (const char *)(unsigned int)CanCastTo);
LABEL_4:
  if ( v9 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IPPIAllUpViewService,IPPIAllUpViewInvoker>::Release();
  }
  return (unsigned int)CanCastTo;
}

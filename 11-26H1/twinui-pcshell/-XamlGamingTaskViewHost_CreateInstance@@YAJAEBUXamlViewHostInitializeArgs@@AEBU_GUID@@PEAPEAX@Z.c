/*
 * XREFs of ?XamlGamingTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x1806A3778
 * Callers:
 *     ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180254148 (-_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationVi.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??$MakeAndInitializeOrThrow@VXamlGamingTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VXamlGamingTaskViewHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18069FB98 (--$MakeAndInitializeOrThrow@VXamlGamingTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA-AV.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@@Details@23@UIAllUpViewHostInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1806A0DCC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1806A0DCC.c)
 *     ?InternalRelease@?$ComPtr@VXamlGamingTaskViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1806A1848 (-InternalRelease@-$ComPtr@VXamlGamingTaskViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlGamingTaskViewHost_CreateInstance(
        const struct XamlViewHostInitializeArgs *a1,
        const struct _GUID *a2,
        void **a3)
{
  const struct _GUID *v4; // rcx
  void *v5; // r9
  int CanCastTo; // edi
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  XamlGamingTaskViewHost *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = (XamlGamingTaskViewHost *)a2;
  *a3 = 0LL;
  try
  {
    wil::MakeAndInitializeOrThrow<XamlGamingTaskViewHost,XamlViewHostInitializeArgs const &>(&v10, a1);
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a3 = v5;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 8LL))(v5);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IAllUpViewHost>>,IAllUpViewHostInternal>::CanCastTo(
                    (__int64)v5,
                    v4);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    }
    Microsoft::WRL::ComPtr<XamlGamingTaskViewHost>::InternalRelease((volatile int **)&v10);
    result = (unsigned int)CanCastTo;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1EB,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlgamingtaskviewhost.cpp",
                           v7);
  }
  return result;
}

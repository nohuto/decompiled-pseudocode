/*
 * XREFs of ?XamlGamingTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x18067C958
 * Callers:
 *     ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18025AFA8 (-_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationVi.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??$MakeAndInitializeOrThrow@VXamlGamingTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VXamlGamingTaskViewHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x180679088 (--$MakeAndInitializeOrThrow@VXamlGamingTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA-AV.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@@Details@23@UIAllUpViewHostInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18067A26C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_18067A26C.c)
 *     ?InternalRelease@?$ComPtr@VXamlGamingTaskViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x18067AA98 (-InternalRelease@-$ComPtr@VXamlGamingTaskViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlGamingTaskViewHost_CreateInstance(
        const struct XamlViewHostInitializeArgs *a1,
        const struct _GUID *a2,
        void **a3)
{
  const struct _GUID *v4; // rcx
  int CanCastTo; // edi
  XamlGamingTaskViewHost *v6; // rcx
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
      v6 = v10;
      *a3 = v10;
      (*(void (__fastcall **)(XamlGamingTaskViewHost *))(*(_QWORD *)v6 + 8LL))(v6);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IAllUpViewHost>>,IAllUpViewHostInternal>::CanCastTo(
                    (__int64)v10,
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
                           (void *)0x1BF,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlgamingtaskviewhost.cpp",
                           v7);
  }
  return result;
}

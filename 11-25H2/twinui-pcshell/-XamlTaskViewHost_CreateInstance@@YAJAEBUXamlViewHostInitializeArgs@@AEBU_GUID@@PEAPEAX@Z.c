/*
 * XREFs of ?XamlTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x180680F20
 * Callers:
 *     ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18025AFA8 (-_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationVi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$MakeAndInitializeOrThrow@VTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VTaskViewHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18067E0B0 (--$MakeAndInitializeOrThrow@VTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA-AV-$ComPtr@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlTaskViewHost_CreateInstance(
        const struct XamlViewHostInitializeArgs *a1,
        const struct _GUID *a2,
        void **a3)
{
  __int64 *v4; // rax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  const struct _GUID *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  *a3 = 0LL;
  try
  {
    v4 = wil::MakeAndInitializeOrThrow<TaskViewHost,XamlViewHostInitializeArgs const &>((__int64 *)&v9, a1);
    v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, void **))*v4)(
           *v4,
           &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9,
           a3);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
    result = v5;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2B5,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
                           v6);
  }
  return result;
}

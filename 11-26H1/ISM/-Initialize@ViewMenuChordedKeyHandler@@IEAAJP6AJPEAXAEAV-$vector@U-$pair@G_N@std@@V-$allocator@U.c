/*
 * XREFs of ?Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@@Z @ 0x1801820AC
 * Callers:
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x180181F68 (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress@@@details@wil@@QEAA_NXZ @ 0x1801816A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordP.c)
 *     ??$_Assign_counted_range@PEAU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEAU?$pair@G_N@1@_K@Z @ 0x18018179C (--$_Assign_counted_range@PEAU-$pair@G_N@std@@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ViewMenuChordedKeyHandler::Initialize(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 (__fastcall *)(ViewMenuChordedKeyHandler *), __int64, __int64); // rsi
  __int64 v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  *(_DWORD *)(a1 + 16) = 1;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::GetImpl'::`2'::impl) )
  {
    if ( (__int64 *)(a1 + 80) != &qword_180254050 )
      std::vector<std::pair<unsigned short,bool>>::_Assign_counted_range<std::pair<unsigned short,bool> *>(
        (__int64 *)(a1 + 80),
        (_BYTE *)qword_180254050,
        ((__int64)xmmword_180254058 - qword_180254050) >> 2);
    *(_QWORD *)(a1 + 32) = ControllerProcessor::TaskSwitcherInvokedCallbackStatic;
    *(_QWORD *)(a1 + 40) = a3;
    v13 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)va);
    v5 = CoreUICreate((__int64 *)va);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 105LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)va);
      return v6;
    }
    v8 = v13;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(ViewMenuChordedKeyHandler *), __int64, __int64))(*(_QWORD *)v13 + 144LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 24));
    v5 = v9(v8, lambda_f572978f71a60d63369f438c920ebe04_::_lambda_invoker_cdecl_, a1, a1 + 24);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 112LL;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)va);
  }
  v11 = *(_QWORD *)(a1 + 48);
  if ( v11 != *(_QWORD *)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = v11;
  *(_WORD *)(a1 + 73) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  return 0LL;
}

/*
 * XREFs of ?MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801352F0
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180134CBC (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityService@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x1802BC624 (--$MakeAndInitialize@VMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityService@@$$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MultitaskingViewVisibilityService_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v9)(_QWORD, GUID *, void **); // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewVisibilityService,IMultitaskingViewVisibilityService,>(&v9);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = (**v9)(v9, &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307, a2);
    v4 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x63,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewvisibilityservice.cpp",
        (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewvisibilityservice.cpp",
      (const char *)(unsigned int)v3);
    v5 = (__int64)v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return v4;
}

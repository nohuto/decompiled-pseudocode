/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___ @ 0x18027F14C
 * Callers:
 *     GuidedSnapAssistControl::RunMultitaskingViewTask__lambda_017e4516d3db66192a06ba57bc482270___ @ 0x18027F0B4 (GuidedSnapAssistControl--RunMultitaskingViewTask__lambda_017e4516d3db66192a06ba57bc482270___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___::CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___ @ 0x1805BC948 (CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___--CMultitaskingViewTask.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270_(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  *a1 = 0LL;
  v5 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___::CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___(
           v5,
           a2);
  v6 = (v4 + 32) & -(__int64)(v4 != 0);
  v9 = v6;
  if ( v6 )
  {
    *a1 = v6;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"desktop\\internal\\shell\\inc\\private\\MultitaskingViewTask.h",
      (const char *)0x8007000ELL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    return 2147942414LL;
  }
}

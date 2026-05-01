/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___ @ 0x1805BC6F0
 * Callers:
 *     ?CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ @ 0x1805BCBD0 (-CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103_____lambda_83256061826219130c74760726d0f103__const_&_ @ 0x1805BC648 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103_(__int64 *a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD *CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103_____lambda_83256061826219130c74760726d0f103__const; // r8
  __int64 v5; // rdi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  *a1 = 0LL;
  CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103_____lambda_83256061826219130c74760726d0f103__const = Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103_____lambda_83256061826219130c74760726d0f103__const___(&v9, a2);
  v5 = (*CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103_____lambda_83256061826219130c74760726d0f103__const
      + 32LL) & -(__int64)(*CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103_____lambda_83256061826219130c74760726d0f103__const != 0LL);
  v10 = v5;
  *CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103_____lambda_83256061826219130c74760726d0f103__const = 0LL;
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 )
  {
    v10 = 0LL;
    *a1 = v5;
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"desktop\\internal\\shell\\inc\\private\\MultitaskingViewTask.h",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  return v3;
}

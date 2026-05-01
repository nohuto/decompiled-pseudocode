/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a___ @ 0x180487114
 * Callers:
 *     ?DismissVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJXZ @ 0x180487310 (-DismissVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a_____lambda_e4bce3ba4ff679026706ec329dbd106a__const_&_ @ 0x180486FDC (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a_(__int64 *a1, void *a2)
{
  unsigned int v3; // ebx
  _QWORD *CMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a_____lambda_e4bce3ba4ff679026706ec329dbd106a__const; // r8
  __int64 v5; // rdx
  __int64 v6; // rdi
  void *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v3 = 0;
  *a1 = 0LL;
  CMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a_____lambda_e4bce3ba4ff679026706ec329dbd106a__const = Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a_____lambda_e4bce3ba4ff679026706ec329dbd106a__const___(&v11, a2);
  v5 = -*CMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a_____lambda_e4bce3ba4ff679026706ec329dbd106a__const;
  v6 = (*CMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a_____lambda_e4bce3ba4ff679026706ec329dbd106a__const
      + 32LL) & -(__int64)(*CMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a_____lambda_e4bce3ba4ff679026706ec329dbd106a__const != 0LL);
  v10 = v6;
  *CMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a_____lambda_e4bce3ba4ff679026706ec329dbd106a__const = 0LL;
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v7 + 16LL))(v7, v5);
  }
  if ( v6 )
  {
    v10 = 0LL;
    *a1 = v6;
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

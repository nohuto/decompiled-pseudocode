/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___ @ 0x180134588
 * Callers:
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180133B48 (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764_____lambda_7e7f8cd3e685741244f76c8bd4111764__const_&_ @ 0x1801341A8 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd411.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764_(__int64 *a1, __int64 a2)
{
  _QWORD *CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764_____lambda_7e7f8cd3e685741244f76c8bd4111764__const; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764_____lambda_7e7f8cd3e685741244f76c8bd4111764__const = Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764_____lambda_7e7f8cd3e685741244f76c8bd4111764__const___(&v10, a2);
  v4 = *CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764_____lambda_7e7f8cd3e685741244f76c8bd4111764__const
     + 32LL;
  v5 = -*CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764_____lambda_7e7f8cd3e685741244f76c8bd4111764__const;
  v6 = v4 & -(__int64)(*CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764_____lambda_7e7f8cd3e685741244f76c8bd4111764__const != 0LL);
  v11 = v6;
  *CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764_____lambda_7e7f8cd3e685741244f76c8bd4111764__const = 0LL;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, v4, v5);
  }
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
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    return 2147942414LL;
  }
}

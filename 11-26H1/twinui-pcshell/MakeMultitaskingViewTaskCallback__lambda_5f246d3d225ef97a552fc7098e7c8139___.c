/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___ @ 0x18028B330
 * Callers:
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x180090BEC (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const_&_ @ 0x18028B3D4 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_(__int64 *a1)
{
  _QWORD *CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const = (_QWORD *)Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const___(&v8);
  v3 = -*CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const;
  v4 = (*CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const
      + 32LL) & -(__int64)(*CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const != 0LL);
  v9 = v4;
  *CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const = 0LL;
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, v3);
  }
  if ( v4 )
  {
    *a1 = v4;
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

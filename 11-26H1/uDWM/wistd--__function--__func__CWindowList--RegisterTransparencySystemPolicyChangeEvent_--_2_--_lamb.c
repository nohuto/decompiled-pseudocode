/*
 * XREFs of wistd::__function::__func__CWindowList::RegisterTransparencySystemPolicyChangeEvent_::_2_::_lambda_1__void___cdecl(int_const_&)_::operator() @ 0x1800DF790
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTransparencyPolicyChanged@CWindowList@@AEAAJ_N@Z @ 0x180075208 (-OnTransparencyPolicyChanged@CWindowList@@AEAAJ_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wistd::__function::__func__CWindowList::RegisterTransparencySystemPolicyChangeEvent_::_2_::_lambda_1__void___cdecl_int_const____::operator()(
        __int64 a1,
        _DWORD *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CWindowList::OnTransparencyPolicyChanged(*(CWindowList **)(a1 + 8), *a2 != 0);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7E2,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v2);
}

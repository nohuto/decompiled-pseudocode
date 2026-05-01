/*
 * XREFs of wil::details::lambda_call__lambda_f1c6de2ea4f05881c9660c94f83b11f2___::_lambda_call__lambda_f1c6de2ea4f05881c9660c94f83b11f2___ @ 0x18022842C
 * Callers:
 *     _UwpWindowEventDispatcher::OverrideNavigationLevelForView_::_1_::dtor$1 @ 0x1806B2CB1 (_UwpWindowEventDispatcher--OverrideNavigationLevelForView_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_f1c6de2ea4f05881c9660c94f83b11f2___::_lambda_call__lambda_f1c6de2ea4f05881c9660c94f83b11f2___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)a1 + 312LL))(**(_QWORD **)a1, 2LL);
  }
  return result;
}

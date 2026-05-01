/*
 * XREFs of wil::details::ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___::_ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___ @ 0x18049BF2C
 * Callers:
 *     _CAltTabViewHost::Show_::_1_::dtor$2 @ 0x1806C9315 (_CAltTabViewHost--Show_--_1_--dtor$2.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x18012D880 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___::_ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(*(_QWORD *)a1);
  }
  return result;
}

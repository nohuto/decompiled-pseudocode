/*
 * XREFs of ??$_Swap_ranges_unchecked@V?$basic_iterator@PEAVCBaseExpression@@@detail@@V12@@std@@YA?AV?$basic_iterator@PEAVCBaseExpression@@@detail@@V12@V12@0@Z @ 0x18022BC7C
 * Callers:
 *     ??$swap_generic@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x18022BE1C (--$swap_generic@V-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Swap_ranges_unchecked<detail::basic_iterator<CBaseExpression *>,detail::basic_iterator<CBaseExpression *>>(
        __int64 **a1,
        __int64 **a2,
        __int64 **a3,
        __int64 **a4)
{
  __int64 *i; // r10
  __int64 *v6; // r11
  __int64 v7; // r9
  __int64 **result; // rax

  for ( i = *a4; ; i = *a4 )
  {
    v6 = *a2;
    if ( *a2 == *a3 )
      break;
    v7 = *v6;
    *v6 = *i;
    *i = v7;
    ++*a2;
    ++*a4;
  }
  result = a1;
  *a1 = i;
  return result;
}

/*
 * XREFs of ?assign@?$_WChar_traits@G@std@@SAPEAGQEAG_KG@Z @ 0x18007539C
 * Callers:
 *     ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x18000C5B4 (-CreateTextFormat@CDWriteText@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall std::_WChar_traits<unsigned short>::assign(_WORD *a1, __int64 a2)
{
  _WORD *v3; // rdi
  __int64 i; // rcx

  if ( a2 )
  {
    v3 = a1;
    for ( i = a2; i; --i )
      *v3++ = 0;
  }
  return a1;
}

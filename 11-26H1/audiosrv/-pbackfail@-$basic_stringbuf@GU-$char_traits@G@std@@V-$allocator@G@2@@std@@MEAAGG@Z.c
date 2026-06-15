/*
 * XREFs of ?pbackfail@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x18015BDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::pbackfail(__int64 a1, unsigned __int16 a2)
{
  unsigned __int64 v4; // rsi

  v4 = std::basic_streambuf<unsigned short>::gptr(a1);
  if ( !v4
    || v4 <= std::basic_streambuf<unsigned short>::eback(a1)
    || a2 != 0xFFFF && a2 != *(_WORD *)(v4 - 2) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    return 0xFFFFLL;
  }
  std::basic_streambuf<unsigned short>::gbump(a1, 0xFFFFFFFFLL);
  if ( a2 == 0xFFFF )
    return 0;
  else
    *(_WORD *)std::basic_streambuf<unsigned short>::gptr(a1) = a2;
  return a2;
}

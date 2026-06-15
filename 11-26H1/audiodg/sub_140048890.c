/*
 * XREFs of sub_140048890 @ 0x140048890
 * Callers:
 *     sub_1400488F0 @ 0x1400488F0 (sub_1400488F0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140048890(const __m128i *a1, __int64 a2)
{
  __m128i si128; // xmm1
  char v3; // al
  const __m128i *v4; // rdx
  const __m128i *v5; // rdx

  si128 = _mm_load_si128((const __m128i *)&xmmword_1400C7600);
  v3 = 2 * a2;
  v4 = (const __m128i *)((char *)a1 + ((2 * a2) & 0xFFFFFFFFFFFFFFF0uLL));
  if ( a1 == v4 )
  {
LABEL_4:
    v5 = (const __m128i *)((char *)v4 + (v3 & 0xF));
    if ( a1 == v5 )
      return 1;
    while ( (a1->m128i_i16[0] & 0xFF00) == 0 )
    {
      a1 = (const __m128i *)((char *)a1 + 2);
      if ( a1 == v5 )
        return 1;
    }
  }
  else
  {
    while ( _mm_testz_si128(si128, _mm_loadu_si128(a1)) )
    {
      if ( ++a1 == v4 )
        goto LABEL_4;
    }
  }
  return 0;
}

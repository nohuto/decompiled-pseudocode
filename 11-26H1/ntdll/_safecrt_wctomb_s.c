/*
 * XREFs of _safecrt_wctomb_s @ 0x180134F78
 * Callers:
 *     _output_s @ 0x1801346DC (_output_s.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x180036220 (RtlUnicodeToMultiByteN.c)
 *     _invalid_parameter @ 0x180126898 (_invalid_parameter.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall safecrt_wctomb_s(int *a1, _BYTE *a2, size_t a3, __int16 a4)
{
  int v8; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  LOWORD(v9) = a4;
  if ( !a2 && a3 )
  {
    if ( a1 )
      *a1 = 0;
    return 0LL;
  }
  if ( a1 )
    *a1 = -1;
  if ( a3 > 0x7FFFFFFF )
  {
    invalid_parameter();
    return 22LL;
  }
  if ( !a2 )
  {
    if ( a1 )
      *a1 = _mb_cur_max;
    return 0LL;
  }
  v8 = 0;
  if ( (int)RtlUnicodeToMultiByteN(a2, a3, (unsigned int *)&v8, &v9, 2u) >= 0 )
  {
    if ( a1 )
      *a1 = v8;
    return 0LL;
  }
  if ( a3 )
    memset_thunk_772440563353939046(a2, 0, a3);
  return 42LL;
}

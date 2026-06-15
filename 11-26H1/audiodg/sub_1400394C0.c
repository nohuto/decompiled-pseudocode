/*
 * XREFs of sub_1400394C0 @ 0x1400394C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400394C0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v5; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 != -991493068 || a2[1] != 1097547901 || a2[2] != 395820692 )
      return (unsigned int)-2147467262;
    v5 = -77229897;
  }
  else
  {
    if ( a2[1] || a2[2] != 192 )
      return (unsigned int)-2147467262;
    v5 = 1174405120;
  }
  if ( a2[3] == v5 )
  {
    *a3 = a1;
    sub_1400B6010(a1);
    return v3;
  }
  return (unsigned int)-2147467262;
}

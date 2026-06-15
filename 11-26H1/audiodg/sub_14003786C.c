/*
 * XREFs of sub_14003786C @ 0x14003786C
 * Callers:
 *     sub_140037860 @ 0x140037860 (sub_140037860.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003786C(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == -1099282551 && a2[1] == 1236478097 && a2[2] == -1747173742 && a2[3] == 1921254878 )
    {
      a1 += 8LL;
LABEL_13:
      *a3 = a1;
      sub_1400B6010(a1);
      return v3;
    }
    return (unsigned int)-2147467262;
  }
  if ( a2[1] )
    return (unsigned int)-2147467262;
  if ( a2[2] != 192 || a2[3] != 1174405120 )
  {
    if ( !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
      goto LABEL_13;
    return (unsigned int)-2147467262;
  }
  *a3 = a1;
  sub_1400B6010(a1);
  return 0LL;
}

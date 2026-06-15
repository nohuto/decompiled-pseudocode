/*
 * XREFs of sub_140038BB0 @ 0x140038BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140038BB0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v5; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 != 413130672 || a2[1] != 1300728594 || a2[2] != 422579119 )
      return (unsigned int)-2147467262;
    v5 = -703823797;
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

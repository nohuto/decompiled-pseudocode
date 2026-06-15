/*
 * XREFs of sub_14002F7F0 @ 0x14002F7F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14002F7F0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v5; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 != 649328937 || a2[1] != 1431597685 || a2[2] != 38900352 )
      return (unsigned int)-2147467262;
    v5 = 112080848;
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

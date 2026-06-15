/*
 * XREFs of sub_14004B470 @ 0x14004B470
 * Callers:
 *     sub_14004AEE4 @ 0x14004AEE4 (sub_14004AEE4.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004B470(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  *a3 = 0LL;
  if ( *a2 == 0x4798B71F4E997F73LL && a2[1] == 0x4D5BF1FC7DED3B87LL || !*a2 && a2[1] == 0x46000000000000C0LL )
  {
    *a3 = a1;
    sub_1400B6010(a1);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}

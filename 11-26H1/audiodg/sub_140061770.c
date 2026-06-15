/*
 * XREFs of sub_140061770 @ 0x140061770
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140061770(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx

  v5 = sub_1400B6010(a2);
  if ( v5 >= 0 )
  {
    v5 = sub_1400B6010(0LL);
    if ( v5 >= 0 )
    {
      *a3 = a2;
      sub_1400B6010(a2);
      return 0;
    }
  }
  return (unsigned int)v5;
}

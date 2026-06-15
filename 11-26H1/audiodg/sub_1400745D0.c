/*
 * XREFs of sub_1400745D0 @ 0x1400745D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400745D0(__int64 a1)
{
  int v1; // ebx
  int v2; // edx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 120) )
  {
    v1 = -2147467263;
    v2 = 903;
LABEL_3:
    sub_14000C2A8((int)retaddr, v2, (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp", v1);
    return (unsigned int)v1;
  }
  v1 = sub_1400B6010(a1 - 64);
  if ( v1 < 0 )
  {
    v2 = 904;
    goto LABEL_3;
  }
  return 0LL;
}

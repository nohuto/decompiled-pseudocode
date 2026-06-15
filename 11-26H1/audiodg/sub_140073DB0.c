/*
 * XREFs of sub_140073DB0 @ 0x140073DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140073DB0(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  *a3 = 0;
  if ( *(_QWORD *)(a1 + 112) )
    return sub_1400B6010(a1 - 64);
  sub_14000C2A8((int)retaddr, 913, (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp", -2147467263);
  return 2147500033LL;
}

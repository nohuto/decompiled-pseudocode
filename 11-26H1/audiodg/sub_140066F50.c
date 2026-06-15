/*
 * XREFs of sub_140066F50 @ 0x140066F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140066F50(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = sub_1400B6010(*(_QWORD *)(a1 + 72));
  v2 = v1;
  if ( v1 >= 0 )
    v2 = sub_1400B6010(v5);
  else
    sub_14000C2A8((int)retaddr, 302, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", v1);
  sub_140003238(&v5);
  return v2;
}

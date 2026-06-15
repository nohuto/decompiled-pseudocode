/*
 * XREFs of sub_14009337C @ 0x14009337C
 * Callers:
 *     sub_140093414 @ 0x140093414 (sub_140093414.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140093AB0 @ 0x140093AB0 (sub_140093AB0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_14009337C(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  *a1 = 0LL;
  v9 = 0LL;
  v4 = sub_1400B6010(v3);
  if ( v4 >= 0 )
    v4 = sub_1400B6010(v9);
  sub_140003238(&v9);
  if ( v4 < 0 )
    sub_140093AB0(retaddr, v5, v6, (unsigned int)v4, 1);
  return a1;
}

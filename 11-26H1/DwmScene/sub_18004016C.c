/*
 * XREFs of sub_18004016C @ 0x18004016C
 * Callers:
 *     sub_18003F5D0 @ 0x18003F5D0 (sub_18003F5D0.c)
 *     sub_180063580 @ 0x180063580 (sub_180063580.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180029E54 @ 0x180029E54 (sub_180029E54.c)
 *     sub_180040098 @ 0x180040098 (sub_180040098.c)
 *     sub_18004068C @ 0x18004068C (sub_18004068C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18004016C(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rcx

  sub_180029E54(a1 + 16);
  if ( a4 )
    sub_180040098(a1, a2, a4);
  else
    sub_18004068C(*a3, a2);
  v8 = a3[1];
  if ( v8 )
    sub_180010EC8(v8);
  return a2;
}

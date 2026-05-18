/*
 * XREFs of sub_18004B290 @ 0x18004B290
 * Callers:
 *     sub_1800152A0 @ 0x1800152A0 (sub_1800152A0.c)
 *     sub_180049850 @ 0x180049850 (sub_180049850.c)
 *     sub_180063230 @ 0x180063230 (sub_180063230.c)
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     sub_18006E60C @ 0x18006E60C (sub_18006E60C.c)
 *     sub_18008DF20 @ 0x18008DF20 (sub_18008DF20.c)
 *     sub_18008FD60 @ 0x18008FD60 (sub_18008FD60.c)
 *     sub_180093D70 @ 0x180093D70 (sub_180093D70.c)
 *     sub_180094020 @ 0x180094020 (sub_180094020.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18004B2D4 @ 0x18004B2D4 (sub_18004B2D4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004B290(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_180012C40(v8, a2);
  result = sub_18004B2D4(v5, v4, v3);
  v7 = a2[1];
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}

/*
 * XREFs of sub_18004E988 @ 0x18004E988
 * Callers:
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 * Callees:
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_18004C840 @ 0x18004C840 (sub_18004C840.c)
 *     sub_18004CED4 @ 0x18004CED4 (sub_18004CED4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18004E988(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  _BYTE v7[32]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+58h] [rbp+10h]

  v9 = a2;
  sub_18004CED4(a2);
  v4 = **(_QWORD **)(a1 + 18560);
  v8 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    sub_18004C840(a2, (__int64)v7, v4 + 32);
    sub_18001D6F4(&v8, v5);
    v4 = v8;
  }
  return a2;
}

/*
 * XREFs of sub_18003A1B8 @ 0x18003A1B8
 * Callers:
 *     sub_18003970C @ 0x18003970C (sub_18003970C.c)
 * Callees:
 *     sub_18003A25C @ 0x18003A25C (sub_18003A25C.c)
 *     sub_18003A2F4 @ 0x18003A2F4 (sub_18003A2F4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003A1B8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 i; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx

  for ( i = a4; i > 32; a1 = v11 )
  {
    v7 = i - 32;
    v8 = a1 + 512;
    v9 = v7;
    if ( v7 >= 32 )
      v9 = 32LL;
    i = v7 - v9;
    v10 = 2 * v9;
    v11 = v8 + 8 * v10;
    a3 = sub_18003A25C(a1, v8, (int)v8 + 8 * (int)v10, a3, a5);
  }
  return sub_18003A2F4(a1, a2, a3);
}

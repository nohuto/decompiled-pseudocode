/*
 * XREFs of sub_18009CD40 @ 0x18009CD40
 * Callers:
 *     sub_18009CBE4 @ 0x18009CBE4 (sub_18009CBE4.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180017D30 @ 0x180017D30 (sub_180017D30.c)
 *     sub_18003EDCC @ 0x18003EDCC (sub_18003EDCC.c)
 */

unsigned __int64 __fastcall sub_18009CD40(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 *v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  if ( (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3) >= 0x10 )
    return sub_18003EDCC(*(unsigned __int64 **)a1, *(unsigned __int64 **)(a1 + 8), &v9);
  v5 = sub_180017D30(0x10uLL);
  v6 = (unsigned __int64 *)sub_180011790(v5);
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  if ( v7 )
    sub_18000E26C(*(void **)a1, 8 * v7);
  result = (unsigned __int64)(v6 + 16);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v6 + 16;
  *(_QWORD *)(a1 + 16) = v6 + 16;
  while ( v6 != (unsigned __int64 *)result )
    *v6++ = a3;
  return result;
}

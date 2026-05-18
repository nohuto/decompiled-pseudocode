/*
 * XREFs of sub_180041860 @ 0x180041860
 * Callers:
 *     sub_18003EE54 @ 0x18003EE54 (sub_18003EE54.c)
 *     sub_180041A40 @ 0x180041A40 (sub_180041A40.c)
 *     sub_1800607F0 @ 0x1800607F0 (sub_1800607F0.c)
 *     sub_18006A3F0 @ 0x18006A3F0 (sub_18006A3F0.c)
 *     sub_180090524 @ 0x180090524 (sub_180090524.c)
 *     sub_18009344C @ 0x18009344C (sub_18009344C.c)
 *     sub_1800D08C8 @ 0x1800D08C8 (sub_1800D08C8.c)
 *     sub_1800D3A88 @ 0x1800D3A88 (sub_1800D3A88.c)
 *     sub_1800D41AC @ 0x1800D41AC (sub_1800D41AC.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180017D30 @ 0x180017D30 (sub_180017D30.c)
 *     sub_18003EDCC @ 0x18003EDCC (sub_18003EDCC.c)
 */

unsigned __int64 __fastcall sub_180041860(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rdi
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  if ( (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3 >= a2 )
    return sub_18003EDCC(*(unsigned __int64 **)a1, *(unsigned __int64 **)(a1 + 8), &v10);
  v6 = sub_180017D30(a2);
  v7 = (unsigned __int64 *)sub_180011790(v6);
  v8 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  if ( v8 )
    sub_18000E26C(*(void **)a1, 8 * v8);
  result = (unsigned __int64)&v7[a2];
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 16) = result;
  while ( v7 != (unsigned __int64 *)result )
    *v7++ = a3;
  return result;
}

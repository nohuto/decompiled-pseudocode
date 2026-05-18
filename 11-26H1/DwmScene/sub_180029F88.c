/*
 * XREFs of sub_180029F88 @ 0x180029F88
 * Callers:
 *     sub_1800294F4 @ 0x1800294F4 (sub_1800294F4.c)
 *     sub_18007FA94 @ 0x18007FA94 (sub_18007FA94.c)
 *     sub_180087AAC @ 0x180087AAC (sub_180087AAC.c)
 *     sub_18008CC50 @ 0x18008CC50 (sub_18008CC50.c)
 *     sub_1800C2850 @ 0x1800C2850 (sub_1800C2850.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180029F88(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    result = sub_18000E26C(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  return result;
}

/*
 * XREFs of sub_180027368 @ 0x180027368
 * Callers:
 *     sub_180024D88 @ 0x180024D88 (sub_180024D88.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180024D50 @ 0x180024D50 (sub_180024D50.c)
 */

__int64 __fastcall sub_180027368(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_180024D50((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_18000E26C(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + (a3 << 6);
  *(_QWORD *)(a1 + 16) = a2 + (a4 << 6);
  return result;
}

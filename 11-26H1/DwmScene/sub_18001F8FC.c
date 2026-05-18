/*
 * XREFs of sub_18001F8FC @ 0x18001F8FC
 * Callers:
 *     sub_18001F3B0 @ 0x18001F3B0 (sub_18001F3B0.c)
 *     sub_1800570E0 @ 0x1800570E0 (sub_1800570E0.c)
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_1800D30E0 @ 0x1800D30E0 (sub_1800D30E0.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18001EB54 @ 0x18001EB54 (sub_18001EB54.c)
 */

__int64 __fastcall sub_18001F8FC(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18001EB54((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_18000E26C(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}

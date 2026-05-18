/*
 * XREFs of sub_1800127CC @ 0x1800127CC
 * Callers:
 *     sub_1800119CC @ 0x1800119CC (sub_1800119CC.c)
 *     sub_18002E04C @ 0x18002E04C (sub_18002E04C.c)
 *     sub_18002ECF8 @ 0x18002ECF8 (sub_18002ECF8.c)
 *     sub_180054650 @ 0x180054650 (sub_180054650.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180011964 @ 0x180011964 (sub_180011964.c)
 */

__int64 __fastcall sub_1800127CC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_180011964((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_18000E26C(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  return result;
}

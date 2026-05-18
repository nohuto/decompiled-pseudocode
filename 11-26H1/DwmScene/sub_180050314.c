/*
 * XREFs of sub_180050314 @ 0x180050314
 * Callers:
 *     sub_18004F798 @ 0x18004F798 (sub_18004F798.c)
 *     sub_18004F80C @ 0x18004F80C (sub_18004F80C.c)
 *     sub_180052F54 @ 0x180052F54 (sub_180052F54.c)
 *     sub_180052FF0 @ 0x180052FF0 (sub_180052FF0.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 *     sub_1800532C4 @ 0x1800532C4 (sub_1800532C4.c)
 *     sub_180053390 @ 0x180053390 (sub_180053390.c)
 *     sub_18005377C @ 0x18005377C (sub_18005377C.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 *     sub_1800E4DD3 @ 0x1800E4DD3 (sub_1800E4DD3.c)
 *     sub_1800E4DE5 @ 0x1800E4DE5 (sub_1800E4DE5.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180050314(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_18000E26C(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}

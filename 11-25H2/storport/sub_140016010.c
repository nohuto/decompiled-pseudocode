/*
 * XREFs of sub_140016010 @ 0x140016010
 * Callers:
 *     sub_140014460 @ 0x140014460 (sub_140014460.c)
 *     sub_140015BC8 @ 0x140015BC8 (sub_140015BC8.c)
 *     sub_140043488 @ 0x140043488 (sub_140043488.c)
 * Callees:
 *     sub_140014B38 @ 0x140014B38 (sub_140014B38.c)
 */

__int64 __fastcall sub_140016010(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x32316152u);
    *(_QWORD *)a1 = 0LL;
  }
  sub_140014B38(a1 + 8);
  v3 = *(void **)(a1 + 32);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x32316152u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v4 = *(void **)(a1 + 40);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x32316152u);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v5 = *(void **)(a1 + 48);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x32316152u);
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}

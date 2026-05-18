/*
 * XREFs of sub_18001E844 @ 0x18001E844
 * Callers:
 *     sub_18001E6E4 @ 0x18001E6E4 (sub_18001E6E4.c)
 *     sub_18004DC48 @ 0x18004DC48 (sub_18004DC48.c)
 *     sub_18004F110 @ 0x18004F110 (sub_18004F110.c)
 *     sub_18004F7A4 @ 0x18004F7A4 (sub_18004F7A4.c)
 *     sub_180084328 @ 0x180084328 (sub_180084328.c)
 *     sub_180089204 @ 0x180089204 (sub_180089204.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_18001E844(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_18000E26C(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}

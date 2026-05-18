/*
 * XREFs of sub_18005E490 @ 0x18005E490
 * Callers:
 *     sub_18005CDEC @ 0x18005CDEC (sub_18005CDEC.c)
 *     sub_1800906E4 @ 0x1800906E4 (sub_1800906E4.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18005C180 @ 0x18005C180 (sub_18005C180.c)
 */

__int64 __fastcall sub_18005E490(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18005C180((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_18000E26C(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}

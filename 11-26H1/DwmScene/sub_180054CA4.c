/*
 * XREFs of sub_180054CA4 @ 0x180054CA4
 * Callers:
 *     sub_180054820 @ 0x180054820 (sub_180054820.c)
 *     sub_18005485C @ 0x18005485C (sub_18005485C.c)
 *     sub_1800DBBE5 @ 0x1800DBBE5 (sub_1800DBBE5.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 */

__int64 __fastcall sub_180054CA4(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000C444(v1);
  return result;
}

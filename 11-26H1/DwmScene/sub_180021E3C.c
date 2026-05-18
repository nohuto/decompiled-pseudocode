/*
 * XREFs of sub_180021E3C @ 0x180021E3C
 * Callers:
 *     sub_180021E88 @ 0x180021E88 (sub_180021E88.c)
 *     sub_180021F28 @ 0x180021F28 (sub_180021F28.c)
 *     sub_1800E58C0 @ 0x1800E58C0 (sub_1800E58C0.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 */

__int64 __fastcall sub_180021E3C(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000C444(v1);
  return result;
}

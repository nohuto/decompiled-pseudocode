/*
 * XREFs of sub_180031850 @ 0x180031850
 * Callers:
 *     sub_1800319D0 @ 0x1800319D0 (sub_1800319D0.c)
 *     sub_1800D9AB0 @ 0x1800D9AB0 (sub_1800D9AB0.c)
 *     sub_1800D9D81 @ 0x1800D9D81 (sub_1800D9D81.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18003151C @ 0x18003151C (sub_18003151C.c)
 */

__int64 __fastcall sub_180031850(void ***a1)
{
  void **v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    sub_18003151C(v1 + 2);
    return sub_18000C444(v1);
  }
  return result;
}

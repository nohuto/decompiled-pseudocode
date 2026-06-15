/*
 * XREFs of sub_1400481F8 @ 0x1400481F8
 * Callers:
 *     sub_1400409B0 @ 0x1400409B0 (sub_1400409B0.c)
 *     sub_140041CD8 @ 0x140041CD8 (sub_140041CD8.c)
 *     sub_140045560 @ 0x140045560 (sub_140045560.c)
 *     sub_14005D460 @ 0x14005D460 (sub_14005D460.c)
 * Callees:
 *     sub_140056930 @ 0x140056930 (sub_140056930.c)
 */

__int64 __fastcall sub_1400481F8(struct _TP_TIMER **a1)
{
  struct _TP_TIMER *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_140056930(v1);
  return result;
}

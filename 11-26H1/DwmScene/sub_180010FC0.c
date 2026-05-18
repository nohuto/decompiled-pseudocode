/*
 * XREFs of sub_180010FC0 @ 0x180010FC0
 * Callers:
 *     sub_18000E2B8 @ 0x18000E2B8 (sub_18000E2B8.c)
 *     sub_1800104EC @ 0x1800104EC (sub_1800104EC.c)
 *     sub_180011150 @ 0x180011150 (sub_180011150.c)
 * Callees:
 *     sub_1800110DC @ 0x1800110DC (sub_1800110DC.c)
 */

__int64 __fastcall sub_180010FC0(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2,
        volatile signed __int32 *a3)
{
  __int64 result; // rax

  result = sub_1800110DC(a1);
  if ( a2 )
  {
    *a1 = a2;
    a1[1] = a3;
    _InterlockedIncrement(a2);
  }
  return result;
}

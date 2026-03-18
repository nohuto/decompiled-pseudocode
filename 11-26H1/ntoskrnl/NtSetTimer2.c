/*
 * XREFs of NtSetTimer2 @ 0x1403A9820
 * Callers:
 *     DifNtSetTimer2Wrapper @ 0x14068E080 (DifNtSetTimer2Wrapper.c)
 * Callees:
 *     ExpSetTimer2 @ 0x1403A9844 (ExpSetTimer2.c)
 */

__int64 __fastcall NtSetTimer2(void *a1, __int64 a2)
{
  if ( a2 )
    return ExpSetTimer2(a1);
  else
    return 3221225712LL;
}

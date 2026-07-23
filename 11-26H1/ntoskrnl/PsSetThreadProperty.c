/*
 * XREFs of PsSetThreadProperty @ 0x140459320
 * Callers:
 *     <none>
 * Callees:
 *     PspValidateThread @ 0x140459360 (PspValidateThread.c)
 *     PspSetPropertyHelper @ 0x1404593E8 (PspSetPropertyHelper.c)
 */

__int64 __fastcall PsSetThreadProperty(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10

  result = PspValidateThread(a1, a2, a3, a3);
  if ( (int)result >= 0 )
    return PspSetPropertyHelper(v4 + 1624, v6, v5);
  return result;
}

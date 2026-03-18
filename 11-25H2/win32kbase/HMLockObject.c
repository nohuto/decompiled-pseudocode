/*
 * XREFs of HMLockObject @ 0x1400B66F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HMLockObject(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
}

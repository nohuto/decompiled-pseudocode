/*
 * XREFs of KiReleasePrcbLock @ 0x140460670
 * Callers:
 *     KiIdleLoop @ 0x14072D980 (KiIdleLoop.c)
 * Callees:
 *     <none>
 */

void __fastcall KiReleasePrcbLock(__int64 a1)
{
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
}

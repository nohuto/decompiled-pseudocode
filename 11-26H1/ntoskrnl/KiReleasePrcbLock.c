/*
 * XREFs of KiReleasePrcbLock @ 0x140466F20
 * Callers:
 *     KiIdleLoop @ 0x140728DB0 (KiIdleLoop.c)
 * Callees:
 *     <none>
 */

void __fastcall KiReleasePrcbLock(__int64 a1)
{
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
}

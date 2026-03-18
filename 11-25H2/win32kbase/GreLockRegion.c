/*
 * XREFs of GreLockRegion @ 0x1401376E0
 * Callers:
 *     <none>
 * Callees:
 *     HmgLock @ 0x140018210 (HmgLock.c)
 */

_BOOL8 __fastcall GreLockRegion(__int64 a1)
{
  return HmgLock(a1, 4) != 0;
}

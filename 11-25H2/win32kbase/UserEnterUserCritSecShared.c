/*
 * XREFs of UserEnterUserCritSecShared @ 0x14008A230
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 */

__int64 UserEnterUserCritSecShared()
{
  return EnterSharedCrit(1LL, 1LL);
}

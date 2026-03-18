/*
 * XREFs of UserIsUserCritSecIn @ 0x1400486A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

_BOOL8 UserIsUserCritSecIn()
{
  return (unsigned int)GET_USERCRIT_DISPOSITION() != 0;
}

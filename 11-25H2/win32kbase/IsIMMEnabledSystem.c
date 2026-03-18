/*
 * XREFs of IsIMMEnabledSystem @ 0x140082BC0
 * Callers:
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     IsCurrentSessionServiceSession @ 0x140083918 (IsCurrentSessionServiceSession.c)
 *     AllowInteractiveServices @ 0x14019FE30 (AllowInteractiveServices.c)
 */

__int64 IsIMMEnabledSystem()
{
  if ( (unsigned int)IsCurrentSessionServiceSession() )
    return AllowInteractiveServices();
  else
    return 1LL;
}

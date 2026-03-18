/*
 * XREFs of IsIMMEnabledSystem @ 0x140165EB0
 * Callers:
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     IsCurrentSessionServiceSession @ 0x140165ED8 (IsCurrentSessionServiceSession.c)
 *     AllowInteractiveServices @ 0x1401C1348 (AllowInteractiveServices.c)
 */

__int64 IsIMMEnabledSystem()
{
  if ( (unsigned int)IsCurrentSessionServiceSession() )
    return AllowInteractiveServices();
  else
    return 1LL;
}

/*
 * XREFs of SbCleanupTrace @ 0x180102E00
 * Callers:
 *     LdrShutdownProcess @ 0x180087920 (LdrShutdownProcess.c)
 * Callees:
 *     SbGetCurrentSwitchContext @ 0x180064460 (SbGetCurrentSwitchContext.c)
 *     EtwNotificationUnregister @ 0x18006D0E0 (EtwNotificationUnregister.c)
 */

__int64 SbCleanupTrace()
{
  unsigned int v0; // ebx
  char *CurrentSwitchContext; // rax
  char *v2; // rdi
  __int64 v3; // rcx

  v0 = 0;
  CurrentSwitchContext = SbGetCurrentSwitchContext();
  v2 = CurrentSwitchContext;
  if ( CurrentSwitchContext )
  {
    v3 = *((_QWORD *)CurrentSwitchContext + 2);
    if ( v3 )
    {
      EtwNotificationUnregister(v3, 0LL);
      *((_QWORD *)v2 + 2) = 0LL;
      return 1;
    }
  }
  return v0;
}

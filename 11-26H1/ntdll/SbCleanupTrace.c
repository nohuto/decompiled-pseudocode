/*
 * XREFs of SbCleanupTrace @ 0x180102180
 * Callers:
 *     LdrShutdownProcess @ 0x18007ECA0 (LdrShutdownProcess.c)
 * Callees:
 *     SbGetCurrentSwitchContext @ 0x1800848B0 (SbGetCurrentSwitchContext.c)
 *     EtwNotificationUnregister @ 0x18008D530 (EtwNotificationUnregister.c)
 */

__int64 SbCleanupTrace()
{
  unsigned int v0; // ebx
  char *CurrentSwitchContext; // rax
  char *v2; // rdi
  REGHANDLE v3; // rcx

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

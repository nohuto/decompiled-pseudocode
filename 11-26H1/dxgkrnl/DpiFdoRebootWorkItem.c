/*
 * XREFs of DpiFdoRebootWorkItem @ 0x140245CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiFdoRebootWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  IoFreeWorkItem(IoWorkItem);
  if ( NtShutdownSystem(ShutdownReboot) < 0 )
  {
    WdLogSingleEntry5(
      0LL,
      275LL,
      25LL,
      Context,
      *(unsigned int *)(IoObject[8] + 1124LL),
      *(unsigned int *)(IoObject[8] + 1128LL));
    WdLogGlobalForLineNumber = 13571;
  }
}

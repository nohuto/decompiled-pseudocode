/*
 * XREFs of IovCancelIrp @ 0x140C26E00
 * Callers:
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 * Callees:
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C3FD80 (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCancelIrp @ 0x140C40140 (ViWdBeforeCancelIrp.c)
 *     IovpLogStackTrace @ 0x140C4BE04 (IovpLogStackTrace.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140C4BF94 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall IovCancelIrp(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  IovpLogStackTrace(a1);
  result = VfIrpDatabaseEntryFindAndLock(a1);
  v3 = result;
  if ( result )
  {
    if ( *(_QWORD *)(result + 248) )
      ViWdBeforeCancelIrp();
    return VfIrpDatabaseEntryReleaseLock(v3);
  }
  return result;
}

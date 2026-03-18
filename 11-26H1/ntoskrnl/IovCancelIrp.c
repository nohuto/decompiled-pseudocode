/*
 * XREFs of IovCancelIrp @ 0x140C20DF0
 * Callers:
 *     IoCancelIrp @ 0x14049B940 (IoCancelIrp.c)
 * Callees:
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C39D70 (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCancelIrp @ 0x140C3A130 (ViWdBeforeCancelIrp.c)
 *     IovpLogStackTrace @ 0x140C45DF4 (IovpLogStackTrace.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140C45F84 (VfIrpDatabaseEntryFindAndLock.c)
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

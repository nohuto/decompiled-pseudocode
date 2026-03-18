/*
 * XREFs of IopLiveDumpAddTriageDumpData @ 0x1405CC770
 * Callers:
 *     <none>
 * Callees:
 *     KeValidateBugCheckCallbackRecord @ 0x1405E71B4 (KeValidateBugCheckCallbackRecord.c)
 *     KiValidateComponentName @ 0x1405E8B1C (KiValidateComponentName.c)
 *     KiValidateTriageDumpDataArray @ 0x1405E8BC8 (KiValidateTriageDumpDataArray.c)
 *     MiAddRangeToCrashDump @ 0x1406F61BC (MiAddRangeToCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IopLiveDumpAddTriageDumpData()
{
  PVOID *v0; // rbx
  PVOID *v2; // [rsp+B8h] [rbp+48h] BYREF

  v0 = (PVOID *)KeBugCheckReasonCallbackListHead;
  if ( KeBugCheckReasonCallbackListHead && qword_140F26D18 )
  {
    v2 = &KeBugCheckReasonCallbackListHead;
    while ( v0 != &KeBugCheckReasonCallbackListHead )
    {
      if ( (unsigned __int8)KeValidateBugCheckCallbackRecord(v0, 7LL, &v2) )
      {
        guard_dispatch_icall_no_overrides(7LL, v0);
      }
      else if ( !v2 )
      {
        return 0LL;
      }
      v0 = (PVOID *)*v0;
    }
  }
  return 0LL;
}

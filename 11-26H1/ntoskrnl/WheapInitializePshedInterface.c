/*
 * XREFs of WheapInitializePshedInterface @ 0x140CE8288
 * Callers:
 *     WheaInitialize @ 0x140CE7AB8 (WheaInitialize.c)
 * Callees:
 *     WheapGetModuleInfo @ 0x1406D633C (WheapGetModuleInfo.c)
 *     RtlFindExportedRoutineByName @ 0x140AAF810 (RtlFindExportedRoutineByName.c)
 */

struct _LIST_ENTRY *__fastcall WheapInitializePshedInterface(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY *result; // rax
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  WheapConfigTableLock.Header.WaitListHead.Flink = 0LL;
  WheapConfigTableLock.ApcState.ApcListHead[1].Flink = 0LL;
  result = (struct _LIST_ENTRY *)WheapGetModuleInfo(a1, &v4, a3);
  if ( (int)result >= 0 )
  {
    WheapConfigTableLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)RtlFindExportedRoutineByName(
                                                                             v4,
                                                                             "PshedWriteVendorDefined");
    result = (struct _LIST_ENTRY *)RtlFindExportedRoutineByName(v4, "PshedReadVendorDefined");
    WheapConfigTableLock.ApcState.ApcListHead[1].Flink = result;
  }
  return result;
}

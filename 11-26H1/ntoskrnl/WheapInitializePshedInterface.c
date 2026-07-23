/*
 * XREFs of WheapInitializePshedInterface @ 0x140CEE628
 * Callers:
 *     WheaInitialize @ 0x140CEDE58 (WheaInitialize.c)
 * Callees:
 *     WheapGetModuleInfo @ 0x1406DA41C (WheapGetModuleInfo.c)
 *     RtlFindExportedRoutineByName @ 0x140AAD460 (RtlFindExportedRoutineByName.c)
 */

struct _LIST_ENTRY *__fastcall WheapInitializePshedInterface(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY *result; // rax
  PVOID BaseOfImage; // [rsp+30h] [rbp+8h] BYREF

  BaseOfImage = 0LL;
  WheapConfigTableLock.Header.WaitListHead.Flink = 0LL;
  WheapConfigTableLock.ApcState.ApcListHead[1].Flink = 0LL;
  result = (struct _LIST_ENTRY *)WheapGetModuleInfo(a1, &BaseOfImage, a3);
  if ( (int)result >= 0 )
  {
    WheapConfigTableLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)RtlFindExportedRoutineByName(
                                                                             BaseOfImage,
                                                                             "PshedWriteVendorDefined");
    result = (struct _LIST_ENTRY *)RtlFindExportedRoutineByName(BaseOfImage, "PshedReadVendorDefined");
    WheapConfigTableLock.ApcState.ApcListHead[1].Flink = result;
  }
  return result;
}

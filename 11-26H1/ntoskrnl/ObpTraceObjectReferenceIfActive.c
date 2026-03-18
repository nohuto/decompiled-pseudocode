/*
 * XREFs of ObpTraceObjectReferenceIfActive @ 0x140278BB0
 * Callers:
 *     ObReferenceObjectSafeWithTag @ 0x140258450 (ObReferenceObjectSafeWithTag.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1402695A0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14038ED10 (MiReferenceControlAreaFileWithTag.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14039ADF4 (CcReferenceSharedCacheMapFileObject.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404091C0 (MiStoreWriteModifiedPagePrepare.c)
 *     ObFastReferenceObject @ 0x140415390 (ObFastReferenceObject.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14043DAF0 (ObReferenceObjectByPointerWithTag.c)
 *     MiReferenceControlAreaFile @ 0x140448EB0 (MiReferenceControlAreaFile.c)
 *     ObReferenceObjectSafe @ 0x140449C10 (ObReferenceObjectSafe.c)
 *     ObReferenceObjectExWithTag @ 0x14044E6F0 (ObReferenceObjectExWithTag.c)
 *     MiProtoFaultLog @ 0x140457240 (MiProtoFaultLog.c)
 *     ObReferenceObjectByPointer @ 0x14045F750 (ObReferenceObjectByPointer.c)
 *     PsLookupProcessByProcessId @ 0x1408EF4E0 (PsLookupProcessByProcessId.c)
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     ObCaptureObjectStateForDuplication @ 0x140971174 (ObCaptureObjectStateForDuplication.c)
 *     PsLookupThreadByThreadId @ 0x140A10B70 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A191C0 (PspThreadFromTicket.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A33250 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A5D8F0 (NtAlertThreadByThreadId.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectReferenceIfActive(__int64 a1, __int16 a2, unsigned int a3)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1, a2, a3);
  return result;
}

/*
 * XREFs of ExGetHandlePointer @ 0x14044EE00
 * Callers:
 *     ObpShutdownCloseHandleProcedure @ 0x1407C6250 (ObpShutdownCloseHandleProcedure.c)
 *     EtwpObjectHandleEnumCallback @ 0x140835860 (EtwpObjectHandleEnumCallback.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ObpAuditObjectAccess @ 0x14091F14C (ObpAuditObjectAccess.c)
 *     ObReferenceFileObjectForWrite @ 0x140929520 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceObjectByHandle @ 0x14092A3F0 (ObpReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry2 @ 0x14092AF00 (ObCloseHandleTableEntry2.c)
 *     NtWriteFile @ 0x14092B660 (NtWriteFile.c)
 *     RtlLookupAtomInAtomTable @ 0x140974FB0 (RtlLookupAtomInAtomTable.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x14098FA50 (AlpcpLookupMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140992370 (NtAlpcImpersonateClientOfPort.c)
 *     ObSetHandleAttributes @ 0x1409BAAF0 (ObSetHandleAttributes.c)
 *     ObCaptureObjectStateForDuplication @ 0x1409BB2E4 (ObCaptureObjectStateForDuplication.c)
 *     ExDupHandleTable @ 0x1409BD030 (ExDupHandleTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1409FCED0 (RtlpAtomMapAtomToHandleEntry.c)
 *     PsLookupThreadByThreadId @ 0x140A0FD60 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A227F0 (PspThreadFromTicket.c)
 *     RtlpHashStringToAtom @ 0x140A41880 (RtlpHashStringToAtom.c)
 *     ExQueryProcessHandleInformation @ 0x140A4DD2C (ExQueryProcessHandleInformation.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A4E1B0 (NtAlertThreadByThreadIdEx.c)
 *     ObpCaptureHandleInformation @ 0x140A51C80 (ObpCaptureHandleInformation.c)
 *     ObpCaptureHandleInformationEx @ 0x140A66800 (ObpCaptureHandleInformationEx.c)
 *     NtAlertThreadByThreadId @ 0x140A6A8B0 (NtAlertThreadByThreadId.c)
 *     ObpEnumFindHandleProcedure @ 0x140A72FE0 (ObpEnumFindHandleProcedure.c)
 *     IopIsFileOpenOrSection @ 0x140A74320 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x140A93280 (PnpHandleProcessWalkWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExGetHandlePointer(__int64 *a1)
{
  return (*a1 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
}

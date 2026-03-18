/*
 * XREFs of ExGetHandlePointer @ 0x140457590
 * Callers:
 *     ObpShutdownCloseHandleProcedure @ 0x1407C31F0 (ObpShutdownCloseHandleProcedure.c)
 *     EtwpObjectHandleEnumCallback @ 0x14082F620 (EtwpObjectHandleEnumCallback.c)
 *     PsLookupProcessByProcessId @ 0x1408EF4E0 (PsLookupProcessByProcessId.c)
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     ObReferenceFileObjectForWrite @ 0x1408F9590 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceObjectByHandle @ 0x1408FA460 (ObpReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry2 @ 0x1408FAF70 (ObCloseHandleTableEntry2.c)
 *     NtWriteFile @ 0x1408FB6D0 (NtWriteFile.c)
 *     RtlLookupAtomInAtomTable @ 0x14091A550 (RtlLookupAtomInAtomTable.c)
 *     ObSetHandleAttributes @ 0x140970980 (ObSetHandleAttributes.c)
 *     ObCaptureObjectStateForDuplication @ 0x140971174 (ObCaptureObjectStateForDuplication.c)
 *     ExDupHandleTable @ 0x140971D40 (ExDupHandleTable.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1409BEA70 (AlpcpLookupMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1409C1390 (NtAlpcImpersonateClientOfPort.c)
 *     ObpAuditObjectAccess @ 0x1409FA54C (ObpAuditObjectAccess.c)
 *     PsLookupThreadByThreadId @ 0x140A10B70 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A191C0 (PspThreadFromTicket.c)
 *     RtlpHashStringToAtom @ 0x140A2FA00 (RtlpHashStringToAtom.c)
 *     ExQueryProcessHandleInformation @ 0x140A32DCC (ExQueryProcessHandleInformation.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A33250 (NtAlertThreadByThreadIdEx.c)
 *     RtlQueryAtomInAtomTable @ 0x140A413C0 (RtlQueryAtomInAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140A417E0 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObpCaptureHandleInformation @ 0x140A48990 (ObpCaptureHandleInformation.c)
 *     ObpCaptureHandleInformationEx @ 0x140A59890 (ObpCaptureHandleInformationEx.c)
 *     NtAlertThreadByThreadId @ 0x140A5D8F0 (NtAlertThreadByThreadId.c)
 *     ObpEnumFindHandleProcedure @ 0x140A66010 (ObpEnumFindHandleProcedure.c)
 *     IopIsFileOpenOrSection @ 0x140A67350 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x140A8E5B0 (PnpHandleProcessWalkWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExGetHandlePointer(__int64 *a1)
{
  return (*a1 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
}

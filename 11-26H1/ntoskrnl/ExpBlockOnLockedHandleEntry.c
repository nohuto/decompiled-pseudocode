/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x1408FAEC4
 * Callers:
 *     ExFastReferenceHandleTableEntry @ 0x1403F3A50 (ExFastReferenceHandleTableEntry.c)
 *     ExLockHandleTableEntry @ 0x14044C040 (ExLockHandleTableEntry.c)
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     ObReferenceFileObjectForWrite @ 0x1408F9590 (ObReferenceFileObjectForWrite.c)
 *     ExpSnapShotHandleTables @ 0x1408F99A0 (ExpSnapShotHandleTables.c)
 *     ObpCloseHandle @ 0x1408F9C70 (ObpCloseHandle.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     ExMapHandleToPointer @ 0x1408FA200 (ExMapHandleToPointer.c)
 *     ObpReferenceObjectByHandle @ 0x1408FA460 (ObpReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     NtWriteFile @ 0x1408FB6D0 (NtWriteFile.c)
 *     ExEnumHandleTable @ 0x1408FBBA0 (ExEnumHandleTable.c)
 *     RtlLookupAtomInAtomTable @ 0x14091A550 (RtlLookupAtomInAtomTable.c)
 *     ExSweepHandleTable @ 0x140958F4C (ExSweepHandleTable.c)
 *     ObSetHandleAttributes @ 0x140970980 (ObSetHandleAttributes.c)
 *     ExDupHandleTable @ 0x140971D40 (ExDupHandleTable.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1409BEA70 (AlpcpLookupMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1409C1390 (NtAlpcImpersonateClientOfPort.c)
 *     ObpAuditObjectAccess @ 0x1409FA54C (ObpAuditObjectAccess.c)
 *     RtlpHashStringToAtom @ 0x140A2FA00 (RtlpHashStringToAtom.c)
 *     RtlQueryAtomInAtomTable @ 0x140A413C0 (RtlQueryAtomInAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140A417E0 (RtlpAtomMapAtomToHandleEntry.c)
 *     AlpcpFreeMessageFunction @ 0x140A86940 (AlpcpFreeMessageFunction.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x14047EBC0 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock((signed __int64 *)(a1 + 48), a2, &v4, 8LL, 0LL);
}

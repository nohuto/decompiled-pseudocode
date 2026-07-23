/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x14092AE54
 * Callers:
 *     ExFastReferenceHandleTableEntry @ 0x1403ED400 (ExFastReferenceHandleTableEntry.c)
 *     ExLockHandleTableEntry @ 0x140444160 (ExLockHandleTableEntry.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ObpAuditObjectAccess @ 0x14091F14C (ObpAuditObjectAccess.c)
 *     ObReferenceFileObjectForWrite @ 0x140929520 (ObReferenceFileObjectForWrite.c)
 *     ExpSnapShotHandleTables @ 0x140929930 (ExpSnapShotHandleTables.c)
 *     ObpCloseHandle @ 0x140929C00 (ObpCloseHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     ExMapHandleToPointer @ 0x14092A190 (ExMapHandleToPointer.c)
 *     ObpReferenceObjectByHandle @ 0x14092A3F0 (ObpReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     NtWriteFile @ 0x14092B660 (NtWriteFile.c)
 *     ExEnumHandleTable @ 0x14092BB30 (ExEnumHandleTable.c)
 *     RtlLookupAtomInAtomTable @ 0x140974FB0 (RtlLookupAtomInAtomTable.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x14098FA50 (AlpcpLookupMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140992370 (NtAlpcImpersonateClientOfPort.c)
 *     ObSetHandleAttributes @ 0x1409BAAF0 (ObSetHandleAttributes.c)
 *     ExDupHandleTable @ 0x1409BD030 (ExDupHandleTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1409FCED0 (RtlpAtomMapAtomToHandleEntry.c)
 *     ExSweepHandleTable @ 0x1409FE810 (ExSweepHandleTable.c)
 *     RtlpHashStringToAtom @ 0x140A41880 (RtlpHashStringToAtom.c)
 *     AlpcpFreeMessageFunction @ 0x140A8B8C0 (AlpcpFreeMessageFunction.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140478530 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock((signed __int64 *)(a1 + 48), a2, &v4, 8LL, 0LL);
}

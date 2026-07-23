/*
 * XREFs of ExpLookupHandleTableEntry @ 0x14092AE90
 * Callers:
 *     ExLookupHandleTableEntry @ 0x14043ED20 (ExLookupHandleTableEntry.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ObReferenceFileObjectForWrite @ 0x140929520 (ObReferenceFileObjectForWrite.c)
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
 *     PspClearProcessThreadCidRefs @ 0x1409FF230 (PspClearProcessThreadCidRefs.c)
 *     PsLookupThreadByThreadId @ 0x140A0FD60 (PsLookupThreadByThreadId.c)
 *     RtlpHashStringToAtom @ 0x140A41880 (RtlpHashStringToAtom.c)
 *     ExQueryProcessHandleInformation @ 0x140A4DD2C (ExQueryProcessHandleInformation.c)
 *     ExpGetNextHandleTableEntry @ 0x140A4DF70 (ExpGetNextHandleTableEntry.c)
 *     AlpcpFreeMessageFunction @ 0x140A8B8C0 (AlpcpFreeMessageFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLookupHandleTableEntry(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8

  v2 = a2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 >= *a1 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 1);
  if ( (v3 & 3) == 1 )
    return *(_QWORD *)(v3 + 8 * (v2 >> 10) - 1) + 4 * (v2 & 0x3FF);
  if ( (v3 & 3) != 0 )
    return *(_QWORD *)(*(_QWORD *)(v3 + 8 * (v2 >> 19) - 2) + 8 * ((v2 >> 10) & 0x1FF)) + 4 * (v2 & 0x3FF);
  return v3 + 4 * v2;
}

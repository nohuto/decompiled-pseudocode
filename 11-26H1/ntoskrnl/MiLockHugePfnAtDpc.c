/*
 * XREFs of MiLockHugePfnAtDpc @ 0x14035AA34
 * Callers:
 *     MiJoinHugeContext @ 0x140358884 (MiJoinHugeContext.c)
 *     MiGetUltraHugeAlreadyActive @ 0x14035A1D0 (MiGetUltraHugeAlreadyActive.c)
 *     MiDeleteVadAwePtes @ 0x14047137C (MiDeleteVadAwePtes.c)
 *     MiValidateAndLockAweMapCountPage @ 0x140479C7C (MiValidateAndLockAweMapCountPage.c)
 *     MiInitializeNewUltraHugeContext @ 0x1404875D8 (MiInitializeNewUltraHugeContext.c)
 *     MiGetSingleHugeRangeToZero @ 0x1404EC414 (MiGetSingleHugeRangeToZero.c)
 *     MiDereferenceHugeContext @ 0x1404EFE70 (MiDereferenceHugeContext.c)
 *     MiHugePurgeZeroList @ 0x140512B18 (MiHugePurgeZeroList.c)
 *     MiLockPageToZero @ 0x1405215D8 (MiLockPageToZero.c)
 *     MiAddPartitionHugeRange @ 0x1406EFCE8 (MiAddPartitionHugeRange.c)
 *     MiDereferenceIoHugeRange @ 0x1406F0028 (MiDereferenceIoHugeRange.c)
 *     MiGetHugeBadRangeFromNode @ 0x1406F034C (MiGetHugeBadRangeFromNode.c)
 *     MiGetHugeRange @ 0x1406F0520 (MiGetHugeRange.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406F0774 (MiGetPageInHugePageBadStatus.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x1406F0910 (MiGetPerfectColorHeadHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x1406F0BA4 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x1406F144C (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1406F1A84 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x1406F1D1C (MiMoveBadHugeRangeCrossPartition.c)
 *     MiMoveHibernateHugeRangesFreeToZeroCallback @ 0x1406F1EB0 (MiMoveHibernateHugeRangesFreeToZeroCallback.c)
 *     MiReleaseMemoryRuns @ 0x1406F2148 (MiReleaseMemoryRuns.c)
 *     MiSetHugeRangePartitionId @ 0x1406F26E0 (MiSetHugeRangePartitionId.c)
 *     MiMirrorHugeRangeZeroFreeListsCallback @ 0x1406F4890 (MiMirrorHugeRangeZeroFreeListsCallback.c)
 *     MiUpdateBadPfnIdentity @ 0x1406F6DF4 (MiUpdateBadPfnIdentity.c)
 *     MiSafeLockAnyPfn @ 0x140708378 (MiSafeLockAnyPfn.c)
 *     MiInsertHugeRangeInPartition @ 0x14070DB08 (MiInsertHugeRangeInPartition.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockHugePfnAtDpc(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  char v3; // si
  unsigned __int64 v4; // rbx
  signed __int32 v5; // edx
  bool v6; // zf
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)&stru_140E2ED08.SystemCallNumber;
  v2 = ((a1 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFF;
  v8 = 0;
  v3 = v2 & 0x1F;
  v4 = (unsigned __int64)(unsigned int)v2 >> 5;
LABEL_2:
  v5 = *(_DWORD *)(v1 + 4 * v4);
  do
  {
    if ( ((v5 >> v3) & 1) != 0 )
    {
      KeYieldProcessorEx(&v8);
      goto LABEL_2;
    }
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v1 + 4 * v4), v5 | (1 << v3), v5);
    v6 = v5 == (_DWORD)result;
    v5 = result;
  }
  while ( !v6 );
  return result;
}

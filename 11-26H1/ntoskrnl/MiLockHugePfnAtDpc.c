/*
 * XREFs of MiLockHugePfnAtDpc @ 0x140358C94
 * Callers:
 *     MiJoinHugeContext @ 0x140356AE4 (MiJoinHugeContext.c)
 *     MiGetUltraHugeAlreadyActive @ 0x140358430 (MiGetUltraHugeAlreadyActive.c)
 *     MiDeleteVadAwePtes @ 0x140477BFC (MiDeleteVadAwePtes.c)
 *     MiValidateAndLockAweMapCountPage @ 0x14048033C (MiValidateAndLockAweMapCountPage.c)
 *     MiInitializeNewUltraHugeContext @ 0x14048DA98 (MiInitializeNewUltraHugeContext.c)
 *     MiGetSingleHugeRangeToZero @ 0x1404F2E34 (MiGetSingleHugeRangeToZero.c)
 *     MiDereferenceHugeContext @ 0x1404F6860 (MiDereferenceHugeContext.c)
 *     MiHugePurgeZeroList @ 0x1405190A8 (MiHugePurgeZeroList.c)
 *     MiLockPageToZero @ 0x14051EF34 (MiLockPageToZero.c)
 *     MiAddPartitionHugeRange @ 0x1406EB048 (MiAddPartitionHugeRange.c)
 *     MiDereferenceIoHugeRange @ 0x1406EB388 (MiDereferenceIoHugeRange.c)
 *     MiGetHugeBadRangeFromNode @ 0x1406EB6AC (MiGetHugeBadRangeFromNode.c)
 *     MiGetHugeRange @ 0x1406EB880 (MiGetHugeRange.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406EBAD4 (MiGetPageInHugePageBadStatus.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x1406EBC70 (MiGetPerfectColorHeadHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x1406EBF04 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x1406EC7AC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1406ECDE4 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x1406ED07C (MiMoveBadHugeRangeCrossPartition.c)
 *     MiMoveHibernateHugeRangesFreeToZeroCallback @ 0x1406ED210 (MiMoveHibernateHugeRangesFreeToZeroCallback.c)
 *     MiReleaseMemoryRuns @ 0x1406ED4A8 (MiReleaseMemoryRuns.c)
 *     MiSetHugeRangePartitionId @ 0x1406EDA40 (MiSetHugeRangePartitionId.c)
 *     MiMirrorHugeRangeZeroFreeListsCallback @ 0x1406EFC20 (MiMirrorHugeRangeZeroFreeListsCallback.c)
 *     MiUpdateBadPfnIdentity @ 0x1406F2184 (MiUpdateBadPfnIdentity.c)
 *     MiSafeLockAnyPfn @ 0x1407036A8 (MiSafeLockAnyPfn.c)
 *     MiInsertHugeRangeInPartition @ 0x140708E54 (MiInsertHugeRangeInPartition.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
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

  v1 = *(_QWORD *)&stru_140E2EB88.SystemCallNumber;
  v2 = ((a1 - *(_QWORD *)((char *)&stru_140E2EB88.116 + 4)) >> 3) & 0x3FFFFF;
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

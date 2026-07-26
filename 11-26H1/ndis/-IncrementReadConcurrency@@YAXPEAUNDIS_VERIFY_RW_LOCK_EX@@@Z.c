/*
 * XREFs of ?IncrementReadConcurrency@@YAXPEAUNDIS_VERIFY_RW_LOCK_EX@@@Z @ 0x1400C58FC
 * Callers:
 *     ?ndisVerifyNdisAcquireRWLockRead@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1400C5970 (-ndisVerifyNdisAcquireRWLockRead@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ?ndisVerifyNdisTryAcquireRWLockRead@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1400C5C20 (-ndisVerifyNdisTryAcquireRWLockRead@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ?ndisVerifyNdisTryPromoteRWLockFromReadToWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z @ 0x1400C5D20 (-ndisVerifyNdisTryPromoteRWLockFromReadToWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall IncrementReadConcurrency(struct NDIS_VERIFY_RW_LOCK_EX *a1)
{
  signed __int32 v1; // edx
  unsigned __int32 v2; // eax
  unsigned __int32 v3; // edx

  if ( *(_QWORD *)((KeGetPcr()->Prcb.Number << 12) + *((_QWORD *)a1 + 4)) == 1LL )
  {
    v1 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 26, 1u);
    v2 = *((_DWORD *)a1 + 27);
    v3 = v1 + 1;
    if ( v3 > v2 )
      _InterlockedCompareExchange((volatile signed __int32 *)a1 + 27, v3, v2);
  }
}

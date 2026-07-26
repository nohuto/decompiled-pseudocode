/*
 * XREFs of NdisTryPromoteRWLockFromReadToWrite @ 0x1400C6040
 * Callers:
 *     ?ndisVerifyNdisTryPromoteRWLockFromReadToWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z @ 0x1400C5D20 (-ndisVerifyNdisTryPromoteRWLockFromReadToWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall NdisTryPromoteRWLockFromReadToWrite(KSPIN_LOCK *a1, __int64 a2)
{
  BOOLEAN result; // al
  __int64 v5; // rcx
  _QWORD *v6; // r9
  _QWORD *v7; // rdx
  _QWORD *v8; // r8

  result = KeTryToAcquireSpinLockAtDpcLevel(a1 + 2);
  if ( result )
  {
    v5 = KeGetPcr()->Prcb.Number << 12;
    --*(_QWORD *)(v5 + a1[4]);
    v6 = (_QWORD *)a1[4];
    v7 = v6;
    v8 = &v6[512 * ndisMaxNumberOfProcessors];
    if ( v6 != v8 )
    {
      do
      {
        if ( *v7 && v7 != (_QWORD *)((char *)v6 + (KeGetPcr()->Prcb.Number << 12)) )
        {
          while ( *v7 )
            _mm_pause();
        }
        v7 += 512;
      }
      while ( v7 != v8 );
    }
    a1[3] = (KSPIN_LOCK)KeGetCurrentThread();
    result = 1;
    *(_BYTE *)(a2 + 1) = 4;
  }
  return result;
}

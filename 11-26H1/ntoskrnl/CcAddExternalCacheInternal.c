/*
 * XREFs of CcAddExternalCacheInternal @ 0x1405B3110
 * Callers:
 *     CcRegisterExternalCache @ 0x1405B3870 (CcRegisterExternalCache.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall CcAddExternalCacheInternal(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  KIRQL v7; // r8
  unsigned int ReadOperationCount; // eax

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&EmpParseLock.SchedulerAssistYieldCounter);
  v5 = *(_QWORD **)(a2 + 8);
  v6 = (_QWORD *)(a1 + 32);
  v7 = v4;
  if ( *v5 != a2 )
    __fastfail(3u);
  ReadOperationCount = EmpParseLock.ReadOperationCount;
  *v6 = a2;
  v6[1] = v5;
  *v5 = v6;
  *(_QWORD *)(a2 + 8) = v6;
  if ( ReadOperationCount + 1 < ReadOperationCount )
    KeBugCheckEx(0x34u, 0x1E1CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  LODWORD(EmpParseLock.ReadOperationCount) = ReadOperationCount + 1;
  KeReleaseSpinLock((PKSPIN_LOCK)&EmpParseLock.SchedulerAssistYieldCounter, v7);
}

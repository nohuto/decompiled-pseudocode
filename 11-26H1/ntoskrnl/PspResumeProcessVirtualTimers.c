/*
 * XREFs of PspResumeProcessVirtualTimers @ 0x14061A0F4
 * Callers:
 *     PsThawMultiProcess @ 0x1405130EC (PsThawMultiProcess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpTimerResume @ 0x1404B9C14 (ExpTimerResume.c)
 */

void __fastcall PspResumeProcessVirtualTimers(__int64 a1)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v3; // r12
  __int64 v4; // r13
  _QWORD *i; // r14

  if ( (*(_DWORD *)(a1 + 500) & 0x40000008) == 0 )
  {
    v2 = (KSPIN_LOCK *)(a1 + 1800);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1800));
    v4 = MEMORY[0xFFFFF78000000008];
    for ( i = *(_QWORD **)(a1 + 1808); i != (_QWORD *)(a1 + 1808); i = (_QWORD *)*i )
    {
      KxAcquireSpinLock(i - 28);
      ExpTimerResume((PKTIMER)(i - 36), v4);
      KxReleaseSpinLock(i - 28);
    }
    *(_BYTE *)(a1 + 1775) = 0;
    KeReleaseSpinLock(v2, v3);
  }
}

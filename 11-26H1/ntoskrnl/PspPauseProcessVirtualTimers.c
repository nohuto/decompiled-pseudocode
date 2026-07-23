/*
 * XREFs of PspPauseProcessVirtualTimers @ 0x14061A038
 * Callers:
 *     PsFreezeProcess @ 0x14077E180 (PsFreezeProcess.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpTimerPause @ 0x1404B2CF0 (ExpTimerPause.c)
 */

void __fastcall PspPauseProcessVirtualTimers(__int64 a1)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v3; // bp
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  _QWORD *i; // rdi

  if ( (*(_DWORD *)(a1 + 500) & 0x40000008) == 0 )
  {
    v2 = (KSPIN_LOCK *)(a1 + 1800);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1800));
    v4 = MEMORY[0xFFFFF78000000008];
    v5 = MEMORY[0xFFFFF78000000014];
    for ( i = *(_QWORD **)(a1 + 1808); i != (_QWORD *)(a1 + 1808); i = (_QWORD *)*i )
      ExpTimerPause((__int64)(i - 36), v5, v4, 0);
    *(_BYTE *)(a1 + 1775) = 1;
    KeReleaseSpinLock(v2, v3);
  }
}

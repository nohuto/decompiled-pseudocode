/*
 * XREFs of PopFxUpdateComponentAccountingEnhanced @ 0x1403BCFD8
 * Callers:
 *     PopPepStartComponentIdleStateChangeActivity @ 0x1403BCE50 (PopPepStartComponentIdleStateChangeActivity.c)
 *     PopPepDeviceDState @ 0x1403BD1C4 (PopPepDeviceDState.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140397B38 (PopFxUpdateAccountingActiveTime.c)
 */

void __fastcall PopFxUpdateComponentAccountingEnhanced(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned int v8; // ecx

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 872) + 8LL * a2) + 200LL;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
  if ( *(_DWORD *)(v6 + 16) == 2 )
  {
    v8 = *(_DWORD *)(v6 + 12);
    if ( v8 != -1 )
    {
      if ( a4 )
      {
        if ( a3 >= v8 )
        {
          PopFxUpdateAccountingActiveTime(v6, MEMORY[0xFFFFF78000000008], 0LL);
          *(_BYTE *)(v6 + 8) = 0;
        }
      }
      else if ( !a3 && !*(_BYTE *)(v6 + 8) )
      {
        *(_QWORD *)(v6 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v6 + 8) = 1;
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v6);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  __writecr8(v7);
}

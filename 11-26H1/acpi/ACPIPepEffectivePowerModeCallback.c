/*
 * XREFs of ACPIPepEffectivePowerModeCallback @ 0x1400B4210
 * Callers:
 *     <none>
 * Callees:
 *     ACPIPepQueueWorker @ 0x1400CD730 (ACPIPepQueueWorker.c)
 */

void __fastcall ACPIPepEffectivePowerModeCallback(int a1, __int64 a2)
{
  bool v4; // zf

  ExAcquireFastMutex((PFAST_MUTEX)(a2 + 24));
  v4 = *(_BYTE *)(a2 + 120) == 0;
  *(_DWORD *)(a2 + 108) = a1;
  if ( v4 )
  {
    *(_BYTE *)(a2 + 120) = 1;
    ACPIPepQueueWorker(a2);
  }
  ExReleaseFastMutex((PFAST_MUTEX)(a2 + 24));
}

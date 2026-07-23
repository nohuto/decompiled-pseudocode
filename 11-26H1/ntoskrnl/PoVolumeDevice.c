/*
 * XREFs of PoVolumeDevice @ 0x140B55568
 * Callers:
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x140B49570 (IoVerifyVolume.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     PopGetDope @ 0x140427090 (PopGetDope.c)
 */

void __fastcall PoVolumeDevice(__int64 a1)
{
  __int64 Dope; // rbx
  unsigned __int64 **v2; // rax
  unsigned __int64 ***v3; // rcx

  Dope = PopGetDope(a1);
  if ( Dope )
  {
    ExAcquireFastMutex((PKGUARDED_MUTEX)&PpmIdlePolicyLock.WriteTransferCount);
    v2 = (unsigned __int64 **)(Dope + 80);
    if ( !*(_QWORD *)(Dope + 80) )
    {
      v3 = *(unsigned __int64 ****)&PpmIdlePolicyLock.SchedulerAssistYieldCounter;
      if ( **(struct _KTHREAD ***)&PpmIdlePolicyLock.SchedulerAssistYieldCounter != (struct _KTHREAD *)&PpmIdlePolicyLock.KcsanThread )
        __fastfail(3u);
      *v2 = &PpmIdlePolicyLock.KcsanThread;
      *(_QWORD *)(Dope + 88) = v3;
      *v3 = v2;
      *(_QWORD *)&PpmIdlePolicyLock.SchedulerAssistYieldCounter = Dope + 80;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&PpmIdlePolicyLock.WriteTransferCount);
  }
}

/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x14042D038
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x14042C75C (PopFxPlatformStateAvailable.c)
 *     PpmUpdateIdleVeto @ 0x14042CE70 (PpmUpdateIdleVeto.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceNonAttributedCpuReferences @ 0x14042D0EC (PopDiagTraceNonAttributedCpuReferences.c)
 *     PopAccumulateNonDripsIdleCpuTime @ 0x14042D634 (PopAccumulateNonDripsIdleCpuTime.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x14042D72C (PopAccumulateNonActivatedCpuTime.c)
 */

void __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  __int64 v2; // rcx
  KIRQL v3; // di
  __int64 v4; // rcx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140E27108);
  if ( !a1 )
  {
    if ( --dword_140E27104 )
      goto LABEL_3;
    LOBYTE(v2) = 1;
    PopAccumulateNonActivatedCpuTime(v2, &unk_140E26FB0, &qword_140E26FB8);
    LOBYTE(v4) = 1;
LABEL_6:
    PopAccumulateNonDripsIdleCpuTime(v4, &unk_140E26FC0, &unk_140E26FC8, &qword_140E26FD0);
    goto LABEL_3;
  }
  if ( ++dword_140E27104 == 1 )
  {
    PopAccumulateNonActivatedCpuTime(0LL, &unk_140E26FB0, &qword_140E26FB8);
    v4 = 0LL;
    goto LABEL_6;
  }
LABEL_3:
  PopDiagTraceNonAttributedCpuReferences((unsigned int)dword_140E27104);
  KeReleaseSpinLock(&qword_140E27108, v3);
}

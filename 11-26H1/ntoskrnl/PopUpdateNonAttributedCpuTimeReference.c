/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x140421708
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x140420E2C (PopFxPlatformStateAvailable.c)
 *     PpmUpdateIdleVeto @ 0x140421540 (PpmUpdateIdleVeto.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceNonAttributedCpuReferences @ 0x1404217BC (PopDiagTraceNonAttributedCpuReferences.c)
 *     PopAccumulateNonDripsIdleCpuTime @ 0x140421D04 (PopAccumulateNonDripsIdleCpuTime.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140421DFC (PopAccumulateNonActivatedCpuTime.c)
 */

void __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  __int64 v2; // rcx
  KIRQL v3; // di
  __int64 v4; // rcx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140E27248);
  if ( !a1 )
  {
    if ( --dword_140E27244 )
      goto LABEL_3;
    LOBYTE(v2) = 1;
    PopAccumulateNonActivatedCpuTime(v2, &unk_140E270F0, &qword_140E270F8);
    LOBYTE(v4) = 1;
LABEL_6:
    PopAccumulateNonDripsIdleCpuTime(v4, &unk_140E27100, &unk_140E27108, &qword_140E27110);
    goto LABEL_3;
  }
  if ( ++dword_140E27244 == 1 )
  {
    PopAccumulateNonActivatedCpuTime(0LL, &unk_140E270F0, &qword_140E270F8);
    v4 = 0LL;
    goto LABEL_6;
  }
LABEL_3:
  PopDiagTraceNonAttributedCpuReferences((unsigned int)dword_140E27244);
  KeReleaseSpinLock(&qword_140E27248, v3);
}

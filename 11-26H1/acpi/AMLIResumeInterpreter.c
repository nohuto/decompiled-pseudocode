/*
 * XREFs of AMLIResumeInterpreter @ 0x140030690
 * Callers:
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x140049160 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1400499A0 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     AcpiReflectNativeObject @ 0x1400664D0 (AcpiReflectNativeObject.c)
 *     Simulator_CallbackWorker @ 0x14006C690 (Simulator_CallbackWorker.c)
 * Callees:
 *     OSQueueWorkItem @ 0x14000EA6C (OSQueueWorkItem.c)
 *     LogSchedEvent @ 0x140030800 (LogSchedEvent.c)
 */

void AMLIResumeInterpreter()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rax

  dword_14008ED38 = 0;
  pszDest = 0;
  byte_14008EB70 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( (gReadyQueue & 0xC) != 0 && !--dword_14008EB98 )
  {
    gReadyQueue &= 0xFFFFFFF3;
    LogSchedEvent(1381193037, 0, 0, 0, 0LL);
    if ( (gdwfAMLI & 4) != 0 )
    {
      while ( 1 )
      {
        v0 = (_QWORD *)qword_14008EB58;
        if ( (__int64 *)qword_14008EB58 == &qword_14008EB58 )
          break;
        if ( *(__int64 **)(qword_14008EB58 + 8) != &qword_14008EB58 )
          goto LABEL_14;
        v1 = *(_QWORD *)qword_14008EB58;
        if ( *(_QWORD *)(*(_QWORD *)qword_14008EB58 + 8LL) != qword_14008EB58 )
          goto LABEL_14;
        qword_14008EB58 = *(_QWORD *)qword_14008EB58;
        *(_QWORD *)(v1 + 8) = &qword_14008EB58;
        v0[1] = v0;
        *v0 = v0;
        if ( !(unsigned __int8)ExTryQueueWorkItem(v0 + 41, 1LL) )
        {
          v2 = qword_14008EB58;
          if ( *(__int64 **)(qword_14008EB58 + 8) != &qword_14008EB58 )
LABEL_14:
            __fastfail(3u);
          *v0 = qword_14008EB58;
          v0[1] = &qword_14008EB58;
          *(_QWORD *)(v2 + 8) = v0;
          qword_14008EB58 = (__int64)v0;
          break;
        }
      }
    }
    if ( (__int64 *)qword_14008EB58 != &qword_14008EB58 && (gReadyQueue & 2) == 0 )
    {
      OSQueueWorkItem(&qword_14008EB78);
      gReadyQueue |= 2u;
      LogSchedEvent(1381192785, 0, 0, 0, 0LL);
    }
  }
  KeReleaseSpinLock(&SpinLock, byte_14008EB70);
}

/*
 * XREFs of ACPIThermalReleaseCoolingInterfaces @ 0x140046BE8
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x14001C520 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIDispatchIrp @ 0x140024580 (ACPIDispatchIrp.c)
 *     ACPIFanStopDevice @ 0x1400607B0 (ACPIFanStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1400ADC00 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1400AE270 (ACPIBusIrpStopDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1400D1D20 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 * Callees:
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x14002C178 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x14002CFFC (AcpiDiagTracePassiveCoolingConstraint.c)
 *     ACPIThermalReevaluateConstraints @ 0x14004549C (ACPIThermalReevaluateConstraints.c)
 */

__int64 __fastcall ACPIThermalReleaseCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rdi
  KIRQL v4; // bp
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 *v11; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v3 = *(_QWORD **)(a1 + 656);
  v4 = v2;
  *(_BYTE *)(a1 + 664) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 656) = 0LL;
    v5 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) == v3 )
    {
      v6 = (_QWORD *)v3[1];
      if ( (_QWORD *)*v6 == v3 )
      {
        *v6 = v5;
        *(_QWORD *)(v5 + 8) = v6;
        v7 = (_QWORD *)v3[2];
        if ( v7 == v3 + 2 )
        {
LABEL_15:
          ACPIThermalReevaluateConstraints(v3);
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          v3[7] = &Event;
          KeReleaseSpinLock(&AcpiThermalConstraintLock, v4);
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          PoDeleteThermalRequest(v3[8]);
          IoFreeWorkItem((PIO_WORKITEM)v3[6]);
          ExFreePoolWithTag(v3, 0x54706341u);
          return 0LL;
        }
        while ( 1 )
        {
          v8 = (__int64)v7;
          v7 = (_QWORD *)*v7;
          if ( *(_BYTE *)(v8 + 36) )
          {
            if ( *(_BYTE *)(v8 + 37) != 100 )
              AcpiDiagTracePassiveCoolingConstraint(*(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24), 0, 100);
          }
          else if ( *(_BYTE *)(v8 + 39) )
          {
            AcpiDiagTraceActiveCoolingConstraint(*(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24), 0, 0);
          }
          *(_QWORD *)(v8 + 24) = 0LL;
          v9 = *(_QWORD *)v8;
          if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
            break;
          v10 = *(_QWORD **)(v8 + 8);
          if ( *v10 != v8 )
            break;
          *v10 = v9;
          *(_QWORD *)(v9 + 8) = v10;
          v11 = (__int64 *)qword_14008F858;
          if ( *(__int64 **)qword_14008F858 != &AcpiThermalUnclaimedConstraintList )
            break;
          *(_QWORD *)v8 = &AcpiThermalUnclaimedConstraintList;
          *(_QWORD *)(v8 + 8) = v11;
          *v11 = v8;
          qword_14008F858 = v8;
          if ( v7 == v3 + 2 )
            goto LABEL_15;
        }
      }
    }
    __fastfail(3u);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
  return 0LL;
}

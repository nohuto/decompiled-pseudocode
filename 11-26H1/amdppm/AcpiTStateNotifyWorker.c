/*
 * XREFs of AcpiTStateNotifyWorker @ 0x14002B960
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x140002914 (ProcLibTraceProcessorSpecificEvent.c)
 *     FireWmiEvent @ 0x1400036BC (FireWmiEvent.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     AcpiEval_TPC @ 0x140029878 (AcpiEval_TPC.c)
 *     ProcLibCapChange @ 0x14004061C (ProcLibCapChange.c)
 */

__int64 __fastcall AcpiTStateNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  char v3; // si
  int v4; // edx
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v3 = 0;
  IoFreeWorkItem(a2);
  v5 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v5 + 280) & 0x3000000) != 0 )
  {
    if ( (int)AcpiEval_TPC(*(_QWORD *)(a1 + 64), &v7) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1400155D8,
        0LL);
      v3 = 1;
      ProcLibCapChange(v5, *(unsigned int *)(v5 + 464), v7, 100LL);
      ((void (__fastcall *)(__int64))qword_140015B30)(v5);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      1,
      91,
      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
  }
  v7 = *(_DWORD *)(v5 + 512);
  ProcLibTraceProcessorSpecificEvent(v5, (int)&PPM_ETW_NOTIFY_82, (int)&PPM_ETW_NOTIFY_82_HV, 4, (__int64)&v7);
  result = FireWmiEvent((_QWORD *)(v5 + 696), v5 + 512);
  if ( v3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
             WdfDriverGlobals,
             qword_1400155D8);
  return result;
}

/*
 * XREFs of Controller_IsRunningWithIrqlRaisedAndTracked @ 0x140041D0C
 * Callers:
 *     ESM_RunStateMachine @ 0x140020FDC (ESM_RunStateMachine.c)
 *     ESM_ShouldQueueWorkItem @ 0x14002ECC8 (ESM_ShouldQueueWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

char __fastcall Controller_IsRunningWithIrqlRaisedAndTracked(__int64 a1)
{
  ULONG CurrentProcessorNumber; // eax
  int v3; // edx
  ULONG_PTR v4; // rax

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( CurrentProcessorNumber >= *(_DWORD *)(a1 + 1272) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v3,
        4,
        338,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        CurrentProcessorNumber);
    }
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(
           WdfDriverGlobals,
           *(_QWORD *)a1);
    KeBugCheckEx(0x144u, 4uLL, v4, 2uLL, 4uLL);
  }
  return *(_BYTE *)(*(_QWORD *)(a1 + 1264) + 2LL * CurrentProcessorNumber);
}

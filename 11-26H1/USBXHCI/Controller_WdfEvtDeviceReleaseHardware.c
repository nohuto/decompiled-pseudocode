/*
 * XREFs of Controller_WdfEvtDeviceReleaseHardware @ 0x1400794C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 *     Controller_IsSecureDevice @ 0x1400357A8 (Controller_IsSecureDevice.c)
 *     XilDeviceSlot_ReleaseHardware @ 0x14004726C (XilDeviceSlot_ReleaseHardware.c)
 *     Register_UnmapSecureMmio @ 0x14004A008 (Register_UnmapSecureMmio.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     Command_ReleaseHardware @ 0x140073AAC (Command_ReleaseHardware.c)
 *     Interrupter_ReleaseHardware @ 0x14007C3C0 (Interrupter_ReleaseHardware.c)
 *     RootHub_ReleaseHardware @ 0x14007E400 (RootHub_ReleaseHardware.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceReleaseHardware(__int64 a1)
{
  char v1; // bl
  int v2; // edx
  __int64 v3; // rdi
  __int64 v4; // rbx

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 72), v2, 4, 53, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v1);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 768));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 1232));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 968));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 1112));
  if ( *(_QWORD *)(v3 + 1248) )
  {
    SleepstudyHelper_UnregisterComponent();
    *(_QWORD *)(v3 + 1248) = 0LL;
  }
  RootHub_ReleaseHardware(*(_QWORD *)(v3 + 152));
  Command_ReleaseHardware(*(_QWORD *)(v3 + 144));
  XilDeviceSlot_ReleaseHardware(*(_QWORD *)(v3 + 136));
  Interrupter_ReleaseHardware(*(_QWORD *)(v3 + 128));
  v4 = *(_QWORD *)(v3 + 88);
  if ( *(_QWORD *)(v4 + 24) )
  {
    if ( Controller_IsSecureDevice(*(_QWORD *)(v4 + 8)) )
      Register_UnmapSecureMmio(v4);
    MmUnmapIoSpace(*(PVOID *)(v4 + 24), *(unsigned int *)(v4 + 20));
    *(_BYTE *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)(v4 + 56) = 0LL;
    *(_QWORD *)(v4 + 64) = 0LL;
    *(_QWORD *)(v4 + 72) = 0LL;
  }
  if ( !*(_BYTE *)(v3 + 16) )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1664))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 8));
  return 0LL;
}

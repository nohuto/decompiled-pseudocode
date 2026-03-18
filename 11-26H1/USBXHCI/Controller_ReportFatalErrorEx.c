/*
 * XREFs of Controller_ReportFatalErrorEx @ 0x140021FAC
 * Callers:
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140022EF0 (Bulk_ProcessTransferEventWithED1.c)
 *     UsbDevice_EnableCompletion @ 0x140025600 (UsbDevice_EnableCompletion.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x140037790 (Controller_WdfEvtDeviceD0Entry.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003B660 (UsbDevice_EndpointsConfigureCompletion.c)
 *     Controller_InternalReset @ 0x1400416D0 (Controller_InternalReset.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140078FC0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Etw_ReportFatalError @ 0x14003D584 (Etw_ReportFatalError.c)
 *     Controller_InitiateBootRecovery @ 0x14003D868 (Controller_InitiateBootRecovery.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_ReportFatalErrorEx(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v12; // ecx
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 Pool2; // rax
  KIRQL v17; // al
  _QWORD *v18; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(a1 + 72),
      1u,
      4u,
      0xF4u,
      (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      a3,
      a2);
  DbgPrint("\nXHCI reported fatal error\n");
  Etw_ReportFatalError(v12, a1, a2, a3, a4, a5);
  if ( (*(_DWORD *)(a1 + 788) & 0x12) != 0 )
    return Controller_InitiateBootRecovery(a1, a2);
  v14 = 0LL;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 768),
          off_14006AF20);
  if ( a3 )
  {
    if ( a3 != 4159 )
    {
      Pool2 = ExAllocatePool2(64LL, 64LL, 1229146200LL);
      v14 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 40) = a6;
        *(_QWORD *)(Pool2 + 48) = a7;
        *(_QWORD *)(Pool2 + 56) = a8;
        *(_DWORD *)(Pool2 + 16) = a3;
        *(_QWORD *)(Pool2 + 24) = a4;
        *(_QWORD *)(Pool2 + 32) = a5;
        *(_QWORD *)(Pool2 + 8) = 0LL;
        *(_QWORD *)Pool2 = 0LL;
      }
    }
  }
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 16));
  if ( v14 )
  {
    v18 = *(_QWORD **)(v15 + 8);
    if ( *v18 != v15 )
      __fastfail(3u);
    *v14 = v15;
    v14[1] = v18;
    *v18 = v14;
    *(_QWORD *)(v15 + 8) = v14;
  }
  *(_DWORD *)(v15 + 80) |= a2;
  KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 16), v17);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3040))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 768));
}

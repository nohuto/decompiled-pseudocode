/*
 * XREFs of rimDoRimDevChange @ 0x140096D74
 * Callers:
 *     RIMIDERemoveInjectionDevice @ 0x14005A710 (RIMIDERemoveInjectionDevice.c)
 *     RIMOnPnpNotification @ 0x14005B7D0 (RIMOnPnpNotification.c)
 *     RIMDoOnPnpNotification @ 0x140091548 (RIMDoOnPnpNotification.c)
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x14009270C (RIMFreeSpecificDev.c)
 *     RIMRemoveDevOfInputType @ 0x140092B8C (RIMRemoveDevOfInputType.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x140096618 (rimDoRimDevChangeAsyncWorkItem.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x140098420 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401A4390 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     rimDoRimDevChangeCallback @ 0x1400960B4 (rimDoRimDevChangeCallback.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMHandlePowerDeviceArrival @ 0x1400EB09C (RIMHandlePowerDeviceArrival.c)
 *     RIMUpdateDeviceForInputMode @ 0x1400F2534 (RIMUpdateDeviceForInputMode.c)
 *     RIMHandlePowerDeviceRemoval @ 0x14018364C (RIMHandlePowerDeviceRemoval.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1401BF788 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 */

void __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  int v7; // r8d
  int v8; // r15d
  CTouchProcessor **v9; // rcx
  char v10; // bp
  bool v11; // r14
  int v12; // edx
  int v13; // r8d
  __int64 v14; // r9
  int v15; // r8d
  int v16; // r15d
  CTouchProcessor **v17; // rcx
  __int16 v18; // [rsp+30h] [rbp-48h]
  char v19; // [rsp+40h] [rbp-38h]

  switch ( a3 )
  {
    case 1u:
LABEL_26:
      LOBYTE(v6) = 1;
      break;
    case 2u:
      *(_DWORD *)(a2 + 168) |= 0x40000000u;
      LOBYTE(v6) = 1;
      v16 = RIMHandlePowerDeviceArrival((struct RIMDEV *)a2);
      if ( v16 < 0 )
      {
        v17 = &WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (LODWORD(v17) = *((_DWORD *)WPP_GLOBAL_Control + 11), ((unsigned __int8)v17 & 1) == 0)
          || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v10 = 0;
        }
        v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = v16;
          v14 = *(_QWORD *)(W32GetUserSessionState((_DWORD)v17, (_DWORD)WPP_GLOBAL_Control, v15) + 19368);
          v18 = 14;
          goto LABEL_25;
        }
      }
      break;
    case 3u:
      v6 = (*(_DWORD *)(a2 + 168) & 0x40000000u) >> 30;
      v8 = RIMHandlePowerDeviceRemoval(a2);
      if ( v8 < 0 )
      {
        v9 = &WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (LODWORD(v9) = *((_DWORD *)WPP_GLOBAL_Control + 11), ((unsigned __int8)v9 & 1) == 0)
          || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v10 = 0;
        }
        v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = v8;
          v14 = *(_QWORD *)(W32GetUserSessionState((_DWORD)v9, (_DWORD)WPP_GLOBAL_Control, v7) + 19368);
          v18 = 15;
LABEL_25:
          LOBYTE(v13) = v11;
          LOBYTE(v12) = v10;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v12,
            v13,
            v14,
            4,
            1,
            v18,
            (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
            v19);
        }
      }
      break;
    default:
      if ( a3 != 4 )
      {
        if ( a3 == 5 )
        {
          LOBYTE(v6) = 1;
          RIMUpdateDeviceForInputMode((struct RIMDEV *)a2);
          break;
        }
        if ( a3 != 6 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 145LL);
          LOBYTE(v6) = 0;
          break;
        }
      }
      goto LABEL_26;
  }
  InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)a2, a3);
  if ( (_BYTE)v6 )
    rimDoRimDevChangeCallback(a1, a2, a3);
  if ( a3 == 3 )
    *(_DWORD *)(a2 + 168) &= ~0x40000000u;
}

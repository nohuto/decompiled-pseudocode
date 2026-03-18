/*
 * XREFs of rimDoRimDevChange @ 0x140033D40
 * Callers:
 *     rimDoRimDevChangeAsyncWorkItem @ 0x14002B53C (rimDoRimDevChangeAsyncWorkItem.c)
 *     RIMIDERemoveInjectionDevice @ 0x1400339A4 (RIMIDERemoveInjectionDevice.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x140035294 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMOnPnpNotification @ 0x140039E20 (RIMOnPnpNotification.c)
 *     RIMUnregisterForInput @ 0x14009DC10 (RIMUnregisterForInput.c)
 *     RIMDoOnPnpNotification @ 0x140113F30 (RIMDoOnPnpNotification.c)
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x1401D5330 (RIMFreeSpecificDev.c)
 *     RIMRemoveDevOfInputType @ 0x1401D5944 (RIMRemoveDevOfInputType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D9BA0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMUpdateDeviceForInputMode @ 0x14007A364 (RIMUpdateDeviceForInputMode.c)
 *     rimDoRimDevChangeCallback @ 0x1400992DC (rimDoRimDevChangeCallback.c)
 *     RIMHandlePowerDeviceArrival @ 0x14012E098 (RIMHandlePowerDeviceArrival.c)
 *     RIMHandlePowerDeviceRemoval @ 0x14014B934 (RIMHandlePowerDeviceRemoval.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x14017E400 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  int v7; // r15d
  _UNKNOWN **v8; // rcx
  char v9; // bp
  bool v10; // r14
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  int v14; // r15d
  _UNKNOWN **v15; // rcx
  __int16 v16; // [rsp+30h] [rbp-48h]
  char v17; // [rsp+40h] [rbp-38h]

  if ( a3 == 1 )
    goto LABEL_25;
  if ( a3 == 2 )
  {
    *(_DWORD *)(a2 + 168) |= 0x40000000u;
    LOBYTE(v6) = 1;
    v14 = RIMHandlePowerDeviceArrival((struct RIMDEV *)a2);
    if ( v14 < 0 )
    {
      v15 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (v15 = (_UNKNOWN **)*((unsigned int *)WPP_GLOBAL_Control + 11), ((unsigned __int8)v15 & 1) == 0)
        || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v9 = 0;
      }
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = v14;
        v13 = *(_QWORD *)(W32GetUserSessionState(v15, WPP_GLOBAL_Control) + 19336);
        v16 = 14;
        goto LABEL_24;
      }
    }
  }
  else
  {
    if ( a3 != 3 )
    {
      if ( a3 != 4 )
      {
        if ( a3 == 5 )
        {
          LOBYTE(v6) = 1;
          RIMUpdateDeviceForInputMode((struct RIMDEV *)a2);
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 140LL);
          LOBYTE(v6) = 0;
        }
        goto LABEL_26;
      }
LABEL_25:
      LOBYTE(v6) = 1;
      goto LABEL_26;
    }
    v6 = (*(_DWORD *)(a2 + 168) & 0x40000000u) >> 30;
    v7 = RIMHandlePowerDeviceRemoval(a2);
    if ( v7 < 0 )
    {
      v8 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (v8 = (_UNKNOWN **)*((unsigned int *)WPP_GLOBAL_Control + 11), ((unsigned __int8)v8 & 1) == 0)
        || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v9 = 0;
      }
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = v7;
        v13 = *(_QWORD *)(W32GetUserSessionState(v8, WPP_GLOBAL_Control) + 19336);
        v16 = 15;
LABEL_24:
        LOBYTE(v12) = v10;
        LOBYTE(v11) = v9;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v12,
          v13,
          4,
          1,
          v16,
          (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
          v17);
      }
    }
  }
LABEL_26:
  InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)a2, a3);
  if ( (_BYTE)v6 )
    rimDoRimDevChangeCallback(a1, a2, a3);
  if ( a3 == 3 )
    *(_DWORD *)(a2 + 168) &= ~0x40000000u;
}

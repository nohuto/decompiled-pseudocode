/*
 * XREFs of Controller_WdfEvtDevicePrepareHardware @ 0x140078FC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     Controller_ReportFatalErrorEx @ 0x140021FAC (Controller_ReportFatalErrorEx.c)
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 *     Controller_IsSecureDevice @ 0x1400357A8 (Controller_IsSecureDevice.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x140040894 (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_ClearHSIIWorkaround @ 0x140040AA0 (Controller_ClearHSIIWorkaround.c)
 *     Controller_DeallocateIrqlTrackingArray @ 0x140040B28 (Controller_DeallocateIrqlTrackingArray.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140044DF0 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlUnicodeStringPrintf @ 0x140045408 (RtlUnicodeStringPrintf.c)
 *     XilDeviceSlot_PrepareHardware @ 0x140047158 (XilDeviceSlot_PrepareHardware.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     CommonBuffer_Create @ 0x140073204 (CommonBuffer_Create.c)
 *     Command_PrepareHardware @ 0x14007390C (Command_PrepareHardware.c)
 *     Interrupter_PrepareHardware @ 0x14007B9B8 (Interrupter_PrepareHardware.c)
 *     Register_PrepareHardware @ 0x14007D3E0 (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x14007D980 (RootHub_PrepareHardware.c)
 *     DmaEnabler_Create @ 0x14007ED20 (DmaEnabler_Create.c)
 *     SecureDmaEnabler_Create @ 0x14007EFB8 (SecureDmaEnabler_Create.c)
 */

__int64 __fastcall Controller_WdfEvtDevicePrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  int v6; // edx
  char IsSecureDevice; // r12
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rsi
  int v13; // ecx
  int v14; // ecx
  __int64 *v15; // r8
  char v16; // dl
  __int64 v17; // rbx
  NTSTATUS v18; // eax
  int v19; // edx
  __int64 v20; // rcx
  int v21; // edx
  int v22; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v27; // [rsp+70h] [rbp-90h] BYREF
  __int128 v28; // [rsp+80h] [rbp-80h] BYREF
  char v29; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&v25 = a2;
  DestinationString.Buffer = (wchar_t *)&v29;
  *(_QWORD *)&DestinationString.Length = 0x2000000LL;
  v28 = 0LL;
  v27 = 0LL;
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  IsSecureDevice = Controller_IsSecureDevice(v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(*(_QWORD *)(v5 + 72), v6, 4, 47, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, a1);
  }
  v8 = *(_DWORD *)(v5 + 1272);
  if ( v8 != KeQueryActiveProcessorCountEx(0xFFFFu) )
  {
    Controller_DeallocateIrqlTrackingArray(v5);
    Controller_AllocateIrqlTrackingArray(v5);
  }
  v9 = *(_QWORD *)(v5 + 88);
  *(_DWORD *)(v5 + 820) = 0;
  v10 = Register_PrepareHardware(v9, a3);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(*(_QWORD *)(v5 + 72), 2, 4, 48, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v10);
    v12 = 1LL;
    goto LABEL_54;
  }
  v12 = 2LL;
  if ( !IsSecureDevice )
    goto LABEL_60;
  if ( !*(_QWORD *)(v5 + 104) )
  {
    v11 = SecureDmaEnabler_Create(v5);
    if ( v11 < 0 )
      goto LABEL_54;
  }
  if ( *(_DWORD *)(v5 + 1008) == 2 )
  {
LABEL_60:
    if ( !*(_QWORD *)(v5 + 96) )
    {
      v11 = DmaEnabler_Create(a1, v5);
      if ( v11 < 0 )
      {
        v12 = 3LL;
LABEL_54:
        DbgPrint("USBXHCI: Controller enumeration failure in WdfEvtDevicePrepareHardware\n");
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v22) = 1;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v5 + 72),
            v22,
            4,
            52,
            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
            v11);
        }
        Controller_ReportFatalErrorEx(v5, 0x20u, 4137, v12, v11, 0LL, 0LL, 0LL);
        return (unsigned int)v11;
      }
    }
  }
  v13 = *(_DWORD *)(v5 + 1008);
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( !v14 )
    {
      v15 = (__int64 *)(v5 + 120);
      if ( *(_QWORD *)(v5 + 120) )
        goto LABEL_28;
      v16 = 1;
      goto LABEL_26;
    }
    if ( v14 != 1 )
    {
      Debug_FreAssertMsg(
        (__int64)"Unexpected DMA mode",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
        1531);
      v11 = -1073741630;
      v12 = 0LL;
      goto LABEL_54;
    }
  }
  v15 = (__int64 *)(v5 + 120);
  if ( *(_QWORD *)(v5 + 120) )
    goto LABEL_28;
  v16 = 0;
LABEL_26:
  v11 = CommonBuffer_Create(v5, v16, v15);
  if ( v11 < 0 )
  {
    v12 = 4LL;
    goto LABEL_54;
  }
LABEL_28:
  v11 = Interrupter_PrepareHardware(*(_QWORD *)(v5 + 128), v25, a3);
  if ( v11 < 0 )
  {
    v12 = 5LL;
    goto LABEL_54;
  }
  v11 = XilDeviceSlot_PrepareHardware(*(_QWORD *)(v5 + 136));
  if ( v11 < 0 )
  {
    v12 = 6LL;
    goto LABEL_54;
  }
  v11 = Command_PrepareHardware(*(_QWORD *)(v5 + 144));
  if ( v11 < 0 )
  {
    v12 = 7LL;
    goto LABEL_54;
  }
  v11 = RootHub_PrepareHardware(*(_QWORD *)(v5 + 152));
  if ( v11 < 0 )
  {
    v12 = 13LL;
    goto LABEL_54;
  }
  if ( *(_DWORD *)(v5 + 864) && *(_QWORD *)(g_WdfDriverUsbXhciContext + 32) )
  {
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 264))(WdfDriverGlobals, a1);
    SleepstudyHelper_GenerateGuid(0LL, v17, &v28);
    SleepstudyHelper_GenerateGuid(7LL, v17 + 336, &v27);
    v18 = RtlUnicodeStringPrintf(
            &DestinationString,
            L"USBXHCI Selective Suspend Disabled/ Unsupported: Reason code: %d",
            *(unsigned int *)(v5 + 864));
    v11 = v18;
    if ( v18 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 72),
          v19,
          4,
          49,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v18);
      }
      v12 = 12LL;
      goto LABEL_54;
    }
    v25 = v27;
    v20 = *(_QWORD *)(g_WdfDriverUsbXhciContext + 32);
    v26 = v28;
    v11 = SleepstudyHelper_RegisterComponentEx(v20, &v26, &v25, &DestinationString, v5 + 1248);
    if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v11 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v5 + 72),
            3,
            4,
            50,
            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
            v11);
        *(_QWORD *)(v5 + 1248) = 0LL;
        v11 = 0;
      }
    }
    else if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 72),
          v21,
          4,
          51,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v11);
      }
      v12 = 8LL;
      goto LABEL_54;
    }
  }
  if ( (*(_DWORD *)(v5 + 744) & 0x100000LL) != 0 )
    Controller_ClearHSIIWorkaround(v5);
  return (unsigned int)v11;
}

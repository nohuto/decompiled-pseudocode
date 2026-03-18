/*
 * XREFs of HUBMISC_ReportPnPFailureProblem @ 0x140086FF8
 * Callers:
 *     HUBHSM_ReportingErrorToPnp @ 0x140009C50 (HUBHSM_ReportingErrorToPnp.c)
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1400167A0 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x14001D388 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

void __fastcall HUBMISC_ReportPnPFailureProblem(__int64 a1, ULONG a2)
{
  wchar_t *Data; // rbp
  NTSTATUS Message; // ebx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  BYTE *Text; // rax
  unsigned __int64 i; // rdi
  unsigned __int64 v10; // rdi
  size_t v11; // rdi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  wchar_t *j; // rax
  int v15; // edi
  struct _DEVICE_OBJECT *v16; // rax
  NTSTATUS v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-98h]
  ULONG Size[2]; // [rsp+28h] [rbp-90h]
  ULONG Sizea[2]; // [rsp+28h] [rbp-90h]
  PMESSAGE_RESOURCE_ENTRY v23; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v24[3]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v25; // [rsp+78h] [rbp-40h]
  int v26; // [rsp+80h] [rbp-38h]

  v23 = 0LL;
  Data = 0LL;
  Message = -1073741595;
  v24[0] = *(_OWORD *)L"@System32\\drivers\\usbhub3.sys";
  v24[1] = *(_OWORD *)L"2\\drivers\\usbhub3.sys";
  v24[2] = *(_OWORD *)L"s\\usbhub3.sys";
  v25 = *(_QWORD *)L"3.sys";
  v26 = *(_DWORD *)L"s";
  if ( !a2 )
    goto LABEL_27;
  Message = RtlFindMessage(*(PVOID *)(g_Usbhub3DriverObject + 24), 0xBu, 0, a2, &v23);
  if ( Message < 0 )
    goto LABEL_27;
  v6 = v23->Length - 4LL;
  if ( v6 > 0xFFFFFFFE )
    goto LABEL_27;
  v7 = v6 >> 1;
  Text = v23->Text;
  if ( v23 == (PMESSAGE_RESOURCE_ENTRY)-4LL || v7 > 0x7FFFFFFF )
    goto LABEL_26;
  for ( i = v7; v7; --v7 )
  {
    if ( !*(_WORD *)Text )
      break;
    Text += 2;
  }
  Message = v7 == 0 ? 0xC000000D : 0;
  if ( v7 )
    v10 = i - v7;
  else
    v10 = 0LL;
  if ( !v7 )
    goto LABEL_27;
  v11 = 2 * v10 + 88;
  Data = (wchar_t *)ExAllocatePool2(64LL, v11, 1748191317LL);
  if ( !Data )
    goto LABEL_27;
  LODWORD(MessageResourceEntry) = a2;
  Message = RtlStringCbPrintfW(Data, v11, L"%s,#%d;%s", v24, MessageResourceEntry, v23->Text);
  if ( Message < 0 )
    goto LABEL_27;
  v12 = v11 >> 1;
  if ( v12 > 0x7FFFFFFF )
  {
LABEL_26:
    Message = -1073741811;
    goto LABEL_27;
  }
  v13 = v12;
  for ( j = Data; v13; --v13 )
  {
    if ( !*j )
      break;
    ++j;
  }
  Message = v13 == 0 ? 0xC000000D : 0;
  if ( v13 )
    v15 = v12 - v13;
  else
    v15 = 0;
  if ( v13 )
  {
    v16 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                     WdfDriverGlobals,
                                     a1);
    v17 = IoSetDevicePropertyData(v16, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0x19u, 2 * v15 + 2, Data);
    if ( v17 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_14006D2C0);
      Sizea[0] = v17;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v18 + 64),
        2u,
        5u,
        0x79u,
        (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
        *(_QWORD *)Sizea);
    }
LABEL_30:
    ExFreePoolWithTag(Data, 0x68334855u);
    return;
  }
LABEL_27:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_14006D2C0);
    Size[0] = Message;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v19 + 64),
      2u,
      5u,
      0x7Au,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      *(_QWORD *)Size);
  }
  if ( Data )
    goto LABEL_30;
}

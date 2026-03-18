/*
 * XREFs of UsbhPdo_ReportPnPFailureProblem @ 0x14005D68C
 * Callers:
 *     UsbhPdoPnp_QueryPnpDeviceState @ 0x1400389B0 (UsbhPdoPnp_QueryPnpDeviceState.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     RtlStringCbPrintfW @ 0x140018A20 (RtlStringCbPrintfW.c)
 *     UsbhSetPdoRegistryParameter @ 0x140038120 (UsbhSetPdoRegistryParameter.c)
 *     RtlUnalignedStringCbLengthW @ 0x14005C128 (RtlUnalignedStringCbLengthW.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 */

void __fastcall UsbhPdo_ReportPnPFailureProblem(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // r14
  size_t v3; // rdi
  wchar_t *Pool2; // rax
  wchar_t *Data; // rbx
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-39h]
  size_t pcbLength; // [rsp+40h] [rbp-19h] BYREF
  int v8; // [rsp+48h] [rbp-11h] BYREF
  PMESSAGE_RESOURCE_ENTRY v9; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v10[3]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  wchar_t v12; // [rsp+90h] [rbp+37h]

  v9 = 0LL;
  pcbLength = 0LL;
  v10[0] = *(_OWORD *)L"@System32\\drivers\\usbhub.sys";
  v12 = aSystem32Driver[28];
  v10[1] = *(_OWORD *)L"2\\drivers\\usbhub.sys";
  v10[2] = *(_OWORD *)L"s\\usbhub.sys";
  v11 = *(_QWORD *)L".sys";
  v2 = PdoExt((__int64)DeviceObject);
  if ( v2[705] )
  {
    v8 = PdoExt((__int64)DeviceObject)[705];
    UsbhSetPdoRegistryParameter(DeviceObject, L"EnumerationFailureCode", 4u, &v8, 4u);
    if ( RtlFindMessage(UsbhDriverObject->DriverStart, 0xBu, 0, v2[705], &v9) >= 0
      && RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v9->Text, v9->Length - 4LL, &pcbLength) >= 0 )
    {
      v3 = pcbLength + 86;
      pcbLength += 86LL;
      Pool2 = (wchar_t *)ExAllocatePool2(64LL, pcbLength, 1112885333LL);
      Data = Pool2;
      if ( Pool2 )
      {
        LODWORD(MessageResourceEntry) = v2[705];
        if ( RtlStringCbPrintfW(Pool2, v3, L"%s,#%d;%hs", v10, MessageResourceEntry, v9->Text) >= 0
          && RtlUnalignedStringCbLengthW(Data, v3, &pcbLength) >= 0 )
        {
          IoSetDevicePropertyData(DeviceObject, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0x19u, pcbLength + 2, Data);
        }
        ExFreePoolWithTag(Data, 0);
      }
    }
  }
}

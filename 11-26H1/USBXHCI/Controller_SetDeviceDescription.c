/*
 * XREFs of Controller_SetDeviceDescription @ 0x140077958
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x140044750 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x140045298 (RtlStringCbPrintfW.c)
 *     RtlUnalignedStringCbLengthW @ 0x140045394 (RtlUnalignedStringCbLengthW.c)
 *     RootHub_GetHighestUsbVersionSupported @ 0x14004A3AC (RootHub_GetHighestUsbVersionSupported.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x140075A5C (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 */

void __fastcall Controller_SetDeviceDescription(_QWORD *a1)
{
  __int16 HighestUsbVersionSupported; // ax
  unsigned __int8 v3; // bl
  unsigned int i; // ecx
  unsigned int j; // esi
  size_t v6; // rdx
  int v7; // r9d
  size_t v8; // r13
  BYTE *Text; // r12
  size_t v10; // rax
  rsize_t v11; // rsi
  size_t v12; // rdi
  wchar_t *Pool2; // rax
  int v14; // edx
  __int64 v15; // rax
  size_t v16; // r13
  size_t v17; // rdx
  void *Data; // r12
  int v19; // r9d
  BYTE *v20; // rbx
  size_t v21; // rax
  BYTE *v22; // rax
  void *v23; // rax
  int v24; // edx
  int v25; // r8d
  struct _DEVICE_OBJECT *v26; // rax
  NTSTATUS v27; // eax
  int v28; // edx
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-99h]
  int v30; // [rsp+58h] [rbp-69h]
  BYTE *P; // [rsp+68h] [rbp-59h]
  unsigned __int8 v32; // [rsp+71h] [rbp-50h]
  size_t v33; // [rsp+78h] [rbp-49h] BYREF
  size_t pcbLength; // [rsp+80h] [rbp-41h] BYREF
  PMESSAGE_RESOURCE_ENTRY v35; // [rsp+88h] [rbp-39h] BYREF
  PMESSAGE_RESOURCE_ENTRY v36; // [rsp+90h] [rbp-31h] BYREF
  PVOID v37; // [rsp+98h] [rbp-29h]
  rsize_t MaxCount; // [rsp+A0h] [rbp-21h]
  _OWORD v39[3]; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v40; // [rsp+D8h] [rbp+17h]
  int v41; // [rsp+E0h] [rbp+1Fh]

  v35 = 0LL;
  v39[0] = *(_OWORD *)L"@System32\\drivers\\usbxhci.sys";
  v36 = 0LL;
  v41 = *(_DWORD *)L"s";
  v39[1] = *(_OWORD *)L"2\\drivers\\usbxhci.sys";
  v33 = 0LL;
  v39[2] = *(_OWORD *)L"s\\usbxhci.sys";
  v37 = 0LL;
  v40 = *(_QWORD *)L"i.sys";
  if ( !Controller_DriverInstalledDueToCompatibleIdMatch(a1) )
    return;
  HighestUsbVersionSupported = RootHub_GetHighestUsbVersionSupported(a1[19]);
  v3 = HighestUsbVersionSupported;
  v32 = HIBYTE(HighestUsbVersionSupported);
  if ( *((_DWORD *)a1 + 161) == 1 )
  {
    for ( i = 0; i < 0xB; ++i )
    {
      if ( PciVendorIdTable[8 * i] == *((_WORD *)a1 + 324) )
      {
        v33 = (size_t)(&off_14006B3C8)[2 * i];
        break;
      }
    }
  }
  else
  {
    for ( j = 0; j < 5; ++j )
    {
      if ( !_stricmp((&AcpiVendorIdTable)[2 * j], (const char *)a1 + 704) )
      {
        v33 = (size_t)(&off_14006B378)[2 * j];
        break;
      }
    }
  }
  if ( RtlFindMessage(
         *(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 24LL),
         0xBu,
         0,
         0x40010001u,
         &v35) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 150;
LABEL_16:
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(a1[9], v6, 4, v7, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      return;
    }
    return;
  }
  v6 = v35->Length - 4LL;
  pcbLength = v6;
  if ( v6 <= 0xFFFFFFFE )
  {
    if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v35->Text, v6, &pcbLength) < 0 )
      return;
    v8 = pcbLength;
    Text = v35->Text;
    P = v35->Text;
    if ( pcbLength >= 4 )
    {
      v10 = pcbLength >> 1;
      if ( *(_WORD *)&Text[2 * (pcbLength >> 1) - 2] == 10 )
      {
        v11 = v10 - 2;
        if ( *(_WORD *)&Text[2 * v10 - 4] == 13 )
        {
          v12 = pcbLength - 2;
          Pool2 = (wchar_t *)ExAllocatePool2(256LL, pcbLength - 2, 1229146200LL);
          P = (BYTE *)Pool2;
          if ( !Pool2 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v7 = 152;
              goto LABEL_16;
            }
            return;
          }
          wcsncpy_s(Pool2, v12 >> 1, (const wchar_t *)v35->Text, v11);
        }
      }
    }
    v14 = 0;
    if ( v33 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)(v33 + 2 * v15) );
      v16 = v8 + 2 * v15 + 112;
      pcbLength = v16;
      Data = (void *)ExAllocatePool2(256LL, v16, 1229146200LL);
      if ( !Data )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_35:
          v20 = P;
LABEL_36:
          if ( v20 )
            ExFreePoolWithTag(v20, 0x49434858u);
          return;
        }
        v19 = 153;
LABEL_34:
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_(a1[9], v17, 4, v19, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
        goto LABEL_35;
      }
      v30 = *((unsigned __int8 *)a1 + 721);
      v21 = v33;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_(a1[9], v14, 4, 154, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      }
      if ( RtlFindMessage(
             *(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 24LL),
             0xBu,
             0,
             0x40010002u,
             &v36) < 0 )
        goto LABEL_35;
      v17 = v36->Length - 4LL;
      v33 = v17;
      if ( v17 > 0xFFFFFFFE )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_35;
        v19 = 155;
        goto LABEL_34;
      }
      if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v36->Text, v17, &v33) < 0 )
        goto LABEL_35;
      v16 = v33 + 108 + v8;
      pcbLength = v16;
      Data = (void *)ExAllocatePool2(256LL, v16, 1229146200LL);
      if ( !Data )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_35;
        v19 = 156;
        goto LABEL_34;
      }
      v22 = v36->Text;
      v37 = v36->Text;
      if ( v33 >= 4 && *(_WORD *)&v22[2 * (v33 >> 1) - 2] == 10 )
      {
        MaxCount = (v33 >> 1) - 2;
        if ( *(_WORD *)&v22[2 * MaxCount] == 13 )
        {
          v33 -= 2LL;
          v23 = (void *)ExAllocatePool2(256LL, v33, 1229146200LL);
          v37 = v23;
          if ( !v23 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v24) = 2;
              WPP_RECORDER_SF_(a1[9], v24, 4, 157, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
            }
            v20 = P;
            goto LABEL_57;
          }
          wcsncpy_s((wchar_t *)v23, v33 >> 1, (const wchar_t *)v36->Text, MaxCount);
        }
      }
      v30 = *((unsigned __int8 *)a1 + 721);
      v21 = (size_t)v37;
    }
    v25 = v3;
    v20 = P;
    LODWORD(MessageResourceEntry) = 1073807361;
    if ( RtlStringCbPrintfW(
           (NTSTRSAFE_PWSTR)Data,
           v16,
           L"%s,#%d;%s;(%s,%X.%X,%X.%X)",
           v39,
           MessageResourceEntry,
           P,
           v21,
           v25,
           v32,
           *((unsigned __int8 *)a1 + 720),
           v30) >= 0
      && RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)Data, v16, &pcbLength) >= 0 )
    {
      v26 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(
                                       WdfDriverGlobals,
                                       *a1);
      v27 = IoSetDevicePropertyData(v26, &DEVPKEY_Device_FriendlyName, 0, 1u, 0x19u, pcbLength + 2, Data);
      if ( v27 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = 3;
        WPP_RECORDER_SF_d(a1[9], v28, 4, 158, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v27);
      }
    }
LABEL_57:
    ExFreePoolWithTag(Data, 0x49434858u);
    if ( v37 )
      ExFreePoolWithTag(v37, 0x49434858u);
    goto LABEL_36;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 151;
    goto LABEL_16;
  }
}

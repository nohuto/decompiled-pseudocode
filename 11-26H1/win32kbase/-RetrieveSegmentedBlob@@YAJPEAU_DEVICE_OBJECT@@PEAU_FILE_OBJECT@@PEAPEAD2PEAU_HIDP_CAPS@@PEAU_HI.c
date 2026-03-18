/*
 * XREFs of ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1400ED42C
 * Callers:
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1400ED158 (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1400EC374 (-BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

int __fastcall RetrieveSegmentedBlob(
        PDEVICE_OBJECT DeviceObject,
        struct _FILE_OBJECT *a2,
        char **a3,
        char **a4,
        struct _HIDP_CAPS *a5,
        struct _HIDP_PREPARSED_DATA *PreparsedData,
        struct _HIDP_VALUE_CAPS *a7)
{
  char **v8; // rdi
  int result; // eax
  struct _HIDP_VALUE_CAPS *v11; // rsi
  ULONG UsageValue; // r14d
  CHAR *v13; // r12
  PCHAR v14; // rbx
  PIRP v15; // rax
  int v16; // edx
  int v17; // r8d
  struct _FILE_OBJECT *v18; // rdi
  int v19; // edx
  int v20; // r8d
  bool v21; // bl
  bool v22; // di
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx
  PIRP v26; // rax
  int v27; // edx
  int v28; // r8d
  int v29; // edx
  NTSTATUS Status; // esi
  int v31; // r8d
  bool v32; // bl
  bool v33; // di
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  bool v37; // bl
  bool v38; // di
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  bool v42; // bl
  bool v43; // di
  __int64 v44; // rax
  int v45; // edx
  int v46; // r8d
  __int16 Report; // [rsp+30h] [rbp-50h]
  CHAR *v48; // [rsp+50h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-18h] BYREF

  v8 = a4;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  result = BuildSignatureFeatureReport(a5, 0LL, 0LL, 0LL, a4, a3);
  if ( result >= 0 )
  {
    v11 = a7;
    UsageValue = 0;
    v13 = *a3;
    v14 = *v8;
    v48 = v14;
    *v14 = a7->ReportID;
    while ( 1 )
    {
      if ( UsageValue >= 8 )
        return result;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      HidP_SetUsageValue(
        HidP_Feature,
        v11->UsagePage,
        0,
        0xC6u,
        UsageValue,
        PreparsedData,
        *v8,
        a5->FeatureReportByteLength);
      v15 = IoBuildDeviceIoControlRequest(
              0xB0191u,
              DeviceObject,
              *v8,
              a5->FeatureReportByteLength,
              0LL,
              0,
              0,
              &Event,
              &IoStatusBlock);
      if ( !v15 )
        break;
      v18 = a2;
      v15->Tail.Overlay.CurrentStackLocation[-1].FileObject = a2;
      result = IofCallDriver(DeviceObject, v15);
      if ( result == 259 )
      {
        v21 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v20);
          LOBYTE(v24) = v22;
          LOBYTE(v25) = v21;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v25,
            v24,
            *(_QWORD *)(UserSessionState + 19368),
            3,
            1,
            14,
            (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
        }
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        result = IoStatusBlock.Status;
        v14 = v48;
        v18 = a2;
      }
      if ( result >= 0 )
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v26 = IoBuildDeviceIoControlRequest(
                0xB0192u,
                DeviceObject,
                0LL,
                0,
                v14,
                a5->FeatureReportByteLength,
                0,
                &Event,
                &IoStatusBlock);
        if ( !v26 )
        {
          v42 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v42 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return -1073741668;
          v44 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v27, v28);
          Report = 15;
          goto LABEL_55;
        }
        v26->Tail.Overlay.CurrentStackLocation[-1].FileObject = v18;
        Status = IofCallDriver(DeviceObject, v26);
        if ( Status == 259 )
        {
          v32 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v34 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v29, v31);
            LOBYTE(v35) = v33;
            LOBYTE(v36) = v32;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v36,
              v35,
              *(_QWORD *)(v34 + 19368),
              3,
              1,
              16,
              (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
          }
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
          v14 = v48;
        }
        if ( Status )
        {
          v37 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v39 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v29, v31);
            LOBYTE(v40) = v38;
            LOBYTE(v41) = v37;
            WPP_RECORDER_AND_TRACE_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v41,
              v40,
              *(_QWORD *)(v39 + 19368),
              3,
              1,
              17,
              (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
              Status);
          }
          return -1073741668;
        }
        v11 = a7;
        result = HidP_GetUsageValueArray(
                   HidP_Feature,
                   a7->UsagePage,
                   0,
                   0xC7u,
                   v13,
                   0x20u,
                   PreparsedData,
                   v14,
                   a5->FeatureReportByteLength);
        if ( result < 0 )
          return result;
        v13 += 32;
      }
      v8 = a4;
      ++UsageValue;
    }
    v42 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v42 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return -1073741668;
    v44 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17);
    Report = 13;
LABEL_55:
    LOBYTE(v46) = v43;
    LOBYTE(v45) = v42;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v45,
      v46,
      *(_QWORD *)(v44 + 19368),
      3,
      1,
      Report,
      (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
    return -1073741668;
  }
  return result;
}

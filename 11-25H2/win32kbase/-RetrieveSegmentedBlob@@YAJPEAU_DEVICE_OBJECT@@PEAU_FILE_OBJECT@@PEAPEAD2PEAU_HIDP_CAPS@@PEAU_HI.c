/*
 * XREFs of ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1400B0C98
 * Callers:
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1400B09BC (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1400AF980 (-BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
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
  __int64 v16; // rdx
  struct _FILE_OBJECT *v17; // rdi
  __int64 v18; // rdx
  bool v19; // bl
  bool v20; // di
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx
  PIRP v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  NTSTATUS Status; // esi
  bool v28; // bl
  bool v29; // di
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  bool v33; // bl
  bool v34; // di
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  bool v38; // bl
  bool v39; // di
  __int64 v40; // rax
  int v41; // edx
  int v42; // r8d
  __int16 Report; // [rsp+30h] [rbp-50h]
  CHAR *v44; // [rsp+50h] [rbp-30h]
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
    v44 = v14;
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
      v17 = a2;
      v15->Tail.Overlay.CurrentStackLocation[-1].FileObject = a2;
      result = IofCallDriver(DeviceObject, v15);
      if ( result == 259 )
      {
        v19 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
          LOBYTE(v22) = v20;
          LOBYTE(v23) = v19;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v23,
            v22,
            *(_QWORD *)(UserSessionState + 19336),
            3,
            1,
            14,
            (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
        }
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        result = IoStatusBlock.Status;
        v14 = v44;
        v17 = a2;
      }
      if ( result >= 0 )
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v24 = IoBuildDeviceIoControlRequest(
                0xB0192u,
                DeviceObject,
                0LL,
                0,
                v14,
                a5->FeatureReportByteLength,
                0,
                &Event,
                &IoStatusBlock);
        if ( !v24 )
        {
          v38 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v38 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return -1073741668;
          v40 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
          Report = 15;
          goto LABEL_55;
        }
        v24->Tail.Overlay.CurrentStackLocation[-1].FileObject = v17;
        Status = IofCallDriver(DeviceObject, v24);
        if ( Status == 259 )
        {
          v28 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
            LOBYTE(v31) = v29;
            LOBYTE(v32) = v28;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v32,
              v31,
              *(_QWORD *)(v30 + 19336),
              3,
              1,
              16,
              (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
          }
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
          v14 = v44;
        }
        if ( Status )
        {
          v33 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
            LOBYTE(v36) = v34;
            LOBYTE(v37) = v33;
            WPP_RECORDER_AND_TRACE_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v37,
              v36,
              *(_QWORD *)(v35 + 19336),
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
    v38 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v38 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return -1073741668;
    v40 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
    Report = 13;
LABEL_55:
    LOBYTE(v42) = v39;
    LOBYTE(v41) = v38;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v41,
      v42,
      *(_QWORD *)(v40 + 19336),
      3,
      1,
      Report,
      (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
    return -1073741668;
  }
  return result;
}

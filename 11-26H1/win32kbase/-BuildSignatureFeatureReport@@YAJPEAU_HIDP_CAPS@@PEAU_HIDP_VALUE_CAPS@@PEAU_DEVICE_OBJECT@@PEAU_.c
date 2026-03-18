/*
 * XREFs of ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1400EC374
 * Callers:
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1400ED158 (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 *     ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1400ED42C (-RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HI.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

__int64 __fastcall BuildSignatureFeatureReport(
        struct _HIDP_CAPS *a1,
        struct _HIDP_VALUE_CAPS *a2,
        struct _DEVICE_OBJECT *a3,
        struct _FILE_OBJECT *a4,
        char **a5,
        char **a6)
{
  unsigned __int64 FeatureReportByteLength; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char *OutputBuffer; // r14
  PIRP v16; // rax
  bool v17; // di
  bool v18; // si
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  NTSTATUS Status; // edi
  bool v23; // di
  bool v24; // r14
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  bool v28; // si
  bool v29; // bp
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  char *v33; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  FeatureReportByteLength = a1->FeatureReportByteLength;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v11 = -1073741811;
  OutputBuffer = (char *)Win32AllocPoolZInitImpl(64LL, FeatureReportByteLength, 0x69667355u);
  *a5 = OutputBuffer;
  if ( OutputBuffer )
  {
    if ( a2 && a3 && a4 )
    {
      *OutputBuffer = a2->ReportID;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v16 = IoBuildDeviceIoControlRequest(
              0xB0192u,
              a3,
              0LL,
              0,
              OutputBuffer,
              a1->FeatureReportByteLength,
              0,
              &Event,
              &IoStatusBlock);
      v12 = (__int64)v16;
      if ( !v16 )
      {
        v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v13);
          LOBYTE(v20) = v18;
          LOBYTE(v21) = v17;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(UserSessionState + 19368),
            3,
            1,
            10,
            (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
        }
LABEL_14:
        v11 = -1073741668;
        goto LABEL_38;
      }
      v16->Tail.Overlay.CurrentStackLocation[-1].FileObject = a4;
      Status = IofCallDriver(a3, v16);
      if ( Status == 259 )
      {
        v23 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v13);
          LOBYTE(v26) = v24;
          LOBYTE(v27) = v23;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v27,
            v26,
            *(_QWORD *)(v25 + 19368),
            3,
            1,
            11,
            (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
        }
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
        v28 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v30 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v13);
          LOBYTE(v31) = v29;
          LOBYTE(v32) = v28;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v32,
            v31,
            *(_QWORD *)(v30 + 19368),
            3,
            1,
            12,
            (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
            Status);
        }
        goto LABEL_14;
      }
    }
    else
    {
      Status = 0;
    }
    v33 = (char *)Win32AllocPoolZInitImpl(256LL, 0x100uLL, 0x69667355u);
    *a6 = v33;
    if ( !v33 )
      Status = -1073741668;
    v11 = Status;
  }
LABEL_38:
  if ( !*a6 && *a5 )
  {
    GreDeleteFastMutex(*a5, v12, v13, v14);
    *a5 = 0LL;
  }
  return v11;
}

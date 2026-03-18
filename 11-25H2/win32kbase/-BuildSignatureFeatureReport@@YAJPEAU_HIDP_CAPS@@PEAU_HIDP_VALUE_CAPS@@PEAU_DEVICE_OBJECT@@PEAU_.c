/*
 * XREFs of ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1400AF980
 * Callers:
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1400B09BC (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 *     ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1400B0C98 (-RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HI.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
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
  char *OutputBuffer; // r14
  PIRP v13; // rax
  bool v14; // di
  bool v15; // si
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdx
  NTSTATUS Status; // edi
  bool v21; // di
  bool v22; // r14
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  bool v26; // si
  bool v27; // bp
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  char *v31; // rax
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
      v13 = IoBuildDeviceIoControlRequest(
              0xB0192u,
              a3,
              0LL,
              0,
              OutputBuffer,
              a1->FeatureReportByteLength,
              0,
              &Event,
              &IoStatusBlock);
      if ( !v13 )
      {
        v14 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
          LOBYTE(v17) = v15;
          LOBYTE(v18) = v14;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v18,
            v17,
            *(_QWORD *)(UserSessionState + 19336),
            3,
            1,
            10,
            (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
        }
LABEL_14:
        v11 = -1073741668;
        goto LABEL_38;
      }
      v13->Tail.Overlay.CurrentStackLocation[-1].FileObject = a4;
      Status = IofCallDriver(a3, v13);
      if ( Status == 259 )
      {
        v21 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
          LOBYTE(v24) = v22;
          LOBYTE(v25) = v21;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v25,
            v24,
            *(_QWORD *)(v23 + 19336),
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
        v26 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
          LOBYTE(v29) = v27;
          LOBYTE(v30) = v26;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v30,
            v29,
            *(_QWORD *)(v28 + 19336),
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
    v31 = (char *)Win32AllocPoolZInitImpl(256LL, 0x100uLL, 0x69667355u);
    *a6 = v31;
    if ( !v31 )
      Status = -1073741668;
    v11 = Status;
  }
LABEL_38:
  if ( !*a6 && *a5 )
  {
    GreDeleteFastMutex(*a5);
    *a5 = 0LL;
  }
  return v11;
}

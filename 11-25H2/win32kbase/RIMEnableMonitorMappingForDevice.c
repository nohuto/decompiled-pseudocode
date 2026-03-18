/*
 * XREFs of RIMEnableMonitorMappingForDevice @ 0x1401DA730
 * Callers:
 *     NtRIMEnableMonitorMappingForDevice @ 0x1401D7E80 (NtRIMEnableMonitorMappingForDevice.c)
 * Callees:
 *     RIMGetQDCActivePathsData @ 0x14002B9C8 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x14002BC10 (RIMFreeQDCActivePathsData.c)
 *     RIMSetDeviceOutputConfig @ 0x14002D684 (RIMSetDeviceOutputConfig.c)
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMGetDeviceObjectPointer @ 0x14007A964 (RIMGetDeviceObjectPointer.c)
 *     RIMGetDeviceLocationInfo @ 0x1400AFCDC (RIMGetDeviceLocationInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1401E534C (RIMReadDigitizerToMonitorMappings.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E5C14 (rimFindMonitorForDigitizerWithQDCData.c)
 */

__int64 __fastcall RIMEnableMonitorMappingForDevice(char *a1, char *a2, int a3, _QWORD *a4)
{
  char v6; // bl
  bool v7; // r14
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rdx
  int v12; // r14d
  _BYTE *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  char *v17; // r15
  _DWORD *v18; // rbx
  PVOID v19; // r14
  __int64 v20; // rdx
  char v21; // bl
  bool v22; // r14
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  unsigned int *v26; // rbx
  __int64 v27; // rdx
  void *v28; // rbx
  PVOID v29; // r15
  char v30; // bl
  bool v31; // r15
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  char v35; // bl
  bool v36; // r15
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  char v40; // bl
  bool v41; // r15
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  char *v46; // [rsp+50h] [rbp-78h]
  PVOID v47; // [rsp+60h] [rbp-68h] BYREF
  char *v48; // [rsp+68h] [rbp-60h] BYREF
  PVOID Object; // [rsp+70h] [rbp-58h] BYREF
  PVOID v50; // [rsp+78h] [rbp-50h]
  HANDLE Handle; // [rsp+80h] [rbp-48h] BYREF
  PVOID v52; // [rsp+88h] [rbp-40h] BYREF
  __int128 v53; // [rsp+90h] [rbp-38h] BYREF

  v47 = 0LL;
  v48 = 0LL;
  Handle = 0LL;
  v52 = 0LL;
  Object = 0LL;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      145,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v12 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v47);
  if ( v12 >= 0 )
  {
    v13 = v47;
    RIMLockExclusive((__int64)v47 + 104);
    if ( v13[81] )
    {
      v12 = -1073741637;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v35 = 0;
      }
      v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        LOBYTE(v38) = v36;
        LOBYTE(v39) = v35;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(v37 + 19336),
          3,
          1,
          148,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
      goto LABEL_55;
    }
    v12 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, (PVOID *)&v48);
    if ( v12 < 0 )
    {
LABEL_55:
      RIMUnlockExclusive((__int64)(v13 + 104));
      ObfDereferenceObject(v13);
      goto LABEL_56;
    }
    v46 = v48;
    v17 = v48 + 72;
    if ( !v48 )
      v17 = 0LL;
    if ( *((_DWORD *)v17 + 12) != 2
      || (*((_DWORD *)v17 + 46) & 0x80u) != 0
      || (*((_DWORD *)v17 + 42) & 0x2000) != 0
      || (v18 = v17 + 1336, *((_DWORD *)v17 + 334)) )
    {
      v12 = -1073741811;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v30 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v15);
        LOBYTE(v33) = v31;
        LOBYTE(v34) = v30;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v34,
          v33,
          *(_QWORD *)(v32 + 19336),
          3,
          1,
          146,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
    }
    else
    {
      v12 = RIMGetDeviceObjectPointer(
              (struct _UNICODE_STRING *)v17 + 12,
              v15,
              v16,
              &Handle,
              &v52,
              (PDEVICE_OBJECT *)&Object);
      if ( v12 >= 0 )
      {
        v19 = Object;
        v50 = Object;
        ObfReferenceObject(Object);
        v12 = RIMGetDeviceLocationInfo((__int64)v19, (__int64)(v17 + 2120));
        if ( v12 < 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4727);
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v21 = 0;
          }
          v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v23 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v20);
            LOBYTE(v24) = v22;
            LOBYTE(v25) = v21;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v25,
              v24,
              *(_QWORD *)(v23 + 19336),
              3,
              1,
              147,
              (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
          }
          v12 = 0;
          v18 = v17 + 1336;
        }
        *v18 = 1;
        RIMReadDigitizerToMonitorMappings(v17);
        v53 = 0LL;
        v26 = RIMGetQDCActivePathsData((unsigned int *)&v53);
        rimFindMonitorForDigitizerWithQDCData(v17, v26, 0LL);
        RIMSetDeviceOutputConfig((struct RIMDEV *)v17, 0LL, 0, (__int64)v26);
        RIMFreeQDCActivePathsData((__int64)v26);
        if ( a4 )
        {
          if ( *((_QWORD *)v17 + 57) || *((_DWORD *)v17 + 334) )
            v27 = *((_QWORD *)v17 + 168);
          else
            v27 = -1LL;
          if ( a3 )
          {
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              a4 = (_QWORD *)MmUserProbeAddress;
            *a4 = v27;
            v28 = v46;
            v29 = v50;
            goto LABEL_38;
          }
          *a4 = v27;
        }
        v29 = v50;
        v28 = v46;
LABEL_38:
        ZwClose(Handle);
        ObfDereferenceObject(v52);
        ObfDereferenceObject(v29);
LABEL_47:
        ObfDereferenceObject(v28);
        goto LABEL_55;
      }
    }
    v28 = v46;
    goto LABEL_47;
  }
LABEL_56:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v40 = 0;
  }
  v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v42 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
    LOBYTE(v43) = v41;
    LOBYTE(v44) = v40;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v44,
      v43,
      *(_QWORD *)(v42 + 19336),
      4,
      1,
      149,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v12);
  }
  return (unsigned int)v12;
}

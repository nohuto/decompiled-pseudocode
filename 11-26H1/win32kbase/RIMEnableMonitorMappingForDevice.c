/*
 * XREFs of RIMEnableMonitorMappingForDevice @ 0x140200E20
 * Callers:
 *     NtRIMEnableMonitorMappingForDevice @ 0x1401FF040 (NtRIMEnableMonitorMappingForDevice.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMSetDeviceOutputConfig @ 0x14007B81C (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x14007C5BC (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMGetQDCActivePathsData @ 0x14007CE38 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x14007D080 (RIMFreeQDCActivePathsData.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetDeviceObjectPointer @ 0x1400F2B34 (RIMGetDeviceObjectPointer.c)
 *     RIMGetDeviceLocationInfo @ 0x140130414 (RIMGetDeviceLocationInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x140205D48 (RIMReadDigitizerToMonitorMappings.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall RIMEnableMonitorMappingForDevice(char *a1, char *a2, int a3, __int64 *a4)
{
  char v5; // bl
  bool v6; // r14
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  int v10; // edx
  int v11; // r8d
  int v12; // r14d
  _BYTE *v13; // r14
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // r8
  PVOID v18; // r13
  char *v19; // r15
  _DWORD *v20; // rbx
  int v21; // edx
  int v22; // r8d
  char v23; // bl
  bool v24; // r14
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  char v36; // bl
  bool v37; // r15
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  char v41; // bl
  bool v42; // r15
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  char v46; // bl
  bool v47; // r15
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  PVOID v52; // [rsp+58h] [rbp-80h] BYREF
  PVOID Object; // [rsp+60h] [rbp-78h] BYREF
  PVOID v54; // [rsp+68h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-68h] BYREF
  PVOID v56; // [rsp+78h] [rbp-60h] BYREF
  __int64 v57; // [rsp+80h] [rbp-58h]
  unsigned int v58[20]; // [rsp+88h] [rbp-50h] BYREF

  v54 = 0LL;
  v52 = 0LL;
  Handle = 0LL;
  v56 = 0LL;
  Object = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      144,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v12 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v54);
  if ( v12 >= 0 )
  {
    v13 = v54;
    v57 = (__int64)v54 + 104;
    RIMLockExclusive((__int64)v54 + 104);
    if ( v13[81] )
    {
      v12 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v41 = 0;
      }
      v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v43 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15);
        LOBYTE(v44) = v42;
        LOBYTE(v45) = v41;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v45,
          v44,
          *(_QWORD *)(v43 + 19368),
          3,
          1,
          147,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
      }
    }
    else
    {
      v12 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &v52);
      if ( v12 >= 0 )
      {
        v18 = v52;
        v19 = (char *)v52 + 72;
        if ( !v52 )
          v19 = 0LL;
        if ( *((_DWORD *)v19 + 12) != 2
          || (*((_DWORD *)v19 + 46) & 0x80u) != 0
          || (*((_DWORD *)v19 + 42) & 0x2000) != 0
          || (v20 = v19 + 1328, *((_DWORD *)v19 + 332)) )
        {
          v12 = -1073741811;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v36 = 0;
          }
          v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v38 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17);
            LOBYTE(v39) = v37;
            LOBYTE(v40) = v36;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v40,
              v39,
              *(_QWORD *)(v38 + 19368),
              3,
              1,
              145,
              (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
          }
        }
        else
        {
          v12 = RIMGetDeviceObjectPointer(
                  (struct _UNICODE_STRING *)v19 + 12,
                  v16,
                  v17,
                  &Handle,
                  &v56,
                  (PDEVICE_OBJECT *)&Object);
          if ( v12 >= 0 )
          {
            ObfReferenceObject(Object);
            v12 = RIMGetDeviceLocationInfo((struct _DEVICE_OBJECT *)Object, (__int64)(v19 + 2112));
            if ( v12 < 0 )
            {
              MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 4672);
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v23 = 0;
              }
              v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v25 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
                LOBYTE(v26) = v24;
                LOBYTE(v27) = v23;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v27,
                  v26,
                  *(_QWORD *)(v25 + 19368),
                  3,
                  1,
                  146,
                  (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
              }
              v12 = 0;
              v20 = v19 + 1328;
            }
            *v20 = 1;
            RIMReadDigitizerToMonitorMappings(v19);
            *(_OWORD *)v58 = 0LL;
            v31 = RIMGetQDCActivePathsData(v58, v28, v29, v30);
            rimFindMonitorForDigitizerWithQDCData((__int64)v19, (__int64)v31, 0LL);
            RIMSetDeviceOutputConfig((struct RIMDEV *)v19, 0LL, 0, (__int64)v31);
            RIMFreeQDCActivePathsData((__int64)v31, v32, v33, v34);
            if ( a4 )
            {
              if ( *((_QWORD *)v19 + 57) || *((_DWORD *)v19 + 332) )
                v35 = *((_QWORD *)v19 + 167);
              else
                v35 = -1LL;
              if ( a3 )
                RtlWriteULong64ToUser(a4, v35);
              else
                *a4 = v35;
            }
            ZwClose(Handle);
            ObfDereferenceObject(v56);
            ObfDereferenceObject(Object);
          }
        }
        ObfDereferenceObject(v18);
      }
    }
    RIMUnlockExclusive(v57);
    ObfDereferenceObject(v54);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v46 = 0;
  }
  v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v48 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
    LOBYTE(v49) = v47;
    LOBYTE(v50) = v46;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v50,
      v49,
      *(_QWORD *)(v48 + 19368),
      4,
      1,
      148,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v12);
  }
  return (unsigned int)v12;
}

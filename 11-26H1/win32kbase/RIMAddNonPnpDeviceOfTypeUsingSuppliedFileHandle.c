/*
 * XREFs of RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401A4390
 * Callers:
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x140060460 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 *     RIMFreeDev @ 0x140092664 (RIMFreeDev.c)
 *     DeviceTypeToRimInputType @ 0x140092D60 (DeviceTypeToRimInputType.c)
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 *     rimDoRimDevChange @ 0x140096D74 (rimDoRimDevChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
        char *a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        void *a4,
        int a5,
        _QWORD *a6)
{
  char v7; // si
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  char v12; // si
  bool v13; // r14
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  int v18; // edx
  int v19; // esi
  int v20; // r8d
  struct RawInputManagerObject *v21; // r14
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _UNICODE_STRING *p_DestinationString; // r15
  unsigned __int64 ULong64FromUser; // rax
  ULONG64 v29; // rdx
  char v30; // r15
  bool v31; // r12
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  char v35; // r14
  bool v36; // r15
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  __int16 v40; // [rsp+30h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-98h] BYREF
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  int v43; // [rsp+60h] [rbp-88h]
  __int128 v44; // [rsp+70h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-68h] BYREF
  struct _UNICODE_STRING *v46; // [rsp+90h] [rbp-58h]
  __int64 v47; // [rsp+98h] [rbp-50h]
  UNICODE_STRING SourceString; // [rsp+A0h] [rbp-48h] BYREF
  char *v49; // [rsp+F0h] [rbp+8h]

  v49 = a1;
  Object = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      35,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
    a1 = v49;
  }
  if ( !a4 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v12 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, a3);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(v14 + 19368),
        4,
        1,
        36,
        (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
        13);
    }
    return 3221225485LL;
  }
  v19 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v19 >= 0 )
  {
    v21 = (struct RawInputManagerObject *)Object;
    v47 = (__int64)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v21 + 81) || *((_BYTE *)v21 + 82) )
    {
      v19 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v30 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v34 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v22, v23) + 19368);
      v40 = 38;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v21 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        v46 = 0LL;
        DestinationString = 0LL;
        if ( a5 )
        {
          v44 = 0LL;
          LODWORD(v44) = RtlReadULongFromUser(a2, v24);
          ULong64FromUser = RtlReadULong64FromUser(&a2->Buffer);
          *((_QWORD *)&v44 + 1) = ULong64FromUser;
          SourceString = (UNICODE_STRING)v44;
          if ( (ULong64FromUser & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v29 = ULong64FromUser + (unsigned __int16)v44 + 2LL;
          if ( v29 <= ULong64FromUser || v29 >= MmUserProbeAddress )
            ExRaiseAccessViolation();
          if ( (unsigned __int16)v44 > WORD1(v44) || (v44 & 1) != 0 )
          {
            if ( (v44 & 1) != 0 )
            {
              LODWORD(v41) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1079LL);
            }
            ExRaiseAccessViolation();
          }
          DestinationString.MaximumLength = v44;
          DestinationString.Length = v44;
          DestinationString.Buffer = (PWSTR)Win32AllocPoolZInitImpl(256LL, (unsigned __int16)v44, 0x706D7452u);
          if ( DestinationString.Buffer )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            p_DestinationString = &DestinationString;
            v46 = &DestinationString;
          }
          else
          {
            v19 = -1073741801;
            v43 = -1073741801;
          }
        }
        else
        {
          p_DestinationString = a2;
        }
        if ( v19 >= 0 )
        {
          v41 = 0LL;
          v19 = RIMCreateDev(v21, a3, p_DestinationString, 1, 0, 0LL, &v41);
          if ( v19 >= 0 )
          {
            *(_DWORD *)(v41 + 168) |= 1u;
            v19 = rimOnPnpArrived((__int64)v21, v41, a4);
            if ( v19 >= 0 )
            {
              rimDoRimDevChange((__int64)v21, v41, 2u);
              v25 = (__int64)a6;
              if ( a6 )
              {
                if ( a5 )
                  RtlWriteULong64ToUser(a6, *(_QWORD *)(v41 + 16));
                else
                  *a6 = *(_QWORD *)(v41 + 16);
              }
            }
            if ( v19 < 0 )
              RIMFreeDev(v21, (struct RIMDEV *)v41);
          }
        }
        if ( DestinationString.Buffer )
          GreDeleteFastMutex((char *)DestinationString.Buffer, v24, v25, v26);
        goto LABEL_62;
      }
      v19 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v30 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v34 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v24, v25) + 19368);
      v40 = 37;
    }
    LOBYTE(v33) = v31;
    LOBYTE(v32) = v30;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v32,
      v33,
      v34,
      3,
      1,
      v40,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
LABEL_62:
    RIMUnlockExclusive(v47);
    ObfDereferenceObject(v21);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v35 = 0;
  }
  v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v37 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v18, v20);
    LOBYTE(v38) = v36;
    LOBYTE(v39) = v35;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v39,
      v38,
      *(_QWORD *)(v37 + 19368),
      4,
      1,
      39,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v19);
  }
  return (unsigned int)v19;
}

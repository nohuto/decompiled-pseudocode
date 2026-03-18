/*
 * XREFs of RIMAddNonPnpDeviceOfType @ 0x1402006B0
 * Callers:
 *     <none>
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
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfType(char *a1, struct _UNICODE_STRING *a2, unsigned int a3, int a4, _QWORD *a5)
{
  char v7; // si
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  int v12; // edx
  int v13; // esi
  int v14; // r8d
  struct RawInputManagerObject *v15; // r14
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _UNICODE_STRING *p_DestinationString; // r15
  unsigned __int64 ULong64FromUser; // rax
  ULONG64 v23; // rdx
  char v24; // r15
  bool v25; // r12
  int v26; // edx
  int v27; // r8d
  __int64 v28; // r9
  char v29; // r14
  bool v30; // r15
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int16 v35; // [rsp+30h] [rbp-B8h]
  __int64 v36; // [rsp+50h] [rbp-98h] BYREF
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  int v38; // [rsp+60h] [rbp-88h]
  __int128 v39; // [rsp+70h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-68h] BYREF
  struct _UNICODE_STRING *v41; // [rsp+90h] [rbp-58h]
  __int64 v42; // [rsp+98h] [rbp-50h]
  UNICODE_STRING SourceString; // [rsp+A0h] [rbp-48h] BYREF

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
    UserSessionState = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, (_DWORD)a2, a3);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      31,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v13 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v13 >= 0 )
  {
    v15 = (struct RawInputManagerObject *)Object;
    v42 = (__int64)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v15 + 81) || *((_BYTE *)v15 + 82) )
    {
      v13 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v24 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v28 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17) + 19368);
      v35 = 33;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v15 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        v41 = 0LL;
        DestinationString = 0LL;
        if ( a4 )
        {
          v39 = 0LL;
          LODWORD(v39) = RtlReadULongFromUser(a2, v18);
          ULong64FromUser = RtlReadULong64FromUser(&a2->Buffer);
          *((_QWORD *)&v39 + 1) = ULong64FromUser;
          SourceString = (UNICODE_STRING)v39;
          if ( (ULong64FromUser & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v23 = ULong64FromUser + (unsigned __int16)v39 + 2LL;
          if ( v23 <= ULong64FromUser || v23 >= MmUserProbeAddress )
            ExRaiseAccessViolation();
          if ( (unsigned __int16)v39 > WORD1(v39) || (v39 & 1) != 0 )
          {
            if ( (v39 & 1) != 0 )
            {
              LODWORD(v36) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 921);
            }
            ExRaiseAccessViolation();
          }
          DestinationString.MaximumLength = v39;
          DestinationString.Length = v39;
          DestinationString.Buffer = (PWSTR)Win32AllocPoolZInitImpl(256LL, (unsigned __int16)v39, 0x706D7452u);
          if ( DestinationString.Buffer )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            p_DestinationString = &DestinationString;
            v41 = &DestinationString;
          }
          else
          {
            v13 = -1073741801;
            v38 = -1073741801;
          }
        }
        else
        {
          p_DestinationString = a2;
        }
        if ( v13 >= 0 )
        {
          v36 = 0LL;
          v13 = RIMCreateDev(v15, a3, p_DestinationString, 1, 0, 0LL, &v36);
          if ( v13 >= 0 )
          {
            *(_DWORD *)(v36 + 168) |= 1u;
            v13 = rimOnPnpArrived((__int64)v15, v36, (void *)0xFFFFFFFFFFFFFFFFLL);
            if ( v13 >= 0 )
            {
              if ( a4 )
                RtlWriteULong64ToUser(a5, *(_QWORD *)(v36 + 16));
              else
                *a5 = *(_QWORD *)(v36 + 16);
            }
            if ( v13 < 0 )
              RIMFreeDev(v15, (struct RIMDEV *)v36);
          }
        }
        if ( DestinationString.Buffer )
          GreDeleteFastMutex((char *)DestinationString.Buffer, v18, v19, v20);
        goto LABEL_37;
      }
      v13 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v24 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v28 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v18, v19) + 19368);
      v35 = 32;
    }
    LOBYTE(v27) = v25;
    LOBYTE(v26) = v24;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v27,
      v28,
      3,
      1,
      v35,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
LABEL_37:
    RIMUnlockExclusive(v42);
    ObfDereferenceObject(v15);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v29 = 0;
  }
  v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v14);
    LOBYTE(v32) = v30;
    LOBYTE(v33) = v29;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v33,
      v32,
      *(_QWORD *)(v31 + 19368),
      4,
      1,
      34,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v13);
  }
  return (unsigned int)v13;
}

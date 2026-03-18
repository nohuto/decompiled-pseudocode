/*
 * XREFs of RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D9BA0
 * Callers:
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x140210230 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     DeviceTypeToRimInputType @ 0x14002CFC0 (DeviceTypeToRimInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x140033D40 (rimDoRimDevChange.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1401D5288 (RIMFreeDev.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
        char *a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        void *a4,
        int a5,
        _QWORD *a6)
{
  void *v7; // rdx
  char v8; // si
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  char v13; // si
  bool v14; // r14
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v19; // rdx
  int v20; // esi
  struct RawInputManagerObject *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // ecx
  WCHAR *Buffer; // rax
  ULONG64 v26; // r8
  _QWORD *v27; // r8
  char v28; // r15
  bool v29; // r12
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r9
  char v33; // r14
  bool v34; // r15
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  __int16 v38; // [rsp+30h] [rbp-98h]
  __int64 v39; // [rsp+58h] [rbp-70h] BYREF
  PVOID Object; // [rsp+60h] [rbp-68h] BYREF
  const UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-58h] BYREF
  UNICODE_STRING SourceString; // [rsp+80h] [rbp-48h] BYREF
  char *v44; // [rsp+D0h] [rbp+8h]

  v44 = a1;
  Object = 0LL;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      35,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
    a1 = v44;
  }
  if ( !a4 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 19336),
        4,
        1,
        36,
        (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
        13);
    }
    return 3221225485LL;
  }
  v20 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v20 >= 0 )
  {
    v21 = (struct RawInputManagerObject *)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v21 + 81) || *((_BYTE *)v21 + 82) )
    {
      v20 = -1073741637;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v28 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v28 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      v32 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v22) + 19336);
      v38 = 38;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v21 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a5 )
        {
          p_DestinationString = a2;
LABEL_39:
          if ( v20 >= 0 )
          {
            v39 = 0LL;
            v20 = RIMCreateDev(v21, a3, p_DestinationString, 1, 0, 0LL, &v39);
            if ( v20 >= 0 )
            {
              *(_DWORD *)(v39 + 168) |= 1u;
              v20 = rimOnPnpArrived((__int64)v21, v39, a4);
              if ( v20 >= 0 )
              {
                rimDoRimDevChange((__int64)v21, v39, 2u);
                v27 = a6;
                if ( a6 )
                {
                  if ( a5 )
                  {
                    if ( (unsigned __int64)a6 >= MmUserProbeAddress )
                      v27 = (_QWORD *)MmUserProbeAddress;
                    *v27 = *(_QWORD *)(v39 + 16);
                  }
                  else
                  {
                    *a6 = *(_QWORD *)(v39 + 16);
                  }
                }
              }
              if ( v20 < 0 )
                RIMFreeDev(v21, (struct RIMDEV *)v39);
            }
          }
          if ( DestinationString.Buffer )
            GreDeleteFastMutex((char *)DestinationString.Buffer);
          goto LABEL_67;
        }
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (const UNICODE_STRING *)MmUserProbeAddress;
        v24 = *(_DWORD *)&a2->Length;
        LODWORD(v39) = v24;
        *(_DWORD *)&SourceString.Length = v24;
        Buffer = a2->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v26 = (ULONG64)Buffer + (unsigned __int16)v24 + 2;
        if ( v26 <= (unsigned __int64)Buffer || v26 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v24 > WORD1(v39) )
        {
          if ( (v24 & 1) == 0 )
            goto LABEL_37;
        }
        else if ( (v24 & 1) == 0 )
        {
          DestinationString.MaximumLength = v24;
          DestinationString.Length = v24;
          DestinationString.Buffer = (PWSTR)Win32AllocPoolZInitImpl(256LL, (unsigned __int16)v24, 0x706D7452u);
          if ( DestinationString.Buffer )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            p_DestinationString = &DestinationString;
          }
          else
          {
            v20 = -1073741801;
          }
          v21 = (struct RawInputManagerObject *)Object;
          goto LABEL_39;
        }
        LODWORD(v39) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1079);
LABEL_37:
        ExRaiseAccessViolation();
      }
      v20 = -1073741637;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v28 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v28 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      v32 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v23) + 19336);
      v38 = 37;
    }
    LOBYTE(v31) = v29;
    LOBYTE(v30) = v28;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v30,
      v31,
      v32,
      3,
      1,
      v38,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
LABEL_67:
    RIMUnlockExclusive((__int64)v21 + 104);
    ObfDereferenceObject(v21);
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v33 = 0;
  }
  v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
    LOBYTE(v36) = v34;
    LOBYTE(v37) = v33;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v37,
      v36,
      *(_QWORD *)(v35 + 19336),
      4,
      1,
      39,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v20);
  }
  return (unsigned int)v20;
}

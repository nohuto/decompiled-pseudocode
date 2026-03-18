/*
 * XREFs of RIMAddInjectionDeviceOfType @ 0x1401D8A10
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1401E90CC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1401E9474 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     DeviceTypeToRimInputType @ 0x14002CFC0 (DeviceTypeToRimInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1401D5288 (RIMFreeDev.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall RIMAddInjectionDeviceOfType(
        char *a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
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
  PVOID v21; // r14
  char *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rdx
  _QWORD *v25; // r12
  unsigned int v26; // ecx
  ULONG64 v27; // rax
  int v28; // ecx
  WCHAR *v29; // rax
  ULONG64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  char v33; // r15
  bool v34; // r12
  int v35; // edx
  int v36; // r8d
  __int64 v37; // r9
  char v38; // si
  bool v39; // r15
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  char v43; // si
  bool v44; // r15
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  __int64 v48; // rdx
  __int64 v49; // rdx
  char v50; // r14
  bool v51; // r15
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  __int16 v55; // [rsp+30h] [rbp-178h]
  _BYTE v56[4]; // [rsp+50h] [rbp-158h] BYREF
  int v57; // [rsp+54h] [rbp-154h]
  int v58; // [rsp+58h] [rbp-150h]
  __int64 v59; // [rsp+60h] [rbp-148h] BYREF
  int v60; // [rsp+68h] [rbp-140h]
  PVOID Object; // [rsp+70h] [rbp-138h] BYREF
  const UNICODE_STRING *p_DestinationString; // [rsp+78h] [rbp-130h]
  __int64 v63; // [rsp+80h] [rbp-128h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-120h] BYREF
  const UNICODE_STRING *v65; // [rsp+98h] [rbp-110h]
  _QWORD *v66; // [rsp+A0h] [rbp-108h]
  __int64 v67; // [rsp+A8h] [rbp-100h]
  _QWORD *v68; // [rsp+B0h] [rbp-F8h]
  _QWORD *v69; // [rsp+B8h] [rbp-F0h]
  UNICODE_STRING SourceString; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v71[18]; // [rsp+D0h] [rbp-D8h] BYREF

  v63 = a4;
  v60 = a3;
  v65 = a2;
  LODWORD(v59) = a3;
  v67 = a4;
  v66 = a6;
  v68 = a6;
  v69 = a6;
  Object = 0LL;
  memset(v71, 0, sizeof(v71));
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      40,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  if ( !a4 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 19336),
        3,
        1,
        41,
        (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
    }
    return 3221225485LL;
  }
  if ( a5 )
  {
    v57 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1217);
  }
  v20 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  v58 = v20;
  if ( v20 >= 0 )
  {
    v21 = Object;
    v22 = (char *)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v21 + 81) )
    {
      if ( !*((_BYTE *)v21 + 82) )
      {
        v20 = -1073741637;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v33 = 0;
        }
        v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v33 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_91;
        v37 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v23) + 19336);
        v55 = 45;
        goto LABEL_90;
      }
    }
    else if ( !*((_BYTE *)v21 + 82) )
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v60) & *((_DWORD *)v21 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a5 )
        {
          p_DestinationString = v65;
          *(_OWORD *)v71 = *(_OWORD *)v63;
          *(_OWORD *)&v71[2] = *(_OWORD *)(v63 + 16);
          *(_OWORD *)&v71[4] = *(_OWORD *)(v63 + 32);
          *(_OWORD *)&v71[6] = *(_OWORD *)(v63 + 48);
          *(_OWORD *)&v71[8] = *(_OWORD *)(v63 + 64);
          *(_OWORD *)&v71[10] = *(_OWORD *)(v63 + 80);
          *(_OWORD *)&v71[12] = *(_OWORD *)(v63 + 96);
          *(_OWORD *)&v71[14] = *(_OWORD *)(v63 + 112);
          *(_OWORD *)&v71[16] = *(_OWORD *)(v63 + 128);
          v25 = v66;
          v26 = v60;
LABEL_41:
          if ( v20 >= 0 )
          {
            v59 = 0LL;
            v20 = RIMCreateDev((struct RawInputManagerObject *)v21, v26, p_DestinationString, 0, 1, (__int64)v71, &v59);
            v58 = v20;
            if ( !a5 )
              *(_DWORD *)(v63 + 136) = v71[17];
            if ( v20 >= 0 )
            {
              if ( a5 )
              {
                if ( (unsigned __int64)v25 >= MmUserProbeAddress )
                  v25 = (_QWORD *)MmUserProbeAddress;
                *v25 = *(_QWORD *)(v59 + 16);
                v31 = v59;
              }
              else
              {
                v31 = v59;
                if ( (v71[2] & 1) != 0 )
                  v32 = *(_QWORD *)(v59 + 24);
                else
                  v32 = *(_QWORD *)(v59 + 16);
                *v69 = v32;
              }
              if ( *((_QWORD *)v21 + 104) || *((_DWORD *)v21 + 264) )
                *(_DWORD *)(v31 + 168) |= 0x80000u;
            }
          }
          if ( DestinationString.Buffer )
            GreDeleteFastMutex((char *)DestinationString.Buffer);
          goto LABEL_91;
        }
        v27 = (ULONG64)v65;
        if ( (unsigned __int64)v65 >= MmUserProbeAddress )
          v27 = MmUserProbeAddress;
        v28 = *(_DWORD *)v27;
        v57 = v28;
        *(_DWORD *)&SourceString.Length = v28;
        v29 = *(WCHAR **)(v27 + 8);
        SourceString.Buffer = v29;
        if ( ((unsigned __int8)v29 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v30 = (ULONG64)v29 + (unsigned __int16)v28 + 2;
        if ( v30 <= (unsigned __int64)v29 || v30 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v28 > HIWORD(v57) )
        {
          if ( (v28 & 1) == 0 )
            goto LABEL_39;
        }
        else if ( (v28 & 1) == 0 )
        {
          DestinationString.MaximumLength = v28;
          DestinationString.Length = v28;
          DestinationString.Buffer = (PWSTR)Win32AllocPoolZInitImpl(256LL, (unsigned __int16)v28, 0x706D7452u);
          if ( DestinationString.Buffer )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            p_DestinationString = &DestinationString;
            v20 = v58;
          }
          else
          {
            v20 = -1073741801;
            v58 = -1073741801;
          }
          v21 = Object;
          v25 = v66;
          v26 = v60;
          goto LABEL_41;
        }
        v57 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1253);
LABEL_39:
        ExRaiseAccessViolation();
      }
      v20 = -1073741637;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v33 = 0;
      }
      v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v33 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_91;
      v37 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v24) + 19336);
      v55 = 42;
LABEL_90:
      LOBYTE(v36) = v34;
      LOBYTE(v35) = v33;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v36,
        v37,
        3,
        1,
        v55,
        (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
LABEL_91:
      RIMUnlockExclusive((__int64)v21 + 104);
      ObfDereferenceObject(v21);
      goto LABEL_93;
    }
    v21 = Object;
    if ( KeGetCurrentThread() == *((struct _KTHREAD **)Object + 5) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v38 = 0;
      }
      v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v40 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
        LOBYTE(v41) = v39;
        LOBYTE(v42) = v38;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v42,
          v41,
          *(_QWORD *)(v40 + 19336),
          3,
          1,
          43,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
      v20 = -1073741637;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v43 = 0;
      }
      v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v45 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
        LOBYTE(v46) = v44;
        LOBYTE(v47) = v43;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v47,
          v46,
          *(_QWORD *)(v45 + 19336),
          3,
          1,
          44,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
      ++*((_DWORD *)v21 + 276);
      RIMUnlockExclusive((__int64)v22);
      LOBYTE(v48) = 1;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v56, v48);
      KeWaitForSingleObject(*((PVOID *)v21 + 137), UserRequest, 0, 0, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v56, v49);
      RIMLockExclusive((__int64)v22);
      v20 = -2147483631;
    }
    goto LABEL_91;
  }
  v20 = -1073741816;
LABEL_93:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v50 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v50 = 0;
  }
  v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v52 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
    LOBYTE(v53) = v51;
    LOBYTE(v54) = v50;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v54,
      v53,
      *(_QWORD *)(v52 + 19336),
      4,
      1,
      46,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v20);
  }
  return (unsigned int)v20;
}

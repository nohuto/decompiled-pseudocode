/*
 * XREFs of RIMAddInjectionDeviceOfType @ 0x1401FFA30
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1402083FC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1402087A4 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 *     RIMFreeDev @ 0x140092664 (RIMFreeDev.c)
 *     DeviceTypeToRimInputType @ 0x140092D60 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall RIMAddInjectionDeviceOfType(
        char *a1,
        struct _UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  int v7; // r8d
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
  int v19; // edx
  int v20; // esi
  int v21; // r8d
  PVOID v22; // r14
  char *v23; // r12
  int v24; // edx
  int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _UNICODE_STRING *p_DestinationString; // r15
  __int64 v30; // r12
  __int64 v31; // rdx
  unsigned int v32; // eax
  struct _UNICODE_STRING *v33; // r12
  unsigned __int64 ULong64FromUser; // rax
  ULONG64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  char v38; // r15
  bool v39; // r12
  int v40; // edx
  int v41; // r8d
  __int64 v42; // r9
  char v43; // si
  bool v44; // r15
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  char v48; // si
  bool v49; // r15
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // edx
  int v57; // r8d
  char v58; // r14
  bool v59; // r15
  __int64 v60; // rax
  int v61; // r8d
  int v62; // edx
  __int16 v63; // [rsp+30h] [rbp-188h]
  _BYTE v64[4]; // [rsp+50h] [rbp-168h] BYREF
  int v65; // [rsp+54h] [rbp-164h]
  __int64 v66; // [rsp+58h] [rbp-160h] BYREF
  int v67; // [rsp+60h] [rbp-158h]
  PVOID Object; // [rsp+68h] [rbp-150h] BYREF
  int v69; // [rsp+70h] [rbp-148h]
  char *v70; // [rsp+78h] [rbp-140h]
  UNICODE_STRING v71; // [rsp+80h] [rbp-138h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-128h] BYREF
  struct _UNICODE_STRING *v73; // [rsp+A0h] [rbp-118h]
  __int64 v74; // [rsp+A8h] [rbp-110h]
  struct _UNICODE_STRING *v75; // [rsp+B0h] [rbp-108h]
  _QWORD *v76; // [rsp+B8h] [rbp-100h]
  __int64 v77; // [rsp+C0h] [rbp-F8h]
  _QWORD *v78; // [rsp+C8h] [rbp-F0h]
  UNICODE_STRING SourceString; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v80[18]; // [rsp+E0h] [rbp-D8h] BYREF

  v74 = a4;
  v67 = a3;
  v73 = a2;
  v70 = a1;
  v76 = a6;
  LODWORD(v66) = a3;
  v77 = a4;
  v78 = a6;
  Object = 0LL;
  memset(v80, 0, 0x88uLL);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_GLOBAL_Control, v7);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      40,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  if ( !a4 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_GLOBAL_Control, v7);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 19368),
        3,
        1,
        41,
        (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
    }
    return 3221225485LL;
  }
  if ( a5 )
  {
    v65 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1217);
  }
  v20 = RawInputManagerObjectResolveHandle(v70, 3u, 0, &Object);
  if ( v20 >= 0 )
  {
    v22 = Object;
    v23 = (char *)Object + 104;
    v70 = (char *)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v22 + 81) )
    {
      if ( !*((_BYTE *)v22 + 82) )
      {
        v20 = -1073741637;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v38 = 0;
        }
        v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v38 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_87;
        v42 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v24, v25) + 19368);
        v63 = 45;
        goto LABEL_86;
      }
    }
    else if ( !*((_BYTE *)v22 + 82) )
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v67) & *((_DWORD *)v22 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        v75 = 0LL;
        DestinationString = 0LL;
        if ( a5 )
        {
          v71 = 0LL;
          v33 = v73;
          *(_DWORD *)&v71.Length = RtlReadULongFromUser(v73, v26);
          ULong64FromUser = RtlReadULong64FromUser(&v33->Buffer);
          v71.Buffer = (PWSTR)ULong64FromUser;
          SourceString = v71;
          if ( (ULong64FromUser & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v35 = ULong64FromUser + v71.Length + 2LL;
          if ( v35 <= ULong64FromUser || v35 >= MmUserProbeAddress )
            ExRaiseAccessViolation();
          if ( v71.Length > v71.MaximumLength || (v71.Length & 1) != 0 )
          {
            if ( (v71.Length & 1) != 0 )
            {
              v65 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1253);
            }
            ExRaiseAccessViolation();
          }
          DestinationString.MaximumLength = v71.Length;
          DestinationString.Length = v71.Length;
          DestinationString.Buffer = (PWSTR)Win32AllocPoolZInitImpl(256LL, v71.Length, 0x706D7452u);
          if ( DestinationString.Buffer )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            p_DestinationString = &DestinationString;
            v75 = &DestinationString;
          }
          else
          {
            v20 = -1073741801;
            v69 = -1073741801;
          }
          v30 = v74;
          v32 = v67;
        }
        else
        {
          p_DestinationString = v73;
          v30 = v74;
          *(_OWORD *)v80 = *(_OWORD *)v74;
          *(_OWORD *)&v80[2] = *(_OWORD *)(v74 + 16);
          *(_OWORD *)&v80[4] = *(_OWORD *)(v74 + 32);
          *(_OWORD *)&v80[6] = *(_OWORD *)(v74 + 48);
          *(_OWORD *)&v80[8] = *(_OWORD *)(v74 + 64);
          *(_OWORD *)&v80[10] = *(_OWORD *)(v74 + 80);
          *(_OWORD *)&v80[12] = *(_OWORD *)(v74 + 96);
          v31 = 128LL;
          *(_OWORD *)&v80[14] = *(_OWORD *)(v74 + 112);
          v80[16] = *(_QWORD *)(v74 + 128);
          v32 = v67;
        }
        if ( v20 >= 0 )
        {
          v66 = 0LL;
          v20 = RIMCreateDev((struct RawInputManagerObject *)v22, v32, p_DestinationString, 0, 1, (__int64)v80, &v66);
          if ( !a5 )
            *(_DWORD *)(v30 + 128) = v80[16];
          if ( v20 >= 0 )
          {
            if ( a5 )
            {
              RtlWriteULong64ToUser(v78, *(_QWORD *)(v66 + 16));
              v36 = v66;
            }
            else
            {
              v36 = v66;
              v37 = (v80[2] & 1) != 0 ? *(_QWORD *)(v66 + 24) : *(_QWORD *)(v66 + 16);
              v31 = (__int64)v76;
              *v76 = v37;
            }
            if ( *((_QWORD *)v22 + 104) || *((_DWORD *)v22 + 264) )
              *(_DWORD *)(v36 + 168) |= 0x80000u;
          }
        }
        if ( DestinationString.Buffer )
          GreDeleteFastMutex((char *)DestinationString.Buffer, v31, v27, v28);
        goto LABEL_87;
      }
      v20 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v38 = 0;
      }
      v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v38 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_87;
      v42 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v26, v27) + 19368);
      v63 = 42;
LABEL_86:
      LOBYTE(v41) = v39;
      LOBYTE(v40) = v38;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v40,
        v41,
        v42,
        3,
        1,
        v63,
        (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
LABEL_87:
      RIMUnlockExclusive((__int64)v70);
      ObfDereferenceObject(v22);
      goto LABEL_89;
    }
    if ( KeGetCurrentThread() == *((struct _KTHREAD **)v22 + 5) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v43 = 0;
      }
      v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v45 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v24, v25);
        LOBYTE(v46) = v44;
        LOBYTE(v47) = v43;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v47,
          v46,
          *(_QWORD *)(v45 + 19368),
          3,
          1,
          43,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
      }
      v20 = -1073741637;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v48 = 0;
      }
      v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v50 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v24, v25);
        LOBYTE(v51) = v49;
        LOBYTE(v52) = v48;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v52,
          v51,
          *(_QWORD *)(v50 + 19368),
          3,
          1,
          44,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
      }
      ++*((_DWORD *)v22 + 276);
      RIMUnlockExclusive((__int64)v23);
      LOBYTE(v53) = 1;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v64, v53, v54, v55);
      KeWaitForSingleObject(*((PVOID *)v22 + 137), UserRequest, 0, 0, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v64, v56, v57);
      RIMLockExclusive((__int64)v23);
      v20 = -2147483631;
    }
    goto LABEL_87;
  }
  v20 = -1073741816;
LABEL_89:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v58 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v58 = 0;
  }
  v59 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v58 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v60 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v21);
    LOBYTE(v61) = v59;
    LOBYTE(v62) = v58;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v62,
      v61,
      *(_QWORD *)(v60 + 19368),
      4,
      1,
      46,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v20);
  }
  return (unsigned int)v20;
}

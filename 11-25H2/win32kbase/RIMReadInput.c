/*
 * XREFs of RIMReadInput @ 0x140034A90
 * Callers:
 *     NtRIMReadInput @ 0x14012BCE0 (NtRIMReadInput.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x14014A440 (-Read@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     ?ReadInput@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z @ 0x140035188 (-ReadInput@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x140035294 (rimHandleAnyPnpRemovePendingDevices.c)
 *     rimConvertUserToKernelEventHandle @ 0x14003557C (rimConvertUserToKernelEventHandle.c)
 *     rimIssueReads @ 0x14003564C (rimIssueReads.c)
 *     rimCompleteReads @ 0x1400357E4 (rimCompleteReads.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqq @ 0x140036410 (WPP_RECORDER_AND_TRACE_SF_qqqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall RIMReadInput(
        char *Handle,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const struct RawInputManagerObject *v12; // rsi
  bool v13; // bl
  bool v14; // di
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  NTSTATUS v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  bool v22; // bp
  bool v23; // r14
  char CurrentThread; // bl
  char v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  bool v29; // bl
  bool v30; // di
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  bool v35; // bl
  bool v36; // di
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  bool v40; // r14
  bool v41; // r15
  int v42; // edx
  int v43; // r8d
  __int64 v44; // r9
  bool v45; // bl
  bool v46; // di
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  int HandleInformation; // [rsp+28h] [rbp-80h]
  __int16 v51; // [rsp+30h] [rbp-78h]
  char v52; // [rsp+40h] [rbp-68h]
  char v53; // [rsp+48h] [rbp-60h]
  char v54; // [rsp+50h] [rbp-58h]
  char v55; // [rsp+58h] [rbp-50h]
  PVOID Object; // [rsp+60h] [rbp-48h] BYREF
  HANDLE Handlea; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v58; // [rsp+C8h] [rbp+20h]

  v58 = a4;
  v12 = 0LL;
  v13 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(Handle, a2);
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      82,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v18 = -1073741816;
    goto LABEL_27;
  }
  Object = 0LL;
  v18 = ObReferenceObjectByHandle(Handle, 3u, ExRawInputManagerObjectType, 1, &Object, 0LL);
  if ( v18 >= 0 )
  {
    if ( *((_DWORD *)Object + 1) == 1 )
    {
      v12 = (const struct RawInputManagerObject *)Object;
    }
    else
    {
      v18 = -1073741788;
      ObfDereferenceObject(Object);
    }
  }
  if ( v18 >= 0 )
  {
    InputTraceLogging::RIM::ReadInput(v12);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v12 + 104, 0LL);
    *((_QWORD *)v12 + 14) = KeGetCurrentThread();
    if ( *((_BYTE *)v12 + 81) || *((_BYTE *)v12 + 82) )
    {
      v18 = -1073741637;
      v45 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v47 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
        LOBYTE(v48) = v46;
        LOBYTE(v49) = v45;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v49,
          v48,
          *(_QWORD *)(v47 + 19336),
          3,
          1,
          87,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
      goto LABEL_26;
    }
    rimHandleAnyPnpRemovePendingDevices(v12);
    Handlea = 0LL;
    v18 = rimConvertUserToKernelEventHandle(a4, &Handlea);
    if ( v18 < 0 )
    {
      v35 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
        LOBYTE(v38) = v36;
        LOBYTE(v39) = v35;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(v37 + 19336),
          3,
          1,
          86,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
          a4);
      }
      goto LABEL_26;
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v12 + 760, 0LL);
    *((_QWORD *)v12 + 96) = KeGetCurrentThread();
    if ( *((_QWORD *)v12 + 104) )
      rimIssueReads(v12);
    if ( !*((_BYTE *)v12 + 776) )
    {
      *((_QWORD *)v12 + 105) = Handlea;
      *((_QWORD *)v12 + 108) = a6;
      *((_QWORD *)v12 + 107) = a7;
      *((_QWORD *)v12 + 109) = a8;
      *((_DWORD *)v12 + 212) = a5;
      *((_BYTE *)v12 + 776) = 1;
      *((_QWORD *)v12 + 110) = a2;
      *((_DWORD *)v12 + 222) = a3;
      v22 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        CurrentThread = (unsigned __int8)KeGetCurrentThread();
        v25 = (char)Handlea;
        v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
        LOBYTE(v27) = v23;
        LOBYTE(v28) = v22;
        WPP_RECORDER_AND_TRACE_SF_qqqq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 19336),
          4,
          HandleInformation,
          83,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
          (char)v12,
          v58,
          v25,
          CurrentThread);
      }
      rimIssueReads(v12);
      v18 = rimCompleteReads(v12);
      goto LABEL_25;
    }
    if ( *((_QWORD *)v12 + 104) )
    {
      v40 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v40 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_63;
      v55 = (unsigned __int8)KeGetCurrentThread();
      v54 = (char)Handlea;
      v44 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v21) + 19336);
      v53 = v58;
      v52 = (char)v12;
      v51 = 85;
    }
    else
    {
      v18 = -1073740682;
      v40 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v40 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_63;
      v55 = (unsigned __int8)KeGetCurrentThread();
      v54 = (char)Handlea;
      v44 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v21) + 19336);
      v53 = v58;
      v52 = (char)v12;
      v51 = 84;
    }
    LOBYTE(v43) = v41;
    LOBYTE(v42) = v40;
    WPP_RECORDER_AND_TRACE_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v42,
      v43,
      v44,
      3,
      HandleInformation,
      v51,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v52,
      v53,
      v54,
      v55);
LABEL_63:
    ZwClose(Handlea);
LABEL_25:
    *((_QWORD *)v12 + 96) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v12 + 760, 0LL);
    KeLeaveCriticalRegion();
LABEL_26:
    *((_QWORD *)v12 + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v12 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v12);
  }
LABEL_27:
  v29 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v32) = v30;
    LOBYTE(v33) = v29;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v33,
      v32,
      *(_QWORD *)(v31 + 19336),
      4,
      1,
      88,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v18);
  }
  return (unsigned int)v18;
}

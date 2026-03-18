/*
 * XREFs of ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140061060
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140060B24 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1400D4990 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x140215150 (-GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_N1@Z @ 0x1402161B4 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_N1@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x14004C4E4 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x140063230 (-CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x140066230 (EtwTraceBeginPointerFrameCommit.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x140066770 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     IsTouchpadDevice @ 0x14006E7CC (IsTouchpadDevice.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentLock @ 0x14009B8F0 (HMAssignmentLock.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1400F3F90 (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x14013A620 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x14013A82C (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetResetLastSeenFrameId @ 0x1402282E8 (ApiSetResetLastSeenFrameId.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CommitRimCompleteFrame(
        PERESOURCE *this,
        struct RIMCOMPLETEFRAME *a2,
        char a3,
        char a4)
{
  struct RIMCOMPLETEFRAME *v5; // r14
  char v7; // di
  char v8; // r8
  __int64 v9; // rdx
  char *v10; // rcx
  KPROCESSOR_MODE v11; // r8
  int v12; // eax
  char v13; // r12
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rsi
  struct CPointerQFrame *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // r8d
  int v26; // r13d
  int v27; // ecx
  int v28; // r8d
  _DWORD *v29; // rdx
  unsigned int v30; // r13d
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r13
  void *v39; // rax
  __int64 v40; // rbx
  _OWORD *v41; // rcx
  int v42; // ebx
  char v43; // bl
  bool v44; // si
  CTouchProcessor *v45; // rcx
  char v46; // bl
  bool v47; // si
  __int64 v48; // rax
  int v49; // edx
  __int64 UserSessionState; // rax
  int v51; // edx
  char v52; // bl
  bool v53; // si
  __int64 v54; // rax
  int v55; // edx
  char v56; // bl
  bool v57; // si
  __int64 v58; // rax
  int v59; // edx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  char v63; // bl
  bool v64; // si
  __int64 v65; // rax
  int v66; // edx
  __int64 v67; // rax
  CTouchProcessor *v68; // rcx
  bool v69; // bl
  bool v70; // r15
  __int64 v71; // rax
  int v72; // edx
  __int64 v73; // rbx
  char *v74; // rcx
  char *v75; // r15
  CTouchProcessor *v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  char v80; // bl
  bool v81; // si
  __int64 v82; // rax
  int v83; // r8d
  int v84; // edx
  __int16 v85; // [rsp+38h] [rbp-89h]
  __int16 v86; // [rsp+38h] [rbp-89h]
  struct RIMDEV *v87; // [rsp+58h] [rbp-69h]
  _QWORD v88[2]; // [rsp+68h] [rbp-59h] BYREF
  PERESOURCE *v89[7]; // [rsp+78h] [rbp-49h] BYREF
  PERESOURCE *v90[13]; // [rsp+B0h] [rbp-11h] BYREF
  PVOID Object; // [rsp+128h] [rbp+67h] BYREF
  char v92; // [rsp+138h] [rbp+77h]
  char v93; // [rsp+140h] [rbp+7Fh]

  v93 = a4;
  v92 = a3;
  v5 = a2;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v8 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v8 = 0;
  }
  if ( (_BYTE)a2 || v8 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      v8,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      153,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v89, this + 4, 0LL);
  if ( !tagDomLock::IsLockedShared(this + 4) )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6261LL);
  }
  if ( !a4 )
  {
    if ( !*((_DWORD *)this + 40) )
      goto LABEL_11;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v43 = 0;
    }
    v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v51) = v43;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v51,
        v44,
        *(_QWORD *)(UserSessionState + 69136),
        3,
        4,
        156,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v45 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( !(_BYTE)v9 && !v7 )
      goto LABEL_65;
    v85 = 157;
LABEL_205:
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v45 + 3),
      v9,
      v7,
      *((_QWORD *)v45 + 8),
      5,
      4,
      v85,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    goto LABEL_65;
  }
  if ( *((_DWORD *)this + 41) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v46 = 0;
    }
    v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v48 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v49) = v46;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v49,
        v47,
        *(_QWORD *)(v48 + 69136),
        3,
        4,
        154,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v45 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( !(_BYTE)v9 && !v7 )
      goto LABEL_65;
    v85 = 155;
    goto LABEL_205;
  }
LABEL_11:
  v10 = (char *)*((_QWORD *)v5 + 4);
  v11 = *((_DWORD *)v5 + 48) == 0;
  Object = 0LL;
  v12 = RawInputManagerDeviceObjectResolveHandle(v10, 3u, v11, &Object);
  v13 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v80 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v80 = 0;
    }
    v81 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v80 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v82 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v83) = v81;
      LOBYTE(v84) = v80;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v84,
        v83,
        *(_QWORD *)(v82 + 69136),
        2,
        4,
        158,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids,
        v13);
    }
    v45 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( !(_BYTE)v9 && !v7 )
      goto LABEL_65;
    v85 = 159;
    goto LABEL_205;
  }
  v14 = 0LL;
  if ( Object )
    v14 = *((_QWORD *)Object + 9);
  ObfDereferenceObject(Object);
  LOBYTE(v15) = 19;
  v87 = (struct RIMDEV *)HMValidateHandleNoSecure(v14, v15);
  if ( !v87 )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6314LL);
  }
  if ( !*((_DWORD *)v5 + 6) )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6317LL);
  }
  EtwTraceBeginPointerFrameCommit(0LL, *((unsigned int *)v5 + 6));
  v16 = Win32AllocPoolZInitImpl(256LL, 0x108uLL, 0x66707355u);
  if ( !v16 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v52 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v52 = 0;
    }
    v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v54 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v55) = v52;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v55,
        v53,
        *(_QWORD *)(v54 + 69136),
        2,
        4,
        160,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v45 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( !(_BYTE)v9 && !v7 )
      goto LABEL_65;
    v85 = 161;
    goto LABEL_205;
  }
  v17 = CTouchProcessor::AllocPointerQFrameList((CTouchProcessor *)this, *((_DWORD *)v5 + 6));
  *(_QWORD *)(v16 + 248) = v17;
  if ( !v17 )
  {
    GreDeleteFastMutex((char *)v16, v18, v19, v20);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v56 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v56 = 0;
    }
    v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v58 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v59) = v56;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v59,
        v57,
        *(_QWORD *)(v58 + 69136),
        2,
        4,
        162,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v45 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( !(_BYTE)v9 && !v7 )
      goto LABEL_65;
    v85 = 163;
    goto LABEL_205;
  }
  v21 = 480LL * *((unsigned int *)v5 + 6);
  if ( v21 <= 0xFFFFFFFF )
    *(_QWORD *)(v16 + 240) = Win32AllocPoolZInitImpl(256LL, (unsigned int)v21, 0x65707355u);
  if ( !*(_QWORD *)(v16 + 240) )
  {
    CTouchProcessor::FreePointerQFrameList(
      (CTouchProcessor *)v21,
      *(struct CPointerQFrame **)(v16 + 248),
      *((_DWORD *)v5 + 6));
    GreDeleteFastMutex((char *)v16, v60, v61, v62);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v63 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v63 = 0;
    }
    v64 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v63 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v65 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v66) = v63;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v66,
        v64,
        *(_QWORD *)(v65 + 69136),
        2,
        4,
        164,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v45 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( !(_BYTE)v9 && !v7 )
      goto LABEL_65;
    v85 = 165;
    goto LABEL_205;
  }
  *(_DWORD *)(v16 + 224) = 1;
  v22 = *(_QWORD *)(W32GetUserSessionState(v21, v18, v19) + 16720);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v90,
    (PERESOURCE *)(v22 + 8),
    0LL);
  v26 = (*(_DWORD *)v22)++;
  if ( v26 == -1 )
  {
    *(_DWORD *)v22 = 1;
    v67 = W32GetUserSessionState(v24, v23, v25);
    ApiSetResetLastSeenFrameId(*(_QWORD *)(v67 + 19176));
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v90, v23);
  *(_DWORD *)(v16 + 40) = v26;
  *(_DWORD *)(v16 + 48) = *((_DWORD *)v5 + 6);
  *(_QWORD *)(v16 + 64) = v14;
  *(_OWORD *)(v16 + 72) = *((_OWORD *)v5 + 3);
  *(_OWORD *)(v16 + 88) = *((_OWORD *)v5 + 4);
  *(_OWORD *)(v16 + 104) = *((_OWORD *)v5 + 5);
  *(_OWORD *)(v16 + 120) = *((_OWORD *)v5 + 6);
  *(_OWORD *)(v16 + 136) = *((_OWORD *)v5 + 7);
  *(_OWORD *)(v16 + 152) = *((_OWORD *)v5 + 8);
  *(_OWORD *)(v16 + 168) = *((_OWORD *)v5 + 9);
  *(_OWORD *)(v16 + 184) = *((_OWORD *)v5 + 10);
  *(_OWORD *)(v16 + 200) = *((_OWORD *)v5 + 11);
  *(_QWORD *)(v16 + 216) = *(_QWORD *)(*((_QWORD *)v5 + 29) + 96LL);
  InputTraceLogging::Pointer::CommitFrame(v87, (const struct CPointerInputFrame *)v16);
  v29 = (_DWORD *)*((_QWORD *)v5 + 29);
  v30 = 0;
  for ( Object = v29; v30 < *((_DWORD *)v5 + 6); Object = (char *)Object + 192 )
  {
    v40 = 480LL * v30;
    *(_DWORD *)(*(_QWORD *)(v16 + 240) + v40 + 156) = *v29;
    v41 = (_OWORD *)(v40 + *(_QWORD *)(v16 + 240) + 160LL);
    *v41 = *(_OWORD *)(v29 + 2);
    v41[1] = *(_OWORD *)(v29 + 6);
    v41[2] = *(_OWORD *)(v29 + 10);
    v41[3] = *(_OWORD *)(v29 + 14);
    v41[4] = *(_OWORD *)(v29 + 18);
    v41[5] = *(_OWORD *)(v29 + 22);
    v41[6] = *(_OWORD *)(v29 + 26);
    v41 += 8;
    *(v41 - 1) = *(_OWORD *)(v29 + 30);
    *v41 = *(_OWORD *)(v29 + 34);
    v41[1] = *(_OWORD *)(v29 + 38);
    v41[2] = *(_OWORD *)(v29 + 42);
    *((_QWORD *)v41 + 6) = *((_QWORD *)v29 + 23);
    *(_QWORD *)(*(_QWORD *)(v16 + 240) + v40 + 184) = v14;
    CInputDest::~CInputDest((CInputDest *)(v40 + *(_QWORD *)(v16 + 240) + 352LL));
    InputTraceLogging::Pointer::CommitFramePointer(
      v87,
      (const struct CPointerInputFrame *)v16,
      (const struct tagPOINTEREVENTINT *)(v40 + *(_QWORD *)(v16 + 240) + 160LL));
    v42 = *((_DWORD *)Object + 7);
    if ( (v42 & 0x10000) != 0 || (unsigned __int8)IsTouchpadDevice(v14) && (v42 & 0x10070) != 0 )
      *((_BYTE *)this + 40) = 1;
    ++v30;
    v29 = (char *)Object + 192;
  }
  *(_DWORD *)(v16 + 56) = *((_DWORD *)v5 + 7);
  v31 = W32GetUserSessionState(v27, (_DWORD)v29, v28);
  Object = 0LL;
  *(_QWORD *)v16 = *(_QWORD *)(v31 + 3256);
  v32 = *((_QWORD *)v5 + 28);
  while ( 1 )
  {
    if ( !v32 )
    {
      v88[0] = v16 + 256;
      v88[1] = *((_QWORD *)v87 + 57);
      HMAssignmentLock(v88, 0LL);
      if ( v92
        || (CTouchProcessor::CommitInputFrame((CTouchProcessor *)this, (struct CPointerInputFrame *)v16),
            (unsigned __int8)IsTouchpadDevice(v14)) )
      {
        Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
        *(_DWORD *)(v16 + 228) |= 0x80u;
      }
      else if ( v93 )
      {
        *(_DWORD *)(v16 + 228) |= 0x40u;
        ++*((_DWORD *)this + 40);
      }
      else
      {
        ++*((_DWORD *)this + 41);
      }
      *(_QWORD *)(v16 + 32) = v16 + 24;
      *(_QWORD *)(v16 + 24) = v16 + 24;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v33) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v33) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v7 = 0;
      if ( (_BYTE)v33 || v7 )
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v33,
          v7,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          169,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v89, v33);
      return (struct CPointerInputFrame *)v16;
    }
    v38 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x64727355u);
    if ( !v38 )
      break;
    v39 = (void *)Win32AllocPoolZInitImpl(256LL, *(unsigned int *)(v32 + 4), 0x64727355u);
    *(_QWORD *)(v38 + 16) = v39;
    if ( !v39 )
    {
      v68 = WPP_GLOBAL_Control;
      v69 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v70 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v69 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v71 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v35, v36);
        v86 = 166;
LABEL_168:
        LOBYTE(v72) = v69;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v72,
          v70,
          *(_QWORD *)(v71 + 69136),
          2,
          4,
          v86,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
        goto LABEL_169;
      }
      goto LABEL_169;
    }
    *(_DWORD *)(v38 + 4) = *(_DWORD *)v32;
    *(_DWORD *)(v38 + 8) = *(_DWORD *)(v32 + 4);
    memmove(v39, *(const void **)(v32 + 8), *(unsigned int *)(v32 + 4));
    if ( Object )
      *((_QWORD *)Object + 3) = v38;
    else
      *(_QWORD *)(v16 + 232) = v38;
    v32 = *(_QWORD *)(v32 + 16);
    Object = (PVOID)v38;
  }
  v68 = WPP_GLOBAL_Control;
  v69 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v70 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v69 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v71 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v35, v36);
    v86 = 167;
    goto LABEL_168;
  }
LABEL_169:
  v73 = *(_QWORD *)(v16 + 232);
  while ( v73 )
  {
    v74 = *(char **)(v73 + 16);
    v75 = (char *)v73;
    if ( v74 )
      GreDeleteFastMutex(v74, v35, v36, v37);
    v73 = *(_QWORD *)(v73 + 24);
    GreDeleteFastMutex(v75, v35, v36, v37);
  }
  CTouchProcessor::FreePointerInfoList(v68, *(struct CPointerInfoNode **)(v16 + 240), *((_DWORD *)v5 + 6));
  CTouchProcessor::FreePointerQFrameList(v76, *(struct CPointerQFrame **)(v16 + 248), *((_DWORD *)v5 + 6));
  GreDeleteFastMutex((char *)v16, v77, v78, v79);
  v45 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v7 = 0;
  if ( (_BYTE)v9 || v7 )
  {
    v85 = 168;
    goto LABEL_205;
  }
LABEL_65:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v89, v9);
  return 0LL;
}

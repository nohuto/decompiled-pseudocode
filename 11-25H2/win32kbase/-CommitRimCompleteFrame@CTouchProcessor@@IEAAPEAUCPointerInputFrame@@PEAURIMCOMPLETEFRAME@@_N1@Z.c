/*
 * XREFs of ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140186278
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140188830 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x14018B584 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x140200300 (-GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x140207858 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x140038A90 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x140038AE4 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     IsTouchpadDevice @ 0x14006721C (IsTouchpadDevice.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1400E5958 (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 *     ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x1400E63EC (-CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1400ED090 (EtwTraceBeginPointerFrameCommit.c)
 *     HMAssignmentLock @ 0x1400F4780 (HMAssignmentLock.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x14010B3E8 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x140185D90 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x140226094 (ApiSetResetLastSeenFrameId.c)
 *     memmove @ 0x140243540 (memmove.c)
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
  char v10; // bl
  bool v11; // si
  __int64 UserSessionState; // rax
  int v13; // edx
  char v14; // bl
  bool v15; // si
  __int64 v16; // rax
  int v17; // edx
  char *v18; // rcx
  KPROCESSOR_MODE v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  char v22; // r12
  __int64 v23; // r12
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rsi
  char v27; // bl
  bool v28; // si
  __int64 v29; // rax
  int v30; // edx
  struct CPointerQFrame *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  char v34; // bl
  bool v35; // si
  __int64 v36; // rax
  int v37; // edx
  unsigned __int64 v38; // rcx
  __int64 v39; // rdx
  char v40; // bl
  bool v41; // si
  __int64 v42; // rax
  int v43; // edx
  _DWORD *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // r13d
  __int64 v48; // rax
  __int64 v49; // rcx
  _DWORD *v50; // rdx
  unsigned int v51; // r13d
  __int64 v52; // rbx
  _OWORD *v53; // rcx
  __int64 v54; // rdx
  int v55; // ebx
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // r13
  void *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rdx
  int v63; // edx
  CTouchProcessor *v64; // rcx
  bool v65; // bl
  bool v66; // r15
  __int64 v67; // rax
  int v68; // edx
  __int64 v69; // rbx
  char *v70; // rcx
  char *v71; // r15
  CTouchProcessor *v72; // rcx
  int v73; // edx
  char v75; // bl
  bool v76; // si
  __int64 v77; // rax
  int v78; // r8d
  int v79; // edx
  __int16 v80; // [rsp+38h] [rbp-89h]
  struct RIMDEV *v81; // [rsp+58h] [rbp-69h]
  _QWORD v82[2]; // [rsp+68h] [rbp-59h] BYREF
  PERESOURCE *v83[7]; // [rsp+78h] [rbp-49h] BYREF
  PERESOURCE *v84[13]; // [rsp+B0h] [rbp-11h] BYREF
  PVOID Object; // [rsp+128h] [rbp+67h] BYREF
  char v86; // [rsp+138h] [rbp+77h]
  char v87; // [rsp+140h] [rbp+7Fh]

  v87 = a4;
  v86 = a3;
  v5 = a2;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
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
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v83,
    (struct CEResourceLock *)(this + 4),
    0LL);
  if ( !tagDomLock::IsLockedShared(this + 4) )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6278LL);
  }
  if ( a4 )
  {
    if ( *((_DWORD *)this + 41) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v10 = 0;
      }
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
        LOBYTE(v13) = v10;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v11,
          *(_QWORD *)(UserSessionState + 69144),
          3,
          4,
          154,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v9) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v7 = 0;
      if ( (_BYTE)v9 || v7 )
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v9,
          v7,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          155,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      goto LABEL_195;
    }
  }
  else if ( *((_DWORD *)this + 40) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v14 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
      LOBYTE(v17) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v15,
        *(_QWORD *)(v16 + 69144),
        3,
        4,
        156,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( (_BYTE)v9 || v7 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v7,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        157,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    goto LABEL_195;
  }
  v18 = (char *)*((_QWORD *)v5 + 4);
  v19 = *((_DWORD *)v5 + 48) == 0;
  Object = 0LL;
  v20 = RawInputManagerDeviceObjectResolveHandle(v18, 3u, v19, &Object);
  v22 = v20;
  if ( v20 < 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v75 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v75 = 0;
    }
    v76 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v75 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v77 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
      LOBYTE(v78) = v76;
      LOBYTE(v79) = v75;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v79,
        v78,
        *(_QWORD *)(v77 + 69144),
        2,
        4,
        158,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids,
        v22);
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v21) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v21) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( (_BYTE)v21 || v7 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v7,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        159,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  }
  else
  {
    v23 = 0LL;
    if ( Object )
      v23 = *((_QWORD *)Object + 9);
    ObfDereferenceObject(Object);
    v81 = (struct RIMDEV *)HMValidateHandleNoSecure(v23, 19);
    if ( !v81 )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6331LL);
    }
    if ( !*((_DWORD *)v5 + 6) )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6334LL);
    }
    EtwTraceBeginPointerFrameCommit(0LL, *((_DWORD *)v5 + 6), v24);
    v26 = Win32AllocPoolZInitImpl(256LL, 0x108uLL, 0x66707355u);
    if ( v26 )
    {
      v31 = CTouchProcessor::AllocPointerQFrameList(this, *((_DWORD *)v5 + 6));
      *(_QWORD *)(v26 + 248) = v31;
      if ( v31 )
      {
        v38 = 480LL * *((unsigned int *)v5 + 6);
        if ( v38 <= 0xFFFFFFFF )
          *(_QWORD *)(v26 + 240) = Win32AllocPoolZInitImpl(256LL, (unsigned int)v38, 0x65707355u);
        if ( *(_QWORD *)(v26 + 240) )
        {
          *(_DWORD *)(v26 + 224) = 1;
          v44 = *(_DWORD **)(W32GetUserSessionState(v38, v32) + 16728);
          CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
            (CInpLockGuardExclusiveIfNeeded *)v84,
            (struct CEResourceLock *)(v44 + 2),
            0LL);
          v47 = (*v44)++;
          if ( v47 == -1 )
          {
            *v44 = 1;
            v48 = W32GetUserSessionState(v46, v45);
            ApiSetResetLastSeenFrameId(*(_QWORD *)(v48 + 19144));
          }
          CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v84);
          *(_DWORD *)(v26 + 40) = v47;
          *(_DWORD *)(v26 + 48) = *((_DWORD *)v5 + 6);
          *(_QWORD *)(v26 + 64) = v23;
          *(_OWORD *)(v26 + 72) = *((_OWORD *)v5 + 3);
          *(_OWORD *)(v26 + 88) = *((_OWORD *)v5 + 4);
          *(_OWORD *)(v26 + 104) = *((_OWORD *)v5 + 5);
          *(_OWORD *)(v26 + 120) = *((_OWORD *)v5 + 6);
          *(_OWORD *)(v26 + 136) = *((_OWORD *)v5 + 7);
          *(_OWORD *)(v26 + 152) = *((_OWORD *)v5 + 8);
          *(_OWORD *)(v26 + 168) = *((_OWORD *)v5 + 9);
          *(_OWORD *)(v26 + 184) = *((_OWORD *)v5 + 10);
          *(_OWORD *)(v26 + 200) = *((_OWORD *)v5 + 11);
          *(_QWORD *)(v26 + 216) = *(_QWORD *)(*((_QWORD *)v5 + 29) + 96LL);
          InputTraceLogging::Pointer::CommitFrame(v81, (const struct CPointerInputFrame *)v26);
          v50 = (_DWORD *)*((_QWORD *)v5 + 29);
          v51 = 0;
          for ( Object = v50; v51 < *((_DWORD *)v5 + 6); Object = (char *)Object + 192 )
          {
            v52 = 480LL * v51;
            *(_DWORD *)(*(_QWORD *)(v26 + 240) + v52 + 156) = *v50;
            v53 = (_OWORD *)(v52 + *(_QWORD *)(v26 + 240) + 160LL);
            *v53 = *(_OWORD *)(v50 + 2);
            v53[1] = *(_OWORD *)(v50 + 6);
            v53[2] = *(_OWORD *)(v50 + 10);
            v53[3] = *(_OWORD *)(v50 + 14);
            v53[4] = *(_OWORD *)(v50 + 18);
            v53[5] = *(_OWORD *)(v50 + 22);
            v53[6] = *(_OWORD *)(v50 + 26);
            v53 += 8;
            *(v53 - 1) = *(_OWORD *)(v50 + 30);
            *v53 = *(_OWORD *)(v50 + 34);
            v53[1] = *(_OWORD *)(v50 + 38);
            v53[2] = *(_OWORD *)(v50 + 42);
            *((_QWORD *)v53 + 6) = *((_QWORD *)v50 + 23);
            *(_QWORD *)(v52 + *(_QWORD *)(v26 + 240) + 184) = v23;
            CInputDest::~CInputDest((CInputDest *)(v52 + *(_QWORD *)(v26 + 240) + 352LL));
            InputTraceLogging::Pointer::CommitFramePointer(
              v81,
              (const struct CPointerInputFrame *)v26,
              (const struct tagPOINTEREVENTINT *)(v52 + *(_QWORD *)(v26 + 240) + 160LL));
            v55 = *((_DWORD *)Object + 7);
            if ( (v55 & 0x10000) != 0 || IsTouchpadDevice(v23, v54) && (v55 & 0x10070) != 0 )
              *((_BYTE *)this + 40) = 1;
            ++v51;
            v50 = (char *)Object + 192;
          }
          *(_DWORD *)(v26 + 56) = *((_DWORD *)v5 + 7);
          v56 = W32GetUserSessionState(v49, v50);
          Object = 0LL;
          *(_QWORD *)v26 = *(_QWORD *)(v56 + 3256);
          v57 = *((_QWORD *)v5 + 28);
          while ( 1 )
          {
            if ( !v57 )
            {
              v82[0] = v26 + 256;
              v82[1] = *((_QWORD *)v81 + 57);
              HMAssignmentLock((__int64)v82, 0LL);
              if ( v86
                || (CTouchProcessor::CommitInputFrame((CTouchProcessor *)this, (struct CPointerInputFrame *)v26),
                    IsTouchpadDevice(v23, v62)) )
              {
                Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
                *(_DWORD *)(v26 + 228) |= 0x80u;
              }
              else if ( v87 )
              {
                *(_DWORD *)(v26 + 228) |= 0x40u;
                ++*((_DWORD *)this + 40);
              }
              else
              {
                ++*((_DWORD *)this + 41);
              }
              *(_QWORD *)(v26 + 32) = v26 + 24;
              *(_QWORD *)(v26 + 24) = v26 + 24;
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                || (LOBYTE(v63) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
              {
                LOBYTE(v63) = 0;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                || !*((_WORD *)WPP_GLOBAL_Control + 36) )
              {
                v7 = 0;
              }
              if ( (_BYTE)v63 || v7 )
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v63,
                  v7,
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  5,
                  4,
                  169,
                  (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
              CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v83);
              return (struct CPointerInputFrame *)v26;
            }
            v59 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x64727355u);
            if ( !v59 )
              break;
            v60 = (void *)Win32AllocPoolZInitImpl(256LL, *(unsigned int *)(v57 + 4), 0x64727355u);
            *(_QWORD *)(v59 + 16) = v60;
            if ( !v60 )
            {
              v64 = (CTouchProcessor *)WPP_GLOBAL_Control;
              v65 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                 && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
              v66 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v65 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v67 = W32GetUserSessionState(WPP_GLOBAL_Control, v61);
                v80 = 166;
LABEL_149:
                LOBYTE(v68) = v65;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v68,
                  v66,
                  *(_QWORD *)(v67 + 69144),
                  2,
                  4,
                  v80,
                  (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
                goto LABEL_150;
              }
              goto LABEL_150;
            }
            *(_DWORD *)(v59 + 4) = *(_DWORD *)v57;
            *(_DWORD *)(v59 + 8) = *(_DWORD *)(v57 + 4);
            memmove(v60, *(const void **)(v57 + 8), *(unsigned int *)(v57 + 4));
            if ( Object )
              *((_QWORD *)Object + 3) = v59;
            else
              *(_QWORD *)(v26 + 232) = v59;
            v57 = *(_QWORD *)(v57 + 16);
            Object = (PVOID)v59;
          }
          v64 = (CTouchProcessor *)WPP_GLOBAL_Control;
          v65 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          v66 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v65 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v67 = W32GetUserSessionState(WPP_GLOBAL_Control, v58);
            v80 = 167;
            goto LABEL_149;
          }
LABEL_150:
          v69 = *(_QWORD *)(v26 + 232);
          while ( v69 )
          {
            v70 = *(char **)(v69 + 16);
            v71 = (char *)v69;
            if ( v70 )
              GreDeleteFastMutex(v70);
            v69 = *(_QWORD *)(v69 + 24);
            GreDeleteFastMutex(v71);
          }
          CTouchProcessor::FreePointerInfoList(v64, *(struct CPointerInfoNode **)(v26 + 240), *((_DWORD *)v5 + 6));
          CTouchProcessor::FreePointerQFrameList(v72, *(struct CPointerQFrame **)(v26 + 248), *((_DWORD *)v5 + 6));
          GreDeleteFastMutex((char *)v26);
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (LOBYTE(v73) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            LOBYTE(v73) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
            v7 = 0;
          if ( (_BYTE)v73 || v7 )
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v73,
              v7,
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5,
              4,
              168,
              (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
        }
        else
        {
          CTouchProcessor::FreePointerQFrameList(
            (CTouchProcessor *)v38,
            *(struct CPointerQFrame **)(v26 + 248),
            *((_DWORD *)v5 + 6));
          GreDeleteFastMutex((char *)v26);
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v40 = 0;
          }
          v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v42 = W32GetUserSessionState(WPP_GLOBAL_Control, v39);
            LOBYTE(v43) = v40;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v43,
              v41,
              *(_QWORD *)(v42 + 69144),
              2,
              4,
              164,
              (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
          }
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (LOBYTE(v39) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            LOBYTE(v39) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
            v7 = 0;
          if ( (_BYTE)v39 || v7 )
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v39,
              v7,
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5,
              4,
              165,
              (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
        }
      }
      else
      {
        GreDeleteFastMutex((char *)v26);
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v34 = 0;
        }
        v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v33);
          LOBYTE(v37) = v34;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v37,
            v35,
            *(_QWORD *)(v36 + 69144),
            2,
            4,
            162,
            (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
        }
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
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
            163,
            (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v27 = 0;
      }
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
        LOBYTE(v30) = v27;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v28,
          *(_QWORD *)(v29 + 69144),
          2,
          4,
          160,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v25) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v25) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v7 = 0;
      if ( (_BYTE)v25 || v7 )
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v7,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          161,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
  }
LABEL_195:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v83);
  return 0LL;
}

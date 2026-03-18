/*
 * XREFs of ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x14004A560
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C77C (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x14006A12C (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x14006BE60 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14006C3AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x14006C440 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 *     _HMPheFromObjectWorker @ 0x140071E30 (_HMPheFromObjectWorker.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     ApiSetEditionDoPointerDPITransforms @ 0x140143260 (ApiSetEditionDoPointerDPITransforms.c)
 *     PointerPromotionOnPointerInputRetrieval @ 0x140148400 (PointerPromotionOnPointerInputRetrieval.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x140173EB4 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CTouchProcessor::UpdatePointerInfoTarget(
        PERESOURCE *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        _DWORD *a6,
        __int64 *a7)
{
  __int64 v8; // r13
  int v9; // edx
  unsigned int v11; // edi
  char v12; // si
  __int64 v13; // rax
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r14
  CTouchProcessor *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r14
  unsigned int v22; // r8d
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  struct CPointerInfoNode *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // r12d
  __int64 v35; // rcx
  _DWORD *v36; // r15
  int v37; // edx
  __int64 v38; // r14
  __int64 v39; // rcx
  int v40; // eax
  int v41; // ecx
  __int64 v42; // rdx
  CTouchProcessor *v43; // rcx
  __int64 v44; // r11
  __int64 v45; // r10
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r9
  _QWORD *v49; // r8
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r9
  __int64 *v53; // r12
  unsigned int v54; // r14d
  unsigned __int16 v55; // r15
  __int64 v56; // rbx
  __int64 v57; // rcx
  int (*v58)(void); // rax
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  int v65; // edx
  int v66; // r8d
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rcx
  int v71; // eax
  __int64 *v72; // rcx
  __int64 v73; // [rsp+58h] [rbp-A8h]
  _QWORD v77[4]; // [rsp+88h] [rbp-78h] BYREF
  char v78; // [rsp+A8h] [rbp-58h]
  PERESOURCE *v79; // [rsp+B0h] [rbp-50h]
  _OWORD v80[7]; // [rsp+C0h] [rbp-40h] BYREF
  char v81; // [rsp+130h] [rbp+30h]
  _DWORD v82[28]; // [rsp+140h] [rbp+40h] BYREF
  char v83; // [rsp+1B0h] [rbp+B0h]

  v8 = a3;
  v9 = (int)a6;
  v11 = 0;
  v12 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)v9 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      104,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v78 = 0;
  v79 = a1 + 4;
  v13 = a2;
  if ( a2 == -1 )
    v13 = 0LL;
  v77[0] = v13;
  ExEnterCriticalRegionAndAcquireResourceExclusive(a1[4]);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v77);
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 36) & 0x80u) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 10641LL);
    v73 = CTouchProcessor::ReferenceFrame(a1, *(unsigned int *)(a2 + 28));
    v18 = v73;
    if ( !v73 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v16) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v12 = 0;
      if ( (_BYTE)v16 || v12 )
      {
        LOBYTE(v17) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v16,
          v17,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          106,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      }
      goto LABEL_66;
    }
    memset(v80, 0, sizeof(v80));
    v81 = 0;
    if ( *(_DWORD *)(v8 + 92) )
    {
      v20 = *(_QWORD *)(v8 + 80);
      if ( !v20 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 95LL);
      v21 = *(_QWORD *)&v80[5];
      *(_QWORD *)&v80[5] = v20;
      if ( !v21 || v21 != v20 )
      {
        if ( v20 )
        {
          if ( (*(_BYTE *)(HMPheFromObjectWorker(v20) + 25) & 1) != 0 )
            UserSetLastError(87LL);
          _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
        }
        if ( v21 )
          HMUnlockObject(v21);
      }
      v18 = v73;
    }
    v22 = *(_DWORD *)(a2 + 32);
    v23 = *(_OWORD *)(v8 + 16);
    v80[0] = *(_OWORD *)v8;
    v24 = *(_OWORD *)(v8 + 32);
    v80[1] = v23;
    v25 = *(_OWORD *)(v8 + 48);
    v80[2] = v24;
    v26 = *(_OWORD *)(v8 + 64);
    v80[3] = v25;
    v27 = *(_OWORD *)(v8 + 80);
    v80[4] = v26;
    v28 = *(_OWORD *)(v8 + 96);
    v80[5] = v27;
    v80[6] = v28;
    v29 = CTouchProcessor::LookupNode(v19, (const struct CPointerInputFrame *)v18, v22);
    v33 = *((unsigned int *)PtiCurrent(v31, v30) + 340);
    if ( (v33 & 0x2000) != 0 || (v34 = 0, _bittest64((const signed __int64 *)PtiCurrent(v33, v32) + 170, 0x25u)) )
      v34 = 1;
    if ( !(unsigned int)CPointerInfoNode::IsValid(v29) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12000LL);
    *((_DWORD *)v29 + 1) &= ~0x100u;
    v35 = 0LL;
    if ( (v80[0] & 4) != 0 )
    {
      if ( HIDWORD(v80[5]) == 1 || HIDWORD(v80[5]) == 2 )
      {
        if ( *(_QWORD *)&v80[5] )
          v35 = **(_QWORD **)&v80[5];
        else
          v35 = 0LL;
      }
    }
    else if ( (v80[0] & 2) != 0 )
    {
      v35 = *((_QWORD *)&v80[1] + 1);
    }
    v36 = (_DWORD *)((char *)v29 + 352);
    *((_QWORD *)v29 + 24) = v35;
    v37 = *((_DWORD *)v29 + 111);
    if ( v37 )
    {
      v38 = 0LL;
      if ( (v80[0] & 4) != 0 )
      {
        if ( HIDWORD(v80[5]) == 1 || HIDWORD(v80[5]) == 2 )
        {
          if ( *(_QWORD *)&v80[5] )
            v38 = **(_QWORD **)&v80[5];
          else
            v38 = 0LL;
        }
      }
      else if ( (v80[0] & 2) != 0 )
      {
        v38 = *((_QWORD *)&v80[1] + 1);
      }
      v39 = 0LL;
      if ( (*v36 & 4) != 0 )
      {
        if ( (unsigned int)(v37 - 1) < 2 )
        {
          v72 = (__int64 *)*((_QWORD *)v29 + 54);
          if ( v72 )
            v39 = *v72;
          else
            v39 = 0LL;
        }
      }
      else if ( (*v36 & 2) != 0 )
      {
        v39 = *((_QWORD *)v29 + 47);
      }
      if ( v39 != v38 )
      {
        memset(v82, 0, sizeof(v82));
        v83 = 0;
        CInputDest::SetupFromInputDestAndWindow(v82, (char *)v29 + 352, v38, 1LL);
        CInputDest::operator=((char *)v29 + 352, v82);
        if ( v82[23] )
          HMAssignmentUnlock(&v82[20], v68);
      }
      v18 = v73;
    }
    v40 = *(_DWORD *)v29 | 0x100;
    *((_DWORD *)v29 + 36) = a4;
    *(_DWORD *)v29 = v40;
    if ( v34 )
    {
      v41 = 0x40000;
    }
    else
    {
      v40 &= ~0x200u;
      v41 = 0x20000;
      *(_DWORD *)v29 = v40;
    }
    if ( (v40 & v41) == 0 )
      *(_DWORD *)v29 = v41 | v40;
    if ( CPointerInfoNode::GetHistoryCount(v29) > 1 )
      CTouchProcessor::UpdateHistoryWithTarget(
        (CTouchProcessor *)a1,
        (const struct CPointerInputFrame *)v18,
        v29,
        (const struct CInputDest *)v80,
        a4,
        0LL,
        1,
        v34,
        0);
    if ( !v34 )
      CTouchProcessor::SetQFrameNonCoalescable(v43, (const struct CPointerInputFrame *)v18, v29);
    if ( HIDWORD(v80[5]) )
      HMAssignmentUnlock(&v80[5], v42);
    v44 = *(_QWORD *)(v18 + 240);
    v45 = 480LL * *(unsigned int *)(a2 + 32);
    v46 = *(_QWORD *)(v45 + v44 + 148);
    v47 = *(_QWORD *)(v45 + v44 + 200);
    v48 = (int)v47 + (__int64)(int)v46;
    if ( v48 < (__int64)0xFFFFFFFF80000000uLL || v48 > 0x7FFFFFFF )
    {
      v49 = a6;
      *a6 = -1;
    }
    else
    {
      v49 = a6;
      v69 = SHIDWORD(v46) + (__int64)SHIDWORD(v47);
      *a6 = v48;
      if ( v69 >= (__int64)0xFFFFFFFF80000000uLL && v69 <= 0x7FFFFFFF )
      {
        a6[1] = v69;
        goto LABEL_52;
      }
      a6[1] = -1;
    }
    *v49 = *(_QWORD *)(v45 + v44 + 200);
LABEL_52:
    v50 = *(_QWORD *)(v45 + v44 + 148);
    v51 = *(_QWORD *)(v45 + v44 + 216);
    v52 = (int)v51 + (__int64)(int)v50;
    if ( v52 < (__int64)0xFFFFFFFF80000000uLL || v52 > 0x7FFFFFFF )
    {
      v53 = a7;
      *(_DWORD *)a7 = -1;
    }
    else
    {
      v53 = a7;
      v70 = SHIDWORD(v50) + (__int64)SHIDWORD(v51);
      *(_DWORD *)a7 = v52;
      if ( v70 < (__int64)0xFFFFFFFF80000000uLL || v70 > 0x7FFFFFFF )
      {
        v71 = -2147024362;
        LODWORD(v70) = -1;
      }
      else
      {
        v71 = 0;
      }
      *((_DWORD *)a7 + 1) = v70;
      if ( v71 >= 0 )
        goto LABEL_55;
    }
    *v53 = *(_QWORD *)(v45 + v44 + 216);
LABEL_55:
    CTouchProcessor::UnreferenceFrame(a1, v18);
    v54 = *(_DWORD *)(a2 + 28);
    v55 = *(_WORD *)(a2 + 16);
    v56 = *v53;
    v58 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v57) + 48) + 5840LL);
    if ( v58 && v58() >= 0 )
      PointerPromotionOnPointerInputRetrieval(v55, v54, v56, a5);
    v59 = *(_OWORD *)(v8 + 16);
    v80[0] = *(_OWORD *)v8;
    v60 = *(_OWORD *)(v8 + 32);
    v80[1] = v59;
    v61 = *(_OWORD *)(v8 + 48);
    v80[2] = v60;
    v62 = *(_OWORD *)(v8 + 64);
    v80[3] = v61;
    v63 = *(_OWORD *)(v8 + 80);
    v80[4] = v62;
    v64 = *(_OWORD *)(v8 + 96);
    v80[5] = v63;
    v80[6] = v64;
    ApiSetEditionDoPointerDPITransforms(v80, a6, v53);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v65) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v65) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v66) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      LOBYTE(v66) = 0;
    }
    if ( (_BYTE)v65 || (_BYTE)v66 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v65,
        v66,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        107,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    v11 = 1;
LABEL_66:
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v77);
    ExReleaseResourceAndLeaveCriticalRegion(*v79);
    return v11;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v14) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v12 = 0;
  if ( (_BYTE)v14 || v12 )
  {
    LOBYTE(v15) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v15,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      105,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v77);
  ExReleaseResourceAndLeaveCriticalRegion(*v79);
  return 0LL;
}

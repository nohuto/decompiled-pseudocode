/*
 * XREFs of ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14009BAE8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x140085740 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140085C70 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@2@@Z @ 0x140086710 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStra.c)
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsMiPActive @ 0x140102234 (IsMiPActive.c)
 *     ConvertPointCoordinates @ 0x140196130 (ConvertPointCoordinates.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x14019C400 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x14019D604 (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPU.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionGetInputTransform @ 0x1401B5D20 (ApiSetEditionGetInputTransform.c)
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x140222DF4 (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CMouseProcessor::ForwardInputToISM(
        __int64 a1,
        __int64 a2,
        const struct CMouseProcessor::CMouseEvent *a3,
        struct CMouseProcessor::InputDeliveryContext *a4,
        __int64 *a5,
        int a6,
        int a7,
        __int64 a8)
{
  char v8; // si
  unsigned int v9; // r15d
  bool v13; // r12
  bool v14; // al
  __int64 v16; // rcx
  unsigned __int128 v17; // rax
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  int v21; // edx
  int v22; // r8d
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // rdi
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rbx
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  __int64 v42; // rdi
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  __int64 v46; // rbx
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  __int64 v50; // rax
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  int v57; // eax
  struct tagTHREADINFO *ThreadInfo; // rax
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  __int64 v62; // rbx
  __int64 v63; // rdx
  int v64; // ecx
  int v65; // r8d
  int v66; // edi
  __int64 v67; // rbx
  __int64 v68; // rcx
  int (*v69)(void); // rax
  __int64 v70; // rcx
  void (__fastcall *v71)(__int64); // rax
  bool v72; // bl
  __int64 UserSessionState; // rax
  int v74; // r8d
  int v75; // edx
  struct CMouseProcessor::InputDeliveryContext *v76; // [rsp+48h] [rbp-B8h] BYREF
  PERESOURCE *v77; // [rsp+50h] [rbp-B0h]
  __int64 v78; // [rsp+58h] [rbp-A8h]
  __int64 *v79; // [rsp+60h] [rbp-A0h]
  __int128 v80; // [rsp+70h] [rbp-90h] BYREF
  __int128 v81; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v82[16]; // [rsp+90h] [rbp-70h] BYREF
  PERESOURCE *v83[8]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v84[45]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v85[38]; // [rsp+3B0h] [rbp+2B0h] BYREF

  v8 = 1;
  v9 = *(_DWORD *)(a2 + 4);
  v76 = a4;
  v78 = a1;
  v79 = a5;
  v13 = v9 == 2 || v9 == 3;
  v14 = v9 == 1 || v9 == 4;
  if ( !v13 && !v14 )
    return 1LL;
  memset(v85, 0, sizeof(v85));
  v16 = *((_QWORD *)a3 + 1);
  v85[0] = *(_QWORD *)(v16 + 8);
  *((_QWORD *)&v17 + 1) = *(_QWORD *)(v16 + 88);
  if ( !*((_QWORD *)&v17 + 1) )
    v17 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  *(_QWORD *)&v17 = *((_QWORD *)a3 + 1);
  v85[4] = *((_QWORD *)&v17 + 1);
  *(_QWORD *)&v17 = *(_QWORD *)(v17 + 96);
  if ( !(_QWORD)v17 )
    *(LARGE_INTEGER *)&v17 = KeQueryPerformanceCounter(0LL);
  v18 = *((_DWORD *)a3 + 4) == 3;
  v19 = *((_QWORD *)a3 + 1);
  v85[5] = v17;
  if ( v18 )
    v20 = *(_DWORD *)(a1 + 3660);
  else
    v20 = *(_DWORD *)(a1 + 3656);
  HIDWORD(v85[37]) = v20;
  LOWORD(v85[1]) = *(_WORD *)(v19 + 24);
  WORD1(v85[1]) = *(_WORD *)(v19 + 36);
  LODWORD(v85[2]) = *(_DWORD *)(v19 + 32);
  HIDWORD(v85[3]) = *(_DWORD *)(v19 + 40);
  (*(void (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD *))(*(_QWORD *)a3 + 24LL))(a3, &v85[1]);
  v85[7] = *a5;
  v80 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize((__int64)v82);
  v81 = *InputConfig::Mouse::GetUnionRegion(v84, v21, v22);
  ConvertPointCoordinates(v85[7], &v81, &v80, &v85[8]);
  v23 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)&v85[9] = *(_OWORD *)a2;
  LODWORD(v85[23]) = a6;
  *(_OWORD *)&v85[13] = *(_OWORD *)(a2 + 32);
  LODWORD(v85[24]) = a7;
  v24 = *(_OWORD *)(a2 + 64);
  *(_OWORD *)&v85[11] = v23;
  v25 = *(_OWORD *)(a2 + 48);
  *(_OWORD *)&v85[17] = v24;
  v26 = *(_OWORD *)(a2 + 96);
  *(_OWORD *)&v85[15] = v25;
  v27 = *(_OWORD *)(a2 + 80);
  *(_OWORD *)&v85[21] = v26;
  *(_OWORD *)&v85[19] = v27;
  v34 = a8 | 1;
  if ( (*(_BYTE *)(W32GetUserSessionState(v29, v28, v30) + 14328) & 4) == 0 )
    v34 = a8;
  v38 = v34 | 2;
  if ( (*(_BYTE *)(W32GetUserSessionState(v32, v31, v33) + 14328) & 0x10) == 0 )
    v38 = v34;
  v42 = v38 | 0x10;
  if ( (*(_BYTE *)(W32GetUserSessionState(v36, v35, v37) + 14329) & 1) == 0 )
    v42 = v38;
  v46 = v42 | 0x20;
  if ( (*(_BYTE *)(W32GetUserSessionState(v40, v39, v41) + 14329) & 4) == 0 )
    v46 = v42;
  LOBYTE(v48) = *(_BYTE *)(W32GetUserSessionState(v44, v43, v45) + 14329);
  v50 = v46 | 0x40;
  v85[19] = 0LL;
  if ( (v48 & 0x10) == 0 )
    v50 = v46;
  v85[25] = v50;
  if ( (*(_BYTE *)(W32GetUserSessionState(v48, v47, v49) + 14332) & 4) != 0 )
    LODWORD(v85[35]) |= 8u;
  if ( (*(_BYTE *)(W32GetUserSessionState(v52, v51, v53) + 14332) & 1) != 0 )
    LODWORD(v85[35]) |= 4u;
  v57 = *((_DWORD *)a3 + 4);
  if ( v57 == 1 )
  {
    if ( *(_DWORD *)(*((_QWORD *)a3 + 1) + 164LL) == 1 )
      LODWORD(v85[34]) |= 1u;
  }
  else if ( v57 == 3 )
  {
    v62 = *(_QWORD *)(W32GetUserSessionState(v55, v54, v56) + 16720);
    CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
      (CInpLockGuardExclusiveIfNeeded *)v83,
      (PERESOURCE *)(v62 + 8),
      0LL);
    v66 = (*(_DWORD *)v62)++;
    if ( v66 == -1 )
    {
      *(_DWORD *)v62 = 1;
      v67 = *(_QWORD *)(W32GetUserSessionState(v64, v63, v65) + 19176);
      v69 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v68) + 48) + 5520LL);
      if ( v69 )
      {
        if ( v69() >= 0 )
        {
          v63 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v70) + 48);
          v71 = *(void (__fastcall **)(__int64))(v63 + 5528);
          if ( v71 )
            v71(v67);
        }
      }
    }
    CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v83, v63);
    HIDWORD(v85[34]) = v66;
  }
  ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)a2);
  if ( ThreadInfo )
    HIDWORD(v85[23]) = IsMiPActive(ThreadInfo, 0LL);
  ApiSetEditionGetInputTransform(a2, &v85[26]);
  if ( v9 != 2 )
    goto LABEL_35;
  if ( !v13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9149LL);
  if ( CMouseProcessor::BufferedMouseInputList::AddInputToList(
         (CMouseProcessor::BufferedMouseInputList *)(v78 + 4040),
         a3,
         (struct CInputDest *)a2,
         v76,
         &v85[6]) )
  {
LABEL_35:
    v76 = 0LL;
    v77 = (PERESOURCE *)(W32GetUserSessionState(v60, v59, v61) + 18688);
    ExEnterCriticalRegionAndAcquireResourceShared(*v77);
    InputConfig::Mouse::RegionFromPoint(*v79, &v76, 0);
    if ( v76 )
      *(_OWORD *)((char *)&v85[35] + 4) = *(_OWORD *)v76;
    ExReleaseResourceAndLeaveCriticalRegion(*v77);
    InputTraceLogging::Mouse::SendToUserMode(v85, a2, v9);
    SendMessageTo(15, (int)v85, 304);
    if ( v9 == 2 )
    {
      if ( *(_DWORD *)a2 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9186LL);
    }
    return !v13;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v8 = 0;
    }
    v72 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v59, v61);
      LOBYTE(v74) = v72;
      LOBYTE(v75) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v75,
        v74,
        *(_QWORD *)(UserSessionState + 69136),
        2,
        6,
        59,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
    InputTraceLogging::Mouse::DropInput(*(_QWORD *)(*((_QWORD *)a3 + 1) + 96LL), 20LL);
    return 2LL;
  }
}

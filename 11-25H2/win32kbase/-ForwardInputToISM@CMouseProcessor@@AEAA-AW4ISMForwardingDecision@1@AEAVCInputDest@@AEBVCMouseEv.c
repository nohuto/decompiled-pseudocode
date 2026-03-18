/*
 * XREFs of ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x140037B68
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x140036A78 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1400B89EC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x140062700 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140062770 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@2@@Z @ 0x140066470 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStra.c)
 *     SendMessageTo @ 0x1400675F0 (SendMessageTo.c)
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1400B6F04 (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPU.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400B7D64 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     IsMiPActive @ 0x1400BF0AC (IsMiPActive.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1400E7680 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x14015BD98 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ConvertPointCoordinates @ 0x14015D084 (ConvertPointCoordinates.c)
 *     ApiSetEditionGetInputTransform @ 0x140195410 (ApiSetEditionGetInputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x14021F644 (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 *     ApiSetResetLastSeenFrameId @ 0x140226094 (ApiSetResetLastSeenFrameId.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall CMouseProcessor::ForwardInputToISM(
        __int64 a1,
        __int64 a2,
        const struct CMouseProcessor::CMouseEvent *a3,
        struct CMouseProcessor::InputDeliveryContext *a4,
        _QWORD *a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // r13d
  char v9; // si
  bool v13; // al
  __int64 v15; // rcx
  __int64 v16; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  bool v18; // zf
  int v19; // eax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // eax
  _DWORD *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // edi
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v53; // rdx
  bool v54; // bl
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  struct CMouseProcessor::InputDeliveryContext *v58[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+58h] [rbp-A8h]
  _QWORD *v60; // [rsp+60h] [rbp-A0h]
  __int128 v61; // [rsp+70h] [rbp-90h] BYREF
  __int128 v62; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v63[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v64[64]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v65[720]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v66[38]; // [rsp+3B0h] [rbp+2B0h] BYREF

  v8 = *(_DWORD *)(a2 + 4);
  v9 = 1;
  v58[0] = a4;
  v59 = a1;
  v60 = a5;
  v13 = v8 == 1 || v8 == 4;
  if ( v8 - 2 > 1 && !v13 )
    return 1LL;
  memset(v66, 0, sizeof(v66));
  v15 = *((_QWORD *)a3 + 1);
  v66[0] = *(_QWORD *)(v15 + 8);
  if ( *(_QWORD *)(v15 + 88) )
    v66[4] = *(_QWORD *)(v15 + 88);
  else
    v66[4] = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v16 = *((_QWORD *)a3 + 1);
  PerformanceCounter = *(LARGE_INTEGER *)(v16 + 96);
  if ( !PerformanceCounter.QuadPart )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v16 = *((_QWORD *)a3 + 1);
  }
  v18 = *((_DWORD *)a3 + 4) == 3;
  v66[5] = PerformanceCounter.QuadPart;
  if ( v18 )
    v19 = *(_DWORD *)(a1 + 3660);
  else
    v19 = *(_DWORD *)(a1 + 3656);
  HIDWORD(v66[37]) = v19;
  LOWORD(v66[1]) = *(_WORD *)(v16 + 24);
  WORD1(v66[1]) = *(_WORD *)(v16 + 36);
  LODWORD(v66[2]) = *(_DWORD *)(v16 + 32);
  HIDWORD(v66[3]) = *(_DWORD *)(v16 + 40);
  (*(void (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD *))(*(_QWORD *)a3 + 24LL))(a3, &v66[1]);
  v66[7] = *a5;
  v61 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize(v63);
  v62 = *(_OWORD *)InputConfig::Mouse::GetUnionRegion(v65);
  ConvertPointCoordinates(v66[7], &v62, &v61, &v66[8]);
  v20 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)&v66[9] = *(_OWORD *)a2;
  LODWORD(v66[23]) = a6;
  *(_OWORD *)&v66[13] = *(_OWORD *)(a2 + 32);
  LODWORD(v66[24]) = a7;
  v21 = *(_OWORD *)(a2 + 64);
  *(_OWORD *)&v66[11] = v20;
  v22 = *(_OWORD *)(a2 + 48);
  *(_OWORD *)&v66[17] = v21;
  v23 = *(_OWORD *)(a2 + 96);
  *(_OWORD *)&v66[15] = v22;
  v24 = *(_OWORD *)(a2 + 80);
  *(_OWORD *)&v66[21] = v23;
  *(_OWORD *)&v66[19] = v24;
  v29 = a8 | 1;
  if ( (*(_BYTE *)(W32GetUserSessionState(v26, v25) + 14336) & 4) == 0 )
    v29 = a8;
  v32 = v29 | 2;
  if ( (*(_BYTE *)(W32GetUserSessionState(v28, v27) + 14336) & 0x10) == 0 )
    v32 = v29;
  v35 = v32 | 0x10;
  if ( (*(_BYTE *)(W32GetUserSessionState(v31, v30) + 14337) & 1) == 0 )
    v35 = v32;
  v38 = v35 | 0x20;
  if ( (*(_BYTE *)(W32GetUserSessionState(v34, v33) + 14337) & 4) == 0 )
    v38 = v35;
  LOBYTE(v40) = *(_BYTE *)(W32GetUserSessionState(v37, v36) + 14337);
  v41 = v38 | 0x40;
  v66[19] = 0LL;
  if ( (v40 & 0x10) == 0 )
    v41 = v38;
  v66[25] = v41;
  if ( (*(_BYTE *)(W32GetUserSessionState(v40, v39) + 14340) & 4) != 0 )
    LODWORD(v66[35]) |= 8u;
  if ( (*(_BYTE *)(W32GetUserSessionState(v43, v42) + 14340) & 1) != 0 )
    LODWORD(v66[35]) |= 4u;
  v46 = *((_DWORD *)a3 + 4);
  if ( v46 == 1 )
  {
    if ( *(_DWORD *)(*((_QWORD *)a3 + 1) + 164LL) == 1 )
      LODWORD(v66[34]) |= 1u;
  }
  else if ( v46 == 3 )
  {
    v47 = *(_DWORD **)(W32GetUserSessionState(v45, v44) + 16728);
    CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
      (CInpLockGuardExclusiveIfNeeded *)v64,
      (struct CEResourceLock *)(v47 + 2),
      0LL);
    v50 = (*v47)++;
    if ( v50 == -1 )
    {
      *v47 = 1;
      UserSessionState = W32GetUserSessionState(v49, v48);
      ApiSetResetLastSeenFrameId(*(_QWORD *)(UserSessionState + 19144));
    }
    CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v64);
    HIDWORD(v66[34]) = v50;
  }
  ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)a2);
  if ( ThreadInfo )
    HIDWORD(v66[23]) = IsMiPActive(ThreadInfo, 0LL);
  ApiSetEditionGetInputTransform(a2, &v66[26]);
  if ( v8 != 2
    || CMouseProcessor::BufferedMouseInputList::AddInputToList(
         (CMouseProcessor::BufferedMouseInputList *)(v59 + 4032),
         a3,
         (struct CInputDest *)a2,
         v58[0],
         &v66[6]) )
  {
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v58);
    InputConfig::Mouse::RegionFromPoint(*v60, v58, 0LL);
    if ( v58[0] )
      *(_OWORD *)((char *)&v66[35] + 4) = *(_OWORD *)v58[0];
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v58[1]);
    InputTraceLogging::Mouse::SendToUserMode(v66, a2, v8);
    SendMessageTo(15LL, v66, 304LL);
    if ( v8 == 2 && *(_DWORD *)a2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9201LL);
    return v8 - 2 > 1;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v55 = W32GetUserSessionState(WPP_GLOBAL_Control, v53);
      LOBYTE(v56) = v54;
      LOBYTE(v57) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v57,
        v56,
        *(_QWORD *)(v55 + 69144),
        2,
        6,
        59,
        (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
    }
    InputTraceLogging::Mouse::DropInput(*(_QWORD *)(*((_QWORD *)a3 + 1) + 96LL), 20LL);
    return 2LL;
  }
}

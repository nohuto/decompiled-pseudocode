/*
 * XREFs of ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14009F170
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1400D135C (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x140162848 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?ConvertExplicitCoordinatesToAbsolute@MouseInputDataEx@CMouseProcessor@@QEAAXXZ @ 0x140081794 (-ConvertExplicitCoordinatesToAbsolute@MouseInputDataEx@CMouseProcessor@@QEAAXXZ.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1400857AC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140085C70 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14009DF14 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x14009F5B4 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEB.c)
 *     ?CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z @ 0x14009FDDC (-CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z.c)
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x1400A0314 (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@@Z @ 0x1400A2084 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessi.c)
 *     ?GetPublicExtraInfo@MouseInputDataEx@CMouseProcessor@@QEBAKXZ @ 0x1401344F4 (-GetPublicExtraInfo@MouseInputDataEx@CMouseProcessor@@QEBAKXZ.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x14015F9F4 (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     ?ShouldCoalesceMouseInputData@CMouseProcessor@@AEBA_NPEBVMouseInputDataEx@1@PEBU_MOUSE_INPUT_DATA@@PEBUMouseInputProcessingState@@@Z @ 0x1401B0E7C (-ShouldCoalesceMouseInputData@CMouseProcessor@@AEBA_NPEBVMouseInputDataEx@1@PEBU_MOUSE_INPUT_DAT.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::ProcessMouseInputData(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct MouseInputProcessingState *a3,
        LARGE_INTEGER *a4,
        const struct _MOUSE_INPUT_DATA *a5,
        const struct tagUIPI_INFO_INT *a6)
{
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rbp
  __int16 v14; // ax
  __int16 v15; // di
  char v16; // bl
  int v17; // ecx
  __int64 UserSessionState; // rax
  __int64 v19; // rdx
  int v20; // eax
  CMouseProcessor *v21; // rcx
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rcx
  void **v27; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  int v29; // edx
  int v30; // r8d
  __int64 v31; // rdx
  __m128i *UnionRegion; // rax
  __int32 v33; // ecx
  __m128i v34; // xmm6
  int v35; // edi
  int v36; // edx
  int v37; // r8d
  __int64 v38; // rbx
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  __int64 v42; // rdx
  int v43; // ecx
  int v44; // edi
  int v45; // r8d
  __int64 v46; // rbx
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  __int64 v50; // rcx
  int v51; // edi
  int v52; // r8d
  __int64 v53; // rbx
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  __int64 PublicExtraInfo; // rdi
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  __int64 v61; // rbx
  int v62; // edx
  int v63; // ecx
  int v64; // r8d
  __int64 v65; // rcx
  int v66; // edx
  int v67; // r8d
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  _OWORD v71[46]; // [rsp+30h] [rbp-318h] BYREF
  __int64 v72; // [rsp+358h] [rbp+10h] BYREF
  void **v73; // [rsp+368h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v73, "ProcessMouseInputData", 0LL);
  *a4 = KeQueryPerformanceCounter(0LL);
  v13 = 0LL;
  v72 = *(_QWORD *)((char *)this + 3676);
  v14 = *((_WORD *)a2 + 1);
  if ( (v14 & 0x50) == 0 )
  {
    v15 = *((_WORD *)a2 + 2);
    if ( (v14 & 1) != 0 || *((_DWORD *)a2 + 3) || (v16 = 0, *((_DWORD *)a2 + 4)) )
      v16 = 1;
    if ( *(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 3104) )
    {
      UserSessionState = W32GetUserSessionState(v17, v10, v12);
      if ( *(_BYTE *)(*(_QWORD *)(UserSessionState + 3104) + 128LL) )
      {
        if ( (v15 & 0x400) != 0 || (v15 & 0x800) != 0 )
        {
          v19 = 1LL;
        }
        else
        {
          if ( !v16 )
            goto LABEL_12;
          v19 = 0LL;
        }
        CCompositionRefreshRateBooster::BoostRefreshRateForInput(*(_QWORD *)(UserSessionState + 3104) + 88LL, v19);
      }
    }
  }
LABEL_12:
  v20 = *((_DWORD *)a2 + 18);
  if ( (v20 & 8) != 0 )
  {
    CMouseProcessor::QueueMouseEvent(this, a2, a3, (const struct _SUBPIXELS *)&v72, a6, 0LL);
LABEL_17:
    a4[1] = KeQueryPerformanceCounter(0LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 3648, 0LL);
    MousePerfSummary::CollectMousePacketPerfTelemetry(
      (CMouseProcessor *)((char *)this + 3024),
      (const struct _MousePacketPerf *)a4);
    ExReleasePushLockExclusiveEx((char *)this + 3648);
    KeLeaveCriticalRegion();
    v27 = v73;
    if ( v73 )
    {
      CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v26, v25);
      if ( CurrentThreadWin32Thread )
        v13 = *CurrentThreadWin32Thread;
      *(_QWORD *)(v13 + 376) = v27[6];
      InputTraceLogging::ThreadLockedPerfRegion::Cleanup(&v73, v29, v30);
    }
    return;
  }
  if ( (v20 & 4) != 0 )
  {
    *(_QWORD *)a3 = *(_QWORD *)((char *)a2 + 12);
    v72 = 0LL;
    UnionRegion = (__m128i *)InputConfig::Mouse::GetUnionRegion(v71, v10, v12);
    v33 = UnionRegion->m128i_i32[2];
    v34 = *UnionRegion;
    LOWORD(v33) = v33 - _mm_cvtsi128_si32(*UnionRegion) - 1;
    v35 = *(unsigned __int16 *)a3 | ((unsigned __int16)v33 << 16);
    v38 = W32GetUserSessionState(v33, v36, v37);
    v42 = 3LL * *(unsigned int *)(W32GetUserSessionState(v40, v39, v41) + 14716);
    v43 = _mm_cvtsi128_si32(_mm_srli_si128(v34, 12));
    *(_DWORD *)(v38 + 8 * v42 + 14720) = v35;
    LOWORD(v43) = v43 - _mm_cvtsi128_si32(_mm_srli_si128(v34, 4)) - 1;
    v44 = *((unsigned __int16 *)a3 + 2) | ((unsigned __int16)v43 << 16);
    v46 = W32GetUserSessionState(v43, v42, v45);
    v50 = *(unsigned int *)(W32GetUserSessionState(v48, v47, v49) + 14716);
    *(_DWORD *)(v46 + 24 * v50 + 14724) = v44;
    v51 = *((_DWORD *)a2 + 12);
    v53 = W32GetUserSessionState(v50, 3 * (int)v50, v52);
    *(_DWORD *)(v53 + 24LL * *(unsigned int *)(W32GetUserSessionState(v55, v54, v56) + 14716) + 14728) = v51;
    PublicExtraInfo = CMouseProcessor::MouseInputDataEx::GetPublicExtraInfo(a2);
    v61 = W32GetUserSessionState(v59, v58, v60);
    v65 = 3 * (*(unsigned int *)(W32GetUserSessionState(v63, v62, v64) + 14716) + 614LL);
    *(_QWORD *)(v61 + 8 * v65) = PublicExtraInfo;
    LODWORD(v61) = ((unsigned __int8)*(_DWORD *)(W32GetUserSessionState(v65, v66, v67) + 14716) + 1) & 0x3F;
    *(_DWORD *)(W32GetUserSessionState(v69, v68, v70) + 14716) = v61;
    CMouseProcessor::MouseInputDataEx::ConvertExplicitCoordinatesToAbsolute(a2);
  }
  else
  {
    CMouseProcessor::GetMouseCoord(this, a2, (struct tagPOINT *)a3, (struct _SUBPIXELS *)&v72);
  }
  if ( !CMouseProcessor::ShouldCoalesceMouseInputData(v21, a2, a5, a3) )
  {
    CMouseProcessor::CommitMousePosAndMoveCursor(this, a2, a3, (struct _MousePacketPerf *)a4);
    CMouseProcessor::QueueMouseEvent(this, a2, a3, (const struct _SUBPIXELS *)&v72, a6, (const struct tagPOINT *)a3);
    *(_QWORD *)a3 = *(_QWORD *)(W32GetUserSessionState(v23, v22, v24) + 19216);
    goto LABEL_17;
  }
  InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7));
  if ( (*((_BYTE *)a2 + 2) & 1) == 0 )
  {
    if ( *((_WORD *)a2 + 2) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2734LL);
    *((_DWORD *)a3 + 2) += *((_DWORD *)a2 + 3);
    *((_DWORD *)a3 + 3) += *((_DWORD *)a2 + 4);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v73,
    v31);
}

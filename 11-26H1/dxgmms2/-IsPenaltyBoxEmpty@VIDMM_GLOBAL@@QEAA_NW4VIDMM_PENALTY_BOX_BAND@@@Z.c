/*
 * XREFs of ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140029178
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x14012A214 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

bool __fastcall VIDMM_GLOBAL::IsPenaltyBoxEmpty(__int64 a1)
{
  __int64 v1; // rdi
  void (__fastcall *v3)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  bool v7; // bl

  v1 = a1 + 45000;
  if ( a1 != -45000 && *(struct _KTHREAD **)(a1 + 45008) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    v3 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
    WdLogGlobalForLineNumber = 1495;
    v3(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1495LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v1, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v6 = *(unsigned int *)(v1 + 24);
      if ( (_DWORD)v6 != -1 && (byte_14008A201 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, &EventBlockThread, v5, v6);
    }
    ExAcquirePushLockSharedEx(v1, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 16));
  v7 = *(_QWORD *)(a1 + 45032) == a1 + 45032;
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 16));
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}

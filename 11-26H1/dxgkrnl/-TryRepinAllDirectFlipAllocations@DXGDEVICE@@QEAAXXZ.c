/*
 * XREFs of ?TryRepinAllDirectFlipAllocations@DXGDEVICE@@QEAAXXZ @ 0x140310000
 * Callers:
 *     ?TryRepinAllDirectFlipAllocations@ADAPTER_RENDER@@QEAAXXZ @ 0x14030FF14 (-TryRepinAllDirectFlipAllocations@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400515D4 (-VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x140310550 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1403105B0 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGDEVICE::TryRepinAllDirectFlipAllocations(DXGDEVICE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // r15d
  unsigned int v5; // esi
  DXGPUSHLOCK *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // edx
  bool v10; // zf
  DXGPUSHLOCK *v11; // rcx
  __int64 v12; // rbx
  bool v13; // bp
  int v14; // eax
  _BYTE v15[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v16; // [rsp+58h] [rbp-40h]
  int v17; // [rsp+60h] [rbp-38h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v2 + 184)
    && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7608;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      7608LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v3 = *((_QWORD *)this + 237);
  if ( !v3 )
    return;
  v4 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)(v3 + 3160) + 96LL) )
    return;
  do
  {
    v5 = 0;
    while ( 1 )
    {
      v16 = (DXGDEVICE *)((char *)this + 368);
      v17 = 0;
      if ( this != (DXGDEVICE *)-368LL && *((struct _KTHREAD **)this + 47) == KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1495;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1495LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v6 = v16;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6, 0LL) )
      {
        DXGPUSHLOCK::LogEvent(v6, v7, v8);
        ExAcquirePushLockExclusiveEx(v6, 0LL);
      }
      *((_QWORD *)v6 + 1) = KeGetCurrentThread();
      v17 = 2;
      v9 = *((_DWORD *)this + v4 + 362);
      v10 = v5 == v9;
      if ( v5 < v9 )
      {
        while ( !*(_QWORD *)(*((_QWORD *)this + v4 + 165) + 8LL * v5) )
        {
          v10 = ++v5 == v9;
          if ( v5 >= v9 )
            goto LABEL_13;
        }
        goto LABEL_18;
      }
LABEL_13:
      if ( v10 )
        break;
LABEL_18:
      v12 = *(_QWORD *)(*((_QWORD *)this + v4 + 165) + 8LL * v5);
      if ( !v12 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9827;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pAllocation", 9827LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( v5 != ((*(_DWORD *)(v12 + 72) >> 1) & 0x3FF) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9828;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"*Iterator == pAllocation->m_DirectFlipIndex",
          9828LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !*((_DWORD *)this + v4 + 378) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9829;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"0 != m_DirectFlipAllocationCount[VidPnSourceId]",
          9829LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v10 = *((_DWORD *)this + v4 + 362) == ++v5;
      v13 = v10;
      if ( !*(_QWORD *)(v12 + 40) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9844;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"NULL != pAllocation->m_pOwningResource",
          9844LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v12);
      DxgkReferenceDxgResource(*(struct DXGRESOURCE **)(v12 + 40));
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
      if ( v12 )
      {
        if ( !(unsigned __int8)VIDMM_EXPORT::VidMmIsAllocationPinned(
                                 *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                                 *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                                 *(struct VIDMM_MULTI_ALLOC **)(v12 + 24)) )
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                                                          + 208LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                  *(_QWORD *)(v12 + 24),
                  0LL,
                  0LL,
                  0LL,
                  0LL);
          if ( v14 < 0 )
          {
            WdLogSingleEntry3(3LL, *(_QWORD *)(v12 + 24), *(_QWORD *)(v12 + 48), v14);
            WdLogGlobalForLineNumber = 7641;
          }
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v12 + 40) + 72LL));
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v12 + 88));
      }
      if ( v13 )
        goto LABEL_15;
    }
    v11 = v16;
    v17 = 0;
    *((_QWORD *)v16 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
LABEL_15:
    ++v4;
  }
  while ( v4 < *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 237) + 3160LL) + 96LL) );
}

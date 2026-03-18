/*
 * XREFs of ?IterateDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x14030FB48
 * Callers:
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x14032FF60 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x140310550 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1403105B0 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

struct DXGALLOCATION *__fastcall DXGDEVICE::IterateDirectFlipAllocationFromRequestedPinnedList(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v5; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // r9d
  bool v12; // zf
  DXGPUSHLOCK *v14; // rcx
  struct _KTHREAD *v15; // r10
  unsigned int v16; // r8d
  __int64 v17; // rbx
  _BYTE v18[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v19; // [rsp+58h] [rbp-40h]
  int v20; // [rsp+60h] [rbp-38h]

  v5 = a2;
  v19 = (DXGPUSHLOCK *)(this + 46);
  if ( this != (struct _KTHREAD **)-368LL && this[47] == KeGetCurrentThread() )
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
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v19, 0LL) )
  {
    DXGPUSHLOCK::LogEvent(v19, v8, v9);
    ExAcquirePushLockExclusiveEx(v19, 0LL);
  }
  *((_QWORD *)v19 + 1) = KeGetCurrentThread();
  v20 = 2;
  if ( *a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9812;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE == *ReachedEnd", 9812LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = *a3;
  v11 = *((_DWORD *)this + v5 + 362);
  v12 = (_DWORD)v10 == v11;
  if ( (unsigned int)v10 < v11 )
  {
    v15 = this[v5 + 165];
    v16 = *a3;
    while ( 1 )
    {
      v10 = v16;
      if ( *((_QWORD *)v15 + v16) )
        break;
      v10 = v16 + 1;
      *a3 = v10;
      ++v16;
      v12 = (_DWORD)v10 == v11;
      if ( (unsigned int)v10 >= v11 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( v12 )
    {
      *a4 = 1;
      v14 = v19;
      v20 = 0;
      *((_QWORD *)v19 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v14, 0LL);
      KeLeaveCriticalRegion();
      return 0LL;
    }
  }
  v17 = *((_QWORD *)this[v5 + 165] + v10);
  if ( !v17 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9827;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pAllocation", 9827LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *a3 != ((*(_DWORD *)(v17 + 72) >> 1) & 0x3FF) )
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
  if ( !*((_DWORD *)this + v5 + 378) )
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
  if ( *((_DWORD *)this + v5 + 362) == ++*a3 )
    *a4 = 1;
  if ( !*(_QWORD *)(v17 + 40) )
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
  DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v17);
  DxgkReferenceDxgResource(*(struct DXGRESOURCE **)(v17 + 40));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
  return (struct DXGALLOCATION *)v17;
}

/*
 * XREFs of ?ReportDestructionBegun@DXGDEVICE@@AEAAXXZ @ 0x1402EA93C
 * Callers:
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9FEC (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDEVICE::ReportDestructionBegun(DXGDEVICE *this)
{
  DXGPUSHLOCK *v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (DXGDEVICE *)((char *)this + 176);
  if ( this != (DXGDEVICE *)-176LL && *((struct _KTHREAD **)this + 23) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v1, 0LL) )
  {
    DXGPUSHLOCK::LogEvent(v1, v3, v4);
    ExAcquirePushLockExclusiveEx(v1, 0LL);
  }
  *((_QWORD *)v1 + 1) = KeGetCurrentThread();
  if ( ++*((_DWORD *)this + 480) == 1 )
    KeClearEvent(*((PRKEVENT *)this + 241));
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}

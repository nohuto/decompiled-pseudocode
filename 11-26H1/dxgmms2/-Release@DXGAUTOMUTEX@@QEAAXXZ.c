/*
 * XREFs of ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x140035DF8
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1400F6060 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall DXGAUTOMUTEX::Release(DXGAUTOMUTEX *this)
{
  __int64 v2; // rbx
  void (__fastcall *v3)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax

  if ( !*((_BYTE *)this + 8) )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 685;
  }
  *((_BYTE *)this + 8) = 0;
  v2 = *(_QWORD *)this;
  if ( *(struct _KTHREAD **)(v2 + 24) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v2, 0LL, 0LL);
    WdLogGlobalForLineNumber = 553;
  }
  if ( *(int *)(v2 + 32) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    v3 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
    WdLogGlobalForLineNumber = 556;
    v3(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(v2 + 32))-- == 1 )
  {
    *(_QWORD *)(v2 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(v2 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
}

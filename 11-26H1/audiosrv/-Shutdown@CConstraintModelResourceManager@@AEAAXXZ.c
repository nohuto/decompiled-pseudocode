/*
 * XREFs of ?Shutdown@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F5594
 * Callers:
 *     ??1CConstraintModelResourceManager@@UEAA@XZ @ 0x1800F0ADC (--1CConstraintModelResourceManager@@UEAA@XZ.c)
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006110C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18006991C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F4CC0 (-ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 */

void __fastcall CConstraintModelResourceManager::Shutdown(CConstraintModelResourceManager *this)
{
  void *v2; // rcx
  void *v3; // rcx
  LPCRITICAL_SECTION v4[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 22) )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)v4,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 192));
    *((_DWORD *)this + 70) = 1;
    ATL::CCritSecLock::~CCritSecLock(v4);
    SetThreadpoolWait(*((PTP_WAIT *)this + 22), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 22), 1);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 22));
    *((_QWORD *)this + 22) = 0LL;
  }
  CConstraintModelResourceManager::ReleaseAllResources((struct _RTL_CRITICAL_SECTION *)this);
  v2 = (void *)*((_QWORD *)this + 23);
  if ( v2 && v2 != (void *)-1LL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 23) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    if ( v3 != (void *)-1LL )
    {
      CloseHandle(v3);
      *((_QWORD *)this + 8) = 0LL;
    }
  }
}

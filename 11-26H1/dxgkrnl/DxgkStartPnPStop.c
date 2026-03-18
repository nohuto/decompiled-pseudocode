/*
 * XREFs of DxgkStartPnPStop @ 0x1401AA86C
 * Callers:
 *     DpiFdoStopAdapter @ 0x140248A44 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002EBE4 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKEXCLUSIVE@@QEAA@XZ @ 0x140070F4C (--1DXGADAPTERSTOPRESETLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkInvalidateQdcCache @ 0x1403660C0 (DxgkInvalidateQdcCache.c)
 */

__int64 __fastcall DxgkStartPnPStop(DXGADAPTER *this)
{
  bool v2; // di
  unsigned __int64 v3; // rdx
  struct DXGGLOBAL *Global; // rax
  DXGADAPTER *v6; // [rsp+50h] [rbp-68h] BYREF
  char v7; // [rsp+58h] [rbp-60h]
  _BYTE v8[64]; // [rsp+60h] [rbp-58h] BYREF

  v6 = this;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 136, 0LL);
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  v7 = 1;
  COREACCESS::COREACCESS((COREACCESS *)v8, this);
  COREACCESS::AcquireExclusive((__int64)v8, 1u, 0);
  v2 = *((_QWORD *)this + 396) && *((_DWORD *)this + 50) == 1;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1347;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 1347LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_BYTE *)this + 3057) = 1;
  COREACCESS::~COREACCESS((COREACCESS *)v8, v3);
  DXGADAPTERSTOPRESETLOCKEXCLUSIVE::~DXGADAPTERSTOPRESETLOCKEXCLUSIVE((DXGADAPTERSTOPRESETLOCKEXCLUSIVE *)&v6);
  if ( v2 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(Global, DxgkCheckPairedRenderAdapterForStopCallBack, this, 1LL);
  }
  return DxgkInvalidateQdcCache();
}

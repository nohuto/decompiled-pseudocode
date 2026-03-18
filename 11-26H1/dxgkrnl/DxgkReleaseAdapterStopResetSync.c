/*
 * XREFs of DxgkReleaseAdapterStopResetSync @ 0x14019243C
 * Callers:
 *     ?CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z @ 0x140060BF4 (-CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DpiDisableMsBddFallbackDriver @ 0x14024B0EC (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x14024B32C (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DxgkReleaseAdapterStopResetSync(__int64 a1, int a2)
{
  __int64 v3; // rcx

  if ( a1 )
  {
    v3 = a1 + 136;
    if ( a2 )
    {
      *(_QWORD *)(v3 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v3, 0LL);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 16));
      ExReleasePushLockSharedEx(v3, 0LL);
    }
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 296;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"No hAdapter specified", 296LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}

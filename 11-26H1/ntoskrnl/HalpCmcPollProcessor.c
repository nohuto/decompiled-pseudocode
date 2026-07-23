/*
 * XREFs of HalpCmcPollProcessor @ 0x14044B678
 * Callers:
 *     HalpCmciPollProcessor @ 0x14044BC14 (HalpCmciPollProcessor.c)
 *     HalpCmcWorkerRoutine @ 0x140AD17A0 (HalpCmcWorkerRoutine.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeQueryDpcWatchdogInformation @ 0x14042D6E0 (KeQueryDpcWatchdogInformation.c)
 *     HalpMcaReadErrorPresence @ 0x14044B924 (HalpMcaReadErrorPresence.c)
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 *     HalpMcaReadError @ 0x14044BC70 (HalpMcaReadError.c)
 *     HalpMcaClearError @ 0x14044BFF4 (HalpMcaClearError.c)
 *     HalpMcaReportError @ 0x14044C030 (HalpMcaReportError.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpCmcIsDpcTimeRunningLow @ 0x14057CFDC (HalpCmcIsDpcTimeRunningLow.c)
 *     HalpCmcLogPollingTimeoutEvent @ 0x14057D034 (HalpCmcLogPollingTimeoutEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HalpCmcPollProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v5; // r12d
  unsigned __int8 CurrentIrql; // di
  char v9; // r15
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  char v13; // bp
  char v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  char v17; // [rsp+30h] [rbp-58h]
  char CpuVendor; // [rsp+31h] [rbp-57h]
  int v19; // [rsp+34h] [rbp-54h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+40h] [rbp-48h] BYREF

  v20 = a1;
  v17 = a2;
  v4 = 0;
  v5 = 0;
  v19 = 0;
  CurrentIrql = 0;
  v9 = a2;
  memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
  CpuVendor = HalpGetCpuVendor(0LL, a2, a3, a4);
  while ( 1 )
  {
    result = HalpMcaReadErrorPresence(v10, a3);
    if ( (int)result < 0 )
      break;
    v13 = 0;
    v14 = 0;
    if ( !v9 )
      goto LABEL_7;
    v10 = 2LL;
    v13 = 1;
    if ( KeGetCurrentIrql() < 2u )
    {
      v14 = 1;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = 2;
        LOBYTE(v10) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v10, v12);
      }
    }
    if ( _InterlockedCompareExchange(&HalpCmcLock, 1, 0) )
    {
      if ( v14 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
    }
    else
    {
LABEL_7:
      result = HalpMcaReadError(1LL, v20 + 80, &v19);
      if ( (int)result < 0 )
      {
        if ( v9 )
        {
          if ( v13 )
            result = (unsigned int)_InterlockedExchange(&HalpCmcLock, 0);
          if ( v14 )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            result = CurrentIrql;
            __writecr8(CurrentIrql);
          }
        }
        break;
      }
      v15 = v20;
      if ( CpuVendor == 2 )
        v16 = (*(_QWORD *)(v20 + 120) >> 38) & 0x7FFFLL;
      else
        LODWORD(v16) = 1;
      v4 += v16;
      *(_DWORD *)(v20 + 12) = 0;
      *(_DWORD *)(v15 + 20) = v19;
      HalpMcaReportError(v15, v15 + 80, a3);
      HalpMcaClearError(v20 + 80, a3);
      if ( v17 )
      {
        if ( v13 )
          _InterlockedExchange(&HalpCmcLock, 0);
        if ( v14 )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
      }
      ++v5;
      if ( HalpCmcPollCount != -1 )
      {
        if ( HalpCmcPollCount )
        {
          result = (unsigned int)HalpCmcPollCount;
          if ( v5 >= HalpCmcPollCount )
            break;
        }
      }
      v9 = v17;
    }
    if ( KeGetCurrentIrql() >= 2u )
    {
      memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
      if ( !KeQueryDpcWatchdogInformation(&WatchdogInformation) )
      {
        if ( (unsigned __int8)HalpCmcIsDpcTimeRunningLow(&WatchdogInformation) )
        {
          result = HalpCmcLogPollingTimeoutEvent(&WatchdogInformation, v5);
          break;
        }
      }
    }
  }
  *(_DWORD *)(a4 + 164) = v4;
  if ( v4 > *(_DWORD *)(a4 + 168) )
    *(_DWORD *)(a4 + 168) = v4;
  return result;
}

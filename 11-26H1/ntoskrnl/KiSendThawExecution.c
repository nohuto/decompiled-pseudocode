/*
 * XREFs of KiSendThawExecution @ 0x1404FBC80
 * Callers:
 *     KeThawExecution @ 0x1404FBB50 (KeThawExecution.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405FC494 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405FD294 (KiUpdateBugcheckRecoveryProgress.c)
 *     ExRebootSystemForRecovery @ 0x1406CF57C (ExRebootSystemForRecovery.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KeIsBugCheckActive @ 0x14042EB60 (KeIsBugCheckActive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiSendThawExecution(char a1)
{
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 result; // rax
  signed __int32 v4; // eax
  bool v5; // cc
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  struct _KPRCB *v8; // rcx
  __int64 v9; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v10[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v11; // [rsp+40h] [rbp-C8h]
  int v12; // [rsp+42h] [rbp-C6h]
  __int16 v13; // [rsp+46h] [rbp-C2h]
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v15[33]; // [rsp+50h] [rbp-B8h] BYREF

  LODWORD(v9) = 0;
  v12 = 0;
  v13 = 0;
  memset_0(v15, 0, 0x100uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->IpiFrozen = 0;
  KiFreezeStallOwner = 0LL;
  result = _InterlockedExchange64(&KiDebuggerOwner, 0LL);
  if ( ((unsigned int)KeNumberProcessors_0 > 1 || CurrentPrcb->Number) && !PoAllProcIntrDisabled )
  {
    if ( KiResumeForReboot
      || (v4 = _InterlockedExchangeAdd(&KiFreezeNestingLevel, 0xFFFFFFFF),
          v5 = v4 <= 1,
          result = (unsigned int)(v4 - 1),
          v5)
      && (!KeIsBugCheckActive(&v9)
       || (result = (__int64)KeGetCurrentPrcb(), (_DWORD)v9 != *(_DWORD *)(result + 36))
       || !BYTE4(KiDpcWatchdogConfigurationLock.InitialStack)) )
    {
      v14 = 2097153LL;
      memset_0(v15, 0, 0x100uLL);
      v6 = 0;
      LODWORD(v9) = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v7 = 0;
        do
        {
          v8 = (struct _KPRCB *)KiProcessorBlock[v7];
          if ( v8 != KeGetCurrentPrcb() )
          {
            if ( (v8->IpiFrozen & 0xF) == 2 )
            {
              v8->IpiFrozen = 3;
              if ( a1 )
                KeAddProcessorAffinityEx((unsigned __int16 *)&v14, v6);
            }
            else
            {
              v8->IpiFrozen = 0;
            }
          }
          v7 = ++v6;
        }
        while ( v6 < (unsigned int)KeNumberProcessors_0 );
        LODWORD(v9) = v6;
      }
      v10[1] = (unsigned __int16 *)v15[0];
      v10[0] = (unsigned __int16 *)&v14;
      v11 = 0;
      while ( 1 )
      {
        result = KeEnumerateNextProcessor(&v9, v10);
        if ( (_DWORD)result )
          break;
        while ( *(_DWORD *)(KiProcessorBlock[(unsigned int)v9] + 11656) == 3 )
          _mm_pause();
      }
    }
  }
  return result;
}

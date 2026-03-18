/*
 * XREFs of PopFxRegisterPluginEx @ 0x140605604
 * Callers:
 *     PoFxRegisterPluginEx @ 0x1406045F0 (PoFxRegisterPluginEx.c)
 *     PoFxRegisterPlugin @ 0x1407CD3A0 (PoFxRegisterPlugin.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     PopFxInitializeWorkPool @ 0x1407CD590 (PopFxInitializeWorkPool.c)
 *     PopDiagTraceFxPluginRegistration @ 0x140B3BBA8 (PopDiagTraceFxPluginRegistration.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxRegisterPluginEx(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // ax
  int v7; // ebx
  bool v8; // cf
  __int16 v10; // ax
  __int64 Pool2; // rax
  _DWORD *v12; // r14
  struct _KLOCK_ENTRIES *v13; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v15; // rax
  volatile unsigned __int8 *v16; // rdx
  AutoBoost *v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // rdx

  v3 = *a3;
  if ( *a3 > 3u )
    return (unsigned int)-1073700860;
  switch ( v3 )
  {
    case 3u:
      v8 = a3[1] < 0x60u;
      break;
    case 2u:
      v8 = a3[1] < 0x58u;
      break;
    case 0u:
      return (unsigned int)-1073741811;
    default:
      goto LABEL_11;
  }
  if ( v8 )
    return (unsigned int)-1073741811;
LABEL_11:
  if ( a3[1] < 0x38u )
    return (unsigned int)-1073741811;
  v10 = *a1;
  if ( *a1 > 3u )
    return (unsigned int)-1073700859;
  if ( v10 == 3 )
  {
    if ( a1[1] < 0x20u || !*((_QWORD *)a1 + 1) && !*((_QWORD *)a1 + 3) )
      return (unsigned int)-1073741811;
  }
  else if ( v10 != 2 || a1[1] < 0x18u || !*((_QWORD *)a1 + 1) )
  {
    return (unsigned int)-1073741811;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v12 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    v7 = PopFxInitializeWorkPool(Pool2 + 120, Pool2);
    if ( v7 >= 0 )
    {
      v12[4] = *a1;
      *((_QWORD *)v12 + 3) = a2;
      *((_QWORD *)v12 + 12) = *((_QWORD *)a1 + 1);
      *((_QWORD *)v12 + 13) = *((_QWORD *)a1 + 2);
      if ( *a1 >= 3u )
        *((_QWORD *)v12 + 14) = *((_QWORD *)a1 + 3);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F12420.StateSaveArea, 0LL, 0LL, v13);
      v17 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140F12420.StateSaveArea, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&stru_140F12420.StateSaveArea,
          v15,
          (__int64)&stru_140F12420.StateSaveArea);
      if ( v17 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v16) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v17 + 33), v16, 1);
        }
        else
        {
          *((_BYTE *)v17 + 10) = 1;
        }
      }
      v18 = (_QWORD *)qword_140F12400;
      v19 = *(_QWORD *)qword_140F12400;
      if ( *(_QWORD *)(*(_QWORD *)qword_140F12400 + 8LL) != qword_140F12400 )
        __fastfail(3u);
      *(_QWORD *)v12 = v19;
      *((_QWORD *)v12 + 1) = v18;
      *(_QWORD *)(v19 + 8) = v12;
      *v18 = v12;
      if ( (a2 & 0x80000000) != 0 )
        qword_140F12400 = (__int64)v12;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F12420.StateSaveArea, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F12420.StateSaveArea);
      KeAbPostRelease((unsigned __int64)&stru_140F12420.StateSaveArea);
      KeLeaveCriticalRegion();
      PopDiagTraceFxPluginRegistration(v12, a2, 0LL);
      v8 = *a3 < 2u;
      *((_QWORD *)a3 + 2) = PopFxRequestWorker;
      *((_QWORD *)a3 + 6) = PopFxTransitionCriticalResource;
      *((_QWORD *)a3 + 1) = v12;
      *((_QWORD *)a3 + 4) = 0LL;
      *((_QWORD *)a3 + 5) = 0LL;
      *((_QWORD *)a3 + 3) = 0LL;
      if ( !v8 )
      {
        *((_QWORD *)a3 + 7) = PopFxProcessorIdleVeto;
        *((_QWORD *)a3 + 8) = PopFxPlatformIdleVeto;
        *((_QWORD *)a3 + 9) = PopFxUpdateProcessorIdleState;
        *((_QWORD *)a3 + 10) = PopFxUpdatePlatformIdleState;
      }
      if ( *a1 >= 3u )
      {
        *((_QWORD *)a3 + 11) = PopFxRequestCommon;
        if ( *a1 == 3 )
        {
          if ( *((_QWORD *)a1 + 3) )
            PopFxAcpiPepRegistered = 1;
        }
      }
      return 0;
    }
    else
    {
      ExFreePoolWithTag(v12, 0x4D584650u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}

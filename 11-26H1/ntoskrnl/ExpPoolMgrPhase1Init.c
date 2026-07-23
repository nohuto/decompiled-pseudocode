/*
 * XREFs of ExpPoolMgrPhase1Init @ 0x140CEDD38
 * Callers:
 *     ExpHeapInitPhase1 @ 0x1406D7018 (ExpHeapInitPhase1.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     ExpPoolMgrGetFirstPool @ 0x1404DF874 (ExpPoolMgrGetFirstPool.c)
 *     ExpPoolMgrGetNextPool @ 0x1404E0AB4 (ExpPoolMgrGetNextPool.c)
 *     ExpPoolPhase1Init @ 0x1406D7B28 (ExpPoolPhase1Init.c)
 */

__int64 __fastcall ExpPoolMgrPhase1Init(unsigned __int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  AutoBoost *v7; // rax
  volatile unsigned __int8 *v8; // rdx
  AutoBoost *v9; // rsi
  __int64 i; // rax
  struct _EX_RUNDOWN_REF *v11; // rsi
  int v12; // ebp

  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 8;
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 8), 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v7, (__int64)v5);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v8) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v9 + 33), v8, 1);
    }
    else
    {
      *((_BYTE *)v9 + 10) = 1;
    }
  }
  for ( i = ExpPoolMgrGetFirstPool((__int64)a1); ; i = ExpPoolMgrGetNextPool((__int64)a1, (__int64)v11) )
  {
    v11 = (struct _EX_RUNDOWN_REF *)i;
    if ( !i )
      break;
    if ( (*(_DWORD *)(i + 4) & 1) != 0 )
    {
      v12 = ExpPoolPhase1Init(i);
      if ( v12 < 0 )
      {
        ExReleaseRundownProtection_0(v11 + 3);
        goto LABEL_16;
      }
    }
  }
  _m_prefetchw(a1);
  if ( (_InterlockedOr((volatile signed __int32 *)a1, 1u) & 1) != 0 )
    NT_ASSERT("Flags.Phase1InitComplete == 0");
  v12 = 0;
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}

/*
 * XREFs of VmDeleteMemoryRange @ 0x140B080E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     VmpRemoveMemoryRange @ 0x14051122C (VmpRemoveMemoryRange.c)
 *     VmpLogCreateDeleteMemoryRange @ 0x14081E2F4 (VmpLogCreateDeleteMemoryRange.c)
 *     VmpValidateMemoryRangeParameters @ 0x140B08298 (VmpValidateMemoryRangeParameters.c)
 */

__int64 __fastcall VmDeleteMemoryRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // r14d
  struct _LIST_ENTRY *Blink; // rbp
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 v10; // r11
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rdi
  int v15; // eax
  unsigned int v16; // esi
  __int64 v18; // rcx

  v7 = 0;
  Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( (unsigned int)VmpValidateMemoryRangeParameters(a1, a2, a3, a4) )
  {
    v16 = -1073741811;
  }
  else if ( Blink )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 1;
    --CurrentThread->KernelApcDisable;
    v12 = (AutoBoost *)KeAbPreAcquire((__int64)&Blink[8].Blink, 0LL, 0LL, v9);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[8].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[8].Blink, v12, (__int64)&Blink[8].Blink);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v13);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    v15 = VmpRemoveMemoryRange((PEX_SPIN_LOCK)Blink, a2 >> 12, a1 >> 12, a3, a4);
    v10 = a1;
    v16 = v15;
    if ( v15 >= 0 )
      v16 = 0;
  }
  else
  {
    v16 = -1073741688;
  }
  if ( stru_140F066E8.QuantumTarget )
  {
    if ( *(_DWORD *)stru_140F066E8.QuantumTarget )
    {
      if ( *(char *)(stru_140F066E8.QuantumTarget + 16) < 0 )
      {
        v18 = *(_QWORD *)(stru_140F066E8.QuantumTarget + 24);
        if ( (v18 & 0x80) == v18 )
          VmpLogCreateDeleteMemoryRange(v18, 1, v10, a2, a3, 0LL, a4, v16);
      }
    }
  }
  if ( v7 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[8].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[8].Blink);
    KeAbPostRelease((unsigned __int64)&Blink[8].Blink);
    KeLeaveCriticalRegion();
  }
  return v16;
}

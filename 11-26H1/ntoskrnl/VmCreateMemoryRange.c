/*
 * XREFs of VmCreateMemoryRange @ 0x140821FF0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     VmpInsertMemoryRange @ 0x1404D1D84 (VmpInsertMemoryRange.c)
 *     VmpProcessContextSetup @ 0x1408232B4 (VmpProcessContextSetup.c)
 *     VmpLogCreateDeleteMemoryRange @ 0x140824504 (VmpLogCreateDeleteMemoryRange.c)
 *     VmpAllocateMemoryRanges @ 0x140B01FC0 (VmpAllocateMemoryRanges.c)
 *     VmpFreeMemoryRanges @ 0x140B020AC (VmpFreeMemoryRanges.c)
 *     VmpValidateMemoryRangeParameters @ 0x140B0A3C8 (VmpValidateMemoryRangeParameters.c)
 *     VmpDecodePreallocationRangeHandle @ 0x140B3BEEC (VmpDecodePreallocationRangeHandle.c)
 */

__int64 __fastcall VmCreateMemoryRange(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 MemoryRanges; // rsi
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  _KPROCESS *Process; // r14
  struct _LIST_ENTRY *Blink; // rbp
  int v13; // eax
  int inserted; // edi
  struct _KLOCK_ENTRIES *v15; // r9
  struct _LIST_ENTRY *v16; // rax
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v18; // rax
  void *v19; // rdx
  AutoBoost *v20; // rdi
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // r10d
  int v24; // r11d
  int v26; // [rsp+40h] [rbp-48h]

  MemoryRanges = 0LL;
  v26 = 0;
  v9 = a2;
  v10 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !VmTbFlushEnabled )
    VmTbFlushEnabled = 1;
  Blink = Process[3].ProcessListEntry.Blink;
  if ( !Blink )
  {
    v13 = VmpProcessContextSetup(a4);
    v9 = a2;
    inserted = v13;
    v10 = a1;
    if ( v13 < 0 )
      goto LABEL_29;
    Blink = Process[3].ProcessListEntry.Blink;
  }
  if ( a5 )
    MemoryRanges = VmpDecodePreallocationRangeHandle(Blink, a5);
  if ( (unsigned int)VmpValidateMemoryRangeParameters(v10, v9, a3, a4) || (a6 & 0xFFFFFFFE) != 0 )
  {
    inserted = -1073741811;
  }
  else
  {
    v16 = Blink[7].Blink;
    if ( v16 == (struct _LIST_ENTRY *)-1LL || v16 == (struct _LIST_ENTRY *)a4 )
    {
      if ( MemoryRanges || (MemoryRanges = VmpAllocateMemoryRanges(1LL)) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        v26 = 1;
        --CurrentThread->KernelApcDisable;
        v18 = (AutoBoost *)KeAbPreAcquire((__int64)&Blink[8].Blink, 0LL, 0LL, v15);
        v20 = v18;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[8].Blink, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[8].Blink, v18, (__int64)&Blink[8].Blink);
        if ( v20 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v20, v19);
          else
            *((_BYTE *)v20 + 10) = 1;
        }
        *(_QWORD *)(MemoryRanges + 24) = a2 >> 12;
        *(_QWORD *)(MemoryRanges + 32) = a3 + (a2 >> 12) - 1;
        if ( (a6 & 1) != 0 )
        {
          if ( _bittest64(*((const signed __int64 **)stru_140F06A28.StackBase + 1), 1u) )
            NT_ASSERT("(VmpCheckFeatureEnabled(VmInterfaceFeaturePreserveAdjustable) == 0) || (0)");
          *(_DWORD *)(MemoryRanges + 72) |= 2u;
        }
        v21 = *(_QWORD *)(MemoryRanges + 40);
        *(_QWORD *)(v21 + 48) = a1 >> 12;
        *(_QWORD *)(v21 + 56) = a3 + (a1 >> 12) - 1;
        inserted = VmpInsertMemoryRange((PEX_SPIN_LOCK)Blink, (PRTL_BALANCED_NODE)MemoryRanges, a4);
        if ( inserted >= 0 )
        {
          MemoryRanges = 0LL;
          inserted = 0;
        }
      }
      else
      {
        inserted = -1073741670;
      }
    }
    else
    {
      inserted = -1073740007;
    }
  }
LABEL_29:
  if ( stru_140F06A28.InitialStack
    && *(_DWORD *)stru_140F06A28.InitialStack
    && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 128LL) )
  {
    VmpLogCreateDeleteMemoryRange(v22, 0, v24, v23, a3, a5, a4, inserted);
  }
  if ( v26 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[8].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[8].Blink);
    KeAbPostRelease((unsigned __int64)&Blink[8].Blink);
    KeLeaveCriticalRegion();
  }
  if ( MemoryRanges )
    VmpFreeMemoryRanges((PVOID)MemoryRanges);
  return (unsigned int)inserted;
}

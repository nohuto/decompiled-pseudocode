/*
 * XREFs of ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x14049D58C
 * Callers:
 *     KeInitializeMutant @ 0x14049D570 (KeInitializeMutant.c)
 *     NtdllRunOnceInitMuiCrits @ 0x14061B860 (NtdllRunOnceInitMuiCrits.c)
 *     DifKeInitializeMutantWrapper @ 0x140664F60 (DifKeInitializeMutantWrapper.c)
 *     DifKeInitializeMutexWrapper @ 0x1406650D0 (DifKeInitializeMutexWrapper.c)
 *     PnpInitializeDeviceEvents @ 0x140CCC8EC (PnpInitializeDeviceEvents.c)
 *     ViInitSystemPhase0 @ 0x140CE513C (ViInitSystemPhase0.c)
 *     WmipDriverEntry @ 0x140CE6560 (WmipDriverEntry.c)
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 *     EtwpInitializeRegistration @ 0x140CE7DAC (EtwpInitializeRegistration.c)
 *     ExpProfileInitialization @ 0x140CED694 (ExpProfileInitialization.c)
 *     sub_140D081D0 @ 0x140D081D0 (sub_140D081D0.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiInitializeMutant(struct _KMUTANT *a1, __int64 a2, unsigned __int8 a3, struct _KLOCK_ENTRIES *a4)
{
  char v5; // r14
  char v7; // bp
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_MutantListEntry; // rax
  unsigned __int64 v14; // rax
  volatile unsigned __int8 *v15; // rdx
  int v16; // [rsp+48h] [rbp+10h] BYREF

  v5 = (char)a4;
  v7 = a2;
  *(_OWORD *)&a1->Header.Lock = 0LL;
  *(_OWORD *)&a1->Header.WaitListHead.Blink = 0LL;
  *(_OWORD *)&a1->MutantListEntry.Blink = 0LL;
  *(_QWORD *)&a1->MutantFlags = 0LL;
  v8 = 2LL;
  a1->Header.Type = 2;
  if ( (_BYTE)a2 )
  {
    CurrentThread = KeGetCurrentThread();
    a1->OwnerThread = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(v8) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v8, a2);
    }
    v16 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v16);
      while ( CurrentThread->ThreadLock );
    }
    Blink = CurrentThread->MutantListHead.Blink;
    p_MutantListEntry = &a1->MutantListEntry;
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    p_MutantListEntry->Flink = &CurrentThread->MutantListHead;
    a1->MutantListEntry.Blink = Blink;
    Blink->Flink = p_MutantListEntry;
    CurrentThread->MutantListHead.Blink = p_MutantListEntry;
    CurrentThread->ThreadLock = 0LL;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  else
  {
    a1->Header.SignalState = 1;
  }
  a1->Header.WaitListHead.Blink = &a1->Header.WaitListHead;
  a1->Header.WaitListHead.Flink = &a1->Header.WaitListHead;
  v9 = a1->MutantFlags & 0xFE;
  a1->ApcDisable = a3;
  a1->MutantFlags = v9;
  if ( (v5 & 1) != 0 )
  {
    a1->MutantFlags = v9 | 2;
    if ( v7 )
    {
      v14 = KeAbPreAcquire((__int64)a1, 0LL, 1LL, a4);
      if ( v14 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v15) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v14 + 33), v15, 1);
        }
        else
        {
          *(_BYTE *)(v14 + 10) = 1;
        }
      }
    }
  }
}

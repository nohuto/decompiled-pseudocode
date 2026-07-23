/*
 * XREFs of ExtEnvFreePhysicalMemory @ 0x14059A5B0
 * Callers:
 *     IvtAllocateContextTable @ 0x140508E08 (IvtAllocateContextTable.c)
 *     IvtFreeScalableModePasidTables @ 0x1405A8E04 (IvtFreeScalableModePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405AB470 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x1405AC180 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpMmIsInsideHalVa @ 0x140580468 (HalpMmIsInsideHalVa.c)
 */

void __fastcall ExtEnvFreePhysicalMemory(__int64 a1, struct _LIST_ENTRY *a2, unsigned int a3, unsigned int a4)
{
  struct _LIST_ENTRY *v5; // r14
  KIRQL v7; // al
  struct _LIST_ENTRY *Blink; // rbx
  KIRQL v9; // bp
  __int64 Flink; // rcx
  struct _LIST_ENTRY **p_Flink; // rax
  bool v12; // [rsp+58h] [rbp+20h] BYREF

  if ( a4 <= 1 )
  {
    v5 = (struct _LIST_ENTRY *)a3;
    v12 = 0;
    if ( (int)HalpMmIsInsideHalVa((unsigned __int64)a2, &v12) >= 0 && !v12 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].SparePtr);
      Blink = IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].WaitListEntry.Blink;
      v9 = v7;
      while ( Blink != (struct _LIST_ENTRY *)&IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill11[56] )
      {
        if ( Blink[1].Flink == a2 && Blink[2].Flink == v5 && LODWORD(Blink[3].Flink) == a4 )
        {
          MmFreeContiguousMemory(a2);
          Flink = (__int64)Blink->Flink;
          if ( Blink->Flink->Blink != Blink || (p_Flink = &Blink->Blink->Flink, *p_Flink != Blink) )
            __fastfail(3u);
          *p_Flink = (struct _LIST_ENTRY *)Flink;
          *(_QWORD *)(Flink + 8) = p_Flink;
          HalpMmAllocCtxFree(Flink, (__int64)Blink);
          break;
        }
        Blink = Blink->Flink;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].SparePtr, v9);
    }
  }
}

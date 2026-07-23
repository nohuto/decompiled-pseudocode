/*
 * XREFs of ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x140411870
 * Callers:
 *     KiHandleDeferredPreemption @ 0x1402300C0 (KiHandleDeferredPreemption.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140238FB4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405FDD3C (KiAdjustRescheduleContextForIsolationWidthChange.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAdjustRescheduleContextEntryForThreadRemoval(
        struct _KI_RESCHEDULE_CONTEXT_ENTRY *a1,
        struct _KTHREAD *a2,
        char a3,
        char a4)
{
  _KPRCB *Prcb; // rdx
  _KTHREAD *IdleThread; // rax

  Prcb = a1->Prcb;
  if ( a3 && (a1->AllCompareThreadStateFlags & 0x20) == 0 )
    a1->___u5[0] |= 1u;
  a1->___u5[0] ^= (a1->___u5[0] ^ (2 * a4)) & 2;
  a1->CompareThread = Prcb->IdleThread;
  a1->AllCompareThreadStateFlags = a1->AllCompareThreadStateFlags & 0xC0 | 5;
  IdleThread = Prcb->IdleThread;
  *((_BYTE *)&a1->0 + 1) &= ~1u;
  a1->NewThread = IdleThread;
}

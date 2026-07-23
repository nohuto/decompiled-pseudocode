/*
 * XREFs of ?KiAbpPerformPendingReleases@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x140203BD0
 * Callers:
 *     ?KiAbpPreCleanupThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x1402039C4 (-KiAbpPreCleanupThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 *     ?KiAbpCleanupThreadEntries@AutoBoost@@YAXPEAU_AB_THREAD_ENTRIES@1@PEAU_KTHREAD@@@Z @ 0x140203AAC (-KiAbpCleanupThreadEntries@AutoBoost@@YAXPEAU_AB_THREAD_ENTRIES@1@PEAU_KTHREAD@@@Z.c)
 *     KiSchedulerApc @ 0x14049B710 (KiSchedulerApc.c)
 *     ?KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406007F8 (-KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ?KiAbpPostReleaseEntry@AutoBoost@@YA?AT_AB_BOOST_BITMAP@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140526684 (-KiAbpPostReleaseEntry@AutoBoost@@YA-AT_AB_BOOST_BITMAP@1@PEAU_AB_THREAD_ENTRY@1@@Z.c)
 */

void __fastcall AutoBoost::KiAbpPerformPendingReleases(AutoBoost *this, struct _KTHREAD *a2)
{
  __int64 *v2; // rax
  AutoBoost *v3; // rbp
  __int64 v4; // rsi
  unsigned __int16 v5; // bx
  bool i; // zf
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v10; // rax
  __int64 v11; // rdx

  v2 = (__int64 *)*((_QWORD *)this + 142);
  v3 = this;
  v4 = *v2;
  v5 = *(_WORD *)(*v2 + 12);
  *(_WORD *)(*v2 + 12) = 0;
  for ( i = !_BitScanForward((unsigned int *)&v7, v5); !i; i = !_BitScanForward((unsigned int *)&v7, v5) )
  {
    v8 = 6 * v7;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = 2;
      LOBYTE(this) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(this, v7);
    }
    v10 = AutoBoost::KiAbpPostReleaseEntry(v4 + 16 + 8 * v8);
    AutoBoost::KiAbpUnboostThread(v3, 0LL, v10, 0LL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    __writecr8(CurrentIrql);
    v5 &= v5 - 1;
  }
}

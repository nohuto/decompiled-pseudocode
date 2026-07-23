/*
 * XREFs of ?KiAbpInitializeThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x14049169C
 * Callers:
 *     KiAbInitializeThreadState @ 0x140491674 (KiAbInitializeThreadState.c)
 * Callees:
 *     ?KiAbpInitializeThreadEntries@AutoBoost@@YAXPEAU_AB_THREAD_ENTRIES@1@PEAU_KTHREAD@@K@Z @ 0x1404916FC (-KiAbpInitializeThreadEntries@AutoBoost@@YAXPEAU_AB_THREAD_ENTRIES@1@PEAU_KTHREAD@@K@Z.c)
 */

void __fastcall AutoBoost::KiAbpInitializeThreadState(
        AutoBoost *this,
        struct _KTHREAD *a2,
        __int64 a3,
        unsigned int a4)
{
  AutoBoost **v4; // rbx
  unsigned int v6; // r9d

  v4 = (AutoBoost **)*((_QWORD *)this + 142);
  AutoBoost::KiAbpInitializeThreadEntries(*v4, this, (struct _KTHREAD *)1, a4);
  AutoBoost::KiAbpInitializeThreadEntries(v4[1], this, 0LL, v6);
  *((_DWORD *)this + 29) |= 1u;
  *((_QWORD *)this + 101) = 1LL;
  *((_QWORD *)this + 102) = 1LL;
}

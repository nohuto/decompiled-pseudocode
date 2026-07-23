/*
 * XREFs of ?KiAbpPreWait@AutoBoost@@YAXPEAX@Z @ 0x1404674E0
 * Callers:
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     MiReferenceControlArea @ 0x1404694F0 (MiReferenceControlArea.c)
 *     MiChangingSubsectionProtos @ 0x1406FDDF0 (MiChangingSubsectionProtos.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14026FCF0 (-KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall AutoBoost::KiAbpPreWait(
        AutoBoost *this,
        struct AutoBoost::_AB_THREAD_ENTRY *a2,
        __int64 a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  volatile signed __int32 *v5; // rdi
  __int64 v6; // r8
  unsigned __int8 CurrentIrql; // si
  AutoBoost *v8; // rcx

  v5 = (volatile signed __int32 *)*((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2);
  *((_BYTE *)this + 33) |= 1u;
  if ( (*((_BYTE *)this + 32) & 2) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    AutoBoost::KiAbpAcquireEntryLockRaw(this, a2);
    if ( (*((_BYTE *)this + 32) & 2) != 0 )
      AutoBoost::KiAbpEntryUnlink(v8, a2);
    _InterlockedAnd8((volatile signed __int8 *)this + 35, 0xFEu);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  *((_BYTE *)this + 33) |= 4u;
  v6 = *((_QWORD *)this + 5);
  *((_DWORD *)this + 10) = 0;
  AutoBoost::KiAbpUnboostThread(v5, (__int64)a2, v6, a4);
  *((_BYTE *)this + 33) &= ~1u;
}

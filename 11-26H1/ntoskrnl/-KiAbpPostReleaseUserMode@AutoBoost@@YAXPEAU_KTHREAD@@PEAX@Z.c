/*
 * XREFs of ?KiAbpPostReleaseUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x14026F9E8
 * Callers:
 *     KeAbUserModeEntryFree @ 0x14026F9C0 (KeAbUserModeEntryFree.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14026FCF0 (-KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall AutoBoost::KiAbpPostReleaseUserMode(AutoBoost *this, struct _KTHREAD *a2, void *a3, __int64 a4)
{
  unsigned __int8 v4; // bp
  AutoBoost *v5; // rsi
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rbx
  char v9; // al
  struct AutoBoost::_AB_THREAD_ENTRY *v10; // rdx
  AutoBoost *v11; // rcx
  char v12; // dl
  __int64 v13; // r8
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // [rsp+50h] [rbp+8h]

  v4 = (unsigned __int8)a2;
  v5 = this;
  v6 = *(_QWORD *)(*((_QWORD *)this + 142) + 8LL);
  if ( v6 && (unsigned __int8)a2 < *(_BYTE *)(v6 + 14) )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(this) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(this, a2);
    }
    v8 = 48LL * v4 + v6 + 16;
    v9 = *(_BYTE *)(v8 + 32);
    if ( (v9 & 1) != 0 )
    {
      *(_BYTE *)(v8 + 33) |= 1u;
      if ( (v9 & 2) != 0 )
      {
        AutoBoost::KiAbpAcquireEntryLockRaw((AutoBoost *)v8, (struct AutoBoost::_AB_THREAD_ENTRY *)a2);
        AutoBoost::KiAbpEntryUnlink(v11, v10);
        _InterlockedAnd8((volatile signed __int8 *)(v8 + 35), 0xFEu);
      }
      v12 = *(_BYTE *)(v8 + 36);
      v13 = *(_QWORD *)(v8 + 40);
      v14 = v12;
      *(_DWORD *)(v8 + 40) = 0;
      *(_QWORD *)v8 = 0LL;
      v15 = v12 & 0x7F;
      *(_WORD *)(v8 + 32) = 0;
      *(_WORD *)(v8 - 48LL * (v14 & 0x7F) - 8) |= 1 << (v15 & 0xF);
      AutoBoost::KiAbpUnboostThread(v5, v15, v13, a4);
    }
    v16 = *((_QWORD *)v5 + 100);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 8LL * v4);
      HIBYTE(v17) &= ~0x80u;
      *(_QWORD *)(v16 + 8LL * v4) = v17;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}

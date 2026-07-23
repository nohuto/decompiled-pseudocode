/*
 * XREFs of ?KiAbpPostWaitUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x140224810
 * Callers:
 *     KeWaitForAlertByThreadId @ 0x140223DF0 (KeWaitForAlertByThreadId.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14026FCF0 (-KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall AutoBoost::KiAbpPostWaitUserMode(AutoBoost *this, struct _KTHREAD *a2, void *a3)
{
  struct _KTHREAD *v3; // rbp
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rsi
  unsigned int i; // eax
  __int64 v9; // rbx
  struct AutoBoost::_AB_THREAD_ENTRY *v10; // rdx
  __int64 v11; // r15
  _BYTE *v12; // rdi
  struct AutoBoost::_AB_THREAD_ENTRY *v13; // rdx
  AutoBoost *v14; // rcx
  __int64 v15; // r8
  char v16; // dl
  struct AutoBoost::_AB_THREAD_ENTRY *v17; // [rsp+50h] [rbp+8h]

  v3 = a2;
  v5 = *(_QWORD *)(*((_QWORD *)this + 142) + 8LL);
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    v7 = *((_QWORD *)this + 100);
    if ( v7 )
    {
      for ( i = 0; i < *(unsigned __int8 *)(v5 + 14); ++i )
      {
        v9 = 8LL * i;
        v17 = *(struct AutoBoost::_AB_THREAD_ENTRY **)(v9 + v7);
        v10 = v17;
        if ( v3 == (struct _KTHREAD *)((unsigned __int64)v17 & 0x7FFFFFFFFFFFFFFCLL) )
        {
          LOBYTE(v10) = (unsigned __int8)v17 & 0xFE;
          LOBYTE(v17) = (unsigned __int8)v17 & 0xFE;
          v11 = v5 + 48LL * i + 16;
          v12 = (_BYTE *)(v11 + 33);
          if ( (*(_BYTE *)(v11 + 32) & 2) != 0 && (*v12 & 4) != 0 )
          {
            AutoBoost::KiAbpAcquireEntryLockRaw((AutoBoost *)v11, v10);
            *v12 |= 1u;
            AutoBoost::KiAbpEntryUnlink(v14, v13);
            v15 = *(_QWORD *)(v11 + 40);
            *(_DWORD *)(v11 + 40) = 0;
            _InterlockedAnd8((volatile signed __int8 *)(v11 + 35), 0xFEu);
            v16 = *(_BYTE *)(v11 + 36);
            *(_QWORD *)v11 = 0LL;
            *(_WORD *)(v11 + 32) = 0;
            *(_WORD *)(v11 - 48LL * (v16 & 0x7F) - 8) |= 1 << (v16 & 0xF);
            AutoBoost::KiAbpUnboostThread(this, v3, v15, 0LL);
            HIBYTE(v17) &= ~0x80u;
          }
          *(_QWORD *)(v9 + v7) = v17;
          *v12 &= ~8u;
          break;
        }
      }
    }
    if ( CurrentIrql != 0xFF )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
}

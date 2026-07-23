/*
 * XREFs of ?KiAbpCrossThreadRelease@AutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z @ 0x1404F0FBC
 * Callers:
 *     KeAbCrossThreadRelease @ 0x1405F9D68 (KeAbCrossThreadRelease.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall AutoBoost::KiAbpCrossThreadRelease(
        unsigned __int64 this,
        char *a2,
        volatile signed __int32 *a3,
        struct _KTHREAD *a4)
{
  char *v5; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // rdx
  signed __int8 v8; // al
  signed __int8 v9; // tt
  __int64 v10; // rdx
  struct _SINGLE_LIST_ENTRY *v11; // r9
  __int64 v12; // r8
  char v13; // al

  v5 = a2;
  if ( ((unsigned __int8)a2 & 3) == 3 )
  {
    this = (unsigned __int64)(unsigned __int8)a2 >> 4;
    v5 = (char *)(*(_QWORD *)(*((_QWORD *)a3 + 142) + 8 * (((unsigned __int64)(unsigned __int8)a2 >> 2) & 3))
                + 48 * this
                + 16);
  }
  CurrentIrql = KeGetCurrentIrql();
  v7 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(this) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(this, 2LL);
  }
  _m_prefetchw(v5 + 35);
  v8 = v5[35];
  do
  {
    v9 = v8;
    v8 = _InterlockedCompareExchange8(v5 + 35, v8 | 1, v8);
  }
  while ( v9 != v8 );
  while ( (v8 & 1) != 0 )
  {
    while ( (v5[35] & 1) != 0 )
      _mm_pause();
    _m_prefetchw(v5 + 35);
    v8 = _InterlockedOr8(v5 + 35, 1u);
  }
  v5[33] |= 1u;
  AutoBoost::KiAbpEntryUnlink((AutoBoost *)v5, (struct AutoBoost::_AB_THREAD_ENTRY *)v7);
  _InterlockedAnd8(v5 + 35, 0xFEu);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v5[33] &= ~2u;
  v12 = *((_QWORD *)v5 + 5);
  *((_DWORD *)v5 + 10) = 0;
  AutoBoost::KiAbpUnboostThread(a3, v10, v12, v11);
  v13 = v5[36];
  *(_QWORD *)v5 = 0LL;
  *((_WORD *)v5 + 16) = 0;
  _InterlockedOr16((volatile signed __int16 *)&v5[-48 * (v13 & 0x7F) - 6], 1 << (v13 & 0x7F));
}

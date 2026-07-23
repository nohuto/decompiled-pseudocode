/*
 * XREFs of ?KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406007F8
 * Callers:
 *     KeDeleteMutant @ 0x1403DFA18 (KeDeleteMutant.c)
 * Callees:
 *     ?KiAbpPerformPendingReleases@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x140203BD0 (-KiAbpPerformPendingReleases@AutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 *     KiInsertQueueApc @ 0x14020B150 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     ?KiAbpEntryGetResourceSafe@AutoBoost@@YAPEAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140441E70 (-KiAbpEntryGetResourceSafe@AutoBoost@@YAPEAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpThreadAreAllEntriesFree@AutoBoost@@YAKPEAU_KTHREAD@@@Z @ 0x140445CE0 (-KiAbpThreadAreAllEntriesFree@AutoBoost@@YAKPEAU_KTHREAD@@@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall AutoBoost::KiAbpCrossThreadDelete(AutoBoost *this, void *a2, struct _KTHREAD *a3)
{
  int v4; // r15d
  struct _KPRCB *CurrentPrcb; // r14
  int v7; // edx
  unsigned __int8 CurrentIrql; // si
  char v9; // r9
  __int64 *v10; // rax
  int v11; // r11d
  __int64 v12; // rbp
  volatile unsigned __int8 *v13; // rdx
  unsigned int v14; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdi
  AutoBoost *v18; // r10
  char v19; // r11
  volatile unsigned __int8 *v20; // rdx
  AutoBoost *v21; // rcx
  int v22; // r8d
  __int64 v23; // rdx
  struct _SINGLE_LIST_ENTRY *v24; // r9
  struct _KTHREAD *v25; // rdx
  int v26; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  CurrentPrcb = 0LL;
  if ( !AutoBoost::KiAbpThreadAreAllEntriesFree((AutoBoost *)a2, (struct _KTHREAD *)a2) )
  {
    CurrentIrql = KeGetCurrentIrql();
    v9 = 2;
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
      v9 = 2;
    }
    v10 = (__int64 *)*((_QWORD *)a2 + 142);
    v11 = 1;
    v26 = 0;
    v12 = *v10;
    v13 = (volatile unsigned __int8 *)(unsigned __int16)((1LL << *(_BYTE *)(*v10 + 14)) - 1);
    v14 = (unsigned int)v13 ^ (*(unsigned __int16 *)(*v10 + 8) | *(unsigned __int16 *)(*v10 + 10));
    while ( _BitScanReverse((unsigned int *)&v16, v14) )
    {
      v17 = v12 + 48 * v16;
      v14 &= ~(v11 << v16);
      if ( ((unsigned __int8)v9 & *(_BYTE *)(v17 + 49)) != 0 )
      {
        while ( 1 )
        {
          _m_prefetchw((const void *)(v17 + 51));
          if ( ((unsigned __int8)_InterlockedOr8((volatile signed __int8 *)(v17 + 51), v11) & (unsigned __int8)v11) == 0 )
            break;
          while ( (*(_BYTE *)(v17 + 51) & (unsigned __int8)v11) != 0 )
            _mm_pause();
        }
        if ( AutoBoost::KiAbpEntryGetResourceSafe((AutoBoost *)(v17 + 16), (struct AutoBoost::_AB_THREAD_ENTRY *)v13) == (_QWORD *)this )
        {
          LOBYTE(v13) = 32;
          *(_DWORD *)(v17 + 56) = 0;
          AutoBoost::KiAbpSetEntryValue(v18, v13, v11);
          LOBYTE(v20) = v19;
          AutoBoost::KiAbpSetEntryValue(v21, v20, v22);
          _InterlockedAnd8((volatile signed __int8 *)(v17 + 51), 0xFEu);
          AutoBoost::KiAbpUnboostThread((volatile signed __int32 *)a2, v23, (int)v24, v24);
          _InterlockedOr16((volatile signed __int16 *)(v12 + 12), 1 << (*(_BYTE *)(v17 + 52) & 0x7F));
          _InterlockedOr((volatile signed __int32 *)a2 + 128, 4u);
          v26 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)a2 + 16, 0LL) )
          {
            do
              KeYieldProcessorEx(&v26);
            while ( *((_QWORD *)a2 + 8) );
          }
          if ( (*((_DWORD *)a2 + 29) & 0x4000) != 0 )
          {
            if ( !*((_BYTE *)a2 + 730) )
            {
              *((_BYTE *)a2 + 730) = 1;
              CurrentPrcb = KeGetCurrentPrcb();
              KiInsertQueueApc((__int64)a2 + 648);
              KiSignalThreadForApc((__int64)CurrentPrcb, (__int64)a2 + 648, CurrentIrql, 0);
              v4 = 1;
            }
          }
          else if ( *((_BYTE *)a2 + 388) == 4 && !*((_WORD *)a2 + 57) )
          {
            *((_QWORD *)a2 + 8) = 0LL;
            AutoBoost::KiAbpPerformPendingReleases((AutoBoost *)a2, v25);
            break;
          }
          *((_QWORD *)a2 + 8) = 0LL;
          if ( v4 )
          {
            KiExitDispatcher((__int64)CurrentPrcb, 0LL, 0, 0, CurrentIrql);
            return;
          }
          break;
        }
        _InterlockedAnd8((volatile signed __int8 *)(v17 + 51), 0xFEu);
      }
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}

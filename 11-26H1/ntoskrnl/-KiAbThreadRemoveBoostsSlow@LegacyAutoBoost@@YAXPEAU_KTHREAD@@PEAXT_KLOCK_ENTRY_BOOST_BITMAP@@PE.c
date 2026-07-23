/*
 * XREFs of ?KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140429394
 * Callers:
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272560 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbCrossThreadRelease@LegacyAutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z @ 0x140600118 (-KiAbCrossThreadRelease@LegacyAutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z.c)
 * Callees:
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 *     ?KiAbThreadUnboostCpuPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140429430 (-KiAbThreadUnboostCpuPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1404AAC40 (EtwTraceAutoBoostClearFloor.c)
 *     ?KiAbThreadUnboostIoPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x1404DD524 (-KiAbThreadUnboostIoPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 */

void __fastcall LegacyAutoBoost::KiAbThreadRemoveBoostsSlow(
        LegacyAutoBoost *this,
        struct _KTHREAD *a2,
        __int64 a3,
        union _KLOCK_ENTRY_BOOST_BITMAP a4)
{
  int v4; // ebx
  unsigned int AllBoosts; // ebp
  struct _KTHREAD *v6; // rsi

  if ( (_DWORD)a3 )
  {
    v4 = a3;
    AllBoosts = a4.AllBoosts;
    v6 = a2;
    if ( (a3 & 0x40000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)this + 215);
      LOBYTE(a2) = 1;
      PsBoostThreadIo(this, (__int64)a2, a3, (struct _SINGLE_LIST_ENTRY *)a4.AllFields);
    }
    if ( v4 < 0 )
      LegacyAutoBoost::KiAbThreadUnboostIoPriority(this, (struct _KTHREAD *)1, a3);
    if ( (v4 & 0x3FFFFFFF) != 0 )
      LegacyAutoBoost::KiAbThreadUnboostCpuPriority(
        (ULONG_PTR)this,
        (struct _KTHREAD *)(v4 & 0x3FFFFFFF),
        AllBoosts,
        (struct _SINGLE_LIST_ENTRY *)a4.AllFields);
    if ( (WORD2(xmmword_140FC0C10) & 0x1000) != 0 )
      EtwTraceAutoBoostClearFloor(this, v6, (unsigned int)v4);
  }
}

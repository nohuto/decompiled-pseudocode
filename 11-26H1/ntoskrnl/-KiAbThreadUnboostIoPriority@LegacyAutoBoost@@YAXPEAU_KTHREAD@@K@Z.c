/*
 * XREFs of ?KiAbThreadUnboostIoPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x1404E3F84
 * Callers:
 *     ?KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1404342C4 (-KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PE.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x140205500 (PsBoostThreadIoQoS.c)
 *     PsBoostThreadIo @ 0x1402BA700 (PsBoostThreadIo.c)
 */

void __fastcall LegacyAutoBoost::KiAbThreadUnboostIoPriority(
        LegacyAutoBoost *this,
        struct _KTHREAD *a2,
        __int64 a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  __int64 v4; // r8

  v4 = (_DWORD)a2 != 0 ? 4 : 0;
  _InterlockedDecrement((volatile signed __int32 *)((char *)this + v4 + 860));
  if ( (_DWORD)a2 )
  {
    PsBoostThreadIoQoS(this, 1LL, v4, a4);
  }
  else
  {
    LODWORD(a2) = 1;
    PsBoostThreadIo(this, (__int64)a2, v4, a4);
  }
}

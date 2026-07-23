/*
 * XREFs of ?KiAbCrossThreadRelease@LegacyAutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z @ 0x140600118
 * Callers:
 *     KeAbCrossThreadRelease @ 0x1405F9D68 (KeAbCrossThreadRelease.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406003AC (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x14027183C (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140429394 (-KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PE.c)
 */

void __fastcall LegacyAutoBoost::KiAbCrossThreadRelease(
        struct _KTHREAD *this,
        unsigned __int64 a2,
        LegacyAutoBoost *a3,
        struct _KTHREAD *a4)
{
  LegacyAutoBoost *v5; // rbx
  __int64 v7; // r8

  v5 = (LegacyAutoBoost *)a2;
  if ( (a2 & 1) != 0 )
  {
    a2 = 88LL * (unsigned __int8)(a2 >> 1);
    v5 = (LegacyAutoBoost *)(a2 + *((_QWORD *)a3 + 142) + 16LL);
  }
  LegacyAutoBoost::KiAbEntryRemoveFromTree((__int64)v5, (struct _KLOCK_ENTRY *)a2);
  v7 = *((unsigned int *)v5 + 20);
  *((_BYTE *)v5 + 10) = 0;
  *((_DWORD *)v5 + 20) = 0;
  if ( (_DWORD)v7 )
    LegacyAutoBoost::KiAbThreadRemoveBoostsSlow(a3, this, v7, 0LL);
  *(_QWORD *)v5 = 0LL;
  _InterlockedOr16(
    (volatile signed __int16 *)v5 - 44 * (*((_BYTE *)v5 + 8) & 0x3F) - 3,
    (unsigned __int8)(1 << (*((_BYTE *)v5 + 8) & 0x3F)));
}

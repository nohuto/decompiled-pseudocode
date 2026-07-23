/*
 * XREFs of ?KiAbTryIncrementIoWaiterCounts@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@0@Z @ 0x14026E9C8
 * Callers:
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ?KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1406001C4 (-KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 * Callees:
 *     ?KiAbThreadGetIoQoSPriority@LegacyAutoBoost@@YA?AW4KI_AB_IO_QOS_PRIORITY@1@PEAU_KTHREAD@@@Z @ 0x14026DE44 (-KiAbThreadGetIoQoSPriority@LegacyAutoBoost@@YA-AW4KI_AB_IO_QOS_PRIORITY@1@PEAU_KTHREAD@@@Z.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 */

__int64 __fastcall LegacyAutoBoost::KiAbTryIncrementIoWaiterCounts(
        LegacyAutoBoost *this,
        struct _KLOCK_ENTRY *a2,
        struct _KLOCK_ENTRY *a3)
{
  unsigned int v3; // r9d
  LegacyAutoBoost *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // r11

  v3 = 0;
  v4 = this;
  if ( !*((_BYTE *)this + 9) || (*((_BYTE *)this + 11) & 2) != 0 && (*((_BYTE *)this + 11) & 4) != 0 )
    return 0LL;
  v5 = 88LL * (*((_BYTE *)this + 8) & 0x3F);
  v6 = *(_QWORD *)((char *)v4 - v5 - 16);
  if ( (*((_BYTE *)v4 + 11) & 2) == 0
    && ((int)PsGetIoPriorityThread(*(_QWORD *)((char *)v4 - v5 - 16), a2, a3, 0LL) >= 2 || *(_DWORD *)(v6 + 1504) != v3) )
  {
    ++*(_BYTE *)(v7 + 84);
    *((_BYTE *)v4 + 11) |= 2u;
    if ( *(_BYTE *)(v7 + 84) == 1 )
      v3 = 1;
  }
  if ( (*((_BYTE *)v4 + 11) & 4) == 0 && (int)LegacyAutoBoost::KiAbThreadGetIoQoSPriority(v6) >= 1 )
  {
    *(_DWORD *)(v9 + 84) ^= (*(_DWORD *)(v9 + 84) ^ (*(_DWORD *)(v9 + 84) + 256)) & 0x7F00;
    *(_BYTE *)(v8 + 11) |= 4u;
    if ( (*(_DWORD *)(v9 + 84) & 0x7F00) == 0x100 )
      v3 |= 2u;
  }
  return v3;
}

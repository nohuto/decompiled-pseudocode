/*
 * XREFs of ?KiAbOwnerComputeCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z @ 0x14026F754
 * Callers:
 *     ?KiAbEntryGetCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z @ 0x14026E8F8 (-KiAbEntryGetCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x14027125C (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272FF0 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     ?KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140299AB0 (-KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE.c)
 *     ?KiAbEntryUpdateOwnerTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x14029A38C (-KiAbEntryUpdateOwnerTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z.c)
 *     ?KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1405FD774 (-KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

signed __int8 __fastcall LegacyAutoBoost::KiAbOwnerComputeCpuPriorityKey(
        LegacyAutoBoost *this,
        struct _KLOCK_ENTRY *a2)
{
  char v2; // dl
  unsigned int v3; // edx
  char v4; // cl
  char v6; // al

  v2 = 0;
  if ( (*((_DWORD *)this + 20) & 0x3FFFFFFF) != 0 )
  {
    _BitScanReverse(&v3, *((_DWORD *)this + 20) & 0x3FFFFFFF);
    v2 = v3 + 1;
  }
  v4 = *(_BYTE *)(*((_QWORD *)this - 11 * (*((_BYTE *)this + 8) & 0x3F) - 2) + 563LL);
  if ( v4 > v2 )
  {
    v6 = v4;
    if ( v4 > 30 )
      return 30;
    return v6;
  }
  return v2;
}

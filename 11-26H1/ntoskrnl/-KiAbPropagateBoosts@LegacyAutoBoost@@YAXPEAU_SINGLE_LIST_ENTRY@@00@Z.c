/*
 * XREFs of ?KiAbPropagateBoosts@LegacyAutoBoost@@YAXPEAU_SINGLE_LIST_ENTRY@@00@Z @ 0x14026FC5C
 * Callers:
 *     ?KiAbpDeferredProcessingWorker@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z @ 0x14026FB90 (-KiAbpDeferredProcessingWorker@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 */

void __fastcall LegacyAutoBoost::KiAbPropagateBoosts(
        LegacyAutoBoost *this,
        struct _SINGLE_LIST_ENTRY *a2,
        struct _SINGLE_LIST_ENTRY *a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  _QWORD *i; // r9
  volatile signed __int16 *v8; // rbx
  signed __int32 v9[8]; // [rsp+0h] [rbp-38h] BYREF

  for ( i = *(_QWORD **)this; i; i = *(_QWORD **)this )
  {
    v8 = (volatile signed __int16 *)(i - 101);
    *(_QWORD *)this = *i;
    *i = 1LL;
    _InterlockedOr(v9, 0);
    if ( *((_BYTE *)i - 16) )
      LegacyAutoBoost::KiAbProcessThreadLocks(v8, 4LL, a3, this, a2);
    _InterlockedDecrement16(v8 + 434);
  }
}

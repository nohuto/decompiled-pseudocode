/*
 * XREFs of ?KiAbpDeferredProcessingWorker@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z @ 0x14026FB90
 * Callers:
 *     <none>
 * Callees:
 *     ?KiAbPropagateBoosts@LegacyAutoBoost@@YAXPEAU_SINGLE_LIST_ENTRY@@00@Z @ 0x14026FC5C (-KiAbPropagateBoosts@LegacyAutoBoost@@YAXPEAU_SINGLE_LIST_ENTRY@@00@Z.c)
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 */

void __fastcall LegacyAutoBoost::KiAbpDeferredProcessingWorker(
        LegacyAutoBoost *this,
        struct _KDPC *a2,
        struct _SINGLE_LIST_ENTRY *a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  LegacyAutoBoost *v5; // rbp
  struct _SINGLE_LIST_ENTRY *v6; // rbx
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _SINGLE_LIST_ENTRY *v8; // rsi
  signed __int32 v9[8]; // [rsp+0h] [rbp-38h] BYREF
  struct _SINGLE_LIST_ENTRY v10; // [rsp+50h] [rbp+18h] BYREF

  v10.Next = 0LL;
  v5 = (LegacyAutoBoost *)&a3[4663];
  v6 = a3 + 4662;
  do
  {
    while ( 1 )
    {
      Next = v6->Next;
      if ( !v6->Next )
        break;
      v8 = Next - 102;
      v6->Next = Next->Next;
      Next->Next = (struct _SINGLE_LIST_ENTRY *)1;
      _InterlockedOr(v9, 0);
      if ( BYTE1(Next[-3].Next) )
        LegacyAutoBoost::KiAbProcessThreadLocks(&Next[-102], 2LL, &v10, v5, 0LL);
      _InterlockedDecrement16((volatile signed __int16 *)&v8[108].Next + 2);
    }
    LegacyAutoBoost::KiAbPropagateBoosts(v5, v6, &v10, a4);
  }
  while ( v6->Next );
  a3[4668].Next = 0LL;
  KiReadyDeferredReadyList(a3, &v10);
}

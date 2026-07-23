/*
 * XREFs of ?KiAbIoBoostOwners@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@KPEAU_SINGLE_LIST_ENTRY@@11@Z @ 0x14026EBB8
 * Callers:
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ?KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1406001C4 (-KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 * Callees:
 *     ?KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SINGLE_LIST_ENTRY@@22PEAK@Z @ 0x14026DBD4 (-KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SING.c)
 */

void __fastcall LegacyAutoBoost::KiAbIoBoostOwners(
        struct _KLOCK_ENTRY *this,
        struct _KLOCK_ENTRY *a2,
        struct LegacyAutoBoost::_AB_PRIORITY *a3,
        struct _KTHREAD *a4,
        struct _SINGLE_LIST_ENTRY *a5)
{
  struct _SINGLE_LIST_ENTRY *v5; // r14
  char v8; // al
  _QWORD *Children; // rbx
  char v11; // al
  _QWORD **v12; // rcx
  _QWORD *v13; // rax
  _QWORD *i; // rcx
  struct _SINGLE_LIST_ENTRY v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  v16 = 0;
  LODWORD(v15.Next) = 0;
  v8 = 0;
  Children = this->OwnerTree.Min->Children;
  if ( ((unsigned __int8)a2 & 1) != 0 )
    v8 = 2;
  BYTE1(v16) = v8;
  v11 = BYTE2(v16);
  if ( ((unsigned __int8)a2 & 2) != 0 )
    v11 = 1;
  BYTE2(v16) = v11;
  while ( Children )
  {
    LegacyAutoBoost::KiAbSetMinimumThreadPriority(
      (struct _KLOCK_ENTRY *)(Children - 2),
      (struct _KLOCK_ENTRY *)&v16,
      a3,
      a4,
      v5,
      &v15);
    v12 = (_QWORD **)Children[1];
    v13 = Children;
    if ( v12 )
    {
      Children = (_QWORD *)Children[1];
      for ( i = *v12; i; i = (_QWORD *)*i )
        Children = i;
    }
    else
    {
      while ( 1 )
      {
        Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !Children || (_QWORD *)*Children == v13 )
          break;
        v13 = Children;
      }
    }
  }
  if ( !this->WaitingByte )
    LegacyAutoBoost::KiAbSetMinimumThreadPriority(this, (struct _KLOCK_ENTRY *)&v16, a3, a4, v5, &v15);
}

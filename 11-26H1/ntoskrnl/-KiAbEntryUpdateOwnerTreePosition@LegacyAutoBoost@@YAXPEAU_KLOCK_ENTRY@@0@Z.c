/*
 * XREFs of ?KiAbEntryUpdateOwnerTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x14029A38C
 * Callers:
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x14027125C (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 * Callees:
 *     ?KiAbOwnerComputeCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z @ 0x14026F754 (-KiAbOwnerComputeCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 */

void __fastcall LegacyAutoBoost::KiAbEntryUpdateOwnerTreePosition(
        LegacyAutoBoost *this,
        struct _KLOCK_ENTRY *a2,
        struct _KLOCK_ENTRY *a3)
{
  signed __int8 v5; // al
  signed __int8 v6; // si
  $07BAD7E6BFE160503A0B2CC15B90D4A7 *v7; // rbx
  unsigned __int64 Root; // rdx
  __int64 v9; // r8
  _RTL_BALANCED_NODE *v10; // rax

  v5 = LegacyAutoBoost::KiAbOwnerComputeCpuPriorityKey(this, a2);
  v6 = v5;
  if ( *((_BYTE *)this + 40) != v5 )
  {
    v7 = &a2->40;
    *((_BYTE *)this + 40) = v5;
    RtlRbRemoveNode(v7, (char *)this + 16);
    Root = (unsigned __int64)v7->OwnerTree.Root;
    v9 = 0LL;
    if ( (*(&v7->CpuPriorityKey + 8) & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)v7;
      else
        Root = 0LL;
    }
    if ( Root )
    {
      while ( 1 )
      {
        if ( *(char *)(Root + 24) <= v6 )
        {
          v10 = *(_RTL_BALANCED_NODE **)(Root + 8);
          if ( (*(&v7->CpuPriorityKey + 8) & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_12;
            v10 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v10);
          }
          if ( !v10 )
          {
LABEL_12:
            LOBYTE(v9) = 1;
            break;
          }
        }
        else
        {
          v10 = *(_RTL_BALANCED_NODE **)Root;
          if ( (*(&v7->CpuPriorityKey + 8) & 1) != 0 )
          {
            if ( !v10 )
              break;
            v10 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v10);
          }
          if ( !v10 )
            break;
        }
        Root = (unsigned __int64)v10;
      }
    }
    RtlRbInsertNodeEx(v7, Root, v9, (char *)this + 16);
  }
}

/*
 * XREFs of ?KiAbEntryUpdateWaiterTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x14026F83C
 * Callers:
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ?KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1406001C4 (-KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 */

void __fastcall LegacyAutoBoost::KiAbEntryUpdateWaiterTreePosition(
        LegacyAutoBoost *this,
        struct _KLOCK_ENTRY *a2,
        struct _KLOCK_ENTRY *a3)
{
  char v4; // di
  _RTL_RB_TREE *p_WaiterTree; // rbx
  unsigned __int64 Root; // rdx
  BOOLEAN v7; // r8
  _RTL_BALANCED_NODE *v8; // rax

  v4 = *(_BYTE *)(*((_QWORD *)this - 11 * (*((_BYTE *)this + 8) & 0x3F) - 2) + 195LL);
  if ( v4 > 30 )
    v4 = 30;
  if ( *((_BYTE *)this + 40) != v4 )
  {
    p_WaiterTree = &a2->WaiterTree;
    *((_BYTE *)this + 40) = v4;
    RtlRbRemoveNode(&a2->WaiterTree, (PRTL_BALANCED_NODE)((char *)this + 16));
    Root = (unsigned __int64)p_WaiterTree->Root;
    v7 = 0;
    if ( (*(_BYTE *)&p_WaiterTree->0 & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)p_WaiterTree;
      else
        Root = 0LL;
    }
    if ( Root )
    {
      while ( 1 )
      {
        if ( *(char *)(Root + 24) >= v4 )
        {
          v8 = *(_RTL_BALANCED_NODE **)(Root + 8);
          if ( (*(_BYTE *)&p_WaiterTree->0 & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_14;
            v8 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v8);
          }
          if ( !v8 )
          {
LABEL_14:
            v7 = 1;
            break;
          }
        }
        else
        {
          v8 = *(_RTL_BALANCED_NODE **)Root;
          if ( (*(_BYTE *)&p_WaiterTree->0 & 1) != 0 )
          {
            if ( !v8 )
              break;
            v8 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v8);
          }
          if ( !v8 )
            break;
        }
        Root = (unsigned __int64)v8;
      }
    }
    RtlRbInsertNodeEx(p_WaiterTree, (PRTL_BALANCED_NODE)Root, v7, (PRTL_BALANCED_NODE)((char *)this + 16));
  }
}

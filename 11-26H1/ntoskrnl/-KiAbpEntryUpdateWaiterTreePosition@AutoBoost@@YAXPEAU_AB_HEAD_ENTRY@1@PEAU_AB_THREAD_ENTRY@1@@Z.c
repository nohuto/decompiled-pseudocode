/*
 * XREFs of ?KiAbpEntryUpdateWaiterTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140376ED8
 * Callers:
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 */

void __fastcall AutoBoost::KiAbpEntryUpdateWaiterTreePosition(
        AutoBoost *this,
        struct AutoBoost::_AB_HEAD_ENTRY *a2,
        struct AutoBoost::_AB_THREAD_ENTRY *a3)
{
  char v4; // di
  _RTL_RB_TREE *v5; // rbx
  BOOLEAN v6; // r8
  _RTL_BALANCED_NODE *Root; // rdx
  _RTL_BALANCED_NODE *v8; // rax

  v4 = *(_BYTE *)(*((_QWORD *)a2 - 6 * (*((_BYTE *)a2 + 36) & 0x7F) - 2) + 195LL);
  if ( v4 > 30 )
    v4 = 30;
  if ( *((_BYTE *)a2 + 37) != v4 )
  {
    v5 = (_RTL_RB_TREE *)((char *)this + 56);
    RtlRbRemoveNode((PRTL_RB_TREE)((char *)this + 56), (PRTL_BALANCED_NODE)((char *)a2 + 8));
    *((_BYTE *)a2 + 37) = v4;
    v6 = 0;
    Root = v5->Root;
    if ( (*(_BYTE *)&v5->0 & 1) != 0 )
    {
      if ( Root )
        Root = (_RTL_BALANCED_NODE *)((unsigned __int64)v5 ^ (unsigned __int64)Root);
      else
        Root = 0LL;
    }
    if ( Root )
    {
      while ( 1 )
      {
        if ( SBYTE5(Root[1].Left) - v4 >= 0 )
        {
          v8 = Root->Children[1];
          if ( (*(_BYTE *)&v5->0 & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_14;
            v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v8);
          }
          if ( !v8 )
          {
LABEL_14:
            v6 = 1;
            break;
          }
        }
        else
        {
          v8 = Root->Children[0];
          if ( (*(_BYTE *)&v5->0 & 1) != 0 )
          {
            if ( !v8 )
              break;
            v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v8);
          }
          if ( !v8 )
            break;
        }
        Root = v8;
      }
    }
    RtlRbInsertNodeEx(v5, Root, v6, (PRTL_BALANCED_NODE)((char *)a2 + 8));
  }
}

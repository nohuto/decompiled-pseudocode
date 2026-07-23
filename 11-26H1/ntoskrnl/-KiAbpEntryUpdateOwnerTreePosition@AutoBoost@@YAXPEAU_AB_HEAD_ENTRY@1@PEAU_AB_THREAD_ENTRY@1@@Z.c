/*
 * XREFs of ?KiAbpEntryUpdateOwnerTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140379140
 * Callers:
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 */

void __fastcall AutoBoost::KiAbpEntryUpdateOwnerTreePosition(
        AutoBoost *this,
        struct AutoBoost::_AB_HEAD_ENTRY *a2,
        struct AutoBoost::_AB_THREAD_ENTRY *a3)
{
  _RTL_BALANCED_NODE *v3; // rbx
  int v6; // edi
  unsigned int v7; // edi
  int v8; // ecx
  _RTL_RB_TREE *v9; // r14
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rcx
  int v12; // r8d
  BOOLEAN v13; // al
  _RTL_BALANCED_NODE *v14; // rax
  _RTL_BALANCED_NODE *v15; // rax

  v3 = 0LL;
  v6 = 0;
  if ( (*((_DWORD *)a2 + 10) & 0x3FFFFFFF) != 0 )
  {
    _BitScanReverse(&v7, *((_DWORD *)a2 + 10) & 0x3FFFFFFF);
    v6 = v7 + 1;
  }
  v8 = *(char *)(*((_QWORD *)a2 - 6 * (*((_BYTE *)a2 + 36) & 0x7F) - 2) + 563LL);
  if ( v8 > v6 )
  {
    LOBYTE(v6) = 30;
    if ( v8 < 30 )
      LOBYTE(v6) = *(_BYTE *)(*((_QWORD *)a2 - 6 * (*((_BYTE *)a2 + 36) & 0x7F) - 2) + 563LL);
  }
  if ( *((_BYTE *)a2 + 37) != (_BYTE)v6 )
  {
    v9 = (_RTL_RB_TREE *)((char *)this + 40);
    RtlRbRemoveNode(v9, (PRTL_BALANCED_NODE)((char *)a2 + 8));
    *((_BYTE *)a2 + 37) = v6;
    Min = v9->Min;
    Root = (unsigned __int64)v9->Root;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( !Root )
      {
LABEL_24:
        v13 = 0;
LABEL_18:
        RtlRbInsertNodeEx(v9, v3, v13, (PRTL_BALANCED_NODE)((char *)a2 + 8));
        return;
      }
      Root ^= (unsigned __int64)v9;
    }
    v3 = (_RTL_BALANCED_NODE *)Root;
    v12 = (unsigned __int8)Min & 1;
    v13 = 0;
    if ( Root )
    {
      while ( 1 )
      {
        while ( (char)v6 - SBYTE5(v3[1].Left) < 0 )
        {
          v14 = v3->Children[0];
          if ( v12 )
          {
            if ( !v14 )
              goto LABEL_24;
            v14 = (_RTL_BALANCED_NODE *)((unsigned __int64)v3 ^ (unsigned __int64)v14);
          }
          if ( !v14 )
            goto LABEL_24;
          v3 = v14;
        }
        v15 = v3->Children[1];
        if ( v12 )
        {
          if ( !v15 )
            break;
          v15 = (_RTL_BALANCED_NODE *)((unsigned __int64)v3 ^ (unsigned __int64)v15);
        }
        if ( !v15 )
          break;
        v3 = v15;
      }
      v13 = 1;
    }
    goto LABEL_18;
  }
}

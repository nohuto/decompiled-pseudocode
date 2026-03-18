/*
 * XREFs of ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@QEAAPEAU?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@@2@QEAU32@@Z @ 0x180138554
 * Callers:
 *     ??$_Emplace@AEBQEAVCInteractionTrackerBase@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@_N@1@AEBQEAVCInteractionTrackerBase@@@Z @ 0x1801383BC (--$_Emplace@AEBQEAVCInteractionTrackerBase@@@-$_Tree@V-$_Tset_traits@PEAVCInteractionTrackerBase.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@QEAAXPEAU?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@2@@Z @ 0x1801D6368 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@QEAAXPEAU-$.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@QEAAXPEAU?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@2@@Z @ 0x1801DB4E4 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@QEAAXPEAU-$.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>::_Insert_node(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r11
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rax

  ++*(_QWORD *)(a1 + 8);
  v3 = a3;
  v4 = *(_QWORD **)a1;
  v6 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v6 == v4 )
  {
    *v4 = a3;
    v4[1] = a3;
    v4[2] = a3;
    *(_BYTE *)(a3 + 24) = 1;
    return v3;
  }
  if ( *(_DWORD *)(a2 + 8) )
  {
    *v6 = a3;
    if ( v6 == (_QWORD *)*v4 )
      *v4 = a3;
  }
  else
  {
    v6[2] = a3;
    if ( v6 == (_QWORD *)v4[2] )
      v4[2] = a3;
  }
  v7 = *(_QWORD *)(a3 + 8);
  v8 = a3;
  while ( !*(_BYTE *)(v7 + 24) )
  {
    v10 = *(_QWORD *)(v8 + 8);
    v11 = *(__int64 **)(v10 + 8);
    v12 = *v11;
    if ( v10 == *v11 )
    {
      v12 = v11[2];
      if ( !*(_BYTE *)(v12 + 24) )
      {
LABEL_18:
        *(_BYTE *)(v10 + 24) = 1;
        *(_BYTE *)(v12 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 24LL) = 0;
        v8 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL);
        goto LABEL_17;
      }
      if ( v8 == *(_QWORD *)(v10 + 16) )
        std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>::_Lrotate(a1, v10, a3, v3);
      *(_BYTE *)(*(_QWORD *)(v8 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL),
        a3,
        v3);
    }
    else
    {
      if ( !*(_BYTE *)(v12 + 24) )
        goto LABEL_18;
      if ( v8 == *(_QWORD *)v10 )
        std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>::_Rrotate(a1, v10, a3, v3);
      *(_BYTE *)(*(_QWORD *)(v8 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>::_Lrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL),
        a3,
        v3);
    }
LABEL_17:
    v7 = *(_QWORD *)(v8 + 8);
  }
  *(_BYTE *)(v4[1] + 24LL) = 1;
  return v3;
}

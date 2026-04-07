/*
 * XREFs of ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAPEAU?$_Tree_node@PEAVCWindowData@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@@2@QEAU32@@Z @ 0x1800AFD80
 * Callers:
 *     ??$_Emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x180085E80 (--$_Emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowDat.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAXPEAU?$_Tree_node@PEAVCWindowData@@PEAX@2@@Z @ 0x1800AFEB8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAXPEAU-$_Tree_node@P.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAXPEAU?$_Tree_node@PEAVCWindowData@@PEAX@2@@Z @ 0x1800AFF2C (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAXPEAU-$_Tree_node@P.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Insert_node(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r11
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 i; // r10
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rcx

  ++*(_QWORD *)(a1 + 8);
  v3 = a3;
  v4 = *(_QWORD **)a1;
  v6 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v6 != v4 )
  {
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
    for ( i = a3; ; v7 = *(_QWORD *)(i + 8) )
    {
      if ( *(_BYTE *)(v7 + 24) )
      {
        *(_BYTE *)(v4[1] + 24LL) = 1;
        return v3;
      }
      v9 = *(_QWORD *)(i + 8);
      v10 = *(__int64 **)(v9 + 8);
      v11 = *v10;
      if ( v9 == *v10 )
      {
        v11 = v10[2];
        if ( !*(_BYTE *)(v11 + 24) )
          goto LABEL_15;
        if ( i == *(_QWORD *)(v9 + 16) )
          std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Lrotate(a1);
        *(_BYTE *)(*(_QWORD *)(i + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
        std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Rrotate(a1, *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL));
      }
      else
      {
        if ( !*(_BYTE *)(v11 + 24) )
        {
LABEL_15:
          *(_BYTE *)(v9 + 24) = 1;
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
          i = *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL);
          continue;
        }
        if ( i == *(_QWORD *)v9 )
          std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Rrotate(a1, *(_QWORD *)(i + 8));
        *(_BYTE *)(*(_QWORD *)(i + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
        std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Lrotate(a1);
      }
    }
  }
  *v4 = a3;
  v4[1] = a3;
  v4[2] = a3;
  *(_BYTE *)(a3 + 24) = 1;
  return v3;
}

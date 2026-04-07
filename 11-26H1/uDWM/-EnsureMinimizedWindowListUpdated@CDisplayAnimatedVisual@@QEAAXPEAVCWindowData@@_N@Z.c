/*
 * XREFs of ?EnsureMinimizedWindowListUpdated@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@_N@Z @ 0x18004E0B0
 * Callers:
 *     ?TrackMinimizedWindowDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18004E078 (-TrackMinimizedWindowDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?find@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@2@AEBQEAVCWindowData@@@Z @ 0x180075F18 (-find@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAVC.c)
 *     ??$emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800AE878 (--$emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@2@V32@@Z @ 0x1800AF8AC (-erase@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAV.c)
 */

void __fastcall CDisplayAnimatedVisual::EnsureMinimizedWindowListUpdated(
        CDisplayAnimatedVisual *this,
        struct CWindowData *a2,
        char a3)
{
  __int64 v3; // rax
  _QWORD *v4; // rbx
  char *v5; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  struct CWindowData *v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 )
  {
    v7 = a2;
    v3 = *((_QWORD *)a2 + 56);
    if ( v3 )
    {
      if ( !*((_BYTE *)this + 233) && *(_BYTE *)(v3 + 192) != a3 )
      {
        v4 = (_QWORD *)((char *)this + 320);
        v5 = (char *)this + 320;
        if ( a3 )
        {
          std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::emplace<CWindowData * &>(
            v5,
            v6,
            &v7);
        }
        else
        {
          std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::find(
            v5,
            &v8,
            &v7);
          if ( v8 != *v4 )
            std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::erase(
              v4,
              &v7);
        }
      }
    }
  }
}

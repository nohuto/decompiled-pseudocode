/*
 * XREFs of ?AddWindowMovedAcrossDisplays@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800AEB44
 * Callers:
 *     ?TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z @ 0x1800146B0 (-TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z.c)
 * Callees:
 *     ??$emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800AE878 (--$emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData.c)
 */

void __fastcall CDisplayAnimatedVisual::AddWindowMovedAcrossDisplays(
        CDisplayAnimatedVisual *this,
        struct CWindowData *a2)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF
  struct CWindowData *v3; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = a2;
    if ( *((_QWORD *)a2 + 56) )
    {
      if ( !*((_BYTE *)this + 232) )
        std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::emplace<CWindowData * &>(
          (__int64 *)this + 38,
          (__int64)v2,
          (__int64 *)&v3);
    }
  }
}

/*
 * XREFs of FsRtlCheckNoSharedConflict @ 0x14030EEF0
 * Callers:
 *     FsRtlFastCheckLockForWrite @ 0x14030EDC0 (FsRtlFastCheckLockForWrite.c)
 * Callees:
 *     RtlSplay @ 0x14030BA70 (RtlSplay.c)
 *     FsRtlFindFirstOverlapInNode @ 0x1405301B0 (FsRtlFindFirstOverlapInNode.c)
 */

bool __fastcall FsRtlCheckNoSharedConflict(__int64 a1, _RTL_SPLAY_LINKS **a2, _RTL_SPLAY_LINKS **a3)
{
  _RTL_SPLAY_LINKS *v3; // r9
  _RTL_SPLAY_LINKS *v5; // rcx
  _RTL_SPLAY_LINKS *v6; // rbx
  _RTL_SPLAY_LINKS *v7; // r11
  bool v10; // zf
  _RTL_SPLAY_LINKS *v11; // r10
  _RTL_SPLAY_LINKS *Parent; // rdi
  _RTL_SPLAY_LINKS *LeftChild; // r8
  __int64 v14; // rbx

  v3 = *(_RTL_SPLAY_LINKS **)(a1 + 8);
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v10 = v3 == 0LL;
  if ( v3 )
  {
    v11 = *a2;
    while ( 1 )
    {
      v6 = v3 - 1;
      Parent = v3[-1].Parent;
      if ( v3[-1].RightChild >= v11 && ((LeftChild = Parent->LeftChild) != 0LL || Parent->RightChild) )
      {
        if ( LeftChild <= *a3 && (*a3 != (_RTL_SPLAY_LINKS *)-1LL || v11) )
        {
          if ( LeftChild <= v11 )
            goto LABEL_11;
          v7 = v3 - 1;
        }
        v5 = v3;
        v3 = v3->LeftChild;
      }
      else
      {
        if ( Parent[2].Parent == *a3 && Parent->LeftChild == v11 )
        {
LABEL_11:
          v10 = v3 == 0LL;
          break;
        }
        v5 = v3;
        v3 = v3->RightChild;
      }
      if ( !v3 )
        goto LABEL_11;
    }
  }
  if ( !v10 )
    v7 = v6;
  v14 = (unsigned __int64)&v7[1] & -(__int64)(v7 != 0LL);
  if ( v5 )
    *(_QWORD *)(a1 + 8) = RtlSplay(v5);
  if ( !v14 )
    return 1;
  if ( *(_BYTE *)(v14 - 24 + 8) )
    return FsRtlFindFirstOverlapInNode(v14 - 24, a2, a3) == 0;
  return 0;
}

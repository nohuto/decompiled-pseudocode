/*
 * XREFs of FsRtlCheckNoExclusiveConflict @ 0x14030CF7C
 * Callers:
 *     FsRtlFastCheckLockForRead @ 0x140309FB0 (FsRtlFastCheckLockForRead.c)
 *     FsRtlFastCheckLockForWrite @ 0x14030EDC0 (FsRtlFastCheckLockForWrite.c)
 * Callees:
 *     RtlSplay @ 0x14030BA70 (RtlSplay.c)
 *     RtlRealSuccessor @ 0x14030C4F0 (RtlRealSuccessor.c)
 */

char __fastcall FsRtlCheckNoExclusiveConflict(
        __int64 a1,
        _RTL_SPLAY_LINKS **a2,
        _RTL_SPLAY_LINKS **a3,
        int a4,
        _RTL_SPLAY_LINKS *a5,
        _RTL_SPLAY_LINKS *a6)
{
  _RTL_SPLAY_LINKS *v7; // r11
  PRTL_SPLAY_LINKS v8; // rcx
  _RTL_SPLAY_LINKS *v9; // rbx
  char v13; // bp
  _RTL_SPLAY_LINKS *v14; // rax
  bool v15; // zf
  _RTL_SPLAY_LINKS *v16; // r10
  _RTL_SPLAY_LINKS *RightChild; // r9
  _RTL_SPLAY_LINKS *Parent; // r8

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v13 = 1;
  v14 = *(_RTL_SPLAY_LINKS **)(a1 + 16);
  v15 = v14 == 0LL;
  if ( v14 )
  {
    v16 = *a2;
    while ( 1 )
    {
      RightChild = v14[2].RightChild;
      v7 = v14;
      if ( RightChild >= v16 )
      {
        Parent = v14[1].Parent;
        if ( Parent || v14[1].LeftChild )
          break;
      }
      if ( RightChild == *a3 && v14[1].Parent == v16 )
        goto LABEL_21;
      v9 = v14;
      v14 = v14->RightChild;
LABEL_17:
      if ( !v14 )
      {
LABEL_8:
        v15 = v14 == 0LL;
        goto LABEL_9;
      }
    }
    if ( Parent <= *a3 && (*a3 != (_RTL_SPLAY_LINKS *)-1LL || v16) )
    {
      if ( Parent <= v16 )
        goto LABEL_8;
LABEL_21:
      v8 = v14;
    }
    v9 = v14;
    v14 = v14->LeftChild;
    goto LABEL_17;
  }
LABEL_9:
  if ( !v15 )
    v8 = v7;
  while ( v8 && *a3 >= v8[1].Parent )
  {
    if ( *a2 <= v8[2].RightChild && (v8[2].Parent != a5 || v8[2].LeftChild != a6 || HIDWORD(v8[1].RightChild) != a4) )
    {
      v13 = 0;
      break;
    }
    v8 = RtlRealSuccessor(v8);
  }
  if ( v9 )
    *(_QWORD *)(a1 + 16) = RtlSplay(v9);
  return v13;
}

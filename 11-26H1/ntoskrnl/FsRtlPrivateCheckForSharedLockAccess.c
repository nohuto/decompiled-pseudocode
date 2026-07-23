/*
 * XREFs of FsRtlPrivateCheckForSharedLockAccess @ 0x14030CB80
 * Callers:
 *     FsRtlPrivateCheckWaitingLocks @ 0x14030A7AC (FsRtlPrivateCheckWaitingLocks.c)
 * Callees:
 *     RtlSplay @ 0x14030BA70 (RtlSplay.c)
 *     RtlRealSuccessor @ 0x14030C4F0 (RtlRealSuccessor.c)
 */

char __fastcall FsRtlPrivateCheckForSharedLockAccess(__int64 a1, __int64 a2)
{
  _RTL_SPLAY_LINKS *v2; // rax
  char v5; // bp
  _RTL_SPLAY_LINKS *v7; // r8
  PRTL_SPLAY_LINKS v8; // rcx
  _RTL_SPLAY_LINKS *v9; // rsi
  _RTL_SPLAY_LINKS *RightChild; // r10
  _RTL_SPLAY_LINKS *v11; // r11
  _RTL_SPLAY_LINKS *Parent; // r9
  _RTL_SPLAY_LINKS *v13; // rbx
  _RTL_SPLAY_LINKS *v14; // rdx

  v2 = *(_RTL_SPLAY_LINKS **)(a1 + 16);
  v5 = 1;
  if ( v2 )
  {
    v7 = *(_RTL_SPLAY_LINKS **)a2;
    v8 = 0LL;
    v9 = 0LL;
    do
    {
      RightChild = v2[2].RightChild;
      v11 = v2;
      if ( RightChild >= v7 && ((Parent = v2[1].Parent) != 0LL || v2[1].LeftChild) )
      {
        v13 = *(_RTL_SPLAY_LINKS **)(a2 + 40);
        v14 = v13;
        if ( Parent <= v13 && (v13 != (_RTL_SPLAY_LINKS *)-1LL || v7) )
        {
          if ( Parent <= v7 )
            break;
          v8 = v2;
          v14 = *(_RTL_SPLAY_LINKS **)(a2 + 40);
        }
        v9 = v2;
        v13 = v14;
        v2 = v2->LeftChild;
      }
      else
      {
        v13 = *(_RTL_SPLAY_LINKS **)(a2 + 40);
        if ( RightChild == v13 && v2[1].Parent == v7 )
        {
          v8 = v2;
          v9 = v2;
          v2 = v2->LeftChild;
        }
        else
        {
          v9 = v2;
          v2 = v2->RightChild;
        }
      }
    }
    while ( v2 );
    if ( v2 )
      v8 = v11;
    while ( v8 && v8[1].Parent <= v13 )
    {
      if ( (v8[2].Parent != *(_RTL_SPLAY_LINKS **)(a2 + 24)
         || v8[2].LeftChild != *(_RTL_SPLAY_LINKS **)(a2 + 32)
         || HIDWORD(v8[1].RightChild) != *(_DWORD *)(a2 + 20))
        && (*(_QWORD *)(a2 + 8) || v8[1].LeftChild) )
      {
        v5 = 0;
        break;
      }
      v8 = RtlRealSuccessor(v8);
    }
    if ( v9 )
      *(_QWORD *)(a1 + 16) = RtlSplay(v9);
  }
  return v5;
}

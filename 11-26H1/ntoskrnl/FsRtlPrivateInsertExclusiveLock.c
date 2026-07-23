/*
 * XREFs of FsRtlPrivateInsertExclusiveLock @ 0x14030C2F0
 * Callers:
 *     FsRtlPrivateLock @ 0x14030AE50 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x14030B510 (FsRtlPrivateInsertLock.c)
 * Callees:
 *     RtlRealSuccessor @ 0x14030C4F0 (RtlRealSuccessor.c)
 */

PRTL_SPLAY_LINKS __fastcall FsRtlPrivateInsertExclusiveLock(__int64 a1, _RTL_SPLAY_LINKS *a2)
{
  _RTL_SPLAY_LINKS *v3; // rbp
  _RTL_SPLAY_LINKS *v4; // rdx
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v6; // r8
  char v7; // r9
  bool v9; // zf
  _RTL_SPLAY_LINKS *Parent; // r10
  _RTL_SPLAY_LINKS *RightChild; // rdi
  _RTL_SPLAY_LINKS *v12; // r11
  _RTL_SPLAY_LINKS *v13; // rcx

  v3 = 0LL;
  v4 = *(_RTL_SPLAY_LINKS **)(a1 + 16);
  result = 0LL;
  v6 = 0LL;
  v7 = 0;
  v9 = v4 == 0LL;
  if ( v4 )
  {
    Parent = a2[1].Parent;
    do
    {
      RightChild = v4[2].RightChild;
      v3 = v4;
      if ( RightChild >= Parent && ((v12 = v4[1].Parent) != 0LL || v4[1].LeftChild) )
      {
        v13 = a2[2].RightChild;
        if ( v12 <= v13 && (v13 != (_RTL_SPLAY_LINKS *)-1LL || Parent) )
        {
          if ( v12 <= Parent )
            break;
          result = v4;
        }
        v6 = v4;
        v7 = 1;
        v4 = v4->LeftChild;
      }
      else
      {
        if ( RightChild == a2[2].RightChild && v4[1].Parent == Parent )
        {
          result = v4;
          v6 = v4;
          v4 = v4->LeftChild;
        }
        else
        {
          v6 = v4;
          v4 = v4->RightChild;
        }
        v7 = 0;
      }
    }
    while ( v4 );
    v9 = v4 == 0LL;
  }
  if ( !v9 )
    result = v3;
  a2->Parent = a2;
  a2->LeftChild = 0LL;
  a2->RightChild = 0LL;
  if ( result )
  {
    if ( result->RightChild )
    {
      if ( result->LeftChild )
        result = RtlRealSuccessor(result);
      result->LeftChild = a2;
    }
    else
    {
      result->RightChild = a2;
    }
    a2->Parent = result;
  }
  else if ( v6 )
  {
    if ( v7 )
      v6->LeftChild = a2;
    else
      v6->RightChild = a2;
    a2->Parent = v6;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = a2;
  }
  return result;
}

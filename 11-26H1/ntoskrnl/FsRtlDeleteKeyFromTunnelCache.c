/*
 * XREFs of FsRtlDeleteKeyFromTunnelCache @ 0x140ABDC80
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     RtlDelete @ 0x14030A0F0 (RtlDelete.c)
 *     RtlRealSuccessor @ 0x14030C4F0 (RtlRealSuccessor.c)
 *     RtlDeleteNoSplay @ 0x1403C0570 (RtlDeleteNoSplay.c)
 *     FsRtlEmptyFreePoolList @ 0x1403C0FB0 (FsRtlEmptyFreePoolList.c)
 */

void __stdcall FsRtlDeleteKeyFromTunnelCache(TUNNEL *Cache, ULONGLONG DirectoryKey)
{
  _RTL_SPLAY_LINKS *v2; // rbx
  char v5; // bp
  PRTL_SPLAY_LINKS v6; // rax
  PRTL_SPLAY_LINKS v7; // r15
  _RTL_SPLAY_LINKS *v8; // rax
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v5 = 1;
  if ( TunnelMaxEntries )
  {
    v12[1] = v12;
    v12[0] = v12;
    ExAcquireFastMutex(&Cache->Mutex);
    v6 = Cache->Cache;
    while ( v6 )
    {
      if ( v6[2].Parent < (_RTL_SPLAY_LINKS *)DirectoryKey )
      {
        if ( v2 )
          goto LABEL_13;
        v6 = v6->RightChild;
      }
      else
      {
        if ( v6[2].Parent <= (_RTL_SPLAY_LINKS *)DirectoryKey )
          v2 = v6;
        v6 = v6->LeftChild;
      }
    }
    while ( v2 )
    {
LABEL_13:
      v7 = RtlRealSuccessor(v2);
      if ( v2[2].Parent != (_RTL_SPLAY_LINKS *)DirectoryKey )
        break;
      if ( v5 )
      {
        Cache->Cache = RtlDelete(v2);
        v5 = 0;
      }
      else
      {
        RtlDeleteNoSplay(v2, &Cache->Cache);
      }
      v8 = v2 + 1;
      Parent = v2[1].Parent;
      if ( Parent->LeftChild != &v2[1]
        || (LeftChild = v2[1].LeftChild, LeftChild->Parent != v8)
        || (LeftChild->Parent = Parent,
            Parent->LeftChild = LeftChild,
            --Cache->NumEntries,
            v11 = v12[0],
            *((_QWORD ***)v12[0] + 1) != v12) )
      {
        __fastfail(3u);
      }
      v8->Parent = (_RTL_SPLAY_LINKS *)v12[0];
      v2[1].LeftChild = (_RTL_SPLAY_LINKS *)v12;
      v2 = v7;
      v11[1] = v8;
      v12[0] = &v8->Parent;
    }
    KeReleaseGuardedMutex(&Cache->Mutex);
    FsRtlEmptyFreePoolList(v12);
  }
}

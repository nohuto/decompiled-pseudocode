/*
 * XREFs of RtlDelete @ 0x14030A0F0
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x140308CE0 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x14030A210 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14030C590 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1403BF9C4 (FsRtlPrivateFastUnlockAll.c)
 *     RtlDeleteElementGenericTable @ 0x140482C70 (RtlDeleteElementGenericTable.c)
 *     PfxRemovePrefix @ 0x140808870 (PfxRemovePrefix.c)
 *     FsRtlPruneTunnelCache @ 0x1409DE700 (FsRtlPruneTunnelCache.c)
 *     RtlRemoveUnicodePrefix @ 0x140ABBF80 (RtlRemoveUnicodePrefix.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140ABDC80 (FsRtlDeleteKeyFromTunnelCache.c)
 * Callees:
 *     RtlSplay @ 0x14030BA70 (RtlSplay.c)
 *     RtlSubtreePredecessor @ 0x1403C0650 (RtlSubtreePredecessor.c)
 *     SwapSplayLinks @ 0x1403C0678 (SwapSplayLinks.c)
 */

PRTL_SPLAY_LINKS __stdcall RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v3; // rcx
  _RTL_SPLAY_LINKS *Parent; // rcx
  __int64 v5; // rdx
  PRTL_SPLAY_LINKS v6; // rax
  __int64 v7; // rdx

  if ( Links->LeftChild && Links->RightChild )
  {
    v6 = RtlSubtreePredecessor(Links);
    SwapSplayLinks(v6, Links);
  }
  result = Links->LeftChild;
  if ( result || (result = Links->RightChild) != 0LL )
  {
    Parent = Links->Parent;
    if ( Links->Parent == Links )
    {
      result->Parent = result;
      return result;
    }
    v7 = 8LL;
    if ( Parent->LeftChild != Links )
      v7 = 16LL;
    *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent + v7) = result;
    v3 = Links->Parent;
    result->Parent = Links->Parent;
    return RtlSplay(v3);
  }
  v3 = Links->Parent;
  if ( Links->Parent != Links )
  {
    v5 = 8LL;
    if ( v3->LeftChild != Links )
      v5 = 16LL;
    *(_RTL_SPLAY_LINKS **)((char *)&v3->Parent + v5) = 0LL;
    return RtlSplay(v3);
  }
  return result;
}

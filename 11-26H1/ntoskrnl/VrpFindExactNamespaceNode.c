/*
 * XREFs of VrpFindExactNamespaceNode @ 0x14093979C
 * Callers:
 *     VrpPostEnumerateKey @ 0x140938960 (VrpPostEnumerateKey.c)
 *     VrpDestroyNamespaceNode @ 0x140939B04 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x140939D04 (VrpAddNamespaceNodeToList.c)
 *     VrpPreUnloadKey @ 0x140B29C84 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x1409397C0 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}

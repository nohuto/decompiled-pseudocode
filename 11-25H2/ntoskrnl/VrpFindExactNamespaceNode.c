/*
 * XREFs of VrpFindExactNamespaceNode @ 0x1409491E0
 * Callers:
 *     VrpRegistryCallback @ 0x14084D490 (VrpRegistryCallback.c)
 *     VrpDestroyNamespaceNode @ 0x14094749C (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x140948938 (VrpPostEnumerateKey.c)
 *     VrpAddNamespaceNodeToList @ 0x14094AB48 (VrpAddNamespaceNodeToList.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x140949210 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}

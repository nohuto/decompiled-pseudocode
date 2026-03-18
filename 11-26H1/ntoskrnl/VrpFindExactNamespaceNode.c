/*
 * XREFs of VrpFindExactNamespaceNode @ 0x14097778C
 * Callers:
 *     VrpPostEnumerateKey @ 0x140976950 (VrpPostEnumerateKey.c)
 *     VrpDestroyNamespaceNode @ 0x140977AF4 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x140977CF4 (VrpAddNamespaceNodeToList.c)
 *     VrpPreUnloadKey @ 0x140B27FF4 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x1409777B0 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}

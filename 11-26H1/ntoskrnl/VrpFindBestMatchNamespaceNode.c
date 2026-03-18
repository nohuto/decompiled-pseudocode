/*
 * XREFs of VrpFindBestMatchNamespaceNode @ 0x140977CD0
 * Callers:
 *     VrpCreateNamespaceNode @ 0x1409787E0 (VrpCreateNamespaceNode.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x1409777B0 (VrpFindNamespaceNode.c)
 */

unsigned __int16 *__fastcall VrpFindBestMatchNamespaceNode(
        unsigned __int64 *a1,
        unsigned __int16 *a2,
        unsigned __int64 *a3)
{
  return VrpFindNamespaceNode(a1, a2, 1, 0LL, a3);
}

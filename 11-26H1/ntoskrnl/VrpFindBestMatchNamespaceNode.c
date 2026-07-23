/*
 * XREFs of VrpFindBestMatchNamespaceNode @ 0x140939CE0
 * Callers:
 *     VrpCreateNamespaceNode @ 0x14093A7F0 (VrpCreateNamespaceNode.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x1409397C0 (VrpFindNamespaceNode.c)
 */

unsigned __int16 *__fastcall VrpFindBestMatchNamespaceNode(
        unsigned __int64 *a1,
        unsigned __int16 *a2,
        unsigned __int64 *a3)
{
  return VrpFindNamespaceNode(a1, a2, 1, 0LL, a3);
}

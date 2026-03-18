/*
 * XREFs of GreGetDCOrg @ 0x140089AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14008A5F0 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 */

__int64 __fastcall GreGetDCOrg(HDC a1, struct _POINTL *a2)
{
  return GreGetDCPoint(a1, 0x20u, a2);
}

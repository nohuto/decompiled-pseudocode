/*
 * XREFs of IoUpdateLinkShareAccess @ 0x1407998F0
 * Callers:
 *     <none>
 * Callees:
 *     IoUpdateLinkShareAccessEx @ 0x140A854C0 (IoUpdateLinkShareAccessEx.c)
 */

__int64 __fastcall IoUpdateLinkShareAccess(__int64 a1, __int64 a2, __int64 a3)
{
  return IoUpdateLinkShareAccessEx(a1, a2, a3, 0LL);
}

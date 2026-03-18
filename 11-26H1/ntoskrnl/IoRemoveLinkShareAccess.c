/*
 * XREFs of IoRemoveLinkShareAccess @ 0x140796AB0
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveLinkShareAccessEx @ 0x140A354A0 (IoRemoveLinkShareAccessEx.c)
 */

__int64 __fastcall IoRemoveLinkShareAccess(__int64 a1, __int64 a2, __int64 a3)
{
  return IoRemoveLinkShareAccessEx(a1, a2, a3, 0LL);
}

/*
 * XREFs of ?DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1401AF164
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x14007A464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 * Callees:
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1401AF1B4 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

void __fastcall DestroyEmptyCursorObject(struct tagCURSOR *a1, __int64 a2)
{
  if ( (*((_DWORD *)a1 + 20) & 0x100) != 0 && !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 19760) )
    UnlinkCursor(a1);
  HMFreeObject(a1);
}

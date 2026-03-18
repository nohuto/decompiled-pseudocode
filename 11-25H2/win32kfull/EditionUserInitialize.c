/*
 * XREFs of EditionUserInitialize @ 0x14021D820
 * Callers:
 *     <none>
 * Callees:
 *     ?SessionInitialize@DesktopRecalc@@YAXXZ @ 0x14021D850 (-SessionInitialize@DesktopRecalc@@YAXXZ.c)
 */

__int64 __fastcall EditionUserInitialize(DesktopRecalc *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  DesktopRecalc::SessionInitialize(a1);
  result = W32GetUserSessionState(v2, v1);
  *(_DWORD *)(result + 64200) = -1;
  *(_DWORD *)(result + 64216) = -1;
  return result;
}

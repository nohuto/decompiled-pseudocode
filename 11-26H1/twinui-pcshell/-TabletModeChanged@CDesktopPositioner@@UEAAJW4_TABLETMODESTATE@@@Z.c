/*
 * XREFs of ?TabletModeChanged@CDesktopPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180511E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopPositioner::TabletModeChanged(__int64 a1, int a2)
{
  if ( a2 != *(_DWORD *)(a1 + 80) )
    *(_DWORD *)(a1 + 80) = a2;
  return 0LL;
}

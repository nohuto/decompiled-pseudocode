/*
 * XREFs of ?TabletModeChanged@SurfaceHubPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1804EE1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SurfaceHubPositioner::TabletModeChanged(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 16) = a2;
  result = 0LL;
  *(_BYTE *)(a1 + 440) = 0;
  return result;
}

/*
 * XREFs of HmgIncProcessHandleCountEx @ 0x1400D9490
 * Callers:
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     GreSetBrushOwner @ 0x1400711D0 (GreSetBrushOwner.c)
 *     HmgAllocFast @ 0x1401C5500 (HmgAllocFast.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C8C80 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     HmgIncProcessHandleCountExFast @ 0x1401C83D4 (HmgIncProcessHandleCountExFast.c)
 */

__int64 __fastcall HmgIncProcessHandleCountEx(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 SessionState; // rax

  v3 = a1;
  SessionState = W32GetSessionState(a1);
  return HmgIncProcessHandleCountExFast(*(_QWORD *)(SessionState + 88), v3, a2);
}

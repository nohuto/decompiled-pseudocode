/*
 * XREFs of ??9@YA_NAEBU_MARGINS@@0@Z @ 0x180059334
 * Callers:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180029CF4 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18007C9A4 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?SetInsetFromParent@CPrimitive@@QEAAXAEBU_MARGINS@@@Z @ 0x18008D658 (-SetInsetFromParent@CPrimitive@@QEAAXAEBU_MARGINS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator!=(_DWORD *a1, _DWORD *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2] || a1[3] != a2[3];
}

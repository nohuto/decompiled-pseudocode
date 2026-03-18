/*
 * XREFs of xxxPaintRect @ 0x14005426C
 * Callers:
 *     xxxFillWindow @ 0x140054024 (xxxFillWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     FillRect @ 0x1400557E0 (FillRect.c)
 *     GreSetBrushOrg @ 0x140055A78 (GreSetBrushOrg.c)
 *     xxxGetControlColor @ 0x140055B60 (xxxGetControlColor.c)
 */

__int64 __fastcall xxxPaintRect(__int64 a1, __int64 a2, HDC a3, HBRUSH ControlColor, const RECT *a5)
{
  __int64 v8; // rdi

  v8 = a1;
  if ( !a1 )
    v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent(0LL, a2) + 62) + 8LL) + 24LL);
  GreSetBrushOrg(a3);
  if ( (unsigned __int64)ControlColor < 7 )
    ControlColor = (HBRUSH)xxxGetControlColor(v8, a2, a3, (unsigned int)((_DWORD)ControlColor + 306));
  FillRect(a3, a5, ControlColor);
  GreSetBrushOrg(a3);
  return 1LL;
}

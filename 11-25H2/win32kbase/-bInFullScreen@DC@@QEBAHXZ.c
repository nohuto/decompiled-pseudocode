/*
 * XREFs of ?bInFullScreen@DC@@QEBAHXZ @ 0x1400D0F38
 * Callers:
 *     GreGetClipBox @ 0x14008E7A0 (GreGetClipBox.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1401D07C0 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DC::bInFullScreen(DC *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 9);
  return (v1 & 0x1000) != 0 && (v1 & 0x4000) == 0;
}

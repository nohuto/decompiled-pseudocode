/*
 * XREFs of ?bInFullScreen@DC@@QEBAHXZ @ 0x140117A28
 * Callers:
 *     GreGetClipBox @ 0x14003ACA0 (GreGetClipBox.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DC::bInFullScreen(DC *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 9);
  return (v1 & 0x1000) != 0 && (v1 & 0x4000) == 0;
}

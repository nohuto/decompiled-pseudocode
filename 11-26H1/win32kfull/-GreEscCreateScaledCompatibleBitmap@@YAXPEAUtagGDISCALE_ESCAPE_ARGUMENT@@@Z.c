/*
 * XREFs of ?GreEscCreateScaledCompatibleBitmap@@YAXPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z @ 0x140325F18
 * Callers:
 *     ?GreScalingDispatchEscape@@YAJPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z @ 0x140290888 (-GreScalingDispatchEscape@@YAJPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     GreCreateCompatibleBitmapEx @ 0x1400171C0 (GreCreateCompatibleBitmapEx.c)
 */

void __fastcall GreEscCreateScaledCompatibleBitmap(struct tagGDISCALE_ESCAPE_ARGUMENT *a1)
{
  HBITMAP CompatibleBitmap; // rcx

  CompatibleBitmap = 0LL;
  if ( (unsigned __int16)(*((_WORD *)a1 + 12) - 96) <= 0x180u )
    CompatibleBitmap = GreCreateCompatibleBitmapEx(
                         *((Gre::Base **)a1 + 1),
                         *((_DWORD *)a1 + 4),
                         *((_DWORD *)a1 + 5),
                         0,
                         0LL,
                         (unsigned __int16 *)a1 + 12);
  *((_QWORD *)a1 + 1) = CompatibleBitmap;
}

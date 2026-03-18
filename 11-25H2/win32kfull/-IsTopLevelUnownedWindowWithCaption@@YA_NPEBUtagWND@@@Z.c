/*
 * XREFs of ?IsTopLevelUnownedWindowWithCaption@@YA_NPEBUtagWND@@@Z @ 0x14005A864
 * Callers:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsTopLevelUnownedWindowWithCaption(const struct tagWND *a1)
{
  __int64 v1; // r8
  char v2; // dl

  v1 = *((_QWORD *)a1 + 5);
  v2 = 0;
  if ( (*(_BYTE *)(v1 + 31) & 0xC0) != 0x40 && (*(_BYTE *)(v1 + 30) & 0xC0) == 0xC0 )
    return *((_QWORD *)a1 + 15) == 0LL;
  return v2;
}

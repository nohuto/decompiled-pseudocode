/*
 * XREFs of ?DrawStateW@CButton@@AEAAXPEAVCButtonVisual@@W4ButtonStates@1@@Z @ 0x180008C74
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180008A14 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008D8C (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 */

void __fastcall CButton::DrawStateW(__int64 a1, CImage *a2, unsigned int a3)
{
  struct CBitmapSource *v4; // rdx
  struct CBitmapSource *v5; // rbx
  unsigned int v6; // eax

  v4 = 0LL;
  v5 = 0LL;
  if ( a3 != 4 && *(_DWORD *)(a1 + 232) >= 4u )
  {
    v6 = 1;
    if ( (*(_BYTE *)(a1 + 184) & 0x10) == 0 )
      v6 = a3;
    v4 = *(struct CBitmapSource **)(*(_QWORD *)(a1 + 208) + 8LL * v6);
    if ( *(_DWORD *)(a1 + 264) >= 4u )
      v5 = *(struct CBitmapSource **)(*(_QWORD *)(a1 + 240) + 8LL * v6);
  }
  CImage::SetBitmapSource(a2, v4);
  CButtonVisual::SetGlyphImage(a2, v5);
}

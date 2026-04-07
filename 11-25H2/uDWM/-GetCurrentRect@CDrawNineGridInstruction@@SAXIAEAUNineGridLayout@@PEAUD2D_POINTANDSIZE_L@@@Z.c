/*
 * XREFs of ?GetCurrentRect@CDrawNineGridInstruction@@SAXIAEAUNineGridLayout@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800204B0
 * Callers:
 *     ?WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18001FAE0 (-WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z.c)
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x18001FC58 (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x180020180 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawNineGridInstruction::GetCurrentRect(
        unsigned int a1,
        struct NineGridLayout *a2,
        struct D2D_POINTANDSIZE_L *a3)
{
  __int64 v5; // r9
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // eax

  v5 = a1 / 3;
  v6 = *((_DWORD *)a2 + v5 + 4);
  v7 = a1 % 3;
  *((_DWORD *)a3 + 1) = v6;
  v8 = *((_DWORD *)a2 + v7);
  v9 = *((_DWORD *)a2 + (unsigned int)(v7 + 1)) - v8;
  *(_DWORD *)a3 = v8;
  *((_DWORD *)a3 + 2) = v9;
  *((_DWORD *)a3 + 3) = *((_DWORD *)a2 + (unsigned int)(v5 + 1) + 4) - v6;
}

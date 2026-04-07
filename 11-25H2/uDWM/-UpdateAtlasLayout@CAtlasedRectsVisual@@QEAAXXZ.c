/*
 * XREFs of ?UpdateAtlasLayout@CAtlasedRectsVisual@@QEAAXXZ @ 0x18000488C
 * Callers:
 *     ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x1800047A0 (-ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180004920 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x180004A58 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x180004A88 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 */

void __fastcall CAtlasedRectsVisual::UpdateAtlasLayout(CAtlasedRectsVisual *this)
{
  __int64 i; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  struct tagPOINT v5; // [rsp+50h] [rbp+8h] BYREF
  tagSIZE v6; // [rsp+58h] [rbp+10h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 56); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + 25);
    v6 = 0LL;
    v5 = 0LL;
    v4 = *(_QWORD *)(v3 + 8 * i);
    if ( CVisual::DoCanvasLayout(
           (const struct tagSIZE *)this + 9,
           (const struct _MARGINS *)(v4 + 32),
           (const struct tagSIZE *)(v4 + 24),
           &v5,
           &v6) )
    {
      CAtlasedImage::SetOffset((CAtlasedImage *)v4, &v5);
      CAtlasedImage::SetSize((CAtlasedImage *)v4, &v6);
    }
  }
}

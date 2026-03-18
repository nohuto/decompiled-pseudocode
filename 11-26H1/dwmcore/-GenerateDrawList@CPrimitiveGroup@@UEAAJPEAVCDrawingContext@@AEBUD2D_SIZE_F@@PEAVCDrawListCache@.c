/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18009D060
 * Callers:
 *     <none>
 * Callees:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18009D10C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ @ 0x18027DBC0 (-ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::GenerateDrawList(
        CPrimitiveGroupDrawListGenerator **this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // ebx
  int DrawList; // eax

  if ( this[41] )
  {
    v7 = CPrimitiveGroup::EnsureDrawListGenerator((CPrimitiveGroup *)this);
    if ( v7 < 0 )
    {
      CPrimitiveGroup::ClearPrimitiveContent((CPrimitiveGroup *)this);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x95u, 0LL);
      return (unsigned int)v7;
    }
    DrawList = CPrimitiveGroupDrawListGenerator::GenerateDrawList(this[16], a2, a4);
    v7 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0x98u, 0LL);
      return (unsigned int)v7;
    }
  }
  return 0;
}

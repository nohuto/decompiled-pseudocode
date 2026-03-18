/*
 * XREFs of ?SetEndPoint@?$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_POINT_2F@@@Z @ 0x1801DF594
 * Callers:
 *     ?SetProperty@?$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801DD730 (-SetProperty@-$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@MEAAJU.c)
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ??9@YA_NAEBUD2D_VECTOR_2F@@0@Z @ 0x1802060FC (--9@YA_NAEBUD2D_VECTOR_2F@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearGradientBrushGeneratedT<CLinearGradientBrush,CGradientBrush,bool>::SetEndPoint(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v3; // rdx
  bool v4; // zf
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a2;
  if ( (unsigned __int8)operator!=(&v7, a1 + 32) )
  {
    v4 = a1[6] == 0LL;
    *v3 = a2;
    if ( !v4 )
      CResource::InvalidateConsumingAnimationsInternal((__int64)a1);
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 80LL))(a1, 0LL, 0LL);
  }
  return 0LL;
}

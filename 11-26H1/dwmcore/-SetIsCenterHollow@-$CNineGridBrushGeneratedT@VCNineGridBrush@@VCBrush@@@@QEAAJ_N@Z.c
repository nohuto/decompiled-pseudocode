/*
 * XREFs of ?SetIsCenterHollow@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJ_N@Z @ 0x18024B7B4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18027D050 (-SetProperty@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@MEAAJUDCOMPOSITION_PROPERTY_.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetIsCenterHollow(_BYTE *a1, char a2)
{
  if ( a2 != a1[136] )
  {
    a1[136] = a2;
    (*(void (__fastcall **)(_BYTE *, __int64, _BYTE *))(*(_QWORD *)a1 + 80LL))(a1, 6LL, a1);
  }
  return 0LL;
}

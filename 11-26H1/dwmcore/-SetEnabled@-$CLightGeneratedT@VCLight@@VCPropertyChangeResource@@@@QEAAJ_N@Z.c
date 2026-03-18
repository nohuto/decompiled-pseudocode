/*
 * XREFs of ?SetEnabled@?$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@QEAAJ_N@Z @ 0x18024B140
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D5F0 (-SetProperty@-$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLightGeneratedT<CLight,CPropertyChangeResource>::SetEnabled(_BYTE *a1, char a2)
{
  if ( a2 != a1[80] )
  {
    a1[80] = a2;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 304LL))(a1);
  }
  return 0LL;
}

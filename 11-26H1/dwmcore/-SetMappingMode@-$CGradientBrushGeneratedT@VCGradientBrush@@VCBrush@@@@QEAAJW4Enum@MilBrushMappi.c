/*
 * XREFs of ?SetMappingMode@?$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@QEAAJW4Enum@MilBrushMappingMode@@@Z @ 0x18024BCA8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?Initialize@CGradientBrush@@UEAAJXZ @ 0x180248C70 (-Initialize@CGradientBrush@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGradientBrushGeneratedT<CGradientBrush,CBrush>::SetMappingMode(_DWORD *a1, int a2)
{
  if ( a2 != a1[27] )
  {
    a1[27] = a2;
    (*(void (__fastcall **)(_DWORD *, __int64, _DWORD *))(*(_QWORD *)a1 + 80LL))(a1, 6LL, a1);
  }
  return 0LL;
}

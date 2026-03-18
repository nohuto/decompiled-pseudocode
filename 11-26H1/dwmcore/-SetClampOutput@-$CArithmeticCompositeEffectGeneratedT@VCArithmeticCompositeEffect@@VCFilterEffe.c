/*
 * XREFs of ?SetClampOutput@?$CArithmeticCompositeEffectGeneratedT@VCArithmeticCompositeEffect@@VCFilterEffect@@@@QEAAJI@Z @ 0x18024A6B8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CArithmeticCompositeEffectGeneratedT<CArithmeticCompositeEffect,CFilterEffect>::SetClampOutput(
        _DWORD *a1,
        int a2)
{
  if ( a2 != a1[92] )
  {
    a1[92] = a2;
    (*(void (__fastcall **)(_DWORD *, _QWORD, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, 0LL, 0LL);
  }
  return 0LL;
}

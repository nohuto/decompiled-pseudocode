/*
 * XREFs of ?SetVisual@?$CVisualReferenceControllerGeneratedT@VCVisualReferenceController@@VCVisualReference@@@@QEAAJPEAVCVisual@@@Z @ 0x18013EBF4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ @ 0x18004C160 (-GetTargetResource@-$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ.c)
 *     ??$ReplaceNotifier@VCVisual@@@CResource@@QEAAXPEAPEAV?$CWeakReference@VCVisual@@@@PEAVCVisual@@@Z @ 0x18013EC60 (--$ReplaceNotifier@VCVisual@@@CResource@@QEAAXPEAPEAV-$CWeakReference@VCVisual@@@@PEAVCVisual@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualReferenceControllerGeneratedT<CVisualReferenceController,CVisualReference>::SetVisual(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v2; // rsi
  __int64 TargetResource; // rax

  v2 = a1 + 9;
  TargetResource = 0LL;
  if ( a1[9] )
    TargetResource = CWeakReference<CVisual>::GetTargetResource(*v2);
  if ( a2 != TargetResource )
  {
    CResource::ReplaceNotifier<CVisual>(a1, v2, a2);
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 80))(a1, 0LL, 0LL);
  }
  return 0LL;
}

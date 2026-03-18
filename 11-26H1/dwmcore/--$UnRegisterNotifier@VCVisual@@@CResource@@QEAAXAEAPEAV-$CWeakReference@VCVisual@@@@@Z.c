/*
 * XREFs of ??$UnRegisterNotifier@VCVisual@@@CResource@@QEAAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x18013F068
 * Callers:
 *     ??1?$CVisualReferenceControllerGeneratedT@VCVisualReferenceController@@VCVisualReference@@@@MEAA@XZ @ 0x18013EBCC (--1-$CVisualReferenceControllerGeneratedT@VCVisualReferenceController@@VCVisualReference@@@@MEAA.c)
 *     ??$ReplaceNotifier@VCVisual@@@CResource@@QEAAXPEAPEAV?$CWeakReference@VCVisual@@@@PEAVCVisual@@@Z @ 0x18013EC60 (--$ReplaceNotifier@VCVisual@@@CResource@@QEAAXPEAPEAV-$CWeakReference@VCVisual@@@@PEAVCVisual@@@.c)
 * Callees:
 *     ?RemoveListener@CResourceWeakRef@@QEAAXPEBVCResource@@@Z @ 0x18013F098 (-RemoveListener@CResourceWeakRef@@QEAAXPEBVCResource@@@Z.c)
 */

void __fastcall CResource::UnRegisterNotifier<CVisual>(struct CResource *a1, CResourceWeakRef **a2)
{
  if ( *a2 )
  {
    CResourceWeakRef::RemoveListener(*a2, a1);
    *a2 = 0LL;
  }
}

/*
 * XREFs of ??1?$CVisualReferenceControllerGeneratedT@VCVisualReferenceController@@VCVisualReference@@@@MEAA@XZ @ 0x18013EBCC
 * Callers:
 *     ??_ECVisualReferenceController@@UEAAPEAXI@Z @ 0x18013EB80 (--_ECVisualReferenceController@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$UnRegisterNotifier@VCVisual@@@CResource@@QEAAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x18013F068 (--$UnRegisterNotifier@VCVisual@@@CResource@@QEAAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 */

void __fastcall CVisualReferenceControllerGeneratedT<CVisualReferenceController,CVisualReference>::~CVisualReferenceControllerGeneratedT<CVisualReferenceController,CVisualReference>(
        CResource *this)
{
  CResource::UnRegisterNotifier<CVisual>(this);
  CResource::~CResource(this);
}

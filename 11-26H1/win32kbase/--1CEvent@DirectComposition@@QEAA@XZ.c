/*
 * XREFs of ??1CEvent@DirectComposition@@QEAA@XZ @ 0x140162780
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400AC320 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1400AE780 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CEvent::~CEvent(DirectComposition::CEvent *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    ObfDereferenceObject(v1);
}

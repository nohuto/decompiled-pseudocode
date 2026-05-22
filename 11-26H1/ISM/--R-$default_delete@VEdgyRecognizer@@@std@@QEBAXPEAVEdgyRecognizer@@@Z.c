/*
 * XREFs of ??R?$default_delete@VEdgyRecognizer@@@std@@QEBAXPEAVEdgyRecognizer@@@Z @ 0x180156AB8
 * Callers:
 *     ??$?4U?$default_delete@VEdgyRecognizer@@@std@@$0A@@?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180155C2C (--$-4U-$default_delete@VEdgyRecognizer@@@std@@$0A@@-$unique_ptr@VEdgyRecognizer@@U-$default_dele.c)
 *     ??1?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@std@@QEAA@XZ @ 0x180156904 (--1-$unique_ptr@VEdgyRecognizer@@U-$default_delete@VEdgyRecognizer@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ @ 0x18014D95C (--1-$unique_ptr@VDragGestureTracker@@U-$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<EdgyRecognizer>::operator()(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    std::unique_ptr<DragGestureTracker>::~unique_ptr<DragGestureTracker>(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x50);
  }
}

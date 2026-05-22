/*
 * XREFs of ??0EdgyRecognizer@@QEAA@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x180159180
 * Callers:
 *     ??$make_unique@VEdgyRecognizer@@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@$0A@@std@@YA?AV?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@0@$$QEAPEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x1801563E0 (--$make_unique@VEdgyRecognizer@@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@$0A@@std@@YA-A.c)
 * Callees:
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x18002E18C (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@VDragGestureTracker@@@std@@$0A@@?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18014BFA8 (--$-4U-$default_delete@VDragGestureTracker@@@std@@$0A@@-$unique_ptr@VDragGestureTracker@@U-$defa.c)
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18014D35C (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 *     ??1?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ @ 0x18014D95C (--1-$unique_ptr@VDragGestureTracker@@U-$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
EdgyRecognizer *__fastcall EdgyRecognizer::EdgyRecognizer(
        EdgyRecognizer *this,
        struct BamoEdgyGestureRecognitionConfigurationProxy *a2)
{
  __int64 *v4; // rax
  char *v5; // rbx
  char v7; // [rsp+38h] [rbp+10h] BYREF
  DragGestureTracker *v8; // [rsp+40h] [rbp+18h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  QpcTimeConverter::QpcTimeConverter((EdgyRecognizer *)((char *)this + 64));
  v7 = 1;
  v4 = (__int64 *)std::make_unique<DragGestureTracker,bool,0>(&v8, &v7);
  std::unique_ptr<DragGestureTracker>::operator=<std::default_delete<DragGestureTracker>,0>((__int64 *)this, v4);
  std::unique_ptr<DragGestureTracker>::~unique_ptr<DragGestureTracker>(&v8);
  **(_DWORD **)this = 2;
  *((_DWORD *)this + 2) = 2;
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
  {
    v5 = (char *)a2 + 8;
    *((_QWORD *)this + 3) = *(_QWORD *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v5 + 24LL))(v5);
    *((float *)this + 8) = (*(float (__fastcall **)(char *))(*(_QWORD *)v5 + 32LL))(v5);
    *((_DWORD *)this + 9) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v5 + 40LL))(v5);
    *((_QWORD *)this + 5) = (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v5 + 48LL))(v5);
  }
  *((_QWORD *)this + 6) = 0LL;
  return this;
}

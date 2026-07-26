/*
 * XREFs of ?ndisBindBuilderCleanup@@YAXXZ @ 0x14014DEA4
 * Callers:
 *     ?ndisBindInitialize@@YAJXZ @ 0x140191868 (-ndisBindInitialize@@YAJXZ.c)
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x140191918 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x14014D2D0 (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 */

void ndisBindBuilderCleanup(void)
{
  PVOID v0; // rbx

  v0 = qword_14011F6E0;
  if ( qword_14011F6E0 )
  {
    NdisBindBuilderGlobal::~NdisBindBuilderGlobal((NdisBindBuilderGlobal *)qword_14011F6E0);
    ExFreePoolWithTag(v0, 0x4742444Eu);
    qword_14011F6E0 = 0LL;
  }
}

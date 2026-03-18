/*
 * XREFs of ??1CDataStreamWriter@@QEAA@XZ @ 0x1801B34FC
 * Callers:
 *     ?ReleaseCommandBatch@CChannel@@UEAAXXZ @ 0x180174C20 (-ReleaseCommandBatch@CChannel@@UEAAXXZ.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1802323A4 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18002C0C0 (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 */

void __fastcall CDataStreamWriter::~CDataStreamWriter(void **this)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rbx
  void *v4; // rcx

  CDataStreamWriter::FreeResources(this);
  v2 = (_QWORD **)(this + 2);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    operator delete(v4);
  }
}

/*
 * XREFs of ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1802323A4
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180118BB8 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x1802322A4 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CDataStreamWriter@@QEAA@XZ @ 0x1801B34FC (--1CDataStreamWriter@@QEAA@XZ.c)
 */

void **__fastcall CCommandBatch::`scalar deleting destructor'(void **this)
{
  CDataStreamWriter::~CDataStreamWriter(this);
  operator delete(this);
  return this;
}

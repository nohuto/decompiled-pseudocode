/*
 * XREFs of ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18002C0C0
 * Callers:
 *     ??1CDataStreamWriter@@QEAA@XZ @ 0x1801B34FC (--1CDataStreamWriter@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 */

void __fastcall CDataStreamWriter::FreeResources(void **this)
{
  CDataStreamWriter *v1; // rbx
  CDataStreamWriter *v3; // rcx

  v1 = (CDataStreamWriter *)*this;
  if ( *this != this )
  {
    do
    {
      v3 = v1;
      v1 = *(CDataStreamWriter **)v1;
      operator delete(v3);
    }
    while ( v1 != (CDataStreamWriter *)this );
  }
  operator delete(this[4]);
}

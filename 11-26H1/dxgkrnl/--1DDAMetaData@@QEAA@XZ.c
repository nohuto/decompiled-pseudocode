/*
 * XREFs of ??1DDAMetaData@@QEAA@XZ @ 0x1401EF534
 * Callers:
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1401EF568 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 * Callees:
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x14007F948 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 */

void __fastcall DDAMetaData::~DDAMetaData(DDAMetaData *this)
{
  AUTOEXPANDALLOCATION *v2; // rcx
  AUTOEXPANDALLOCATION *v3; // rcx

  v2 = (AUTOEXPANDALLOCATION *)*((_QWORD *)this + 4);
  if ( v2 )
    AUTOEXPANDALLOCATION::`scalar deleting destructor'(v2);
  v3 = (AUTOEXPANDALLOCATION *)*((_QWORD *)this + 6);
  if ( v3 )
    AUTOEXPANDALLOCATION::`scalar deleting destructor'(v3);
}

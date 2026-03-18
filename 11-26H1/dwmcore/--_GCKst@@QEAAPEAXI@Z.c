/*
 * XREFs of ??_GCKst@@QEAAPEAXI@Z @ 0x1802946DC
 * Callers:
 *     ??1?$unique_ptr@VCKst@@U?$default_delete@VCKst@@@std@@@std@@QEAA@XZ @ 0x18021F224 (--1-$unique_ptr@VCKst@@U-$default_delete@VCKst@@@std@@@std@@QEAA@XZ.c)
 *     ??1CGlobalInputManager@@UEAA@XZ @ 0x180294644 (--1CGlobalInputManager@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CKst@@QEAA@XZ @ 0x180294D74 (--1CKst@@QEAA@XZ.c)
 */

CKst *__fastcall CKst::`scalar deleting destructor'(CKst *this)
{
  CKst::~CKst(this);
  operator delete(this);
  return this;
}

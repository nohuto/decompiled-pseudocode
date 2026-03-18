/*
 * XREFs of ??_GCMmcssTask@@QEAAPEAXI@Z @ 0x180294DB0
 * Callers:
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x1801DB274 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 *     ??1?$unique_ptr@VCMmcssTask@@U?$default_delete@VCMmcssTask@@@std@@@std@@QEAA@XZ @ 0x18021F100 (--1-$unique_ptr@VCMmcssTask@@U-$default_delete@VCMmcssTask@@@std@@@std@@QEAA@XZ.c)
 *     ??1CKst@@QEAA@XZ @ 0x180294D74 (--1CKst@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x18022C0F0 (--1CMmcssTask@@QEAA@XZ.c)
 */

CMmcssTask *__fastcall CMmcssTask::`scalar deleting destructor'(CMmcssTask *this)
{
  CMmcssTask::~CMmcssTask(this);
  operator delete(this);
  return this;
}

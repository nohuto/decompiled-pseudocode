/*
 * XREFs of ??1CDrawListEntryBatch@@EEAA@XZ @ 0x180150FDC
 * Callers:
 *     ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x180150FA0 (--_GCDrawListEntryBatch@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??1?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@QEAA@XZ @ 0x180151040 (--1-$deque@PEAVCMegaRectBatchCommand@@V-$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@QEAA@X.c)
 *     ?FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z @ 0x180176380 (-FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z.c)
 */

void __fastcall CDrawListEntryBatch::~CDrawListEntryBatch(CDrawListEntryBatch *this)
{
  bool v1; // zf
  volatile signed __int32 *v3; // rcx

  v1 = *((_DWORD *)this + 10) == -1;
  *(_QWORD *)this = &CDrawListEntryBatch::`vftable';
  if ( !v1 )
    CDrawListBatchManager::FreeBatchResources((CDrawListBatchManager *)(*((_QWORD *)this + 2) + 24LL), this);
  std::deque<CMegaRectBatchCommand *>::~deque<CMegaRectBatchCommand *>((char *)this + 128);
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 15);
  if ( v3 )
  {
    *((_QWORD *)this + 15) = 0LL;
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v3);
  }
  Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::InternalRelease((char *)this + 24);
}

/*
 * XREFs of ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1801370A8
 * Callers:
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x180136480 (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18013686C (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180070EC0 (-CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA-AV-$com_ptr_t@VCDrawListEntryBatch@@.c)
 *     ?DestroyDeviceResources@CSharedDirect3DResources@CDrawListEntryBatch@@QEAAXXZ @ 0x180135158 (-DestroyDeviceResources@CSharedDirect3DResources@CDrawListEntryBatch@@QEAAXXZ.c)
 *     ?Clear@?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ @ 0x180136754 (-Clear@-$ShrinkableArray@PEAVCBatchCommand@@U-$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180138778 (--1-$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CDrawListBatchManager::DestroyDeviceResources(CDrawListBatchManager *this)
{
  CDrawListEntryBatch::CSharedDirect3DResources *v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  CDrawListBatchManager::CloseCurrentDrawListEntryBatch((__int64)this, &v4);
  wil::com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>::~com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>(&v4);
  v2 = (CDrawListEntryBatch::CSharedDirect3DResources *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    CDrawListEntryBatch::CSharedDirect3DResources::DestroyDeviceResources(v2);
    v3 = (volatile signed __int32 *)*((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = 0LL;
    if ( v3 )
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v3);
  }
  ShrinkableArray<CBatchCommand *,UniqueLifetime<CBatchCommand *>>::Clear((__int64)this + 40);
  ShrinkableArray<CDrawListEntryBatch *,RefCountLifetime<CDrawListEntryBatch *>>::Clear((__int64)this + 80);
}

/*
 * XREFs of ??1CDrawListBatchManager@@IEAA@XZ @ 0x180136480
 * Callers:
 *     ??1CD2DContext@@UEAA@XZ @ 0x180135878 (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A5F4 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_GCBatchOptimizer@@QEAAPEAXI@Z @ 0x180135388 (--_GCBatchOptimizer@@QEAAPEAXI@Z.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1801370A8 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ??1?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180138778 (--1-$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CDrawListBatchManager::~CDrawListBatchManager(CBatchOptimizer **this)
{
  CBatchOptimizer *v2; // rcx

  CDrawListBatchManager::DestroyDeviceResources((CDrawListBatchManager *)this);
  v2 = this[17];
  if ( v2 )
    CBatchOptimizer::`scalar deleting destructor'(v2);
  wil::com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>::~com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>(this + 16);
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(this + 15);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)(this + 10));
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)(this + 5));
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this);
}

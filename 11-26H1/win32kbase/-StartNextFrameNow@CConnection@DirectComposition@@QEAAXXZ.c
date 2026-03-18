/*
 * XREFs of ?StartNextFrameNow@CConnection@DirectComposition@@QEAAXXZ @ 0x14014E304
 * Callers:
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1401078A4 (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 *     ?StartNextFrameNow@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x14014E2B8 (-StartNextFrameNow@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CConnection::StartNextFrameNow(DirectComposition::CConnection *this)
{
  __int64 v1; // rcx

  if ( *((_DWORD *)this + 37) )
  {
    v1 = *((_QWORD *)this + 37);
    if ( v1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 176LL))(v1);
  }
}

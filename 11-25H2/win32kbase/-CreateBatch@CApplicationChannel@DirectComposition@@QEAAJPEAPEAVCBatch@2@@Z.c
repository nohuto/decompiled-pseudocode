/*
 * XREFs of ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x140055950
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400227BC (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400238D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1400554CC (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140049A84 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rax

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this);
  v6 = DirectComposition::Memory::AllocateAndClear_0(0xA0uLL, 1633829700LL, v5 != 2);
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = this;
    *(_DWORD *)(v6 + 20) = 7;
    *(_QWORD *)(v6 + 120) = &DirectComposition::CBatch::CBatchListProxy::`vftable';
    *(_QWORD *)(v6 + 128) = v6;
    *a2 = (struct DirectComposition::CBatch *)v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}

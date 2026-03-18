/*
 * XREFs of ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400C01EC
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400227BC (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401981B0 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?GetAnimationResource@CAnimationBinding@DirectComposition@@QEAAPEAVCResourceMarshaler@2@XZ @ 0x1400C02C4 (-GetAnimationResource@CAnimationBinding@DirectComposition@@QEAAPEAVCResourceMarshaler@2@XZ.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400C02E4 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(
        DirectComposition::CAnimationBinding **this,
        struct DirectComposition::CBatch ***a2)
{
  char *v5; // rbx
  DirectComposition::CAnimationBinding **v6; // rax
  DirectComposition::CAnimationBinding *v7; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( this[63] )
  {
    do
    {
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v8) )
        break;
      v5 = (char *)v8;
      *(_DWORD *)v8 = 20;
      *(_OWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 1) = 13;
      *((_DWORD *)v5 + 2) = *((_DWORD *)DirectComposition::CAnimationBinding::GetAnimationResource(this[63]) + 8);
      *((_DWORD *)v5 + 3) = *(_DWORD *)(*((_QWORD *)this[63] + 2) + 32LL);
      *((_DWORD *)v5 + 4) = *((_DWORD *)this[63] + 3);
      v6 = (DirectComposition::CAnimationBinding **)this[63];
      v7 = *v6;
      *v6 = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(
        this[63],
        (struct DirectComposition::CApplicationChannel *)this);
      this[63] = v7;
    }
    while ( v7 );
  }
  return this[63] == 0LL;
}

/*
 * XREFs of ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14010C970
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetLegacyTrigger@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14010CA94 (-EmitSetLegacyTrigger@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginTime@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14010CB18 (-EmitBeginTime@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14010CB9C (-EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetHandoff@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14010CC38 (-EmitSetHandoff@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14010CD20 (-EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14010CD94 (-EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14010CE1C (-EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitClearTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14010CE8C (-EmitClearTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14010CEF8 (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bl
  DirectComposition::CAnimationMarshaler *v3; // rsi
  char *v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (DirectComposition::CAnimationMarshaler *)((char *)this - 16);
  if ( (*((_DWORD *)this + 4) & 0x20000) != 0 )
  {
    v8 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8) )
      return v2;
    v7 = (char *)v8;
    *(_DWORD *)v8 = 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 4;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v7 + 3) = *((_DWORD *)this + 52);
    *((_DWORD *)this + 4) &= ~0x20000u;
  }
  if ( DirectComposition::CAnimationMarshaler::EmitBeginTime(v3, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CAnimationMarshaler::EmitSetLegacyTrigger(v3, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CAnimationMarshaler::EmitSetPrimitives(v3, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CAnimationMarshaler::EmitSetHandoff(v3, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CAnimationMarshaler::EmitSetPaused(v3, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CAnimationMarshaler::EmitSetSeek(v3, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CAnimationMarshaler::EmitSetInstance(v3, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CAnimationMarshaler::EmitClearTimeEvents(v3, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CAnimationMarshaler::EmitAddTimeEvents(v3, (struct DirectComposition::CBatch **)a2) )
  {
    return 1;
  }
  return v2;
}

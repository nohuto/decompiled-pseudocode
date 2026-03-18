/*
 * XREFs of ?EmitInteractionTrackerLastUpdatedId@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140194CA0
 * Callers:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401C0BA0 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitInteractionTrackerLastUpdatedId(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char result; // al
  _DWORD *v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x800) == 0 && *((_DWORD *)this + 25) )
  {
    v5 = 0LL;
    result = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5);
    if ( !result )
      return result;
    v4 = v5;
    *(_DWORD *)v5 = 16;
    v4[1] = 18;
    v4[2] = *((_DWORD *)this + 8);
    v4[3] = *((_DWORD *)this + 25);
    *((_DWORD *)this + 4) |= 0x800u;
  }
  return 1;
}

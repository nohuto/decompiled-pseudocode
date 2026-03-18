/*
 * XREFs of ?EmitTouchTargetRect@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1401009BC
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF990 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitTouchTargetRect(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 82) & 4) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
  {
    v4 = (char *)v5;
    *(_DWORD *)v5 = 28;
    *((_DWORD *)v4 + 1) = 319;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *(_OWORD *)(v4 + 12) = *((_OWORD *)this + 16);
    *((_DWORD *)this + 82) &= ~4u;
    return 1;
  }
  return 0;
}

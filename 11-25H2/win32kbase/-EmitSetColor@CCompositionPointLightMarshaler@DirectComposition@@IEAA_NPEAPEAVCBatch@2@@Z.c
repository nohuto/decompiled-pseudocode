/*
 * XREFs of ?EmitSetColor@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140239D08
 * Callers:
 *     ?EmitUpdateCommands@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14023A010 (-EmitUpdateCommands@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CCompositionPointLightMarshaler::EmitSetColor(
        DirectComposition::CCompositionPointLightMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
    return 1;
  v3 = 0;
  v6 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v6) )
  {
    v4 = (char *)v6;
    *(_DWORD *)v6 = 28;
    *(_OWORD *)(v4 + 4) = 0LL;
    *(_QWORD *)(v4 + 20) = 0LL;
    *((_DWORD *)v4 + 1) = 83;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *(_OWORD *)(v4 + 12) = *(_OWORD *)((char *)this + 108);
    *((_DWORD *)this + 4) &= ~0x800u;
    return 1;
  }
  return v3;
}

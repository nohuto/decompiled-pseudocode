/*
 * XREFs of ?EmitSetDirection@CCompositionDistantLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F9B48
 * Callers:
 *     ?EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F8F50 (-EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CCompositionDistantLightMarshaler::EmitSetDirection(
        DirectComposition::CCompositionDistantLightMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
    return 1;
  v3 = 0;
  v6 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v6) )
  {
    v4 = (char *)v6;
    *(_DWORD *)v6 = 24;
    *(_OWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 1) = 71;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v4 + 3) = *((_DWORD *)this + 30);
    *((_DWORD *)v4 + 4) = *((_DWORD *)this + 31);
    *((_DWORD *)v4 + 5) = *((_DWORD *)this + 32);
    *((_DWORD *)this + 4) &= ~0x400u;
    return 1;
  }
  return v3;
}

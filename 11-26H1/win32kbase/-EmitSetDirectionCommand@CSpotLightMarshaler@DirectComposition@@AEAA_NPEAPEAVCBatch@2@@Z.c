/*
 * XREFs of ?EmitSetDirectionCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C588
 * Callers:
 *     ?EmitUpdateCommands@CSpotLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140232AD0 (-EmitUpdateCommands@CSpotLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CSpotLightMarshaler::EmitSetDirectionCommand(
        DirectComposition::CSpotLightMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _QWORD *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v5) )
  {
    v3 = v5;
    *(_DWORD *)v5 = 24;
    v3[1] = 0LL;
    v3[2] = 0LL;
    *((_DWORD *)v3 + 1) = 664;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)((char *)v3 + 12) = *(_QWORD *)((char *)this + 124);
    *((_DWORD *)v3 + 5) = *((_DWORD *)this + 33);
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return 0;
}

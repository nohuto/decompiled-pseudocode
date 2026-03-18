/*
 * XREFs of ?EmitSetOffsetCommand@CPointLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022E108
 * Callers:
 *     ?EmitUpdateCommands@CPointLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402318C0 (-EmitUpdateCommands@CPointLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CPointLightMarshaler::EmitSetOffsetCommand(
        DirectComposition::CPointLightMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _QWORD *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x4000) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v5) )
  {
    v3 = v5;
    *(_DWORD *)v5 = 24;
    v3[1] = 0LL;
    v3[2] = 0LL;
    *((_DWORD *)v3 + 1) = 585;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)((char *)v3 + 12) = *(_QWORD *)((char *)this + 156);
    *((_DWORD *)v3 + 5) = *((_DWORD *)this + 41);
    *((_DWORD *)this + 4) &= ~0x4000u;
    return 1;
  }
  return 0;
}

/*
 * XREFs of ?EmitSetEmissiveFactorCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C610
 * Callers:
 *     ?EmitUpdateCommands@CScenePbrMaterialMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140232780 (-EmitUpdateCommands@CScenePbrMaterialMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CScenePbrMaterialMarshaler::EmitSetEmissiveFactorCommand(
        DirectComposition::CScenePbrMaterialMarshaler *this,
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
    *((_DWORD *)v3 + 1) = 646;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)((char *)v3 + 12) = *((_QWORD *)this + 9);
    *((_DWORD *)v3 + 5) = *((_DWORD *)this + 20);
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return 0;
}

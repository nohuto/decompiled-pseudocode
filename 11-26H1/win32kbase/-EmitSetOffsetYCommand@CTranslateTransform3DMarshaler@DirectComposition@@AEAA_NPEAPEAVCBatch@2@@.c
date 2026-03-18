/*
 * XREFs of ?EmitSetOffsetYCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022E220
 * Callers:
 *     ?EmitUpdateCommands@CTranslateTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402334D0 (-EmitUpdateCommands@CTranslateTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CTranslateTransform3DMarshaler::EmitSetOffsetYCommand(
        DirectComposition::CTranslateTransform3DMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _QWORD *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v3 = v5;
    *(_DWORD *)v5 = 16;
    v3[1] = 0LL;
    *((_DWORD *)v3 + 1) = 729;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v3 + 3) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return 0;
}

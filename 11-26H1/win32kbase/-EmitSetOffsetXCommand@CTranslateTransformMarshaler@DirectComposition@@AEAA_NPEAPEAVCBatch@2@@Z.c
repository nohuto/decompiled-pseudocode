/*
 * XREFs of ?EmitSetOffsetXCommand@CTranslateTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140172C6C
 * Callers:
 *     ?EmitUpdateCommands@CTranslateTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140172C10 (-EmitUpdateCommands@CTranslateTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CTranslateTransformMarshaler::EmitSetOffsetXCommand(
        DirectComposition::CTranslateTransformMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _QWORD *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v3 = v5;
    *(_DWORD *)v5 = 16;
    v3[1] = 0LL;
    *((_DWORD *)v3 + 1) = 726;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v3 + 3) = *((_DWORD *)this + 18);
    *((_DWORD *)this + 4) &= ~0x100u;
    return 1;
  }
  return 0;
}

/*
 * XREFs of ?EmitTransform@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140100DC4
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF990 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitTransform(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    return 1;
  v6 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v6) )
  {
    v4 = v6;
    *(_DWORD *)v6 = 16;
    v4[1] = 0LL;
    *((_DWORD *)v4 + 1) = 320;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v4 + 3) = 0;
    v5 = *((_QWORD *)this + 17);
    if ( v5 )
      *((_DWORD *)v4 + 3) = *(_DWORD *)(v5 + 32);
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return 0;
}

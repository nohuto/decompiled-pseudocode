/*
 * XREFs of ?EmitSetFlipExSurfaceClipCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FFEDC
 * Callers:
 *     ?EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF730 (-EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CWindowNodeMarshaler::EmitSetFlipExSurfaceClipCommand(
        DirectComposition::CWindowNodeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v4; // edi
  _QWORD *v5; // rcx
  __int64 v6; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 84) & 0x40) == 0 )
    return 1;
  v4 = 0;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
  {
    v5 = v7;
    *(_DWORD *)v7 = 16;
    v5[1] = 0LL;
    *((_DWORD *)v5 + 1) = 748;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
    v6 = *((_QWORD *)this + 53);
    if ( v6 )
      v4 = *(_DWORD *)(v6 + 32);
    *((_DWORD *)v5 + 3) = v4;
    *((_DWORD *)this + 84) &= ~0x40u;
    return 1;
  }
  return 0;
}

/*
 * XREFs of ?EmitSetFlipExSurfaceCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140106238
 * Callers:
 *     ?EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140198430 (-EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CWindowNodeMarshaler::EmitSetFlipExSurfaceCommand(
        DirectComposition::CWindowNodeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  void *v4; // rcx
  char *v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 92) & 0x20) == 0 )
    return 1;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
  {
    v6 = 0LL;
    v4 = (void *)*((_QWORD *)this + 56);
    if ( !v4 || (int)DxgkOpenDwmHandleForCompositionObjectReference(v4, &v6) < 0 )
      v6 = 0LL;
    v5 = (char *)v7;
    *(_DWORD *)v7 = 20;
    *(_OWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 1) = 657;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v5 + 12) = v6;
    *((_DWORD *)this + 92) &= ~0x20u;
    return 1;
  }
  return 0;
}

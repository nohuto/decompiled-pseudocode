/*
 * XREFs of ?EmitSetWindowHandleCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14010048C
 * Callers:
 *     ?EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF730 (-EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CWindowNodeMarshaler::EmitSetWindowHandleCommand(
        DirectComposition::CWindowNodeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 84) & 0x20000) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v5) )
  {
    v4 = (char *)v5;
    *(_DWORD *)v5 = 20;
    *(_OWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 1) = 759;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v4 + 12) = *((_QWORD *)this + 64);
    *((_DWORD *)this + 84) &= ~0x20000u;
    return 1;
  }
  return 0;
}

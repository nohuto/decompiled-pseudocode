/*
 * XREFs of ?EmitSetProcessAttributionCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14010AEC0
 * Callers:
 *     ?EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140198430 (-EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CWindowNodeMarshaler::EmitSetProcessAttributionCommand(
        DirectComposition::CWindowNodeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 92) & 0x1000) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
  {
    v4 = (char *)v5;
    *(_DWORD *)v5 = 28;
    *(_OWORD *)(v4 + 4) = 0LL;
    *(_QWORD *)(v4 + 20) = 0LL;
    *((_DWORD *)v4 + 1) = 664;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *(_OWORD *)(v4 + 12) = *(_OWORD *)((char *)this + 488);
    *((_DWORD *)this + 92) &= ~0x1000u;
    return 1;
  }
  return 0;
}

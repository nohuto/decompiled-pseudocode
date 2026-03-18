/*
 * XREFs of ?EmitSetSpriteClipCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140104780
 * Callers:
 *     ?EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140198430 (-EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CWindowNodeMarshaler::EmitSetSpriteClipCommand(
        DirectComposition::CWindowNodeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v4; // edi
  char *v5; // rcx
  __int64 v6; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 92) & 0x8000) == 0 )
    return 1;
  v4 = 0;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
  {
    v5 = (char *)v7;
    *(_DWORD *)v7 = 16;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 1) = 667;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
    v6 = *((_QWORD *)this + 66);
    if ( v6 )
      v4 = *(_DWORD *)(v6 + 32);
    *((_DWORD *)v5 + 3) = v4;
    *((_DWORD *)this + 92) &= ~0x8000u;
    return 1;
  }
  return 0;
}

/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b11cd57fccd7d88fd09eec2ee5a82577___ @ 0x1401721A0
 * Callers:
 *     ?EmitUpdateCommands@CLegacyRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401665E0 (-EmitUpdateCommands@CLegacyRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CDDisplayRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140171F30 (-EmitUpdateCommands@CDDisplayRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b11cd57fccd7d88fd09eec2ee5a82577___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 12;
  *(_QWORD *)(v3 + 4) = 0LL;
  *((_DWORD *)v3 + 1) = 255;
  *((_DWORD *)v3 + 2) = *(_DWORD *)(a1 + 32);
  return 1;
}

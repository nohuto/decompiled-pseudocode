/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0434555a235313aa634c546f4007f188___ @ 0x14024540C
 * Callers:
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401B30F0 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0434555a235313aa634c546f4007f188___(
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
  *((_DWORD *)v3 + 1) = 21;
  *((_DWORD *)v3 + 2) = *(_DWORD *)(a1 + 32);
  return 1;
}

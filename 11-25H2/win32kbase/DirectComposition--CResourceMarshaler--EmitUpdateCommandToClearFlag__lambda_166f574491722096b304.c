/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_166f574491722096b3046d035f3c3c8f___ @ 0x14023B460
 * Callers:
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140199320 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_166f574491722096b3046d035f3c3c8f___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3,
        ...)
{
  char *v4; // rcx
  void *v6; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v6 = va_arg(va1, void *);
  if ( (*(_DWORD *)(a1 + 16) & 0x4000) == 0 )
    return 1;
  v6 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, (void **)va) )
  {
    v4 = (char *)v6;
    *(_DWORD *)v6 = 12;
    *(_QWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 1) = 24;
    *((_DWORD *)v4 + 2) = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 16) &= ~0x4000u;
    return 1;
  }
  return 0;
}

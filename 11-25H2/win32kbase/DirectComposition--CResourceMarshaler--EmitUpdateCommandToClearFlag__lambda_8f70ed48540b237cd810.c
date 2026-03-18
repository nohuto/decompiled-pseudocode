/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_8f70ed48540b237cd810ba2496c500b5___ @ 0x1402390AC
 * Callers:
 *     ?EmitUpdateCommands@CDDisplayRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1402391C0 (-EmitUpdateCommands@CDDisplayRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8f70ed48540b237cd810ba2496c500b5___ @ 0x140238FF4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8f70ed48540b237cd810ba2496c500b.c)
 */

char DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_8f70ed48540b237cd810ba2496c500b5___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3,
        ...)
{
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( (*(_DWORD *)(a1 + 16) & 0x80u) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8f70ed48540b237cd810ba2496c500b5___(
         a1,
         a2,
         (__int64)va) )
  {
    *(_DWORD *)(a1 + 16) &= ~0x80u;
    return 1;
  }
  return 0;
}

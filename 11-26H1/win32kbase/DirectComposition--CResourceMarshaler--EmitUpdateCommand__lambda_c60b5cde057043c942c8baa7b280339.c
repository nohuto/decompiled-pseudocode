/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c60b5cde057043c942c8baa7b280339a___ @ 0x140247B58
 * Callers:
 *     ?EmitUpdateCommands@CGenericMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140247C00 (-EmitUpdateCommands@CGenericMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_c60b5cde057043c942c8baa7b280339a_::operator() @ 0x140247BCC (_lambda_c60b5cde057043c942c8baa7b280339a_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c60b5cde057043c942c8baa7b280339a___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
    return 0;
  v5 = (char *)v7 + 4;
  *(_DWORD *)v7 = 20;
  *(_OWORD *)v5 = 0LL;
  *(_DWORD *)v5 = 259;
  *((_DWORD *)v5 + 1) = *(_DWORD *)(a1 + 32);
  lambda_c60b5cde057043c942c8baa7b280339a_::operator()(a3);
  return 1;
}

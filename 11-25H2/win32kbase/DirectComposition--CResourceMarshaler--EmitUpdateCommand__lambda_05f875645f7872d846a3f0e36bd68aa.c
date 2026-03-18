/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_05f875645f7872d846a3f0e36bd68aac___ @ 0x14015F340
 * Callers:
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401042A0 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_05f875645f7872d846a3f0e36bd68aac_::operator() @ 0x1401A00FC (_lambda_05f875645f7872d846a3f0e36bd68aac_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_05f875645f7872d846a3f0e36bd68aac___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rax
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 28;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 1) = 134;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  lambda_05f875645f7872d846a3f0e36bd68aac_::operator()(a3);
  return 1;
}

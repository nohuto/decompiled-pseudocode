/*
 * XREFs of ?EmitUpdateCommonParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140244FF0
 * Callers:
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140244E50 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_ac1c59748b96fb69b3ab1183eeae36ef_::operator() @ 0x140244DE4 (_lambda_ac1c59748b96fb69b3ab1183eeae36ef_--operator().c)
 */

char __fastcall DirectComposition::CNaturalAnimationMarshaler::EmitUpdateCommonParameters(
        DirectComposition::CNaturalAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned int v2; // eax
  char v4; // bl
  char *v5; // rdx
  char *v7; // [rsp+30h] [rbp+8h] BYREF
  DirectComposition::CNaturalAnimationMarshaler *v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 4);
  v8 = this;
  if ( (v2 & 0x40000) == 0 )
    goto LABEL_4;
  v4 = 0;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x2CuLL, (void **)&v7) )
  {
    v5 = v7 + 4;
    *(_DWORD *)v7 = 44;
    *(_OWORD *)v5 = 0LL;
    *((_OWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *(_DWORD *)v5 = 174;
    *((_DWORD *)v5 + 1) = *((_DWORD *)this + 8);
    lambda_ac1c59748b96fb69b3ab1183eeae36ef_::operator()((__int64 *)&v8, (__int64)v5);
    v2 = *((_DWORD *)this + 4) & 0xFFFBFFFF;
LABEL_4:
    v4 = 1;
    *((_DWORD *)this + 4) = v2 | 0x80000;
  }
  return v4;
}

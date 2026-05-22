/*
 * XREFs of ?InitializeConstants@MPCGamepadProcessor@@AEAAXXZ @ 0x1801C3994
 * Callers:
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801C3880 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801C4DC0 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     std::call_once__lambda_aa4734cb05b2f20ab38c0941f0d86b7b___ @ 0x1801C2D50 (std--call_once__lambda_aa4734cb05b2f20ab38c0941f0d86b7b___.c)
 */

void __fastcall MPCGamepadProcessor::InitializeConstants(MPCGamepadProcessor *this)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = _lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(&v3, (__int64)this);
  std::call_once__lambda_aa4734cb05b2f20ab38c0941f0d86b7b___(v2, (__int64)v1);
}

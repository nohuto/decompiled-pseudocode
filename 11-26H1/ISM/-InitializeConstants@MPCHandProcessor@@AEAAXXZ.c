/*
 * XREFs of ?InitializeConstants@MPCHandProcessor@@AEAAXXZ @ 0x1800C01A8
 * Callers:
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800C0030 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800C1110 (-RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     std::call_once__lambda_ac1ab69820883e1c7555fea4db797a8f___ @ 0x1800BF2DC (std--call_once__lambda_ac1ab69820883e1c7555fea4db797a8f___.c)
 */

void __fastcall MPCHandProcessor::InitializeConstants(MPCHandProcessor *this)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = _lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(&v3, (__int64)this);
  std::call_once__lambda_ac1ab69820883e1c7555fea4db797a8f___(v2, (__int64)v1);
}

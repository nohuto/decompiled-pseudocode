/*
 * XREFs of ??$?0M$0A@$0A@@?$variant@K_NM@std@@QEAA@$$QEAM@Z @ 0x180092BB4
 * Callers:
 *     _lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator() @ 0x180023864 (_lambda_f42f6b7dc2f8f00e06af073ba952cab2_--operator().c)
 *     ??$?0AEAY0BD@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BD@$$CBG$$QEAM@Z @ 0x180092B7C (--$-0AEAY0BD@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?SetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTProxy@@@Z @ 0x1800B4D10 (-SetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGAEB.c)
 *     _lambda_ac1ab69820883e1c7555fea4db797a8f_::operator() @ 0x1800BF780 (_lambda_ac1ab69820883e1c7555fea4db797a8f_--operator().c)
 *     ??$?0AEAY0BA@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BA@$$CBG$$QEAM@Z @ 0x1801BE848 (--$-0AEAY0BA@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     _lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator() @ 0x1801BF808 (_lambda_223b683404cbbc2b78f554bf36c4ab0d_--operator().c)
 *     _lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator() @ 0x1801C0010 (_lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_--operator().c)
 *     _lambda_aa4734cb05b2f20ab38c0941f0d86b7b_::operator() @ 0x1801C3078 (_lambda_aa4734cb05b2f20ab38c0941f0d86b7b_--operator().c)
 *     _lambda_2f33fc4b0ac679fd125de0d601496fc7_::operator() @ 0x1801C8D9C (_lambda_2f33fc4b0ac679fd125de0d601496fc7_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  *(_DWORD *)a1 = *a2;
  result = a1;
  *(_BYTE *)(a1 + 4) = 2;
  return result;
}

/*
 * XREFs of ??$?0_N$0A@$0A@@?$variant@K_NM@std@@QEAA@$$QEA_N@Z @ 0x180098170
 * Callers:
 *     _lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator() @ 0x180023864 (_lambda_f42f6b7dc2f8f00e06af073ba952cab2_--operator().c)
 *     ?SetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTProxy@@@Z @ 0x1800B4D10 (-SetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGAEB.c)
 *     _lambda_ac1ab69820883e1c7555fea4db797a8f_::operator() @ 0x1800BF780 (_lambda_ac1ab69820883e1c7555fea4db797a8f_--operator().c)
 *     _lambda_9db3a47598234cc48958c5ce7f83f5e9_::operator() @ 0x1801BE2A4 (_lambda_9db3a47598234cc48958c5ce7f83f5e9_--operator().c)
 *     _lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator() @ 0x1801BF808 (_lambda_223b683404cbbc2b78f554bf36c4ab0d_--operator().c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(_BYTE *a1, _BYTE *a2)
{
  _BYTE *result; // rax

  *a1 = *a2;
  result = a1;
  a1[4] = 1;
  return result;
}

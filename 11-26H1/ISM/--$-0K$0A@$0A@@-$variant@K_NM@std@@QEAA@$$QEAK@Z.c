/*
 * XREFs of ??$?0K$0A@$0A@@?$variant@K_NM@std@@QEAA@$$QEAK@Z @ 0x18009815C
 * Callers:
 *     _lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator() @ 0x180023864 (_lambda_f42f6b7dc2f8f00e06af073ba952cab2_--operator().c)
 *     ?SetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTProxy@@@Z @ 0x1800B4D10 (-SetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGAEB.c)
 *     _lambda_ac1ab69820883e1c7555fea4db797a8f_::operator() @ 0x1800BF780 (_lambda_ac1ab69820883e1c7555fea4db797a8f_--operator().c)
 *     _lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator() @ 0x1801BF808 (_lambda_223b683404cbbc2b78f554bf36c4ab0d_--operator().c)
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1801C1A54 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  *(_DWORD *)a1 = *a2;
  result = a1;
  *(_BYTE *)(a1 + 4) = 0;
  return result;
}

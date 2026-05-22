/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800E640C
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180083B54 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18008B5C8 (-ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSys.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002B550 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@AEAAXQEAPEAVInputSite@@_K1@Z @ 0x18006E958 (-_Change_array@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@AEAAXQEAPEAVInput.c)
 *     ??$_Uninitialized_move@PEAPEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@YAPEAPEAVLightDismissClientProxy@@QEAPEAV1@0PEAPEAV1@AEAV?$allocator@PEAVLightDismissClientProxy@@@0@@Z @ 0x180076188 (--$_Uninitialized_move@PEAPEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAA@XZ @ 0x1800A97D0 (--1_Reallocation_guard@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@QEA.c)
 */

void __fastcall std::vector<LampUpdateState>::_Reallocate<0>(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 size_of; // rax
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  void *v9; // rcx
  __int64 v10; // r9
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (a1[1] - *a1) >> 3;
  size_of = std::_Get_size_of_n<8>(*a2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = a1[1];
  v8 = (__int64)v6;
  v11[2] = *a2;
  v9 = (void *)*a1;
  v11[0] = a1;
  std::_Uninitialized_move<LightDismissClientProxy * *>(v9, v7, v6);
  v10 = *a2;
  v11[1] = 0LL;
  std::vector<InputSite *>::_Change_array(a1, v8, v4, v10);
  std::vector<LampUpdateState>::_Reallocation_guard::~_Reallocation_guard((__int64)v11);
}

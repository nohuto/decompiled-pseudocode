/*
 * XREFs of ?RuntimeClassInitialize@CDuckingManager@@QEAAJXZ @ 0x180040520
 * Callers:
 *     ??$MakeAndInitialize@VCDuckingManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCDuckingManager@@@Z @ 0x18004575C (--$MakeAndInitialize@VCDuckingManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCDuckingManager@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180018F10 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetdBFromUserPreference@CDuckingManager@@CAMW4__MIDL___MIDL_itf_audiopolicyp_0000_0000_0001@@@Z @ 0x180028454 (-GetdBFromUserPreference@CDuckingManager@@CAMW4__MIDL___MIDL_itf_audiopolicyp_0000_0000_0001@@@Z.c)
 *     ??$?4VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@$0A@@?$shared_ptr@VDuckingDescriptor@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@1@@Z @ 0x18003E758 (--$-4VDuckingDescriptor@@U-$default_delete@VDuckingDescriptor@@@std@@$0A@@-$shared_ptr@VDuckingD.c)
 *     ??$make_shared@VDuckingDescriptor@@MHH@std@@YA?AV?$shared_ptr@VDuckingDescriptor@@@0@$$QEAM$$QEAH1@Z @ 0x18003ED68 (--$make_shared@VDuckingDescriptor@@MHH@std@@YA-AV-$shared_ptr@VDuckingDescriptor@@@0@$$QEAM$$QEA.c)
 *     ??$make_unique@VDuckingDescriptor@@MHH$0A@@std@@YA?AV?$unique_ptr@VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@0@$$QEAM$$QEAH1@Z @ 0x18003EE10 (--$make_unique@VDuckingDescriptor@@MHH$0A@@std@@YA-AV-$unique_ptr@VDuckingDescriptor@@U-$default.c)
 *     ??1?$unique_ptr@VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@std@@QEAA@XZ @ 0x18003F01C (--1-$unique_ptr@VDuckingDescriptor@@U-$default_delete@VDuckingDescriptor@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CDuckingManager::RuntimeClassInitialize(CDuckingManager *this)
{
  __int64 *v2; // rax
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  std::_Ref_count_base *v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF
  float v12; // [rsp+50h] [rbp+18h] BYREF
  DuckingDescriptor *v13; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0;
  v11 = 0;
  v12 = 0.0;
  v2 = std::make_unique<DuckingDescriptor,float,int,int,0>(&v13, (int *)&v12, &v11, &v10);
  std::shared_ptr<DuckingDescriptor>::operator=<DuckingDescriptor,std::default_delete<DuckingDescriptor>,0>(
    (_QWORD *)this + 53,
    v2);
  std::unique_ptr<DuckingDescriptor>::~unique_ptr<DuckingDescriptor>(&v13);
  v10 = 0;
  v11 = 10000000;
  v12 = CDuckingManager::GetdBFromUserPreference(*((_DWORD *)this + 104));
  v3 = std::make_shared<DuckingDescriptor,float,int,int>(&v8, (int *)&v12, &v11, &v10);
  v4 = *v3;
  v5 = v3[1];
  *v3 = 0LL;
  v3[1] = 0LL;
  *((_QWORD *)this + 55) = v4;
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 56);
  *((_QWORD *)this + 56) = v5;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return 0LL;
}

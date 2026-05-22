/*
 * XREFs of ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x180025EDC
 * Callers:
 *     _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x180023EC0 (_lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator().c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?SetMPCConstantManagerClient@BamoMPCManagerPrincipal@@UEAAXPEAVBamoMPCConstantManagerClientPrincipal@@@Z @ 0x180025DE0 (-SetMPCConstantManagerClient@BamoMPCManagerPrincipal@@UEAAXPEAVBamoMPCConstantManagerClientPrinc.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180026AC8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1800427C8 (-AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
MPCManager *__fastcall MPCManager::MPCManager(MPCManager *this, struct MPCManagerConnection *a2)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  struct BamoMPCConstantManagerClientPrincipal *Instance; // rax

  *(_QWORD *)this = &BamoMPCManagerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v4 = (struct Microsoft::BamoImpl::ConnectionIndirector **)((char *)this + 8);
  *((_QWORD *)this + 1) = &BamoMPCManagerPrincipal::`vftable'{for `IMPCManagerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((MPCManager *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoMPCManagerPrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &MPCManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *v4 = (struct Microsoft::BamoImpl::ConnectionIndirector *)&BamoMPCManagerPrincipal::`vftable'{for `IMPCManagerPrincipal'};
  *((_QWORD *)this + 8) = a2;
  if ( a2 )
    Microsoft::Bamo::BaseBamoConnection::AddRef(a2);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(48LL);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *((_QWORD *)this + 9) = v5;
  Instance = MPCConstantManager::GetInstance(v7, v6, v8, v9);
  BamoMPCManagerPrincipal::SetMPCConstantManagerClient(v4, Instance);
  return this;
}

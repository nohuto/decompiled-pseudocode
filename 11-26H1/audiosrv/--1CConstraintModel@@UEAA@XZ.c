/*
 * XREFs of ??1CConstraintModel@@UEAA@XZ @ 0x180158F20
 * Callers:
 *     ??_ECConstraintModel@@UEAAPEAXI@Z @ 0x180159100 (--_ECConstraintModel@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800AAD18 (--1-$CAtlArray@PEAVEndpointInfo@@V-$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x1800F4FD4 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 *     ?CleanResourceConsumptionMap@CConstraintModel@@AEAAXPEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@@Z @ 0x180159650 (-CleanResourceConsumptionMap@CConstraintModel@@AEAAXPEAV-$CAtlMap@PEAVResourceConsumer@@PEAV-$CA.c)
 *     ?CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@@Z @ 0x1801596CC (-CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV-$CAtlArray@PEAV-$CAtlArray@PEAVEndpo.c)
 *     ?RemoveAll@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAXXZ @ 0x18015B410 (-RemoveAll@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@.c)
 */

void __fastcall CConstraintModel::~CConstraintModel(void **this)
{
  char *v2; // rdi
  __int64 v3; // rcx

  *this = &CConstraintModel::`vftable';
  v2 = (char *)(this + 16);
  CConstraintModel::CleanResourceConsumptionMap(this, this + 16);
  CConstraintModel::CleanResourceExclusiveEndpoint(v3, this + 25);
  ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>>::~CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>>(this + 25);
  ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::RemoveAll(v2);
  ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll((__int64)(this + 10));
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::RemoveAll(this + 1);
}

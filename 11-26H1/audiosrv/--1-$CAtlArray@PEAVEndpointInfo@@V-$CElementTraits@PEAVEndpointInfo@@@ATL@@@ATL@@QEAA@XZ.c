/*
 * XREFs of ??1?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800AAD18
 * Callers:
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x1800AAC78 (--1CVolumeControlBase@@MEAA@XZ.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800F3A78 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x180158F20 (--1CConstraintModel@@UEAA@XZ.c)
 *     ?CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@@Z @ 0x1801596CC (-CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV-$CAtlArray@PEAV-$CAtlArray@PEAVEndpo.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18015A460 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     _CConstraintModelResourceManager::InternalEnforceEndpointExclusivity_::_1_::dtor$1 @ 0x180169B67 (_CConstraintModelResourceManager--InternalEnforceEndpointExclusivity_--_1_--dtor$1.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$11 @ 0x18016C607 (_CConstraintModel--Initialize_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>>::~CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    free(v1);
}

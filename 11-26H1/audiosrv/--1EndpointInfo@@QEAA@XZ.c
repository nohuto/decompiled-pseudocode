/*
 * XREFs of ??1EndpointInfo@@QEAA@XZ @ 0x1800F0B74
 * Callers:
 *     ??1ResourceGroupInstance@@UEAA@XZ @ 0x1800F0BE0 (--1ResourceGroupInstance@@UEAA@XZ.c)
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x1800F0C30 (--1ResourceHandleInfo@@QEAA@XZ.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800F1D7C (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800F26C4 (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800F3A78 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ??1StreamResourceConsumer@@UEAA@XZ @ 0x180158F94 (--1StreamResourceConsumer@@UEAA@XZ.c)
 *     ?CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@@Z @ 0x1801596CC (-CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV-$CAtlArray@PEAV-$CAtlArray@PEAVEndpo.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18015A2B8 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z @ 0x18015B548 (-ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18015E144 (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 *     _ResourceGroupInstance::ResourceGroupInstance_::_1_::dtor$1 @ 0x180169A2E (_ResourceGroupInstance--ResourceGroupInstance_--_1_--dtor$1.c)
 *     _CConstraintModelResourceManager::AssignResourceGroup_::_1_::dtor$0 @ 0x180169A7D (_CConstraintModelResourceManager--AssignResourceGroup_--_1_--dtor$0.c)
 *     _CConstraintModelResourceManager::InternalEnforceEndpointExclusivity_::_1_::dtor$0 @ 0x180169AE9 (_CConstraintModelResourceManager--InternalEnforceEndpointExclusivity_--_1_--dtor$0.c)
 *     _CConstraintModel::GetStreamResourceConsumption_::_1_::dtor$0 @ 0x18016C565 (_CConstraintModel--GetStreamResourceConsumption_--_1_--dtor$0.c)
 *     _CConstraintModel::ResourceConstraintsApply_::_1_::dtor$0 @ 0x18016C6BA (_CConstraintModel--ResourceConstraintsApply_--_1_--dtor$0.c)
 *     _CConstraintModelXMLParser::ParseStreamIDInfo_::_1_::dtor$0 @ 0x18016CA32 (_CConstraintModelXMLParser--ParseStreamIDInfo_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@0@@Z @ 0x1800F002C (--$_Destroy_range@V-$allocator@V-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@.c)
 */

void __fastcall EndpointInfo::~EndpointInfo(EndpointInfo *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<_TopologyInfo>>>(v2, *((_QWORD *)this + 14));
    std::_Deallocate<16>(
      *((void **)this + 13),
      (struct std::nothrow_t *)((*((_QWORD *)this + 15) - *((_QWORD *)this + 13)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  std::wstring::~wstring((void **)this + 8);
  std::wstring::~wstring((void **)this + 4);
  std::wstring::~wstring((void **)this);
}

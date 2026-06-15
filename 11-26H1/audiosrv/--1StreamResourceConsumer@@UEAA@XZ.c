/*
 * XREFs of ??1StreamResourceConsumer@@UEAA@XZ @ 0x180158F94
 * Callers:
 *     ??_EStreamResourceConsumer@@UEAAPEAXI@Z @ 0x180159180 (--_EStreamResourceConsumer@@UEAAPEAXI@Z.c)
 *     ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJAEAVEndpointInfo@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18015A3B4 (-GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJAEAVEndpointInfo@@U_GUID@@W4__MIDL__.c)
 *     _CConstraintModel::GetStreamResourceConsumptionFromMap_::_1_::dtor$0 @ 0x18016C577 (_CConstraintModel--GetStreamResourceConsumptionFromMap_--_1_--dtor$0.c)
 * Callees:
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800F0B74 (--1EndpointInfo@@QEAA@XZ.c)
 */

void __fastcall StreamResourceConsumer::~StreamResourceConsumer(StreamResourceConsumer *this)
{
  EndpointInfo::~EndpointInfo((StreamResourceConsumer *)((char *)this + 16));
  *(_QWORD *)this = &KeywordDetectorResourceConsumer::`vftable';
}

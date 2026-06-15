/*
 * XREFs of ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x18002B63C
 * Callers:
 *     ?Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z @ 0x18002B264 (-Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEBUMODE_PARAMS@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x1800537B0 (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 *     ??1CAudioStream@@UEAA@XZ @ 0x18006DCDC (--1CAudioStream@@UEAA@XZ.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180088410 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800C5C40 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     _StreamGroupParams::Clone_::_1_::dtor$3 @ 0x1801641F2 (_StreamGroupParams--Clone_--_1_--dtor$3.c)
 *     _DeriveStreamGroupParametersForStream_::_1_::dtor$4 @ 0x180165674 (_DeriveStreamGroupParametersForStream_--_1_--dtor$4.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$11 @ 0x180167C63 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$11.c)
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$12 @ 0x180167DA7 (_CAudioResourceManager--CreateStream_--_1_--dtor$12.c)
 * Callees:
 *     ??1StreamGroupParams@@QEAA@XZ @ 0x18002B66C (--1StreamGroupParams@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(StreamGroupParams **a1)
{
  StreamGroupParams *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    StreamGroupParams::~StreamGroupParams(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x60);
  }
}

/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B2014
 * Callers:
 *     _dynamic_initializer_for__AECLoopbackSelectionModeStringValues__ @ 0x180007CC0 (_dynamic_initializer_for__AECLoopbackSelectionModeStringValues__.c)
 *     ??1EffectPack@@QEAA@XZ @ 0x18000AAF8 (--1EffectPack@@QEAA@XZ.c)
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x180031A8C (--1CEndpointCharacteristics@@UEAA@XZ.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x1800923C8 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ??1EffectPackConfiguration@@QEAA@XZ @ 0x1800ACDB0 (--1EffectPackConfiguration@@QEAA@XZ.c)
 *     ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800BED74 (--1AudioEffectsWatcher@@UEAA@XZ.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800BF610 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800D32DC (--1DynamicAudioEndpointManager@@UEAA@XZ.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1801048B0 (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x180154C94 (--1AtmosCheck@@UEAA@XZ.c)
 *     _EffectPack::EffectPack_::_1_::dtor$5 @ 0x1801657D7 (_EffectPack--EffectPack_--_1_--dtor$5.c)
 *     _EffectPack::EffectPack_::_1_::dtor$11 @ 0x180165808 (_EffectPack--EffectPack_--_1_--dtor$11.c)
 *     _EffectPack::EffectPack_::_1_::dtor$17 @ 0x180165840 (_EffectPack--EffectPack_--_1_--dtor$17.c)
 *     _EffectPack::EffectPack_::_1_::dtor$18 @ 0x180165878 (_EffectPack--EffectPack_--_1_--dtor$18.c)
 *     _EffectPack::EffectPack_::_1_::dtor$20 @ 0x1801658C9 (_EffectPack--EffectPack_--_1_--dtor$20.c)
 *     _EffectPack::EffectPack_::_1_::dtor$21 @ 0x180165901 (_EffectPack--EffectPack_--_1_--dtor$21.c)
 *     _EffectPackConfiguration::EffectPackConfiguration_::_1_::dtor$0 @ 0x1801659E4 (_EffectPackConfiguration--EffectPackConfiguration_--_1_--dtor$0.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$6 @ 0x180166856 (_AtmosCheck--AtmosCheck_--_1_--dtor$6.c)
 *     __dynamic_initializer_for__AECLoopbackSelectionModeStringValues___::_1_::dtor$2 @ 0x180166FE9 (__dynamic_initializer_for__AECLoopbackSelectionModeStringValues___--_1_--dtor$2.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$3 @ 0x180167894 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$3.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$1 @ 0x180168434 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$1.c)
 *     _AtmosCheck::RefreshSpatialAudioLicenseModelState_::_1_::dtor$1 @ 0x18016C20B (_AtmosCheck--RefreshSpatialAudioLicenseModelState_--_1_--dtor$1.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x18016CEB0 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate___0 @ 0x18016CEE0 (_dynamic_atexit_destructor_for__ApoDataTemplate___0.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B2084 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *i; // rdi

  v5 = a3;
  for ( i = &a1[a3 * a2]; v5--; a4(i) )
    i -= a2;
}

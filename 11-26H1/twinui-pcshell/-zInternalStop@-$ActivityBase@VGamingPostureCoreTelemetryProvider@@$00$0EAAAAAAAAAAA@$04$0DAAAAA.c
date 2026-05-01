/*
 * XREFs of ?zInternalStop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180333714
 * Callers:
 *     ?StopActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@MEAAXXZ @ 0x18032F6B0 (-StopActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@MEAAXXZ.c)
 *     ??$Stop@K@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXK_N@Z @ 0x180334650 (--$Stop@K@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXK_N@Z.c)
 *     ??$Stop@PEBG@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_N@Z @ 0x1803348E0 (--$Stop@PEBG@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_N@Z.c)
 *     ?StopActivity@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@MEAAXXZ @ 0x1803368A0 (-StopActivity@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@MEAAXXZ.c)
 *     ?StopActivity@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@MEAAXXZ @ 0x180336AE0 (-StopActivity@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@MEAAXXZ.c)
 *     ?Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAAX_N000@Z @ 0x1803B9574 (-Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceMan.c)
 *     ?StopActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@MEAAXXZ @ 0x1803B9B00 (-StopActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExper.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18032CD34 (-LockExclusive@-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgRefle.c)
 */

void __fastcall wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v2);
  **(_DWORD **)(a1 + 272) = 2;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v2);
}

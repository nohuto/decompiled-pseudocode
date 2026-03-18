/*
 * XREFs of ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x1801C25CC
 * Callers:
 *     ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x1801C24F8 (-InitializeFromRegistry@CCommonRegistryData@@SAJXZ.c)
 * Callees:
 *     <none>
 */

void CCommonRegistryData::InitializeDWMKeysFromRegistry(void)
{
  LONGLONG v0; // rcx
  LONGLONG v1; // rdx
  unsigned int v2; // eax
  int v3; // eax
  unsigned int v4; // [rsp+70h] [rbp+30h] BYREF

  v4 = 0;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm",
                        L"OverlayTestMode",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL) )
    CCommonRegistryData::m_dwOverlayTestMode = v4;
  v4 = 0;
  GetPersistedRegistryValueW(
    L"DWMSwitches",
    L"Software\\Microsoft\\Windows\\Dwm",
    L"DisableAdvancedDirectFlip",
    16LL,
    0LL,
    &v4,
    4,
    0LL);
  v4 = 0;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm",
                        L"DisableIndependentFlip",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL) )
    CCommonRegistryData::m_fDisableIndependentFlip = v4 != 0;
  v4 = 0;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm",
                        L"FrameCounterPosition",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL) )
    CCommonRegistryData::m_fDebugFrameCounterIsVertical = v4 != 0;
  v4 = 0;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm",
                        L"FlattenVirtualSurfaceEffectInput",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL) )
    CCommonRegistryData::m_fFlattenVirtualSurfaceBrush = v4 != 0;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm",
                        L"CpuClipFlatteningTolerance",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL) )
    CCommonRegistryData::m_flCpuClipFlatteningTolerance = (float)(int)v4 / 1000.0;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm",
                        L"InteractionOutputPredictionDisabled",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL) )
    CCommonRegistryData::m_fDisableInteractionOutputPrediction = v4 != 0;
  if ( (unsigned int)GetPersistedRegistryValueW(
                       L"DWMSwitches",
                       L"Software\\Microsoft\\Windows\\Dwm",
                       L"BackdropBlurCachingThrottleMs",
                       16LL,
                       0LL,
                       &v4,
                       4,
                       0LL) )
  {
    v0 = 25 * g_qpcFrequency.QuadPart;
  }
  else
  {
    v2 = v4;
    if ( v4 > 0x3E8 )
      v2 = 1000;
    v0 = g_qpcFrequency.QuadPart * v2;
  }
  v4 = 0;
  CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta = v0 / 1000;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSceneSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm\\Scene",
                        L"ForceNonPrimaryDisplayAdapter",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL) )
    CCommonRegistryData::m_fSceneForceNonPrimaryDisplayAdapter = v4 != 0;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSceneSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm\\Scene",
                        L"ImageProcessingResizeThreshold",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL) )
    CCommonRegistryData::m_flSceneImageProcessingResizeThreshold = (float)(int)v4 / 100.0;
  v4 = 0;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm",
                        L"ForceEffectMode",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL)
    && v4 <= 2 )
  {
    CCommonRegistryData::m_forceEffectMode = v4;
  }
  CCommonRegistryData::m_compositorClockPolicy = 1;
  v4 = 1;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm",
                        L"CompositorClockPolicy",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL)
    && v4 < 2 )
  {
    CCommonRegistryData::m_compositorClockPolicy = v4;
  }
  v4 = 1;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm",
                        L"ParallelModePolicy",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL) )
  {
    v3 = v4;
    if ( v4 >= 3 )
      v3 = 1;
    CCommonRegistryData::m_parallelModePolicy = v3;
  }
  v4 = 1;
  if ( (unsigned int)GetPersistedRegistryValueW(
                       L"DWMSwitches",
                       L"Software\\Microsoft\\Windows\\Dwm",
                       L"ParallelModeRateThreshold",
                       16LL,
                       0LL,
                       &v4,
                       4,
                       0LL) )
  {
    v1 = g_qpcFrequency.QuadPart / 119;
  }
  else if ( v4 )
  {
    v1 = g_qpcFrequency.QuadPart / v4;
  }
  else
  {
    v1 = 0LL;
  }
  CCommonRegistryData::m_parallelModeDurationThreshold = v1;
  v4 = 0;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm",
                        L"CustomRefreshRateMode",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL)
    && v4 <= 2 )
  {
    CCommonRegistryData::m_customRefreshRateMode = v4;
  }
  v4 = 0;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm",
                        L"SDRBoostPercentOverride",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL) )
    CCommonRegistryData::m_flSDRBoostOverride = (float)(int)v4 / 100.0;
  v4 = 0;
  GetPersistedRegistryValueW(
    L"DWMSwitches",
    L"Software\\Microsoft\\Windows\\Dwm",
    L"DisableProjectedShadowsRendering",
    16LL,
    0LL,
    &v4,
    4,
    0LL);
  v4 = 0;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm",
                        L"ShowDirtyRegions",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL) )
    CCommonRegistryData::m_fShowDirtyRegions = v4;
  v4 = 0;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm",
                        L"ResampleModeOverride",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL) )
    CCommonRegistryData::m_dwResampleModeOverride = v4;
  v4 = 0;
  if ( !(unsigned int)GetPersistedRegistryValueW(
                        L"DWMSwitches",
                        L"Software\\Microsoft\\Windows\\Dwm",
                        L"ResampleInLinearSpace",
                        16LL,
                        0LL,
                        &v4,
                        4,
                        0LL) )
    CCommonRegistryData::m_fResampleInLinearSpace = v4;
}

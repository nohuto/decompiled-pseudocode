/*
 * XREFs of Feature_FixBufferOverrunInAdjustDesktopLayout__private_IsEnabledDeviceUsageNoInline @ 0x1400980A0
 * Callers:
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1403185B0 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 * Callees:
 *     Feature_FixBufferOverrunInAdjustDesktopLayout__private_IsEnabledFallback @ 0x1400980DC (Feature_FixBufferOverrunInAdjustDesktopLayout__private_IsEnabledFallback.c)
 */

__int64 Feature_FixBufferOverrunInAdjustDesktopLayout__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixBufferOverrunInAdjustDesktopLayout__private_featureState & 0x10) != 0 )
    return Feature_FixBufferOverrunInAdjustDesktopLayout__private_featureState & 1;
  else
    return Feature_FixBufferOverrunInAdjustDesktopLayout__private_IsEnabledFallback(
             (unsigned int)Feature_FixBufferOverrunInAdjustDesktopLayout__private_featureState,
             3LL);
}

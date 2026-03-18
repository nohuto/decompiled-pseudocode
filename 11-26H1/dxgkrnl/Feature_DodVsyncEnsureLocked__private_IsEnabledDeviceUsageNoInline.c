/*
 * XREFs of Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline @ 0x14004B5C4
 * Callers:
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1400664A4 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x14006680C (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x140066AE8 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x14009B4C0 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     Feature_DodVsyncEnsureLocked__private_IsEnabledFallback @ 0x14009B7D0 (Feature_DodVsyncEnsureLocked__private_IsEnabledFallback.c)
 */

__int64 Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DodVsyncEnsureLocked__private_featureState & 0x10) != 0 )
    return Feature_DodVsyncEnsureLocked__private_featureState & 1;
  else
    return Feature_DodVsyncEnsureLocked__private_IsEnabledFallback(
             (unsigned int)Feature_DodVsyncEnsureLocked__private_featureState,
             3LL);
}

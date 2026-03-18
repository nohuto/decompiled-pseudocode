/*
 * XREFs of Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline @ 0x1400C49B4
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1400239C0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1400C4910 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     GdiProcessCallout @ 0x1401ADA20 (GdiProcessCallout.c)
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 *     ?bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401ECDBC (-bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     bInitPALOBJ @ 0x1402F0008 (bInitPALOBJ.c)
 * Callees:
 *     Feature_PreserveObjectReference__private_IsEnabledFallback @ 0x1401C5F9C (Feature_PreserveObjectReference__private_IsEnabledFallback.c)
 */

__int64 Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_PreserveObjectReference__private_featureState & 2) != 0 )
    return Feature_PreserveObjectReference__private_featureState & 1;
  else
    return Feature_PreserveObjectReference__private_IsEnabledFallback(
             (unsigned int)Feature_PreserveObjectReference__private_featureState,
             0LL);
}

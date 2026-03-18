/*
 * XREFs of ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@@@YAXAEAV?$SmartObjStackRefBase@UtagPOPUPMENU@@@@@Z @ 0x1402D0520
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxMNEndMenuState @ 0x140177ED0 (xxxMNEndMenuState.c)
 *     MNFlushDestroyedPopups @ 0x1402D0840 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenuState @ 0x1402D09E8 (xxxMNStartMenuState.c)
 * Callees:
 *     NullifyLookasideRef @ 0x140294154 (NullifyLookasideRef.c)
 *     ??$UserFreeIsolatedType@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1402D054C (--$UserFreeIsolatedType@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU>(__int64 **a1)
{
  __int64 v1; // rbx

  v1 = **a1;
  NullifyLookasideRef(*(_QWORD *)(v1 + 88));
  return UserFreeIsolatedType<tagPOPUPMENU>(v1);
}

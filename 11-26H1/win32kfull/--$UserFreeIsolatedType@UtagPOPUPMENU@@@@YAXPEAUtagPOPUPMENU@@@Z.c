/*
 * XREFs of ??$UserFreeIsolatedType@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1402D054C
 * Callers:
 *     MNAllocPopup @ 0x140244270 (MNAllocPopup.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@@@YAXAEAV?$SmartObjStackRefBase@UtagPOPUPMENU@@@@@Z @ 0x1402D0520 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@@@YAXAEAV-$SmartObjStackRefBase@UtagPO.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14024AD7C (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall UserFreeIsolatedType<tagPOPUPMENU>(void *a1, __int64 a2)
{
  __int64 *v3; // rcx

  v3 = **(__int64 ***)(W32GetUserSessionState(a1, a2) + 19832);
  if ( v3 )
    NSInstrumentation::CTypeIsolation<24576,96>::Free(v3, a1);
}

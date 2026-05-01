/*
 * XREFs of ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800192A4
 * Callers:
 *     ?HampHostComputeWaitType@@YA?AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800190B4 (-HampHostComputeWaitType@@YA-AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgIsServicingEnabled@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x1800191F0 (-HampPkgIsServicingEnabled@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgIsPpleApplication@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180019CE0 (-HampPkgIsPpleApplication@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18001AEEC (-HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SU.c)
 *     ?HampPkgGetStateSummary@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z @ 0x180069828 (-HampPkgGetStateSummary@@YA-AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007E394 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 * Callees:
 *     <none>
 */

void __fastcall HampPkgReleaseLockShared(struct _HAM_PACKAGE *a1)
{
  __int64 *Value; // rax
  __int64 v3; // rdx

  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v3 = *Value;
    if ( (*Value & 0x40) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[7]-- == 1 )
      *Value = v3 & 0xFFFFFFFFFFFFFFBFuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 304);
}

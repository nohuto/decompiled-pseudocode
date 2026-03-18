/*
 * XREFs of ??$?0VSmartObjStackRef@@@?$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14020D8AC
 * Callers:
 *     NtUserGetMenuItemRect @ 0x14020D500 (NtUserGetMenuItemRect.c)
 *     NtUserTrackPopupMenuEx @ 0x1402C0470 (NtUserTrackPopupMenuEx.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

_QWORD *__fastcall Win32HMThreadLockAlways<tagMENU>::Win32HMThreadLockAlways<tagMENU>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdx

  v5 = *(_QWORD *)(a3 + 16);
  if ( !v5 )
    v5 = **(_QWORD **)a3;
  Win32HM_LockIntoThread<0>(a2, v5, a1);
  return a1;
}

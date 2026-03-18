/*
 * XREFs of ??$?0VSmartObjStackRef@@@?$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14003D944
 * Callers:
 *     NtUserTrackPopupMenuEx @ 0x14003CDB0 (NtUserTrackPopupMenuEx.c)
 *     NtUserGetMenuItemRect @ 0x14003D5F0 (NtUserGetMenuItemRect.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall Win32HMThreadLockAlways<tagMENU>::Win32HMThreadLockAlways<tagMENU>(
        __int64 a1,
        __int64 a2,
        __int64 ***a3)
{
  __int64 *v5; // rdx

  v5 = (__int64 *)a3[2];
  if ( !v5 )
    v5 = **a3;
  Win32HM_LockIntoThread<0>(a2, v5, a1);
  return a1;
}

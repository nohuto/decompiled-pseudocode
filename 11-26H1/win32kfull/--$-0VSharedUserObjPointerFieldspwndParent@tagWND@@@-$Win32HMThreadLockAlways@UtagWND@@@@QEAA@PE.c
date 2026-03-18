/*
 * XREFs of ??$?0VSharedUserObjPointerFieldspwndParent@tagWND@@@?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z @ 0x140208238
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

_QWORD *__fastcall Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  Win32HM_LockIntoThread<0>(a2, *a3, a1);
  return a1;
}

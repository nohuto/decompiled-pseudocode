/*
 * XREFs of ??$?0VSharedUserObjPointerFieldspwndParent@tagWND@@@?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z @ 0x14004DCF4
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

_QWORD *__fastcall Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  Win32HM_LockIntoThread<0>(a2, *a3, a1);
  return a1;
}

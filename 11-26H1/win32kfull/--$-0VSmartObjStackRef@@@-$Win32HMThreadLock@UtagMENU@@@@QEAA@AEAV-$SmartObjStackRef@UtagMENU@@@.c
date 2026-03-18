/*
 * XREFs of ??$?0VSmartObjStackRef@@@?$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14004B390
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x14004B410 (NtUserThunkedMenuItemInfo.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     NtUserThunkedMenuInfo @ 0x14020F5E0 (NtUserThunkedMenuInfo.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Win32HMThreadLock<tagMENU>::Win32HMThreadLock<tagMENU>(_QWORD *a1, __int64 **a2)
{
  __int64 *v2; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // rcx

  v2 = a2[2];
  if ( !v2 )
    v2 = (__int64 *)**a2;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  *a1 = *(_QWORD *)(v5 + 448);
  *(_QWORD *)(v5 + 448) = a1;
  a1[1] = v2;
  if ( v2 )
    HMLockObject(v2);
  return a1;
}

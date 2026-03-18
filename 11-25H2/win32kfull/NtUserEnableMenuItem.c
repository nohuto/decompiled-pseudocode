/*
 * XREFs of NtUserEnableMenuItem @ 0x1401E53F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxEnableMenuItem @ 0x140045E50 (xxxEnableMenuItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall NtUserEnableMenuItem(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v18[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-18h]

  v6 = EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v18, v7);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004);
LABEL_9:
    v11 = -1;
    goto LABEL_7;
  }
  v8 = ValidateHmenu(a1, 128LL);
  v19 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v18, v8);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v18)
    || (*(_DWORD *)(*(_QWORD *)(*v18[0] + 40) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_9;
  }
  v10 = v19;
  if ( !v19 )
    v10 = *v18[0];
  Win32HM_LockIntoThread<0>(v6, v10, BugCheckParameter3);
  v11 = xxxEnableMenuItem(v18, a2, a3);
  v14 = PtiCurrent(v13, v12);
  Win32HM_UnlockFromThread<0>((ULONG_PTR)v14, BugCheckParameter3);
LABEL_7:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v18, v9);
  UserSessionSwitchLeaveCrit(v15);
  return v11;
}

/*
 * XREFs of NtUserRemoveMenu @ 0x1400473B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140046AC4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140049FCC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall NtUserRemoveMenu(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdi
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v16[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v16);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004);
    v7 = 0;
  }
  else
  {
    v6 = ValidateHmenu(a1, 32LL);
    v7 = 0;
    v17 = 0LL;
    if ( v6 != *v16[0] )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v16);
      if ( v6 )
      {
        v16[0] = *(__int64 **)(v6 + 152);
        ++*((_DWORD *)v16[0] + 2);
      }
      else
      {
        v16[0] = (__int64 *)gSmartObjNullRef;
      }
    }
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v16)
      && (*(_DWORD *)(*(_QWORD *)(*v16[0] + 40) + 40LL) & 0x40) == 0
      && (*(_DWORD *)(*(_QWORD *)(*v16[0] + 40) + 40LL) & 0x200) == 0 )
    {
      v9 = v17;
      if ( !v17 )
        v9 = *v16[0];
      v10 = PtiCurrent(*v16[0], v8);
      Win32HM_LockIntoThread<1>(v10, v9, BugCheckParameter3);
      v7 = xxxRemoveDeleteMenuHelper(v16, a2, a3, 0);
      v13 = PtiCurrent(v12, v11);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v13, BugCheckParameter3);
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v16);
  UserSessionSwitchLeaveCrit();
  return v7;
}

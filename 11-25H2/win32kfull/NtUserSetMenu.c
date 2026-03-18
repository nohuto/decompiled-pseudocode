/*
 * XREFs of NtUserSetMenu @ 0x1401FBBA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140049FCC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetMenu @ 0x1401FBD50 (xxxSetMenu.c)
 */

__int64 __fastcall NtUserSetMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edi
  struct tagWND *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagTHREADINFO *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR v23[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v24[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( (((*(_WORD *)(v6 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v24, v9);
      if ( a2 )
      {
        v10 = ValidateHmenu(a2, 64LL);
        v25 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v24, v10);
        if ( SmartObjStackRef<tagMENU>::operator==((__int64)v24) )
        {
LABEL_5:
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v24, v11);
          v14 = PtiCurrent(v13, v12);
          Win32HM_UnlockFromThread<0>((ULONG_PTR)v14, BugCheckParameter3);
          goto LABEL_6;
        }
      }
      else
      {
        v25 = 0LL;
        if ( !*(_QWORD *)v24[0] )
        {
LABEL_10:
          if ( !*(_QWORD *)v24[0] )
          {
LABEL_11:
            v16 = *(_QWORD *)v24[0];
LABEL_12:
            Win32HM_LockIntoThread<1>(v4, v16, (__int64 *)v23);
            v7 = xxxSetMenu(v8);
            v19 = PtiCurrent(v18, v17);
            Win32HM_UnlockFromThread<1>((ULONG_PTR)v19, v23);
            goto LABEL_5;
          }
LABEL_13:
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 40LL) & 1) != 0 )
          {
            UserSetLastError(87);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v24, v20);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v21);
            goto LABEL_6;
          }
          v16 = v25;
          if ( v25 )
            goto LABEL_12;
          goto LABEL_11;
        }
        SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v24);
        v24[0] = gSmartObjNullRef;
      }
      if ( v25 )
        goto LABEL_13;
      goto LABEL_10;
    }
  }
LABEL_6:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}

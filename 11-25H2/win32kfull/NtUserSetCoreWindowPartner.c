/*
 * XREFs of NtUserSetCoreWindowPartner @ 0x1401CC7C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401CC8EC (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x14026FF28 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1402C9F44 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

_BOOL8 __fastcall NtUserSetCoreWindowPartner(HWND a1, int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  BOOL v8; // ebx
  int v9; // ecx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // r14
  struct tagWND *v12; // rsi
  struct tagTHREADINFO *v13; // rcx
  __int64 v14; // rdx
  struct tagWND *v15; // rax
  struct tagWND *v16; // rbp
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR v22[5]; // [rsp+30h] [rbp-28h] BYREF
  struct tagWND *v23; // [rsp+78h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  v8 = 0;
  if ( (a2 & 0xFFFFFFFD) == 0 )
  {
    v23 = 0LL;
    v11 = PtiCurrent(v7, v6);
    if ( (unsigned int)ValidateHWNDND(a1, &v23) )
    {
      v12 = v23;
      v13 = (struct tagTHREADINFO *)*((_QWORD *)v23 + 2);
      if ( v11 != v13 || !(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)v13 + 58)) )
      {
        v9 = 5;
        goto LABEL_3;
      }
      LOBYTE(v14) = 1;
      v15 = (struct tagWND *)HMValidateHandleNoSecure(a3, v14);
      v16 = v15;
      if ( v15 )
      {
        if ( !a2 )
        {
          v8 = (int)CoreWindowProp::RemoveComponent(v15, v12) >= 0;
          goto LABEL_13;
        }
        if ( a2 == 2 )
        {
          Win32HM_LockIntoThread<0>((__int64)v11, (__int64)v12, v22);
          Win32HM_LockIntoThread<0>((__int64)v11, (__int64)v16, BugCheckParameter3);
          v17 = CoreWindowProp::xxxSetHost(v12, v16);
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v18);
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v22, v19);
          v8 = v17 >= 0;
          goto LABEL_13;
        }
      }
    }
  }
  v9 = 87;
LABEL_3:
  UserSetLastError(v9);
LABEL_13:
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}

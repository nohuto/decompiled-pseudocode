/*
 * XREFs of NtUserSetWindowBand @ 0x14015C390
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x14015C664 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x14015CF34 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 */

__int64 __fastcall NtUserSetWindowBand(__int64 a1, HWND a2, unsigned int a3)
{
  int v3; // esi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  struct tagWND *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  struct tagTHREADINFO *v19; // rax
  ULONG_PTR v20[2]; // [rsp+20h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-10h] BYREF
  struct tagWND *v22; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v22 = 0LL;
  v7 = EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v10 = v8;
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( (((*(_WORD *)(v9 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v7, v8, BugCheckParameter3);
      if ( !(unsigned int)ValidateHWNDIA(a2, &v22) )
      {
LABEL_13:
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v12);
        goto LABEL_2;
      }
      UserSessionState = W32GetUserSessionState(v13, v12);
      if ( GetProp(v10, *(unsigned __int16 *)(UserSessionState + 41354), 1u) )
      {
        UserSetLastError(5);
      }
      else
      {
        v15 = v22;
        if ( (unsigned __int64)v22 >= 0xFFFFFFFFFFFFFFFEuLL && a3 != 1 )
        {
          UserSetLastError(87);
          goto LABEL_13;
        }
        v20[0] = -1LL;
        v20[1] = 0LL;
        if ( (unsigned __int64)v22 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
          Win32HM_LockIntoThread<1>(v7, (__int64)v22, (__int64 *)v20);
        v3 = xxxSetWindowBand(v10, v15, a3, 1LL);
        if ( v20[0] != -1LL )
        {
          v18 = PtiCurrent(v17, v16);
          Win32HM_UnlockFromThread<1>((ULONG_PTR)v18, v20);
        }
      }
      v19 = PtiCurrent(v17, v16);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v19, BugCheckParameter3);
    }
  }
LABEL_2:
  UserSessionSwitchLeaveCrit(v9);
  return v3;
}

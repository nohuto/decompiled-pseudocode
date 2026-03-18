/*
 * XREFs of NtUserSetParent @ 0x140060E30
 * Callers:
 *     <none>
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     GetMessageWindow @ 0x140062A3C (GetMessageWindow.c)
 */

__int64 __fastcall NtUserSetParent(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  struct tagWND *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagWND *v11; // rbp
  __int64 MessageWindow; // rax
  struct tagWND *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  struct tagTHREADINFO *v17; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v20[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( (((*(_WORD *)(v6 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
      if ( a2 )
      {
        if ( a2 != -3 )
        {
          v11 = (struct tagWND *)ValidateHwnd(a2);
          if ( !v11 )
          {
LABEL_12:
            v17 = PtiCurrent(v10, v9);
            Win32HM_UnlockFromThread<0>((ULONG_PTR)v17, BugCheckParameter3);
            goto LABEL_13;
          }
LABEL_9:
          Win32HM_LockIntoThread<1>(v4, (__int64)v11, (__int64 *)v20);
          v13 = xxxSetParentWorker(v8, v11, 0LL, 0);
          if ( v13 )
            v7 = *(_QWORD *)v13;
          v16 = PtiCurrent(v15, v14);
          Win32HM_UnlockFromThread<1>((ULONG_PTR)v16, v20);
          goto LABEL_12;
        }
        MessageWindow = GetMessageWindow(v8);
      }
      else
      {
        MessageWindow = GetDesktopWindow((__int64)v8);
      }
      v11 = (struct tagWND *)MessageWindow;
      goto LABEL_9;
    }
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}

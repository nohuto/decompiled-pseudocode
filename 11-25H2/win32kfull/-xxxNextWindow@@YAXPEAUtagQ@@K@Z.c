/*
 * XREFs of ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x1402DCE18
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x14024FA10 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     GetNonChildAncestor @ 0x14005E7A4 (GetNonChildAncestor.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x140169118 (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     ?SetNewForegroundQueue@@YAXPEAUtagQ@@@Z @ 0x14023A398 (-SetNewForegroundQueue@@YAXPEAUtagQ@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x1402786A8 (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 *     ?xxxSwitchToThisWindowEx@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x140279CB8 (-xxxSwitchToThisWindowEx@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 *     Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline @ 0x14027A134 (Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NextWindow_ForegroundHackRemoval__private_IsEnabledDeviceUsageNoInline @ 0x1402943FC (Feature_NextWindow_ForegroundHackRemoval__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall xxxNextWindow(struct tagQ *a1, __int64 a2)
{
  int v2; // esi
  struct tagTHREADINFO *v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 NonChildAncestor; // r14
  unsigned int v8; // r15d
  struct tagWND *NextQueueWindow; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rdx
  ULONG_PTR v19[2]; // [rsp+50h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-48h] BYREF
  ULONG_PTR v21[2]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+8h] BYREF

  v2 = a2;
  v22 = 0LL;
  v4 = PtiCurrent((__int64)a1, a2);
  if ( a1 )
  {
    v5 = (unsigned __int16)_GetAsyncKeyState(16LL) >> 15;
    if ( (v2 == 9 || v2 == 27) && (*((_DWORD *)a1 + 103) & 0x4000000) == 0 )
    {
      v6 = *((_QWORD *)a1 + 16);
      if ( v6
        || (v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 496LL) + 8LL) + 24LL) + 112LL)) != 0 )
      {
        NonChildAncestor = GetNonChildAncestor(*((_QWORD *)a1 + 15));
        Win32HM_LockIntoThread<1>((__int64)v4, NonChildAncestor, (__int64 *)v21);
        Win32HM_LockIntoThread<0>((__int64)v4, v6, BugCheckParameter3);
        v8 = 2;
        xxxSendTransformableMessageTimeout(
          (struct tagTHREADINFO **)v6,
          31LL,
          0LL,
          0LL,
          2u,
          0x64u,
          (unsigned __int64 *)&v22,
          1,
          0);
        NextQueueWindow = _GetNextQueueWindow((struct tagWND *)v6, v5, 1);
        Win32HM_LockIntoThread<1>((__int64)v4, (__int64)NextQueueWindow, (__int64 *)v19);
        if ( NextQueueWindow != (struct tagWND *)v6 && NextQueueWindow )
        {
          if ( NonChildAncestor )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 31LL) & 0xC0) != 0x40 )
            {
              v11 = *(_QWORD *)(NonChildAncestor + 168);
              if ( v11 )
                *(_DWORD *)(*(_QWORD *)(v11 + 40) + 40LL) &= ~4u;
            }
          }
          if ( !v5 && (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 24LL) & 8) == 0 )
            xxxSetWindowPos((struct tagWND *)v6, 1LL, 0LL, 0LL, 0, 0, 25619);
          if ( (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0xC0) != 0x40 )
          {
            v12 = *((_QWORD *)NextQueueWindow + 21);
            if ( v12 )
              *(_DWORD *)(*(_QWORD *)(v12 + 40) + 40LL) |= 4u;
          }
          if ( (unsigned int)Feature_NextWindow_ForegroundHackRemoval__private_IsEnabledDeviceUsageNoInline() )
          {
            LastWokenThread::Set(*((_QWORD *)NextQueueWindow + 2), 1LL, 0LL);
            if ( v2 != 9 )
              v8 = 0;
            xxxSwitchToThisWindowEx((__int64)NextQueueWindow, v8);
          }
          else
          {
            if ( *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18888) == *(_QWORD *)(*((_QWORD *)NextQueueWindow + 2)
                                                                                    + 472LL) )
            {
              if ( (unsigned int)Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline() )
                ResetForegroundQueue(0LL, v15);
              else
                SetNewForegroundQueue(0LL, v15);
            }
            LastWokenThread::Set(*((_QWORD *)NextQueueWindow + 2), 1LL, 0LL);
            v16 = 18;
            if ( v2 != 9 )
              v16 = 2;
            xxxSetForegroundWindow2((__int64)NextQueueWindow, 0LL, v16);
          }
          if ( v2 == 9 && (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0x40) != 0 )
            xxxSetWindowPos(NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 16387);
        }
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v19, v10);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v17);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v21, v18);
      }
    }
  }
}

/*
 * XREFs of xxxDW_DestroyOwnedWindows @ 0x14004E938
 * Callers:
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     DwmAsyncOwnerChange @ 0x14005E124 (DwmAsyncOwnerChange.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxDW_DestroyOwnedWindows(__int64 a1, __int64 a2)
{
  struct tagWND *v3; // r14
  __int64 result; // rax
  __int64 v5; // rsi
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagWND *i; // rbx
  struct tagTHREADINFO *v10; // rax
  void *v11; // rax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(struct tagWND **)(*(_QWORD *)(a1 + 16) + 824LL);
  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    result = *(_QWORD *)(result + 8);
    v5 = *(_QWORD *)(result + 24);
    if ( v5 )
    {
      v6 = PtiCurrent(a1, a2);
      Win32HM_LockIntoThread<0>((__int64)v6, v5, BugCheckParameter3);
LABEL_4:
      for ( i = *(struct tagWND **)(v5 + 112); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
      {
        if ( *((_QWORD *)i + 15) == a1 )
        {
          if ( (**(_DWORD **)(W32GetUserSessionState(v8, v7) + 19872) & 4) == 0
            || (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 528LL), 0, 0) & 1) != 0
            || i != v3 )
          {
            if ( (*(_WORD *)(*((_QWORD *)i + 5) + 42LL) & 0x2FFF) == 0x2AA || !(unsigned int)xxxDestroyWindow(i) )
            {
              *(_QWORD *)(*((_QWORD *)i + 5) + 64LL) = 0LL;
              HMAssignmentUnlock((char *)i + 120);
              if ( (unsigned int)IsWindowDesktopComposed(i) )
              {
                v11 = (void *)ReferenceDwmApiPort();
                DwmAsyncOwnerChange(v11);
              }
            }
            goto LABEL_4;
          }
          *(_QWORD *)(*((_QWORD *)i + 5) + 64LL) = 0LL;
          HMAssignmentUnlock((char *)i + 120);
        }
      }
      v10 = PtiCurrent(v8, v7);
      return Win32HM_UnlockFromThread<0>((ULONG_PTR)v10, BugCheckParameter3);
    }
  }
  return result;
}

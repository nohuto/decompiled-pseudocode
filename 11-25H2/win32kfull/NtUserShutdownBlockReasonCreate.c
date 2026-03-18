/*
 * XREFs of NtUserShutdownBlockReasonCreate @ 0x140130090
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     InternalRemoveProp @ 0x14005BEB0 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x14005BFA8 (InternalSetProp.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     _GetAncestor @ 0x1401302BC (_GetAncestor.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140131080 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     QueueShutdownData @ 0x1401E4924 (QueueShutdownData.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonCreate(__int64 a1, volatile void *a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // r8
  unsigned __int16 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int16 *v13; // rsi
  int v14; // ecx
  int v15; // edi
  __int64 UserSessionState; // rax
  void *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx

  EnterCrit(0LL, 0LL);
  v6 = ValidateReceivingHwnd(a1, 1LL);
  v7 = 0LL;
  if ( !v6 )
    goto LABEL_18;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  v9 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v5 = -*(_QWORD *)CurrentProcessWin32Process;
    v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v6 + 16) + 464LL) != v9 )
  {
    v7 = 5LL;
    goto LABEL_18;
  }
  if ( v6 != GetAncestor(v6, 2LL) || a3 > 0x101 )
  {
    v14 = 87;
    goto LABEL_13;
  }
  v10 = (unsigned __int16 *)Win32AllocPoolZInit(2LL * (a3 + 1), 1919054677LL);
  v13 = v10;
  if ( !v10 )
  {
    v14 = 8;
LABEL_13:
    UserSetLastError(v14);
    goto LABEL_18;
  }
  if ( a3 )
  {
    ProbeForRead(a2, 2LL * (a3 + 1), 2u);
    RtlStringCchCopyW(v13, a3 + 1, (const unsigned __int16 *)a2);
  }
  else
  {
    *v10 = 0;
  }
  UserSessionState = W32GetUserSessionState(v12, v11);
  v18 = (void *)InternalRemoveProp(v6, *(unsigned __int16 *)(UserSessionState + 41352), 1u);
  if ( v18 )
    Win32FreePool(v18);
  v21 = W32GetUserSessionState(v20, v19);
  if ( (unsigned int)InternalSetProp(v6, *(unsigned __int16 *)(v21 + 41352), (__int64)v13, 1u) )
  {
    v15 = 0;
    if ( *(_QWORD *)(W32GetUserSessionState(v5, v22) + 69040) )
      QueueShutdownData(a1, 1uLL);
  }
  else
  {
    v15 = -1073741823;
  }
  if ( v15 < 0 )
    Win32FreePool(v13);
  else
    v7 = 1LL;
LABEL_18:
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}

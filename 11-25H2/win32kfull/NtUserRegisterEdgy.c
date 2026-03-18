/*
 * XREFs of NtUserRegisterEdgy @ 0x14020F790
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     IsShellProcess @ 0x1401A7FD8 (IsShellProcess.c)
 *     EdgyUnregisterListener @ 0x140220BB0 (EdgyUnregisterListener.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     EdgyRegisterListener @ 0x1402A6654 (EdgyRegisterListener.c)
 */

__int64 __fastcall NtUserRegisterEdgy(unsigned int a1, __int64 a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  int v10; // ecx
  __int64 v11; // rcx
  unsigned int i; // edi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // r8
  int v20; // eax
  _OWORD v22[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v23; // [rsp+60h] [rbp-48h] BYREF
  __int128 v24; // [rsp+70h] [rbp-38h]

  v6 = 0;
  EnterCrit(0LL, 0LL);
  v9 = PtiCurrent(v8, v7);
  if ( !a1 )
  {
    v10 = 87;
LABEL_3:
    UserSetLastError(v10);
    goto LABEL_27;
  }
  if ( !(unsigned int)IsShellProcess(*((_QWORD *)v9 + 58)) )
  {
    v10 = 5;
    goto LABEL_3;
  }
  for ( i = 0; i < a1; ++i )
  {
    v23 = 0LL;
    v24 = 0LL;
    RtlCopyFromUser(&v23, (void *)(a2 + 32LL * i), 0x20uLL);
    v22[0] = v23;
    v22[1] = (unsigned __int64)v24;
    if ( a3 )
    {
      LOBYTE(v13) = 19;
      if ( !HMValidateHandleWithDescriptor(*(__int64 *)&v22[0], v13) )
        goto LABEL_10;
      if ( *((_QWORD *)&v22[0] + 1) )
      {
        v14 = ValidateHwnd(*((_QWORD *)&v22[0] + 1));
        v16 = v14;
        if ( !v14 )
          goto LABEL_10;
        v17 = *(_QWORD *)(v14 + 40);
        if ( *(char *)(v17 + 19) < 0 || *(char *)(v17 + 20) < 0 )
          goto LABEL_10;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
        v19 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v19 = CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        if ( *(_QWORD *)(*(_QWORD *)(v16 + 16) + 464LL) != v19 || *(_DWORD *)(v16 + 260) )
        {
LABEL_10:
          UserSetLastError(87);
          goto LABEL_27;
        }
      }
      v20 = EdgyRegisterListener(v22);
    }
    else
    {
      v20 = EdgyUnregisterListener(v22);
    }
    if ( a3 && !v20 )
    {
      UserSetLastError(8);
      goto LABEL_27;
    }
  }
  v6 = 1;
LABEL_27:
  UserSessionSwitchLeaveCrit(v11);
  return v6;
}

/*
 * XREFs of NtUserQueryWindow @ 0x14024BE50
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x14014BC38 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x14014BC9C (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x14014BE9C (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ??0LeaveEnterCritShared@@QEAA@XZ @ 0x1402927A0 (--0LeaveEnterCritShared@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserQueryWindow(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagWND *v7; // rsi
  __int64 ThreadProcessId; // rdi
  __int64 v9; // rbx
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  __int64 *v17; // rdi
  bool v18; // al
  __int64 *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  struct tagWND *v22; // rax
  __int64 v23; // rcx
  unsigned int v25; // [rsp+40h] [rbp+18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v4;
  if ( !v4 )
    goto LABEL_2;
  v9 = *(_QWORD *)(v4 + 16);
  if ( !a2 )
  {
    ThreadProcessId = *(int *)(*(_QWORD *)(v4 + 40) + 332LL);
    goto LABEL_29;
  }
  v10 = a2 - 1;
  if ( !v10 )
  {
    ThreadProcessId = (__int64)PsGetThreadProcessId(*(PETHREAD *)v9);
    goto LABEL_29;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    ThreadProcessId = *(int *)(*(_QWORD *)(v4 + 40) + 328LL);
    goto LABEL_29;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v17 = *(__int64 **)(*(_QWORD *)(v9 + 472) + 128LL);
    goto LABEL_13;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v17 = *(__int64 **)(*(_QWORD *)(v9 + 472) + 120LL);
    goto LABEL_13;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 2;
    if ( !v15 )
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18888);
      ThreadProcessId = *(_QWORD *)(v9 + 472) == v6;
      goto LABEL_29;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
      {
LABEL_2:
        ThreadProcessId = 0LL;
        goto LABEL_29;
      }
      v17 = *(__int64 **)(v9 + 832);
    }
    else
    {
      v17 = *(__int64 **)(v9 + 824);
    }
LABEL_13:
    if ( v17 )
    {
      ThreadProcessId = *v17;
      goto LABEL_29;
    }
    goto LABEL_2;
  }
  v6 = *(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x2FFF;
  if ( (_DWORD)v6 == 682 )
  {
    ThreadProcessId = 1LL;
  }
  else
  {
    v18 = IsHungWindow((const struct tagTHREADINFO **)v4);
    ThreadProcessId = v18;
    if ( v18 )
    {
      v19 = (__int64 *)ShouldProcessHungWindow(v7);
      if ( v19 )
      {
        v20 = *v19;
        LeaveEnterCritShared::LeaveEnterCritShared((LeaveEnterCritShared *)&v25);
        EnterCrit(1LL, 0LL);
        LOBYTE(v21) = 1;
        v22 = (struct tagWND *)HMValidateHandleNoSecure(v20, v21);
        if ( v22 )
          ProcessHungWindow(v22);
        UserSessionSwitchLeaveCrit(v23);
        EnterSharedCrit(0LL, v25);
      }
    }
  }
LABEL_29:
  UserSessionSwitchLeaveCrit(v6);
  return ThreadProcessId;
}

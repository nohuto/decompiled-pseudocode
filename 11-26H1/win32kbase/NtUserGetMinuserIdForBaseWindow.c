/*
 * XREFs of NtUserGetMinuserIdForBaseWindow @ 0x1401E49E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall NtUserGetMinuserIdForBaseWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 CurrentProcessWin32Process; // rax

  EnterSharedCrit(0LL, 1LL, a3, a4);
  LOBYTE(v5) = 23;
  v6 = HMValidateHandleNoSecure(a1, v5);
  v11 = 0LL;
  v12 = v6;
  if ( v6 )
  {
    v13 = *(_QWORD *)(v6 + 16);
    v14 = *(_QWORD *)(v13 + 456);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    if ( CurrentProcessWin32Process )
    {
      v8 = -*(_QWORD *)CurrentProcessWin32Process;
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v7;
    }
    if ( v14 == CurrentProcessWin32Process )
      v11 = *(_QWORD *)(v12 + 56);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v8, v7, v9, v10);
  return v11;
}

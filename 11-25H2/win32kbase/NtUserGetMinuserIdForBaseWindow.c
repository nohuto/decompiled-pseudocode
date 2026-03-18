/*
 * XREFs of NtUserGetMinuserIdForBaseWindow @ 0x1401BD890
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetMinuserIdForBaseWindow(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v10, 1u);
  v2 = HMValidateHandleNoSecure(a1, 23);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    v6 = *(_QWORD *)(v2 + 16);
    v7 = *(_QWORD *)(v6 + 464);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v3;
    }
    if ( v7 == CurrentProcessWin32Process )
      v4 = *(_QWORD *)(v5 + 56);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v3);
  return v4;
}

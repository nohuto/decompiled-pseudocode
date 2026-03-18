/*
 * XREFs of NtUserGetPointerType @ 0x140171080
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?GetPointerType@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1400D3044 (-GetPointerType@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerType(int a1, _DWORD *a2)
{
  int PointerType; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  ULONG64 v8; // rdx
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  struct tagTHREADINFO *v11; // [rsp+70h] [rbp+18h] BYREF

  v10 = 0;
  PointerType = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  if ( !a1 || HIWORD(a1) || !a2 )
  {
    PointerType = 0;
    UserSetLastError(87);
    goto LABEL_11;
  }
  if ( a1 == 1 )
  {
    v10 = 4;
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    PointerType = CTouchProcessor::GetPointerType(*(CTouchProcessor **)(UserSessionState + 3256), v11, a1, &v10);
    if ( !PointerType )
      goto LABEL_11;
  }
  v8 = MmUserProbeAddress;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v10;
LABEL_11:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v8);
  return PointerType;
}

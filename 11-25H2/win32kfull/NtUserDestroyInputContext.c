/*
 * XREFs of NtUserDestroyInputContext @ 0x1402954A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x1401FAF20 (-DestroyInputContext@@YAHPEAUtagIMC@@@Z.c)
 */

__int64 __fastcall NtUserDestroyInputContext(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  int v5; // ebx
  struct tagIMC *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v10);
  v4 = *(_DWORD **)(W32GetUserSessionState(v3, v2) + 19872);
  if ( (*v4 & 4) != 0 )
  {
    LOBYTE(v4) = 17;
    v6 = (struct tagIMC *)HMValidateHandleWithDescriptor(a1, (__int64)v4);
    v5 = 0;
    if ( v6 )
      v5 = DestroyInputContext(v6, v7);
  }
  else
  {
    UserSetLastError(120);
    v5 = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v10);
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}

/*
 * XREFs of NtUserIsInterceptWindow @ 0x14029ACE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserIsInterceptWindow(__int64 a1, int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned int v6; // ebx
  _BYTE v8[32]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  v5 = ValidateHwnd(a1);
  v6 = 0;
  if ( v5 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v8);
    ProbeForWrite(a2, 4uLL, 4u);
    *a2 = (*(_DWORD *)(v5 + 384) >> 4) & 1;
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v8);
    v6 = 1;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}

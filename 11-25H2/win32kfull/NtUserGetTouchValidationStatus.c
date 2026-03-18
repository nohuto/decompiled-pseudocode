/*
 * XREFs of NtUserGetTouchValidationStatus @ 0x140298B60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     _GetTouchValidationStatus @ 0x14027C530 (_GetTouchValidationStatus.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetTouchValidationStatus(__int64 a1)
{
  unsigned int TouchValidationStatus; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  TouchValidationStatus = 0;
  v3 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v7, 1LL);
  if ( !a1 || (LOBYTE(v4) = 19, (v3 = HMValidateHandleWithDescriptor(a1, v4)) != 0) )
  {
    TouchValidationStatus = GetTouchValidationStatus(v3, v4);
  }
  else
  {
    UserSetLastError(6);
    UserSetLastError(0);
  }
  UserSessionSwitchLeaveCrit(v5);
  return TouchValidationStatus;
}

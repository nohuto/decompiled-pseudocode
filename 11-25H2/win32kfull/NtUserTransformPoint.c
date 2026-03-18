/*
 * XREFs of NtUserTransformPoint @ 0x140164EB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x140165284 (IsValidKernelDpiAwarenessContext.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserTransformPoint(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v7; // ebx
  _BYTE *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v13[4]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h] BYREF

  v7 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v14, 1LL);
  v12 = 0LL;
  v13[0] = 0LL;
  if ( (unsigned int)IsValidKernelDpiAwarenessContext(a2) && (unsigned int)IsValidKernelDpiAwarenessContext(a3) )
  {
    v8 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[7] = v8[7];
    v9 = *a1;
    v12 = *a1;
    if ( a4 && (a2 & 0xF) == 2 )
    {
      v13[0] = ValidateHmonitor(a4);
      v9 = v12;
    }
    if ( !v13[0] )
      v13[0] = GuessMonitorOverrideForCoordinateConversions(v9, a3, 0LL);
    LogicalToPhysicalDPIPoint(&v12, &v12, a3, v13);
    PhysicalToLogicalDPIPoint(&v12, &v12, a2, v13);
    v10 = a1;
    *a1 = v12;
  }
  else
  {
    v7 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v7;
}

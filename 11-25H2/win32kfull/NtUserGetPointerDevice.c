/*
 * XREFs of NtUserGetPointerDevice @ 0x1401968A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     _GetPointerDeviceInfoProperties @ 0x140197550 (_GetPointerDeviceInfoProperties.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerDevice(__int64 a1, volatile void *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v7; // ecx
  _BYTE v8[32]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v9 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v10, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v8);
  if ( !a1 || !a2 )
  {
    v7 = 87;
LABEL_7:
    UserSetLastError(v7);
    goto LABEL_5;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v9, 0LL) )
  {
    v7 = 6;
    goto LABEL_7;
  }
  ProbeForWrite(a2, 0x438uLL, 4u);
  GetPointerDeviceInfoProperties(a2, v9);
  v4 = 1;
LABEL_5:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v8);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}

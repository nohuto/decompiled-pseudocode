/*
 * XREFs of NtUserGetPhysicalDeviceRect @ 0x140298680
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetPhysicalDeviceRect(__int64 a1, _OWORD *a2)
{
  int v4; // ebx
  int v5; // ecx
  _BYTE *v6; // rdx
  __int64 v7; // rcx
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v10 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v9);
  if ( !a1 || !a2 )
  {
    v5 = 87;
    goto LABEL_9;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v10, 0LL) )
  {
    v5 = 6;
LABEL_9:
    UserSetLastError(v5);
    goto LABEL_10;
  }
  v6 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v6 = (_BYTE *)MmUserProbeAddress;
  *v6 = *v6;
  v6[15] = v6[15];
  *a2 = *(_OWORD *)(v10 + 140);
  v4 = 1;
LABEL_10:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v9);
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}

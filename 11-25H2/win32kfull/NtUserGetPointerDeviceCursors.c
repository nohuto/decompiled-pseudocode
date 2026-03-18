/*
 * XREFs of NtUserGetPointerDeviceCursors @ 0x140222990
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     _GetPointerDeviceCursors @ 0x14028DE50 (_GetPointerDeviceCursors.c)
 */

__int64 __fastcall NtUserGetPointerDeviceCursors(__int64 a1, _DWORD *a2, volatile void *a3)
{
  int PointerDeviceCursors; // ebx
  int v7; // ecx
  __int64 v8; // rsi
  _DWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v13[48]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+20h] BYREF

  v14 = 0LL;
  PointerDeviceCursors = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v13);
  if ( !a1 || !a2 )
  {
    v7 = 87;
    goto LABEL_21;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v14, 0LL) )
  {
    v7 = 6;
LABEL_21:
    PointerDeviceCursors = 0;
    UserSetLastError(v7);
    goto LABEL_22;
  }
  v8 = *(unsigned int *)(v14 + 1044);
  if ( a3 )
  {
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (_DWORD *)MmUserProbeAddress;
    if ( *v9 >= (unsigned int)v8 )
    {
      ProbeForWrite(a3, 8 * v8, 8u);
      PointerDeviceCursors = GetPointerDeviceCursors(v14, (unsigned int)v8, a3);
      if ( PointerDeviceCursors )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_DWORD *)MmUserProbeAddress;
        *a2 = v8;
      }
    }
    else
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v8;
      PointerDeviceCursors = 0;
      UserSetLastError(122);
    }
  }
  else
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v8;
  }
LABEL_22:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
  UserSessionSwitchLeaveCrit(v10);
  return PointerDeviceCursors;
}

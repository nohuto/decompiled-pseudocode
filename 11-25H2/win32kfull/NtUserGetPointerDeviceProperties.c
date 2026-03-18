/*
 * XREFs of NtUserGetPointerDeviceProperties @ 0x140249D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetPointerDeviceProperties(__int64 a1, unsigned int *a2, volatile void *a3)
{
  int v6; // ebx
  unsigned int v7; // r14d
  unsigned int *v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // r15d
  unsigned __int64 v11; // rcx
  unsigned int v12; // r12d
  void *v13; // rax
  const void *v14; // rsi
  __int64 v15; // rcx
  _QWORD v17[3]; // [rsp+28h] [rbp-90h] BYREF
  void *v18; // [rsp+40h] [rbp-78h]
  int v19; // [rsp+4Ch] [rbp-6Ch]
  _QWORD v20[4]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v21[24]; // [rsp+78h] [rbp-40h] BYREF

  v18 = 0LL;
  v17[0] = 0LL;
  v6 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(v20, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v21);
  if ( !a1 || !a2 )
  {
    v6 = 0;
    UserSetLastError(87);
    goto LABEL_32;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, v17, 0LL) )
  {
    v6 = 0;
    UserSetLastError(6);
    goto LABEL_29;
  }
  v7 = *(_DWORD *)(v17[0] + 392LL);
  if ( !a3 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (unsigned int *)MmUserProbeAddress;
    *a2 = v7;
    goto LABEL_29;
  }
  v8 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v8 = (unsigned int *)MmUserProbeAddress;
  v9 = *v8;
  if ( v9 < v7 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (unsigned int *)MmUserProbeAddress;
    *a2 = v7;
    v6 = 0;
    UserSetLastError(122);
    goto LABEL_29;
  }
  v10 = v9 - *(_DWORD *)(v17[0] + 1052LL);
  v11 = 28LL * v9;
  v20[2] = v11;
  if ( v11 <= 0xFFFFFFFF && v10 )
  {
    if ( (unsigned int)v11 >= 0x2710000 )
    {
LABEL_18:
      v6 = 0;
      UserSetLastError(8);
      goto LABEL_29;
    }
    v19 = 28 * v7;
    v12 = 28 * v7;
    ProbeForWrite(a3, 28 * v7, 8u);
    if ( 28 * v7 - 1 > 0x270FFFF )
    {
      v6 = 0;
      UserSetLastError(1359);
      goto LABEL_29;
    }
    v13 = (void *)Win32AllocPoolZInit(v12, 1668313941LL);
    v14 = v13;
    v18 = v13;
    if ( !v13 )
      goto LABEL_18;
    v6 = RIMGetPointerDeviceProperties(v17[0], v7, v13, v10);
    if ( v6 )
    {
      RtlCopyVolatileMemory((void *)a3, v14, v12);
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (unsigned int *)MmUserProbeAddress;
      *a2 = v7;
      goto LABEL_29;
    }
  }
  v6 = 0;
  UserSetLastError(87);
LABEL_29:
  if ( v18 )
    Win32FreePool(v18);
LABEL_32:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v21);
  UserSessionSwitchLeaveCrit(v15);
  return v6;
}

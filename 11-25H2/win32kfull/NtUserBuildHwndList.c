/*
 * XREFs of NtUserBuildHwndList @ 0x140248160
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     BuildHwndList @ 0x140036200 (BuildHwndList.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     MapDesktop @ 0x140172F80 (MapDesktop.c)
 *     GetThreadDesktopWindow @ 0x1401785A0 (GetThreadDesktopWindow.c)
 *     CallerCanSeeImmersiveWindows @ 0x140245484 (CallerCanSeeImmersiveWindows.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserBuildHwndList(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        volatile void *Address,
        unsigned int *a8)
{
  struct tagBWL *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  unsigned int v16; // r14d
  struct tagWND *ThreadDesktopWindow; // rax
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // ecx
  ULONG64 v24; // rdx
  struct tagBWL *v25; // rax
  unsigned int v26; // ebx
  _DWORD *v27; // r8
  __int64 v28; // rcx
  int v30; // [rsp+20h] [rbp-98h]
  _QWORD v31[2]; // [rsp+40h] [rbp-78h] BYREF
  int v32; // [rsp+50h] [rbp-68h]
  int v33; // [rsp+54h] [rbp-64h]
  __int64 CurrentProcess; // [rsp+58h] [rbp-60h]
  PVOID v35; // [rsp+60h] [rbp-58h]
  int v36; // [rsp+68h] [rbp-50h]
  int v37; // [rsp+6Ch] [rbp-4Ch]
  __int64 v38; // [rsp+70h] [rbp-48h] BYREF
  _BYTE v39[56]; // [rsp+80h] [rbp-38h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+10h] BYREF
  int v41; // [rsp+D0h] [rbp+18h]

  v41 = a3;
  Object = 0LL;
  v11 = 0LL;
  v31[0] = 0LL;
  v31[1] = 0LL;
  v33 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v38, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v39);
  v15 = *(_DWORD **)(W32GetUserSessionState(v13, v12) + 19872);
  v16 = 2 * (*v15 & 4 | 1);
  if ( a4 && !(unsigned int)CallerCanSeeImmersiveWindows((__int64)v15) )
    v16 |= 0x10u;
  if ( a2 )
  {
    ThreadDesktopWindow = (struct tagWND *)ValidateHwnd(a2);
    if ( !ThreadDesktopWindow )
    {
LABEL_6:
      v18 = -1073741816;
      goto LABEL_38;
    }
  }
  else
  {
    ThreadDesktopWindow = 0LL;
  }
  if ( a5 )
  {
    v19 = PtiFromThreadId(a5);
    v20 = v19;
    if ( !v19 )
      goto LABEL_22;
    v21 = *(_QWORD *)(v19 + 496);
    if ( !v21 )
      goto LABEL_22;
    ThreadDesktopWindow = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 24LL) + 112LL);
  }
  else
  {
    v20 = 0LL;
  }
  if ( a1 )
  {
    LOBYTE(v14) = 1;
    if ( (int)ValidateHdesk(a1, v14, 1LL, &Object) < 0 )
      goto LABEL_6;
    v36 = 0;
    v37 = 0;
    v35 = Object;
    v32 = 1;
    CurrentProcess = PsGetCurrentProcess(v22);
    v18 = MapDesktop((__int64)v31);
    if ( v18 < 0 )
    {
      v23 = 6;
      goto LABEL_17;
    }
    ThreadDesktopWindow = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 112LL);
  }
  if ( ThreadDesktopWindow )
  {
    if ( v41 )
    {
      v16 |= 1u;
LABEL_25:
      ThreadDesktopWindow = (struct tagWND *)*((_QWORD *)ThreadDesktopWindow + 14);
    }
  }
  else if ( !Object )
  {
    ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(v20, v14);
    if ( !ThreadDesktopWindow )
    {
LABEL_22:
      v18 = -1073741816;
      UserSetLastError(87);
      goto LABEL_38;
    }
    goto LABEL_25;
  }
  v25 = BuildHwndList(ThreadDesktopWindow, v16, v20, 0);
  v11 = v25;
  if ( v25 )
  {
    v26 = ((*((_QWORD *)v25 + 1) - (_QWORD)v25 - 32LL) >> 3) + 1;
    ProbeForWrite(Address, 8LL * a6, 4u);
    v27 = a8;
    v24 = MmUserProbeAddress;
    if ( (unsigned __int64)a8 >= MmUserProbeAddress )
      v27 = (_DWORD *)MmUserProbeAddress;
    *v27 = *v27;
    if ( v26 > a6 )
    {
      v30 = -1073741789;
    }
    else
    {
      RtlCopyVolatileMemory((void *)Address, (char *)v11 + 32, 8LL * v26);
      v30 = 0;
    }
    *a8 = v26;
    v18 = v30;
    goto LABEL_34;
  }
  v18 = -1073741816;
  v23 = 8;
LABEL_17:
  UserSetLastError(v23);
LABEL_34:
  if ( v11 )
    FreeHwndList(v11, v24);
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_38:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v39);
  UserSessionSwitchLeaveCrit(v28);
  return (unsigned int)v18;
}

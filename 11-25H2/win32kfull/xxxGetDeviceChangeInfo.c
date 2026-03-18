/*
 * XREFs of xxxGetDeviceChangeInfo @ 0x14027C658
 * Callers:
 *     NtUserGetDeviceChangeInfo @ 0x140297610 (NtUserGetDeviceChangeInfo.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?EnterMediaCrit@@YAXXZ @ 0x140126FC4 (-EnterMediaCrit@@YAXXZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?LeaveMediaCrit@@YAXXZ @ 0x14026F448 (-LeaveMediaCrit@@YAXXZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

__int64 __fastcall xxxGetDeviceChangeInfo(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagTHREADINFO *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  PFILE_OBJECT v22; // rbx
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // rdx
  IRP *v25; // rbx
  NTSTATUS Status; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v31[3]; // [rsp+88h] [rbp-1h] BYREF
  _QWORD v32[8]; // [rsp+A0h] [rbp+17h] BYREF
  char v33; // [rsp+F0h] [rbp+67h] BYREF
  __int16 OutputBuffer; // [rsp+F8h] [rbp+6Fh] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+100h] [rbp+77h] BYREF
  PFILE_OBJECT FileObject; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = 0;
  FileObject = 0LL;
  DestinationString = 0LL;
  DeviceObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  OutputBuffer = 0;
  IoStatusBlock = 0LL;
  v2 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v3) != v2 )
    return 0LL;
  EnterMediaCrit(v5, v4);
  UserSessionState = W32GetUserSessionState(v7, v6);
  if ( *(_QWORD *)(UserSessionState + 69904) == UserSessionState + 69904 )
  {
    LeaveMediaCrit(v10, v9);
    return 0LL;
  }
  v11 = W32GetUserSessionState(v10, v9) + 69904;
  v13 = *(_QWORD *)(v11 + 8);
  if ( *(_QWORD *)v13 != v11 || (v14 = *(__int64 **)(v13 + 8), *v14 != v13) )
    __fastfail(3u);
  *(_QWORD *)(v11 + 8) = v14;
  *v14 = v11;
  LeaveMediaCrit((__int64)v14, v12);
  if ( !v13 )
    return 0LL;
  PtiCurrent(v16, v15);
  v19 = PtiCurrent(v18, v17);
  v32[0] = *((_QWORD *)v19 + 48);
  *((_QWORD *)v19 + 48) = v32;
  v32[2] = Win32FreePool;
  v32[1] = v13;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    v22 = FileObject;
    v23 = PtiCurrent(v21, v20);
    v31[0] = *((_QWORD *)v23 + 48);
    *((_QWORD *)v23 + 48) = v31;
    v31[2] = UserDereferenceObject;
    v31[1] = v22;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v25 = IoBuildDeviceIoControlRequest(
            0x6DC010u,
            DeviceObject,
            (PVOID)(v13 + 40),
            (unsigned int)*(unsigned __int16 *)(v13 + 40) + 4,
            &OutputBuffer,
            2u,
            0,
            &Event,
            &IoStatusBlock);
    if ( v25 )
    {
      LOBYTE(v24) = 1;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v33, v24);
      Status = IofCallDriver(DeviceObject, v25);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v33);
      if ( !Status && HIBYTE(OutputBuffer) )
      {
        v1 = 1 << (HIBYTE(OutputBuffer) - 65);
        if ( (*(_DWORD *)(v13 + 32) & 1) != 0 )
          v1 |= 0x80000000;
      }
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v31, v24);
  }
  PopAndFreeW32ThreadLock((__int64)v32, v20);
  return v1;
}

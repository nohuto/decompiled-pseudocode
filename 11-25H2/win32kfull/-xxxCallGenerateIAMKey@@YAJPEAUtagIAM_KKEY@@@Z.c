/*
 * XREFs of ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x140278994
 * Callers:
 *     ?xxxGenerateIAMKey@@YAXPEAUtagDESKTOP@@@Z @ 0x140278B68 (-xxxGenerateIAMKey@@YAXPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxCallGenerateIAMKey(union _LARGE_INTEGER *a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  PDEVICE_OBJECT v5; // rbx
  struct tagTHREADINFO *v6; // rax
  IRP *v7; // rax
  __int64 v8; // rdx
  NTSTATUS Status; // ebx
  _BYTE v10[8]; // [rsp+50h] [rbp-29h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-21h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v13[2]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v14; // [rsp+78h] [rbp-1h]
  struct _KEVENT Event; // [rsp+80h] [rbp+7h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp+1Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp+2Fh] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+B8h] [rbp+3Fh] BYREF

  FileObject = 0LL;
  DeviceObject = 0LL;
  DestinationString = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\KsecDD");
  result = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
  if ( result >= 0 )
  {
    v5 = DeviceObject;
    v6 = PtiCurrent(v4, v3);
    v13[0] = *((_QWORD *)v6 + 48);
    *((_QWORD *)v6 + 48) = v13;
    v14 = UserDereferenceObject;
    v13[1] = v5;
    if ( v5 )
      ObfReferenceObject(v5);
    ObfDereferenceObject(FileObject);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v7 = IoBuildDeviceIoControlRequest(0x390004u, DeviceObject, 0LL, 0, &Timeout, 8u, 0, &Event, &IoStatusBlock);
    if ( v7 )
    {
      Status = IofCallDriver(DeviceObject, v7);
      if ( Status == 259 )
      {
        LOBYTE(v8) = 1;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v10, v8);
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v10);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
        a1[1] = Timeout;
    }
    else
    {
      Status = -1073741823;
    }
    if ( v14 != -1 )
      PopAndFreeW32ThreadLock((__int64)v13, v8);
    return Status;
  }
  return result;
}

/*
 * XREFs of DpiFdoDetectVgaDeviceInCapabilities @ 0x14024B5F8
 * Callers:
 *     DpiAddDevice @ 0x14023C1E0 (DpiAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpiFdoDetectVgaDeviceInCapabilities(__int64 a1)
{
  __int64 v1; // rdi
  PIRP v2; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // eax
  struct _KEVENT Event; // [rsp+40h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-21h] BYREF
  _DWORD v8[16]; // [rsp+70h] [rbp-9h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v2 = IoBuildSynchronousFsdRequest(0x1Bu, *(PDEVICE_OBJECT *)(v1 + 152), 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( !v2 )
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 2034;
    return 3221225473LL;
  }
  memset(v8, 0, sizeof(v8));
  v2->IoStatus.Status = -1073741637;
  v8[3] = -1;
  v8[2] = -1;
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  v2->IoStatus.Information = 0LL;
  v8[0] = 65600;
  CurrentStackLocation[-1].MinorFunction = 9;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v8;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(v1 + 152), v2);
  if ( Status == 259 )
  {
    if ( KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2071;
    }
    Status = IoStatusBlock.Status;
  }
  if ( Status < 0 )
    return 3221225473LL;
  return (v8[1] & 0x400000) == 0 ? 0xC0000001 : 0;
}

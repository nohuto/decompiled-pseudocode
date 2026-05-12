/*
 * XREFs of sub_14006E9C0 @ 0x14006E9C0
 * Callers:
 *     sub_14006CE64 @ 0x14006CE64 (sub_14006CE64.c)
 * Callees:
 *     sub_14006ECD0 @ 0x14006ECD0 (sub_14006ECD0.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 sub_14006E9C0()
{
  unsigned int v0; // ebx
  char v1; // r15
  char v2; // r14
  PDEVICE_OBJECT v3; // rcx
  __int64 v4; // r8
  NTSTATUS DeviceObjectPointer; // edi
  unsigned int v6; // esi
  IRP *v7; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING ObjectName; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  __int64 Dst; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v14; // [rsp+A8h] [rbp-58h]
  __int64 v15; // [rsp+B0h] [rbp-50h]
  __int64 v16; // [rsp+B8h] [rbp-48h]
  __int64 v17; // [rsp+C0h] [rbp-40h]
  __int64 v18; // [rsp+C8h] [rbp-38h]
  __int64 v19; // [rsp+D0h] [rbp-30h]
  __int64 v20; // [rsp+D8h] [rbp-28h]
  __int64 v21; // [rsp+E0h] [rbp-20h]
  __int64 v22; // [rsp+E8h] [rbp-18h]
  __int64 v23; // [rsp+F0h] [rbp-10h]
  __int64 v24; // [rsp+F8h] [rbp-8h]
  __int64 v25; // [rsp+100h] [rbp+0h]
  __int64 v26; // [rsp+108h] [rbp+8h]
  __int64 v27; // [rsp+110h] [rbp+10h]
  __int64 v28; // [rsp+118h] [rbp+18h]
  PDEVICE_OBJECT DeviceObject; // [rsp+150h] [rbp+50h] BYREF
  PFILE_OBJECT FileObject; // [rsp+158h] [rbp+58h] BYREF

  v0 = 0;
  DeviceObject = 0LL;
  FileObject = 0LL;
  v1 = 0;
  v2 = 0;
  DestinationString = 0LL;
  ObjectName = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  memset_0(&Dst, 0, 0x80uLL);
  DeviceObjectPointer = 0;
  if ( byte_1401687EA )
  {
    DeviceObjectPointer = -1073741637;
    v6 = -1073741637;
    goto LABEL_24;
  }
  if ( !qword_140168828 )
  {
    v2 = 1;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\StorportExt");
    DeviceObjectPointer = ZwLoadDriver(&DestinationString);
    if ( DeviceObjectPointer >= 0 )
    {
      v1 = 1;
      RtlInitUnicodeString(&ObjectName, L"\\Device\\StorportExt");
      DeviceObjectPointer = IoGetDeviceObjectPointer(&ObjectName, 3u, &FileObject, &DeviceObject);
      if ( DeviceObjectPointer >= 0 )
      {
        Dst = 0x53544F5250455854LL;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v7 = IoBuildDeviceIoControlRequest(0xE68003u, DeviceObject, &Dst, 0x80u, 0LL, 0, 1u, &Event, &IoStatusBlock);
        if ( !v7 )
        {
          DeviceObjectPointer = -1073741670;
LABEL_8:
          v6 = DeviceObjectPointer;
          goto LABEL_18;
        }
        DeviceObjectPointer = IofCallDriver(DeviceObject, v7);
        if ( DeviceObjectPointer == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          DeviceObjectPointer = IoStatusBlock.Status;
        }
        if ( DeviceObjectPointer >= 0 )
        {
          if ( v14 >= 0x80 )
          {
            _InterlockedCompareExchange64(&qword_140168828, (signed __int64)DeviceObject, 0LL);
            v3 = DeviceObject;
            if ( (PDEVICE_OBJECT)qword_140168828 == DeviceObject )
            {
              v1 = 0;
              Object = FileObject;
              DeviceObject = 0LL;
              FileObject = 0LL;
              dword_1401687EC = 0;
              qword_140168850 = v15;
              qword_1401687E0 = v16;
              qword_140168858 = v17;
              qword_1401687F8 = v18;
              qword_140168878 = v19;
              qword_140168868 = v20;
              qword_140168810 = v21;
              qword_140168870 = v22;
              qword_1401687D8 = v23;
              qword_140168838 = v24;
              qword_1401687C8 = v25;
              qword_140168898 = v26;
              qword_140168780 = v27;
              qword_1401687B8 = v28;
              byte_140168830 = 1;
            }
            DeviceObjectPointer = 0;
            v6 = 0;
            goto LABEL_18;
          }
          DeviceObjectPointer = -1073741823;
          goto LABEL_8;
        }
      }
    }
  }
  v6 = DeviceObjectPointer;
  if ( v2 )
  {
LABEL_18:
    if ( (byte_1401694F6 & 0x20) != 0 )
      sub_14006ECD0(v3, &unk_14014A600, v4, (unsigned int)DeviceObjectPointer);
  }
  if ( FileObject )
    ObfDereferenceObject(FileObject);
  if ( v1 )
    ZwUnloadDriver(&DestinationString);
LABEL_24:
  if ( DeviceObjectPointer != -1073741554 )
    return v6;
  return v0;
}

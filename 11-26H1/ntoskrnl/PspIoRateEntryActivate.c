/*
 * XREFs of PspIoRateEntryActivate @ 0x140ABECE0
 * Callers:
 *     PspSetJobIoRateControl @ 0x1407FEF84 (PspSetJobIoRateControl.c)
 *     PspSetJobIoRateControlForVolume @ 0x140B5D6BC (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     IoStopDiskIoAttributionForContext @ 0x14045C6A0 (IoStopDiskIoAttributionForContext.c)
 *     IoStartDiskIoAttributionForContext @ 0x14048EA44 (IoStartDiskIoAttributionForContext.c)
 *     IoStartIoRateControl @ 0x140495058 (IoStartIoRateControl.c)
 *     IoStopIoRateControl @ 0x140495160 (IoStopIoRateControl.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateFile @ 0x140728A60 (ZwCreateFile.c)
 *     IoDiskIoAttributionAllocate @ 0x140ABF1E4 (IoDiskIoAttributionAllocate.c)
 *     PspIoRateEntryDeactivate @ 0x140B3CA34 (PspIoRateEntryDeactivate.c)
 */

__int64 __fastcall PspIoRateEntryActivate(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  int v4; // eax
  _RTL_BALANCED_NODE *v5; // rbx
  const WCHAR *v10; // rdx
  __int64 v11; // r8
  int started; // edi
  __int64 v13; // rcx
  _RTL_BALANCED_NODE *v15; // rax
  __int64 v16; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-1h] BYREF
  __int64 v20; // [rsp+100h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = 0;
  v5 = 0LL;
  v16 = 0LL;
  v20 = 0LL;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( a4 )
    *a4 = 0;
  v10 = *(const WCHAR **)(a3 + 24);
  if ( v10 )
  {
    RtlInitUnicodeString(&DestinationString, v10);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    started = ZwCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
    if ( started < 0 )
      goto LABEL_11;
    v15 = (_RTL_BALANCED_NODE *)IoDiskIoAttributionAllocate(a2, *(_QWORD *)(a2 + 1584));
    v5 = v15;
    if ( !v15 )
    {
      started = -1073741670;
      goto LABEL_11;
    }
    IoStartDiskIoAttributionForContext(v15);
    v4 = (int)FileHandle;
    v11 = (__int64)v5;
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 1584);
  }
  started = IoStartIoRateControl(a3, v4, v11, (__int64)&v20, (__int64)&v16);
  if ( started < 0 )
  {
    if ( v5 )
    {
      IoStopDiskIoAttributionForContext(v5);
      IoDiskIoAttributionDereference((__int64)v5);
    }
    v13 = v20;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      PspIoRateEntryDeactivate(a1);
      *a4 = 1;
    }
    v13 = 0LL;
    *(_QWORD *)(a1 + 40) = v20;
    *(_QWORD *)(a1 + 24) = v16;
    *(_QWORD *)(a1 + 48) = v5;
    started = 0;
    _InterlockedExchange64((volatile __int64 *)(a1 + 32), 0LL);
  }
  if ( v13 )
    IoStopIoRateControl(v13);
LABEL_11:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)started;
}

/*
 * XREFs of IopCreateArcName @ 0x140B1EBE8
 * Callers:
 *     IoCreateArcName @ 0x140B1EBD0 (IoCreateArcName.c)
 *     IopCreateArcNamesDisk @ 0x140CC2C1C (IopCreateArcNamesDisk.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026A6C0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404AD760 (IopBuildAsynchronousFsdRequest.c)
 *     RtlStringCchPrintfA @ 0x140509FCC (RtlStringCchPrintfA.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1405CCE68 (IopCreateUnicodeFromAnsiBuffer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     IopVerifyDiskSignature @ 0x14079880C (IopVerifyDiskSignature.c)
 *     VhdVerifyBootDisk @ 0x1408AC46C (VhdVerifyBootDisk.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     IoCreateSymbolicLink @ 0x140AB6690 (IoCreateSymbolicLink.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCreateArcName(PDEVICE_OBJECT DeviceObject, int a2)
{
  _DWORD *v3; // r12
  int v4; // r15d
  _DWORD *v5; // rsi
  PDEVICE_OBJECT Teb; // rax
  ULONG OutputBufferLength; // edi
  IRP *v8; // rbx
  NTSTATUS Status; // ebx
  IRP *v11; // rbx
  int v12; // eax
  bool v13; // zf
  IRP *v14; // rbx
  _DWORD *Pool2; // rax
  __int64 v16; // rdx
  IRP *v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  char v20; // bl
  void **v21; // rdi
  const wchar_t *v22; // r8
  const char *v23; // r15
  unsigned __int8 *v24; // rcx
  __int64 v25; // r8
  int v26; // edx
  int v27; // eax
  int v28; // edi
  unsigned int v29; // r14d
  PVOID OutputBuffer; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Object; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h] BYREF
  int v39; // [rsp+C0h] [rbp-40h]
  char v40[64]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[64]; // [rsp+110h] [rbp+10h] BYREF

  v38 = 0LL;
  v39 = 0;
  v3 = 0LL;
  v37 = 0LL;
  v4 = 0;
  v5 = 0LL;
  Teb = (PDEVICE_OBJECT)PspSiloMonitorLock.Teb;
  OutputBufferLength = 4096;
  SymbolicLinkName = 0LL;
  DestinationString = 0LL;
  v36 = 0LL;
  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  while ( Teb != (PDEVICE_OBJECT)&PspSiloMonitorLock.Teb )
  {
    if ( Teb->DeviceExtension == DeviceObject )
      return 0LL;
    Teb = *(PDEVICE_OBJECT *)&Teb->Type;
  }
  if ( a2 == -1 )
  {
    v8 = IoBuildDeviceIoControlRequest(0x2D1080u, DeviceObject, 0LL, 0, &v38, 0xCu, 0, &Object, &IoStatusBlock);
    if ( !v8 )
      return (unsigned int)-1073741670;
    KeInitializeEvent(&Object, NotificationEvent, 0);
    Status = IofCallDriver(DeviceObject, v8);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
      return (unsigned int)Status;
  }
  else
  {
    HIDWORD(v38) = a2;
  }
  v11 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, &v36, 0x18u, 0, &Object, &IoStatusBlock);
  if ( !v11 )
    return (unsigned int)-1073741670;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  Status = IofCallDriver(DeviceObject, v11);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status < 0 )
    return (unsigned int)Status;
  v12 = HIDWORD(v37);
  if ( HIDWORD(v37) < 0x200 )
    v12 = 512;
  v13 = DeviceObject->DeviceType == 2;
  HIDWORD(v37) = v12;
  if ( v13 )
  {
    v34 = 0x8000LL;
    Pool2 = (_DWORD *)ExAllocatePool2(0x48uLL);
    v3 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v17 = (IRP *)IopBuildAsynchronousFsdRequest(
                   3u,
                   (__int64)DeviceObject,
                   Pool2,
                   HIDWORD(v37),
                   &v34,
                   (__int64)&IoStatusBlock);
    if ( v17 )
    {
      v17->UserEvent = &Object;
      IopQueueThreadIrp((__int64)v17, v16);
      v17->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
      KeInitializeEvent(&Object, NotificationEvent, 0);
      Status = IofCallDriver(DeviceObject, v17);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        v18 = 0LL;
        v19 = (unsigned __int64)HIDWORD(v37) >> 2;
        if ( v19 )
        {
          do
            v4 += v3[v18++];
          while ( v18 < v19 );
        }
        v4 = -v4;
        goto LABEL_37;
      }
    }
    else
    {
      Status = -1073741670;
    }
LABEL_43:
    ExFreePoolWithTag(v3, 0);
    return (unsigned int)Status;
  }
  while ( 1 )
  {
    v5 = (_DWORD *)ExAllocatePool2(0x40uLL);
    if ( !v5 )
      return (unsigned int)-1073741670;
    v14 = IoBuildDeviceIoControlRequest(
            0x70050u,
            DeviceObject,
            0LL,
            0,
            v5,
            OutputBufferLength,
            0,
            &Object,
            &IoStatusBlock);
    if ( !v14 )
    {
      Status = -1073741670;
      goto LABEL_60;
    }
    KeResetEvent(&Object);
    Status = IofCallDriver(DeviceObject, v14);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status != -1073741789 )
      break;
    ExFreePoolWithTag(v5, 0);
    OutputBufferLength *= 2;
  }
  if ( Status < 0 )
  {
LABEL_60:
    ExFreePoolWithTag(v5, 0);
    goto LABEL_42;
  }
  if ( *v5 == 2 || !*v5 && !v5[1] && !v5[2] )
  {
    v4 = v5[3];
LABEL_37:
    v20 = 1;
    goto LABEL_38;
  }
  v20 = 0;
LABEL_38:
  v21 = (void **)PspSiloMonitorLock.Teb;
  while ( 2 )
  {
    if ( v21 == &PspSiloMonitorLock.Teb )
    {
      Status = -1073741637;
      goto LABEL_41;
    }
    if ( *((_BYTE *)v21 + 72) || v21[8] )
      goto LABEL_45;
    if ( v20 )
    {
      if ( !*((_BYTE *)v21 + 36) && *((_DWORD *)v21 + 8) == v4 )
        break;
      goto LABEL_45;
    }
    if ( !IopVerifyDiskSignature((__int64)v5, (__int64)v21, &v34)
      || v21[7] && !VhdVerifyBootDisk(DeviceObject)
      || !*v5 && *((_DWORD *)v21 + 8) != v5[3] )
    {
LABEL_45:
      v21 = (void **)*v21;
      continue;
    }
    break;
  }
  v21[8] = DeviceObject;
  v22 = L"\\Device\\CdRom%d";
  if ( DeviceObject->DeviceType != 2 )
    v22 = L"\\Device\\Harddisk%d\\Partition0";
  RtlStringCchPrintfW(pszDest, 0x40uLL, v22, HIDWORD(v38));
  RtlInitUnicodeString(&DestinationString, pszDest);
  v23 = (const char *)v21[3];
  RtlStringCchPrintfA(v40, 0x40uLL, "\\ArcName\\%s", v23);
  Status = IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v40);
  if ( Status >= 0 )
  {
    IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
    RtlFreeAnsiString(&SymbolicLinkName);
    if ( DeviceObject->DeviceType == 2 )
    {
      if ( (unsigned int)InitializationPhase < 2 )
      {
        v24 = (unsigned __int8 *)v21[3];
        v25 = *(_QWORD *)(KeLoaderBlock_0 + 184) - (_QWORD)v24;
        do
        {
          v26 = v24[v25];
          v27 = *v24 - v26;
          if ( v27 )
            break;
          ++v24;
        }
        while ( v26 );
        if ( !v27 )
          DeviceObject->Flags |= 0x100u;
      }
    }
    else if ( v5[1] )
    {
      Status = 0;
      v28 = 1;
      do
      {
        LODWORD(OutputBuffer) = v28;
        v29 = v28;
        RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\Device\\Harddisk%d\\Partition%d", HIDWORD(v38), OutputBuffer);
        RtlInitUnicodeString(&DestinationString, pszDest);
        RtlStringCchPrintfA(v40, 0x40uLL, "\\ArcName\\%spartition(%d)", v23, v28);
        if ( IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v40) >= 0 )
        {
          IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
          RtlFreeAnsiString(&SymbolicLinkName);
        }
        ++v28;
      }
      while ( v29 < v5[1] );
    }
  }
LABEL_41:
  if ( v5 )
    goto LABEL_60;
LABEL_42:
  if ( v3 )
    goto LABEL_43;
  return (unsigned int)Status;
}

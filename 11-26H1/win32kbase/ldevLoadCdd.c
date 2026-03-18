/*
 * XREFs of ldevLoadCdd @ 0x14000CC38
 * Callers:
 *     ldevLoadImage @ 0x14000CAA0 (ldevLoadImage.c)
 * Callees:
 *     ldevTryReferenceLoadedDisplayDriver @ 0x14000C83C (ldevTryReferenceLoadedDisplayDriver.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14000C8F4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDere.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??$invoke@P6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@Z @ 0x14016C27C (--$invoke@P6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@Z.c)
 */

__int64 __fastcall ldevLoadCdd(__int64 *a1, _DWORD *a2, int a3)
{
  __int64 v6; // rax
  char v8; // di
  PFILE_OBJECT v9; // rax
  int v10; // esi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v12; // rbx
  struct _DEVICE_OBJECT *v13; // rdi
  IRP *v14; // rax
  struct _UNICODE_STRING *v15; // rdi
  _QWORD *v16; // rbx
  WCHAR *v17; // rax
  WCHAR *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  PFILE_OBJECT v22; // rcx
  NTSTATUS v23; // eax
  union _LARGE_INTEGER Interval[2]; // [rsp+50h] [rbp-49h] BYREF
  __int64 OutputBuffer; // [rsp+60h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-31h] BYREF
  struct _UNICODE_STRING v27; // [rsp+78h] [rbp-21h] BYREF
  PFILE_OBJECT v28; // [rsp+88h] [rbp-11h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-9h] BYREF
  struct _UNICODE_STRING DriverServiceName; // [rsp+A8h] [rbp+Fh] BYREF
  struct _UNICODE_STRING ObjectName; // [rsp+B8h] [rbp+1Fh] BYREF
  PFILE_OBJECT FileObject; // [rsp+108h] [rbp+6Fh] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+118h] [rbp+7Fh] BYREF

  WdLogSingleEntry0(4LL);
  WdLogGlobalForLineNumber = 844;
  *a2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"cdd");
  DriverServiceName = 0LL;
  RtlInitUnicodeString(&DriverServiceName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\cdd");
  v6 = ldevTryReferenceLoadedDisplayDriver(&DestinationString, 0, a3);
  if ( v6 )
  {
    *a2 = 1;
    *a1 = v6;
    return 0LL;
  }
  if ( gbCddLoadedPermanently )
  {
    v8 = 1;
  }
  else
  {
    v23 = ZwLoadDriver(&DriverServiceName);
    LODWORD(v12) = v23;
    if ( v23 == -1073741554 )
    {
      v8 = 0;
    }
    else
    {
      if ( v23 < 0 )
      {
        WdLogSingleEntry1(2LL, v23);
        WdLogGlobalForLineNumber = 882;
        return (unsigned int)v12;
      }
      v8 = 1;
    }
    gbCddLoadedPermanently = 1;
  }
  ObjectName = 0LL;
  RtlInitUnicodeString(&ObjectName, L"\\Device\\cdd");
  v9 = 0LL;
  DeviceObject = 0LL;
  FileObject = 0LL;
  v10 = 10;
  while ( 1 )
  {
    if ( v9 )
    {
      v28 = v9;
      Interval[0].QuadPart = (LONGLONG)ObfDereferenceObject;
      wistd::invoke<__int64 (*)(void *),_FILE_OBJECT * &>(Interval, &v28);
    }
    FileObject = 0LL;
    DeviceObjectPointer = IoGetDeviceObjectPointer(&ObjectName, 0xC0000000, &FileObject, &DeviceObject);
    v12 = DeviceObjectPointer;
    if ( DeviceObjectPointer >= 0 )
      break;
    if ( v8 || (Interval[0].QuadPart = -50000LL, KeDelayExecutionThread(0, 0, Interval), --v10, v10 <= 0) )
    {
      WdLogSingleEntry1(2LL, v12);
      WdLogGlobalForLineNumber = 917;
LABEL_13:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>((void **)&FileObject);
      return (unsigned int)v12;
    }
    v9 = FileObject;
  }
  v13 = DeviceObject;
  OutputBuffer = 0LL;
  LODWORD(v12) = -1073741822;
  *(_OWORD *)&Interval[0].LowPart = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( !DeviceObject )
  {
    LODWORD(v12) = -1073741816;
LABEL_36:
    WdLogSingleEntry1(2LL, (int)v12);
    WdLogGlobalForLineNumber = 923;
    goto LABEL_13;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v14 = IoBuildDeviceIoControlRequest(0x232007u, v13, 0LL, 0, &OutputBuffer, 8u, 1u, &Event, (PIO_STATUS_BLOCK)Interval);
  if ( v14 )
  {
    LODWORD(v12) = IofCallDriver(v13, v14);
    if ( (_DWORD)v12 == 259 )
    {
      while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
        ;
      LODWORD(v12) = Interval[0].LowPart;
    }
  }
  if ( (int)v12 < 0 )
    goto LABEL_36;
  v15 = (struct _UNICODE_STRING *)PALLOCMEM(48LL, 1986292807LL);
  v16 = (_QWORD *)PALLOCMEM(912LL, 1986292807LL);
  v17 = (WCHAR *)PALLOCMEM(DestinationString.MaximumLength, 1986292807LL);
  v18 = v17;
  if ( v15 && v16 && v17 )
  {
    *(_QWORD *)&v27.Length = 0LL;
    v27.Buffer = v17;
    v27.MaximumLength = DestinationString.MaximumLength;
    RtlCopyUnicodeString(&v27, &DestinationString);
    v16[113] = v16 + 9;
    *((_DWORD *)v16 + 17) = 0;
    *v15 = v27;
    *(_QWORD *)&v15[2].Length = OutputBuffer;
    v16[2] = v15;
    *((_DWORD *)v16 + 9) = 1;
    *((_DWORD *)v16 + 8) = 1;
    *((_DWORD *)v16 + 16) = -1;
    v19 = (4 * a3) ^ (*((_DWORD *)v16 + 10) ^ (4 * a3)) & 0xFFFFFFFB | 2;
    *((_DWORD *)v16 + 10) = v19;
    v20 = *(_QWORD *)(W32GetSessionState(v19) + 88);
    v21 = *(_QWORD *)(v20 + 1816);
    if ( v21 )
      *(_QWORD *)(v21 + 8) = v16;
    *v16 = *(_QWORD *)(v20 + 1816);
    v16[1] = 0LL;
    *(_QWORD *)(v20 + 1816) = v16;
    v22 = FileObject;
    *a1 = (__int64)v16;
    if ( v22 )
      ObfDereferenceObject(v22);
    return 0LL;
  }
  WdLogSingleEntry1(2LL, -1073741801LL);
  WdLogGlobalForLineNumber = 931;
  if ( v18 )
    GreDeleteFastMutex(v18);
  if ( v16 )
    GreDeleteFastMutex(v16);
  if ( v15 )
    GreDeleteFastMutex(v15);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>((void **)&FileObject);
  return 3221225495LL;
}

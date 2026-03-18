/*
 * XREFs of ldevLoadCdd @ 0x140102280
 * Callers:
 *     ldevLoadImage @ 0x1401020F0 (ldevLoadImage.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140049A60 (--1-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDereferenceObject@@Y.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x14004E440 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ldevTryReferenceLoadedDisplayDriver @ 0x14012B09C (ldevTryReferenceLoadedDisplayDriver.c)
 *     ??$invoke@P6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@Z @ 0x14013654C (--$invoke@P6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@Z.c)
 */

__int64 __fastcall ldevLoadCdd(__int64 *a1, _DWORD *a2, int a3)
{
  __int64 v6; // rax
  char v8; // di
  NTSTATUS v9; // eax
  __int64 v10; // rbx
  PFILE_OBJECT v11; // rax
  int v12; // esi
  NTSTATUS DeviceObjectPointer; // eax
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rbx
  WCHAR *v17; // rax
  char *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-39h] BYREF
  __int64 v23; // [rsp+58h] [rbp-31h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  struct _UNICODE_STRING v25; // [rsp+70h] [rbp-19h] BYREF
  PFILE_OBJECT v26; // [rsp+80h] [rbp-9h] BYREF
  LONG_PTR (__stdcall *v27)(PVOID); // [rsp+88h] [rbp-1h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+90h] [rbp+7h] BYREF
  struct _UNICODE_STRING DriverServiceName; // [rsp+98h] [rbp+Fh] BYREF
  struct _UNICODE_STRING ObjectName; // [rsp+A8h] [rbp+1Fh] BYREF
  unsigned int v31; // [rsp+F8h] [rbp+6Fh] BYREF
  PFILE_OBJECT FileObject; // [rsp+108h] [rbp+7Fh] BYREF

  WdLogSingleEntry0(4LL);
  *a2 = 0;
  WdLogGlobalForLineNumber = 844;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"cdd");
  DriverServiceName = 0LL;
  RtlInitUnicodeString(&DriverServiceName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\cdd");
  v6 = ldevTryReferenceLoadedDisplayDriver(&DestinationString);
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
    v9 = ZwLoadDriver(&DriverServiceName);
    LODWORD(v10) = v9;
    if ( v9 == -1073741554 )
    {
      v8 = 0;
    }
    else
    {
      if ( v9 < 0 )
      {
        WdLogSingleEntry1(2LL, v9);
        WdLogGlobalForLineNumber = 882;
        return (unsigned int)v10;
      }
      v8 = 1;
    }
    gbCddLoadedPermanently = 1;
  }
  ObjectName = 0LL;
  RtlInitUnicodeString(&ObjectName, L"\\Device\\cdd");
  DeviceObject = 0LL;
  v11 = 0LL;
  FileObject = 0LL;
  v12 = 10;
  while ( 1 )
  {
    if ( v11 )
    {
      v26 = v11;
      v27 = ObfDereferenceObject;
      wistd::invoke<__int64 (*)(void *),_FILE_OBJECT * &>(&v27, &v26);
    }
    FileObject = 0LL;
    DeviceObjectPointer = IoGetDeviceObjectPointer(&ObjectName, 0xC0000000, &FileObject, &DeviceObject);
    v10 = DeviceObjectPointer;
    if ( DeviceObjectPointer >= 0 )
      break;
    if ( v8 )
      goto LABEL_21;
    Interval.QuadPart = -50000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( --v12 <= 0 )
      break;
    v11 = FileObject;
  }
  if ( (int)v10 < 0 )
  {
LABEL_21:
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 917;
LABEL_24:
    wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>((void **)&FileObject);
    return (unsigned int)v10;
  }
  v23 = 0LL;
  v31 = 0;
  v14 = GreDeviceIoControlImpl(DeviceObject, 0x232007u, 0LL, 0, &v23, 8u, &v31, 1u, 0);
  LODWORD(v10) = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 923;
    goto LABEL_24;
  }
  v15 = PALLOCMEM(48LL, 1986292807LL);
  v16 = PALLOCMEM(912LL, 1986292807LL);
  v17 = (WCHAR *)PALLOCMEM(DestinationString.MaximumLength, 1986292807LL);
  v18 = (char *)v17;
  if ( v15 && v16 && v17 )
  {
    *(_QWORD *)&v25.Length = 0LL;
    v25.Buffer = v17;
    v25.MaximumLength = DestinationString.MaximumLength;
    RtlCopyUnicodeString(&v25, &DestinationString);
    *(_QWORD *)(v16 + 904) = v16 + 72;
    *(_DWORD *)(v16 + 68) = 0;
    *(struct _UNICODE_STRING *)v15 = v25;
    *(_QWORD *)(v15 + 32) = v23;
    *(_QWORD *)(v16 + 16) = v15;
    *(_DWORD *)(v16 + 36) = 1;
    *(_DWORD *)(v16 + 32) = 1;
    *(_DWORD *)(v16 + 64) = -1;
    v19 = (4 * a3) ^ (*(_DWORD *)(v16 + 40) ^ (4 * a3)) & 0xFFFFFFFB | 2;
    *(_DWORD *)(v16 + 40) = v19;
    v20 = *(_QWORD *)(W32GetSessionState(v19) + 88);
    v21 = *(_QWORD *)(v20 + 1728);
    if ( v21 )
      *(_QWORD *)(v21 + 8) = v16;
    *(_QWORD *)v16 = *(_QWORD *)(v20 + 1728);
    *(_QWORD *)(v16 + 8) = 0LL;
    *(_QWORD *)(v20 + 1728) = v16;
    *a1 = v16;
    wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>((void **)&FileObject);
    return 0LL;
  }
  WdLogSingleEntry1(2LL, -1073741801LL);
  WdLogGlobalForLineNumber = 931;
  if ( v18 )
    GreDeleteFastMutex(v18);
  if ( v16 )
    GreDeleteFastMutex((char *)v16);
  if ( v15 )
    GreDeleteFastMutex((char *)v15);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>((void **)&FileObject);
  return 3221225495LL;
}

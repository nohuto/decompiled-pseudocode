/*
 * XREFs of DpiGdoCreateGdiObjects @ 0x14041AD20
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x14042F7C0 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     WdmlibInit @ 0x140235EA4 (WdmlibInit.c)
 *     DpiGdoSetupGdiParameters @ 0x14041B148 (DpiGdoSetupGdiParameters.c)
 *     DpiAppendNumberToString @ 0x14041B7B4 (DpiAppendNumberToString.c)
 */

__int64 __fastcall DpiGdoCreateGdiObjects(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned int v5; // r15d
  NTSTATUS appended; // ebx
  __int64 v7; // r14
  const WCHAR *v8; // rcx
  char v9; // r12
  char v10; // r13
  bool v11; // zf
  ULONG v12; // edx
  __int64 v13; // rbx
  PVOID DeviceExtension; // rdi
  _QWORD *v15; // rdx
  PDEVICE_OBJECT v16; // rax
  _QWORD *v17; // rcx
  PVOID *v18; // rax
  int v20; // [rsp+30h] [rbp-41h]
  struct _UNICODE_STRING DeviceName; // [rsp+60h] [rbp-11h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+70h] [rbp-1h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a3;
  v5 = a2;
  appended = 0;
  KeWaitForSingleObject((PVOID)(v3 + 3720), Executive, 0, 0, 0LL);
  v7 = 0LL;
  while ( (unsigned int)v7 < v5 )
  {
    DeviceObject = 0LL;
    v8 = L"\\Device\\RemoteVideo";
    v9 = 0;
    v10 = 0;
    v11 = *(_BYTE *)(v3 + 2847) == 0;
    DeviceName = 0LL;
    if ( v11 )
      v8 = L"\\Device\\Video";
    v12 = *(_DWORD *)(v4 + 4 * v7);
    SymbolicLinkName = 0LL;
    appended = DpiAppendNumberToString(v8, v12, &DeviceName);
    if ( appended < 0 )
      goto LABEL_30;
    v13 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 32LL);
    if ( !WdmlibInitialized )
      WdmlibInit();
    LOBYTE(v20) = 0;
    appended = ((__int64 (__fastcall *)(__int64, __int64, struct _UNICODE_STRING *, __int64, int, int, const UNICODE_STRING *, GUID *, PDEVICE_OBJECT *))PfnIoCreateDeviceSecure)(
                 v13,
                 200LL,
                 &DeviceName,
                 35LL,
                 256,
                 v20,
                 &SDDL_DEVOBJ_KERNEL_ONLY,
                 &GUID_SD_GDO,
                 &DeviceObject);
    if ( appended < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 168;
      goto LABEL_30;
    }
    if ( !*(_BYTE *)(v3 + 2847) )
    {
      appended = DpiAppendNumberToString(L"\\DosDevices\\DISPLAY", *(_DWORD *)(v4 + 4 * v7) + 1, &SymbolicLinkName);
      if ( appended < 0 )
        goto LABEL_30;
      appended = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
      if ( appended < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 201;
LABEL_30:
        if ( DeviceObject )
        {
          IoDeleteDevice(DeviceObject);
          DeviceObject = 0LL;
        }
        goto LABEL_32;
      }
      v9 = 1;
    }
    DeviceExtension = DeviceObject->DeviceExtension;
    *((_DWORD *)DeviceExtension + 4) = 1953656900;
    *((_DWORD *)DeviceExtension + 5) = 6;
    *((_QWORD *)DeviceExtension + 3) = DeviceObject;
    *((_QWORD *)DeviceExtension + 4) = a1;
    *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v3 + 40);
    *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v3 + 48);
    IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
    *((_QWORD *)DeviceExtension + 13) = DpiGdoDispatchCreate;
    *((_QWORD *)DeviceExtension + 14) = DpiGdoDispatchInternalIoctl;
    *((_QWORD *)DeviceExtension + 15) = DpiGdoDispatchIoctl;
    *((_DWORD *)DeviceExtension + 38) = *(_DWORD *)(a3 + 4 * v7);
    *((_DWORD *)DeviceExtension + 39) = v7;
    if ( (unsigned int)v7 >= 0x10 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 259;
    }
    appended = IoRegisterDeviceInterface(
                 *(PDEVICE_OBJECT *)(v3 + 152),
                 &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
                 0LL,
                 (PUNICODE_STRING)DeviceExtension + 10);
    if ( appended < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 273;
LABEL_24:
      if ( v9 == 1 )
        IoDeleteSymbolicLink(&SymbolicLinkName);
      if ( v10 == 1 )
      {
        v17 = *(_QWORD **)DeviceExtension;
        if ( *(PVOID *)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
          || (v18 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v18 != DeviceExtension) )
        {
LABEL_34:
          __fastfail(3u);
        }
        *v18 = v17;
        v17[1] = v18;
        --*(_DWORD *)(v3 + 3776);
      }
      goto LABEL_30;
    }
    appended = DpiGdoSetupGdiParameters(DeviceObject, &DeviceName, (unsigned int)v7);
    if ( appended < 0 )
      goto LABEL_23;
    *((_QWORD *)DeviceExtension + 22) = *(_QWORD *)(v3 + 4032);
    *((_DWORD *)DeviceExtension + 48) = -1;
    v15 = *(_QWORD **)(v3 + 3712);
    if ( *v15 != v3 + 3704 )
      goto LABEL_34;
    *((_QWORD *)DeviceExtension + 1) = v15;
    v10 = 1;
    *(_QWORD *)DeviceExtension = v3 + 3704;
    *v15 = DeviceExtension;
    *(_QWORD *)(v3 + 3712) = DeviceExtension;
    v16 = DeviceObject;
    ++*(_DWORD *)(v3 + 3776);
    v16->Flags |= 4u;
    DeviceObject->Flags &= ~0x80u;
    appended = IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 10, 1u);
    if ( appended < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 333;
LABEL_23:
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 10);
      goto LABEL_24;
    }
LABEL_32:
    RtlFreeUnicodeString(&DeviceName);
    RtlFreeUnicodeString(&SymbolicLinkName);
    if ( appended < 0 )
      break;
    v4 = a3;
    v7 = (unsigned int)(v7 + 1);
    v5 = a2;
  }
  KeReleaseMutex((PRKMUTEX)(v3 + 3720), 0);
  return (unsigned int)appended;
}

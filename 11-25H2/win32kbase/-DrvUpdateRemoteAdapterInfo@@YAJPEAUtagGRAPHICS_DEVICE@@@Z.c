/*
 * XREFs of ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140160728
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1401CFD88 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x14004E440 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x14006C22C (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A87F8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvUpdateRemoteAdapterInfo(struct tagGRAPHICS_DEVICE *a1)
{
  int v1; // edi
  int v2; // r14d
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 DxgkWin32kInterface; // rax
  unsigned int i; // esi
  PVOID v8; // rcx
  void *v9; // rcx
  PVOID P; // [rsp+50h] [rbp-89h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-79h] BYREF
  __int128 v14; // [rsp+70h] [rbp-69h] BYREF
  __int128 v15; // [rsp+80h] [rbp-59h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+90h] [rbp-49h] BYREF
  __int64 v17; // [rsp+C8h] [rbp-11h]
  int v18; // [rsp+D0h] [rbp-9h]
  __int64 v19; // [rsp+D8h] [rbp-1h]
  __int128 v20; // [rsp+E0h] [rbp+7h]
  __int128 v21; // [rsp+F0h] [rbp+17h]
  unsigned int v22; // [rsp+148h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+150h] [rbp+77h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+158h] [rbp+7Fh] BYREF

  v14 = 0LL;
  P = 0LL;
  v1 = 0;
  v15 = 0LL;
  DeviceObject = 0LL;
  v2 = 0;
  FileObject = 0LL;
  DestinationString = 0LL;
  v22 = 0;
  v5 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( *(_DWORD *)(v5 + 2920) )
  {
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.DefaultType = 0x4000000;
    QueryTable.EntryContext = &v22;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 4;
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v1 = RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    if ( v1 < 0 )
    {
LABEL_21:
      *(_OWORD *)(v5 + 2944) = 0LL;
      *(_OWORD *)(v5 + 2960) = 0LL;
      v9 = *(void **)(v5 + 2936);
      if ( v9 )
      {
        if ( *(_DWORD *)(v5 + 2920) )
        {
          ObfDereferenceObject(v9);
        }
        else
        {
          v23 = 0LL;
          *(_QWORD *)(v5 + 2924) = 0LL;
        }
        *(_QWORD *)(v5 + 2936) = 0LL;
      }
    }
    else
    {
      for ( i = 0; ; ++i )
      {
        if ( i > v22 )
        {
          v1 = -1073741772;
          goto LABEL_21;
        }
        v1 = RtlStringCchPrintfW((unsigned __int16 *)(v5 + 2944), 32LL, L"\\Device\\Video%d", i);
        if ( v1 < 0 )
          goto LABEL_21;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)(v5 + 2944));
        if ( IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject) >= 0 )
        {
          v1 = GreDeviceIoControlImpl(DeviceObject, 0x232033u, 0LL, 0, &v14, 0x20u, (unsigned int *)&v23, 1u, 1);
          if ( v1 >= 0 && (_QWORD)v15 == *(_QWORD *)(v5 + 2924) )
          {
            if ( *(_DWORD *)(v5 + 2920) )
            {
              v1 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
              if ( v1 >= 0 )
              {
                v8 = P;
                *(_QWORD *)(v5 + 2936) = *((_QWORD *)P + 1);
                ExFreePoolWithTag(v8, 0);
              }
            }
            v2 = 1;
          }
          ObfDereferenceObject(FileObject);
          if ( v2 )
            break;
        }
      }
      if ( v1 < 0 )
        goto LABEL_21;
    }
  }
  else if ( !*(_QWORD *)(v5 + 2936) )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v4);
    if ( (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 656))() )
    {
      *(_QWORD *)(v5 + 2924) = *((_QWORD *)a1 + 36);
      *(_QWORD *)(v5 + 2936) = *((_QWORD *)a1 + 37);
    }
  }
  return (unsigned int)v1;
}

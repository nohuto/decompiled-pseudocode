/*
 * XREFs of ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401A5664
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x140029C20 (DrvUpdateGraphicsDeviceList.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1401F96EC (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x140027570 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400E2B44 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x14016D19C (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvUpdateRemoteAdapterInfo(struct tagGRAPHICS_DEVICE *a1)
{
  int v1; // edi
  int v2; // r14d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 DxgkWin32kInterface; // rax
  unsigned int i; // esi
  PVOID v9; // rcx
  void *v10; // rcx
  PVOID P; // [rsp+50h] [rbp-89h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-79h] BYREF
  __int128 v15; // [rsp+70h] [rbp-69h] BYREF
  __int128 v16; // [rsp+80h] [rbp-59h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+90h] [rbp-49h] BYREF
  __int64 v18; // [rsp+C8h] [rbp-11h]
  int v19; // [rsp+D0h] [rbp-9h]
  __int64 v20; // [rsp+D8h] [rbp-1h]
  __int128 v21; // [rsp+E0h] [rbp+7h]
  __int128 v22; // [rsp+F0h] [rbp+17h]
  unsigned int v23; // [rsp+148h] [rbp+6Fh] BYREF
  __int64 v24; // [rsp+150h] [rbp+77h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+158h] [rbp+7Fh] BYREF

  v15 = 0LL;
  P = 0LL;
  v1 = 0;
  v16 = 0LL;
  DeviceObject = 0LL;
  v2 = 0;
  FileObject = 0LL;
  DestinationString = 0LL;
  v23 = 0;
  v6 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( *(_DWORD *)(v6 + 3000) )
  {
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.DefaultType = 0x4000000;
    QueryTable.EntryContext = &v23;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 4;
    v18 = 0LL;
    v19 = 0;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v1 = RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    if ( v1 < 0 )
    {
LABEL_21:
      *(_OWORD *)(v6 + 3024) = 0LL;
      *(_OWORD *)(v6 + 3040) = 0LL;
      v10 = *(void **)(v6 + 3016);
      if ( v10 )
      {
        if ( *(_DWORD *)(v6 + 3000) )
        {
          ObfDereferenceObject(v10);
        }
        else
        {
          v24 = 0LL;
          *(_QWORD *)(v6 + 3004) = 0LL;
        }
        *(_QWORD *)(v6 + 3016) = 0LL;
      }
    }
    else
    {
      for ( i = 0; ; ++i )
      {
        if ( i > v23 )
        {
          v1 = -1073741772;
          goto LABEL_21;
        }
        v1 = RtlStringCchPrintfW((unsigned __int16 *)(v6 + 3024), 32LL, L"\\Device\\Video%d", i);
        if ( v1 < 0 )
          goto LABEL_21;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)(v6 + 3024));
        if ( IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject) >= 0 )
        {
          v1 = GreDeviceIoControlImpl(DeviceObject, 0x232033u, 0LL, 0, &v15, 0x20u, (unsigned int *)&v24, 1u, 1);
          if ( v1 >= 0 && (_QWORD)v16 == *(_QWORD *)(v6 + 3004) )
          {
            if ( *(_DWORD *)(v6 + 3000) )
            {
              v1 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
              if ( v1 >= 0 )
              {
                v9 = P;
                *(_QWORD *)(v6 + 3016) = *((_QWORD *)P + 1);
                ExFreePoolWithTag(v9, 0);
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
  else if ( !*(_QWORD *)(v6 + 3016) )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v5, v4);
    if ( (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 656))() )
    {
      *(_QWORD *)(v6 + 3004) = *((_QWORD *)a1 + 36);
      *(_QWORD *)(v6 + 3016) = *((_QWORD *)a1 + 37);
    }
  }
  return (unsigned int)v1;
}

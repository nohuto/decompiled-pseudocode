/*
 * XREFs of DpiPdoAddPdo @ 0x140442608
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x140443F48 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x14008592C (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiFdoAddPdoToPdoList @ 0x14023FAEC (DpiFdoAddPdoToPdoList.c)
 *     DpiFdoRemovePdoFromPdoList @ 0x140245E78 (DpiFdoRemovePdoFromPdoList.c)
 *     DpiFdoPendingCreatePdoCompletion @ 0x14024B800 (DpiFdoPendingCreatePdoCompletion.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x14025653C (DpiPdoGetDeviceIdFromDescriptor.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x14025BF60 (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DD30 (-MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEA.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1404085E8 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x140429A24 (DpiPdoGetDeviceDescriptor.c)
 *     WdmlibIoCreateDeviceSecure @ 0x140430D40 (WdmlibIoCreateDeviceSecure.c)
 *     DpiPdoRemovePdo @ 0x140444378 (DpiPdoRemovePdo.c)
 */

__int64 __fastcall DpiPdoAddPdo(
        __int64 a1,
        __int64 a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        char a4,
        char a5,
        BOOLEAN a6,
        struct _DXGK_CONNECTION_USB4_INFO *a7,
        unsigned __int8 *a8,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a9)
{
  __int64 v9; // r14
  unsigned int *DeviceExtension; // rdi
  char v13; // r13
  unsigned int *v14; // rdx
  unsigned int *v15; // rcx
  unsigned int *v16; // rax
  int DeviceDescriptor; // eax
  int DeviceIdFromDescriptor; // esi
  bool v19; // zf
  void *v20; // r12
  const void *v21; // rdx
  unsigned int v22; // eax
  SIZE_T v23; // rax
  __int64 v24; // r8
  __int64 v25; // rbx
  GUID *DeviceClassGuid; // rdx
  PDEVICE_OBJECT v27; // rax
  __int64 Pool2; // rax
  PIO_WORKITEM WorkItem; // rax
  unsigned int **v30; // rcx
  unsigned __int8 v31; // al
  _QWORD *v32; // rcx
  PVOID *v33; // rax
  struct _IO_WORKITEM *v34; // rcx
  void *v35; // rcx
  BOOLEAN Exclusive; // [rsp+28h] [rbp-48h]
  int DefaultSDDLString; // [rsp+30h] [rbp-40h]
  char v39; // [rsp+50h] [rbp-20h]
  char v40; // [rsp+51h] [rbp-1Fh]
  char v41; // [rsp+52h] [rbp-1Eh]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-18h] BYREF
  void *Source1[2]; // [rsp+60h] [rbp-10h] BYREF

  v9 = *(_QWORD *)(a1 + 64);
  DeviceExtension = 0LL;
  DeviceObject = 0LL;
  v40 = 0;
  v13 = 0;
  v41 = 0;
  v14 = *(unsigned int **)(v9 + 3784);
  v39 = 0;
  *(_OWORD *)Source1 = 0LL;
  v15 = *(unsigned int **)v14;
  v16 = v14;
  if ( *(unsigned int **)v14 == v14 )
    goto LABEL_4;
  while ( 1 )
  {
    DeviceExtension = v16;
    if ( v16[126] == *(_DWORD *)(a2 + 24) )
      break;
    v16 = v15;
    v15 = *(unsigned int **)v15;
    if ( v15 == v14 )
      goto LABEL_4;
  }
  DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)v16 + 3);
  v40 = 1;
  if ( a5 )
  {
LABEL_4:
    DeviceDescriptor = DpiPdoGetDeviceDescriptor(a1, a2, a3, a4, a5, a6, DefaultSDDLString, Source1);
    DeviceIdFromDescriptor = DeviceDescriptor;
    if ( DeviceDescriptor >= 0 )
    {
      if ( DeviceDescriptor == 259 )
      {
        v20 = Source1[1];
        goto LABEL_74;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL);
      v19 = *(_DWORD *)a2 == 1;
      WdLogGlobalForLineNumber = 235;
      if ( !v19 )
        goto LABEL_48;
    }
    v20 = Source1[1];
    if ( v40 != 1 )
    {
      v25 = a1;
LABEL_22:
      DeviceClassGuid = &GUID_DEVCLASS_MONITOR;
      if ( *(_DWORD *)a2 != 1 )
        DeviceClassGuid = &GUID_SD_PDO;
      DeviceIdFromDescriptor = WdmlibIoCreateDeviceSecure(
                                 *(PDRIVER_OBJECT *)(*(_QWORD *)(v9 + 40) + 32LL),
                                 0x408u,
                                 0LL,
                                 0x1Cu,
                                 0x180u,
                                 Exclusive,
                                 &SDDL_DEVOBJ_SYS_ALL_ADM_ALL,
                                 DeviceClassGuid,
                                 &DeviceObject);
      if ( DeviceIdFromDescriptor < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 371;
        goto LABEL_50;
      }
      v41 = 1;
      DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
      DeviceExtension[4] = 1953656900;
      DeviceExtension[5] = 5;
      v27 = DeviceObject;
      *((_QWORD *)DeviceExtension + 4) = v25;
      *((_QWORD *)DeviceExtension + 3) = v27;
      *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v9 + 40);
      *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v9 + 48);
      *((_BYTE *)DeviceExtension + 56) = 1;
      DeviceExtension[70] = 1;
      LODWORD(v27) = *(_DWORD *)(a2 + 68);
      DeviceExtension[71] = (unsigned int)v27;
      KeInitializeEvent((PRKEVENT)DeviceExtension + 41, NotificationEvent, (_DWORD)v27 != 1);
      KeInitializeEvent((PRKEVENT)DeviceExtension + 42, NotificationEvent, DeviceExtension[71] == 1);
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
      Pool2 = ExAllocatePool2(64LL, 112LL, 1953656900LL);
      *((_QWORD *)DeviceExtension + 21) = Pool2;
      if ( !Pool2 )
      {
        DeviceIdFromDescriptor = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 433;
        goto LABEL_50;
      }
      *(_DWORD *)(Pool2 + 104) = 1;
      DeviceIdFromDescriptor = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      if ( DeviceIdFromDescriptor < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 446;
        goto LABEL_50;
      }
      v39 = 1;
      WorkItem = IoAllocateWorkItem(DeviceObject);
      *((_QWORD *)DeviceExtension + 119) = WorkItem;
      if ( !WorkItem )
      {
        DeviceIdFromDescriptor = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 465;
        goto LABEL_50;
      }
      *((_QWORD *)DeviceExtension + 14) = &DpiPdoDispatchInternalIoctl;
      *((_QWORD *)DeviceExtension + 16) = DpiPdoDispatchPnp;
      *((_QWORD *)DeviceExtension + 17) = DpiPdoDispatchPower;
      *((_QWORD *)DeviceExtension + 15) = DpiPdoDispatchIoctl;
      *((_QWORD *)DeviceExtension + 36) = DpiPdoHandleStartDevice;
      *((_QWORD *)DeviceExtension + 40) = DpiPdoHandleStopDevice;
      *((_QWORD *)DeviceExtension + 45) = DpiPdoHandleQueryCapabilities;
      *((_QWORD *)DeviceExtension + 55) = DpiPdoHandleQueryId;
      *((_QWORD *)DeviceExtension + 43) = DpiPdoHandleQueryDeviceRelations;
      *((_QWORD *)DeviceExtension + 48) = DpiPdoHandleQueryDeviceText;
      *((_QWORD *)DeviceExtension + 57) = DpiPdoHandleQueryBusInformation;
      v13 = 1;
      *((_QWORD *)DeviceExtension + 117) = a2;
      DeviceExtension[124] = *(_DWORD *)a2;
      DeviceExtension[125] = *(_DWORD *)(a2 + 20);
      DeviceExtension[126] = *(_DWORD *)(a2 + 24);
      *((_WORD *)DeviceExtension + 254) = 1;
      *((_BYTE *)DeviceExtension + 511) = 0;
      if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
        DeviceExtension[244] = a3;
      DeviceExtension[245] = 0;
      KeWaitForSingleObject((PVOID)(v9 + 3544), Executive, 0, 0, 0LL);
      *(_QWORD *)(a2 + 48) = DeviceObject;
      KeReleaseMutex((PRKMUTEX)(v9 + 3544), 0);
      if ( (unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline() )
      {
        DpiFdoAddPdoToPdoList(v9, (__int64)DeviceExtension);
      }
      else
      {
        v30 = *(unsigned int ***)(v9 + 3792);
        if ( *v30 != (unsigned int *)(v9 + 3784) )
          goto LABEL_61;
        *(_QWORD *)DeviceExtension = v9 + 3784;
        *((_QWORD *)DeviceExtension + 1) = v30;
        *v30 = DeviceExtension;
        *(_QWORD *)(v9 + 3792) = DeviceExtension;
        ++*(_DWORD *)(v9 + 3800);
        if ( DeviceExtension[124] != 1 )
        {
LABEL_44:
          DeviceIdFromDescriptor = DpiPdoGetDeviceIdFromDescriptor((__int64)DeviceObject, (__int64)Source1);
          if ( DeviceIdFromDescriptor < 0 )
          {
            if ( DeviceExtension[124] != 1 )
              goto LABEL_49;
            DeviceIdFromDescriptor = 0;
          }
          DpiPdoGetDeviceContainerIdFromDescriptor((__int64)DeviceObject);
          _InterlockedAdd((volatile signed __int32 *)(a2 + 56), 1u);
          DeviceObject->Flags |= 4u;
          DeviceObject->Flags |= 0x2000u;
          DeviceObject->Flags &= ~0x4000u;
          DeviceObject->Flags &= ~0x80u;
          WdLogSingleEntry1(4LL);
          WdLogGlobalForLineNumber = 644;
LABEL_48:
          v13 = v39;
          if ( DeviceIdFromDescriptor == 259 )
          {
            v20 = Source1[1];
            goto LABEL_53;
          }
          goto LABEL_49;
        }
        ++*(_DWORD *)(v9 + 3804);
      }
      if ( DeviceExtension[124] == 1 )
      {
        DeviceIdFromDescriptor = DmmSetTemporaryVideoOutputTechnology(
                                   *(DXGADAPTER **)(v9 + 4032),
                                   DeviceExtension[126],
                                   a3,
                                   (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)(a7 != 0LL
                                                                         ? D3DKMDT_VOT_RF|D3DKMDT_VOT_INDIRECT_WIRED
                                                                         : D3DKMDT_VOT_UNINITIALIZED));
        if ( DeviceIdFromDescriptor < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 562;
          goto LABEL_50;
        }
        v31 = IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4));
        DeviceIdFromDescriptor = MonitorCreatePhysicalMonitor(
                                   *(char **)(v9 + 4032),
                                   DeviceExtension[126],
                                   DeviceObject,
                                   v31,
                                   1,
                                   a7,
                                   a8,
                                   a9);
        if ( DeviceIdFromDescriptor < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 580;
          goto LABEL_50;
        }
      }
      goto LABEL_44;
    }
    if ( Source1[1] != *((void **)DeviceExtension + 116) )
    {
      if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4)) )
        goto LABEL_15;
      if ( v20 )
        goto LABEL_16;
      if ( !v21 )
      {
LABEL_15:
        if ( !v20 )
        {
LABEL_20:
          *((_BYTE *)DeviceExtension + 511) = 1;
          WdLogSingleEntry1(4LL);
          LOBYTE(v24) = 1;
          v25 = a1;
          WdLogGlobalForLineNumber = 329;
          DpiPdoRemovePdo(a1, a2, v24, a8, a9);
          goto LABEL_22;
        }
LABEL_16:
        if ( v21 )
        {
          v22 = DeviceExtension[231];
          if ( HIDWORD(Source1[0]) == v22 )
          {
            v23 = RtlCompareMemory(v20, v21, v22);
            if ( v23 == HIDWORD(Source1[0]) )
              goto LABEL_19;
          }
        }
        goto LABEL_20;
      }
    }
LABEL_19:
    DeviceIdFromDescriptor = 0x40000000;
    goto LABEL_50;
  }
  DeviceIdFromDescriptor = 0x40000000;
  WdLogSingleEntry1(4LL);
  WdLogGlobalForLineNumber = 206;
LABEL_49:
  v20 = Source1[1];
LABEL_50:
  if ( *(_BYTE *)(a2 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v9 + 3544), Executive, 0, 0, 0LL);
    DpiFdoPendingCreatePdoCompletion(a1, a2);
    KeReleaseMutex((PRKMUTEX)(v9 + 3544), 0);
  }
LABEL_53:
  if ( DeviceIdFromDescriptor >= 0 || v41 != 1 )
    goto LABEL_74;
  if ( v13 == 1 )
  {
    if ( !(unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline() )
    {
      v32 = *(_QWORD **)DeviceExtension;
      if ( *(unsigned int **)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
      {
        v33 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
        if ( *v33 == DeviceExtension )
        {
          *v33 = v32;
          v32[1] = v33;
          --*(_DWORD *)(v9 + 3800);
          if ( DeviceExtension[124] == 1 )
            --*(_DWORD *)(v9 + 3804);
          goto LABEL_63;
        }
      }
LABEL_61:
      __fastfail(3u);
    }
    DpiFdoRemovePdoFromPdoList(v9, (__int64 *)DeviceExtension);
  }
LABEL_63:
  KeWaitForSingleObject((PVOID)(v9 + 3544), Executive, 0, 0, 0LL);
  *(_QWORD *)(a2 + 48) = 0LL;
  KeReleaseMutex((PRKMUTEX)(v9 + 3544), 0);
  *((_QWORD *)DeviceExtension + 117) = 0LL;
  if ( *((_QWORD *)DeviceExtension + 121) )
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
  if ( v39 == 1 )
    ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  v34 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 119);
  if ( v34 )
    IoFreeWorkItem(v34);
  v35 = (void *)*((_QWORD *)DeviceExtension + 21);
  if ( v35 )
  {
    ExFreePoolWithTag(v35, 0);
    *((_QWORD *)DeviceExtension + 21) = 0LL;
  }
  if ( DeviceObject )
  {
    IoDeleteDevice(DeviceObject);
    DeviceObject = 0LL;
  }
LABEL_74:
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  return (unsigned int)DeviceIdFromDescriptor;
}

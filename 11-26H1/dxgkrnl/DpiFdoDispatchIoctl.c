/*
 * XREFs of DpiFdoDispatchIoctl @ 0x1403D4AF0
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoIsPostDevice @ 0x140056A38 (DpiFdoIsPostDevice.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140060B8C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x14006B414 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1400861A0 (-DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     DpiLiveMigrationWaitForFence @ 0x14008697C (DpiLiveMigrationWaitForFence.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkDdiCreateVirtualGpu @ 0x140216B38 (DxgkDdiCreateVirtualGpu.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x140216D74 (DxgkDdiDestroyVirtualGpu.c)
 *     DxgkDdiEndLiveMigration @ 0x140216EE8 (DxgkDdiEndLiveMigration.c)
 *     DxgkDdiGetDirtyBitplane @ 0x140217068 (DxgkDdiGetDirtyBitplane.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x140217120 (DxgkDdiGetGpuPartitionInfo.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x140217498 (DxgkDdiGetVirtualGpuInfo.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1402175A8 (DxgkDdiGetVirtualGpuProfile.c)
 *     DxgkDdiPrepareLiveMigration @ 0x1402176AC (DxgkDdiPrepareLiveMigration.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x14021782C (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x1402178F8 (DxgkDdiQueryMitigatedRanges.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x140217A28 (DxgkDdiQueryPhysicalFunctionLuid.c)
 *     DxgkDdiRestoreImmutableMigrationData @ 0x140217E88 (DxgkDdiRestoreImmutableMigrationData.c)
 *     DxgkDdiRestoreMutableMigrationData @ 0x140217F60 (DxgkDdiRestoreMutableMigrationData.c)
 *     DxgkDdiSaveImmutableMigrationData @ 0x140218038 (DxgkDdiSaveImmutableMigrationData.c)
 *     DxgkDdiSaveMutableMigrationData @ 0x140218110 (DxgkDdiSaveMutableMigrationData.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1402181E8 (DxgkDdiSetGpuPartitionCount.c)
 *     DxgkDdiWriteVirtualizedInterrupt @ 0x14021859C (DxgkDdiWriteVirtualizedInterrupt.c)
 *     DxgkFillBufferWithDirty @ 0x140218690 (DxgkFillBufferWithDirty.c)
 *     DxgkLiveMigrationGetTransferSize @ 0x140218798 (DxgkLiveMigrationGetTransferSize.c)
 *     DxgkSendDirtyToVRAM @ 0x14021892C (DxgkSendDirtyToVRAM.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x140218AC8 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFlexIovMitigationUpdate @ 0x1402496D4 (DpiFlexIovMitigationUpdate.c)
 *     DpiGetVirtualizationFlags @ 0x140249908 (DpiGetVirtualizationFlags.c)
 *     DpiSriovAttach @ 0x140249CA8 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x140249E40 (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x14024A040 (DpiSriovEventComplete.c)
 *     DpiSriovNotification @ 0x14024A138 (DpiSriovNotification.c)
 *     ?VirtualGpuDriverEscape@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x140427340 (-VirtualGpuDriverEscape@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGK_VIRTUA.c)
 *     DpiFdoGetVirtualGpuType @ 0x14042FBE8 (DpiFdoGetVirtualGpuType.c)
 *     DpiIndirectDdiIoControl @ 0x14044250C (DpiIndirectDdiIoControl.c)
 */

NTSTATUS __fastcall DpiFdoDispatchIoctl(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  ULONG_PTR v3; // rdi
  PVOID DeviceExtension; // r13
  struct _DEVICE_OBJECT *v6; // rbx
  unsigned int Length; // edx
  unsigned int Options; // ecx
  unsigned int LowPart; // eax
  struct _IRP *MasterIrp; // rsi
  __int64 v11; // r9
  __int64 v12; // r9
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v21; // r9
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  NTSTATUS v28; // eax
  NTSTATUS VirtualGpuProfile; // ebx
  int v30; // r12d
  ADAPTER_RENDER **v31; // rcx
  unsigned int v32; // r12d
  __int64 v33; // r9
  int GpuPartitionInfo; // eax
  unsigned int v35; // eax
  __int64 v36; // rcx
  bool IsPostDevice; // al
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // xmm1_8
  unsigned int v41; // eax
  __int64 v42; // r12
  _QWORD *v43; // rcx
  __int64 v44; // r9
  unsigned int v45; // eax
  _QWORD *v46; // rcx
  __int64 v47; // r9
  int v48; // eax
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // eax
  int v52; // ebx
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  int v59; // eax
  int DirtyBitplane; // eax
  int v61; // eax
  __int64 v62; // rax
  unsigned int v63; // eax
  __int64 v64; // rcx
  unsigned int v65; // ebx
  unsigned int v66; // eax
  __int64 v67; // rbx
  unsigned int v68; // r12d
  unsigned __int8 v69; // zf
  __int64 *v70; // r13
  char v71; // cl
  char v72; // r9
  int v73; // eax
  int VirtualGpuType; // eax
  unsigned int v75; // eax
  unsigned int v76; // eax
  unsigned int v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // eax
  unsigned int v80; // eax
  int v81; // eax
  int v82; // eax
  __int64 v83; // r12
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  __int64 v89; // r9
  int v90; // eax
  NTSTATUS VirtualizationFlags; // eax
  int v92; // eax
  int v93; // eax
  __int64 MdlAddress; // [rsp+30h] [rbp-D0h]
  __int64 v95; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v96; // [rsp+48h] [rbp-B8h] BYREF
  int v97[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _DEVICE_OBJECT *v98; // [rsp+58h] [rbp-A8h]
  _BYTE v99[16]; // [rsp+60h] [rbp-A0h] BYREF
  void *v100; // [rsp+70h] [rbp-90h]
  int v101; // [rsp+80h] [rbp-80h]
  _QWORD v102[4]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int Type; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v104[41]; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v105[306]; // [rsp+160h] [rbp+60h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  DeviceExtension = a1->DeviceExtension;
  v6 = a1;
  v98 = a1;
  v95 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v97[0] = Length;
  LODWORD(v96) = Options;
  if ( !*((_BYTE *)DeviceExtension + 1158) || *((_BYTE *)DeviceExtension + 1159) && LowPart == 2345988 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    v11 = 2253932LL;
    if ( LowPart <= 0x22646C )
    {
      if ( LowPart == 2253932 )
      {
        v95 = (unsigned int)Feature_GpupLiveMigration_dxgkrnl__private_featureState;
        if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
        {
          LODWORD(v95) = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
            v95,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v95,
            3,
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
          v6 = v98;
          Options = v96;
        }
        if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
        {
          VirtualGpuProfile = -1073741637;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4564;
          goto LABEL_279;
        }
        if ( Options < 0x18 || !MasterIrp )
        {
          VirtualGpuProfile = -1073741789;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4573;
          goto LABEL_283;
        }
        LOBYTE(v11) = 1;
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v11, 0, 0);
        VirtualGpuProfile = v101;
        if ( v101 < 0 )
          goto LABEL_278;
        VirtualGpuType = DpiFdoGetVirtualGpuType(a2);
        DirtyBitplane = DxgkDdiRestoreImmutableMigrationData(
                          *((_QWORD **)DeviceExtension + 504),
                          VirtualGpuType,
                          (struct _LUID *)MasterIrp,
                          (__int64)MasterIrp->MdlAddress,
                          *(_QWORD *)&MasterIrp->Flags);
      }
      else
      {
        v12 = 2253896LL;
        if ( LowPart <= 0x226448 )
        {
          if ( LowPart == 2253896 )
          {
            if ( Options < 2 || !MasterIrp || (v42 = 168LL, Length < 0xA8) )
            {
              VirtualGpuProfile = -1073741789;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 4014;
              goto LABEL_279;
            }
            LOBYTE(v12) = 1;
            CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v12, 0, 0);
            VirtualGpuProfile = v101;
            if ( v101 < 0 )
              goto LABEL_278;
            v52 = DpiFdoGetVirtualGpuType(a2);
            memset(v104, 0, sizeof(v104));
            Type = (unsigned __int16)MasterIrp->Type;
            VirtualGpuProfile = DxgkDdiGetVirtualGpuProfile(*((ADAPTER_RENDER ***)DeviceExtension + 504), v52, &Type);
            if ( VirtualGpuProfile < 0 )
              goto LABEL_278;
            *(_DWORD *)&MasterIrp->Type = Type;
            *(_DWORD *)(&MasterIrp->Size + 1) = v104[0];
            MasterIrp->MdlAddress = *(PMDL *)&v104[1];
            *(_QWORD *)&MasterIrp->Flags = *(_QWORD *)&v104[3];
            MasterIrp->AssociatedIrp.MasterIrp = *(struct _IRP **)&v104[5];
            MasterIrp->ThreadListEntry.Flink = *(struct _LIST_ENTRY **)&v104[7];
            MasterIrp->ThreadListEntry.Blink = *(struct _LIST_ENTRY **)&v104[9];
            MasterIrp->IoStatus.Pointer = *(PVOID *)&v104[11];
            MasterIrp->IoStatus.Information = *(_QWORD *)&v104[13];
            *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v104[15];
            MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v104[17];
            MasterIrp->UserEvent = *(PKEVENT *)&v104[19];
            MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v104[21];
            MasterIrp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)&v104[23];
            MasterIrp->CancelRoutine = *(PDRIVER_CANCEL *)&v104[25];
            MasterIrp->UserBuffer = *(PVOID *)&v104[27];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)&v104[29];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = *(struct _LIST_ENTRY **)&v104[31];
            MasterIrp->Tail.Overlay.DriverContext[2] = *(PVOID *)&v104[33];
            MasterIrp->Tail.Overlay.DriverContext[3] = *(PVOID *)&v104[35];
            MasterIrp->Tail.Overlay.Thread = *(PETHREAD *)&v104[37];
            MasterIrp->Tail.Overlay.AuxiliaryBuffer = *(PCHAR *)&v104[39];
            goto LABEL_54;
          }
          v13 = LowPart - 2252868;
          if ( v13 )
          {
            v14 = v13 - 4;
            if ( v14 )
            {
              v15 = v14 - 4;
              if ( v15 )
              {
                v16 = v15 - 4;
                if ( v16 )
                {
                  v17 = v16 - 4;
                  if ( !v17 )
                  {
                    VirtualGpuProfile = -1073741637;
                    goto LABEL_283;
                  }
                  v18 = v17 - 4;
                  if ( !v18 )
                  {
                    if ( a2->RequestorMode )
                    {
                      if ( !DxgkpCheckProcessForVirtualMachineManagementAccess() )
                      {
                        VirtualGpuProfile = -1073741790;
                        WdLogSingleEntry1(2LL);
                        WdLogGlobalForLineNumber = 4309;
                        goto LABEL_283;
                      }
                      Options = v96;
                      Length = v97[0];
                    }
                    if ( Options < 2 || !MasterIrp || Length < 0x18 )
                    {
                      VirtualGpuProfile = -1073741789;
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 4320;
                      goto LABEL_279;
                    }
                    LOBYTE(v12) = 1;
                    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v12, 0, 0);
                    VirtualGpuProfile = v101;
                    if ( v101 < 0 )
                      goto LABEL_278;
                    v45 = DpiFdoGetVirtualGpuType(a2);
                    LODWORD(v102[0]) = (unsigned __int16)MasterIrp->Type;
                    v46 = (_QWORD *)*((_QWORD *)DeviceExtension + 504);
                    memset((char *)v102 + 4, 0, 24);
                    VirtualGpuProfile = DxgkDdiQueryMitigatedRangeCount(v46, v45, (unsigned int *)v102, v47);
                    if ( VirtualGpuProfile < 0 )
                      goto LABEL_278;
                    v40 = *(_QWORD *)((char *)&v102[2] + 4);
                    *(_OWORD *)&MasterIrp->Type = *(_OWORD *)((char *)v102 + 4);
                    *(_QWORD *)&MasterIrp->Flags = v40;
                    goto LABEL_44;
                  }
                  v19 = v18 - 4;
                  if ( v19 )
                  {
                    if ( v19 != 1000 )
                    {
LABEL_14:
                      ++a2->CurrentLocation;
                      a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
                      return IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), a2);
                    }
                    LOBYTE(v12) = 1;
                    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v12, 0, 0);
                    VirtualGpuProfile = v101;
                    if ( v101 < 0 )
                      goto LABEL_278;
                    HIDWORD(v102[0]) = 0;
                    v102[2] = 0LL;
                    if ( !MasterIrp || (v30 = v97[0], v97[0] < 0x18u) )
                    {
                      WdLogSingleEntry1(3LL);
                      WdLogGlobalForLineNumber = 3932;
                      VirtualGpuProfile = -1073741789;
                      goto LABEL_39;
                    }
                    v97[0] = DpiFdoGetVirtualGpuType(a2);
                    v102[1] = &MasterIrp->Flags + 1;
                    v31 = (ADAPTER_RENDER **)*((_QWORD *)DeviceExtension + 504);
                    v32 = (unsigned int)(v30 - 20) >> 1;
                    LODWORD(v102[0]) = v32;
                    GpuPartitionInfo = DxgkDdiGetGpuPartitionInfo(
                                         v31,
                                         v97[0],
                                         (struct _DXGKARG_GETGPUPARTITIONINFO *)v102,
                                         v33);
                    VirtualGpuProfile = GpuPartitionInfo;
                    if ( GpuPartitionInfo >= 0 )
                    {
                      v35 = v102[0];
                      if ( g_LimitNumberOfVfs && LODWORD(v102[0]) )
                      {
                        LODWORD(v102[0]) = 1;
                        *(_WORD *)v102[1] = 1;
                        v35 = v102[0];
                        LOWORD(v102[2]) = 1;
                      }
                      if ( v35 <= v32 && v35 )
                      {
                        v36 = (__int64)v98;
                        *(_DWORD *)&MasterIrp->Type = v35;
                        WORD2(MasterIrp->MdlAddress) = v102[2];
                        IsPostDevice = DpiFdoIsPostDevice(v36);
                        v38 = v97[0];
                        LOBYTE(v3) = IsPostDevice;
                        MasterIrp->Flags = MasterIrp->Flags & 0xFFFFFFFE | v3;
                        DxgkDdiQueryPhysicalFunctionLuid(
                          *((char **)DeviceExtension + 504),
                          v38,
                          (struct _LUID *)(&MasterIrp->Size + 1));
                        v3 = (unsigned int)(2 * LODWORD(v102[0]) + 20);
                        goto LABEL_278;
                      }
                      WdLogSingleEntry1(3LL);
                      WdLogGlobalForLineNumber = 3957;
                      VirtualGpuProfile = -1073741811;
LABEL_39:
                      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v99);
                      goto LABEL_283;
                    }
                    if ( GpuPartitionInfo != -1073741789 )
                      goto LABEL_278;
                    if ( !LODWORD(v102[0]) )
                    {
                      WdLogSingleEntry1(3LL);
                      WdLogGlobalForLineNumber = 3981;
                      VirtualGpuProfile = -1073741811;
                      goto LABEL_278;
                    }
                    v39 = (__int64)v98;
                    VirtualGpuProfile = -2147483643;
                    *(_DWORD *)&MasterIrp->Type = v102[0];
                    WORD2(MasterIrp->MdlAddress) = v102[2];
                    LOBYTE(v3) = DpiFdoIsPostDevice(v39);
                    MasterIrp->Flags = MasterIrp->Flags & 0xFFFFFFFE | v3;
                    RtlCopyLuid((PLUID)(&MasterIrp->Size + 1), (PLUID)DeviceExtension + 337);
LABEL_44:
                    v3 = 24LL;
                    goto LABEL_278;
                  }
                  if ( a2->RequestorMode )
                  {
                    if ( !DxgkpCheckProcessForVirtualMachineManagementAccess() )
                    {
                      VirtualGpuProfile = -1073741790;
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 4351;
                      goto LABEL_283;
                    }
                    Options = v96;
                    Length = v97[0];
                  }
                  if ( Options < 4 || !MasterIrp || Length < 0x10 )
                  {
                    VirtualGpuProfile = -1073741789;
                    WdLogSingleEntry1(2LL);
                    WdLogGlobalForLineNumber = 4362;
                    goto LABEL_279;
                  }
                  LOBYTE(v12) = 1;
                  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v12, 0, 0);
                  VirtualGpuProfile = v101;
                  if ( v101 < 0 )
                    goto LABEL_278;
                  v41 = DpiFdoGetVirtualGpuType(a2);
                  v42 = (unsigned int)v97[0];
                  v43 = (_QWORD *)*((_QWORD *)DeviceExtension + 504);
                  LODWORD(v102[0]) = (unsigned __int16)MasterIrp->Type;
                  HIDWORD(v102[0]) = LOBYTE(MasterIrp->Size);
                  v102[1] = (unsigned int)v97[0] >> 4;
                  v102[2] = MasterIrp;
                  VirtualGpuProfile = DxgkDdiQueryMitigatedRanges(v43, v41, (__int64)v102, v44);
                  if ( VirtualGpuProfile < 0 )
                    goto LABEL_278;
LABEL_54:
                  v3 = v42;
                  goto LABEL_278;
                }
                if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
                {
                  VirtualGpuProfile = -1073741790;
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 4411;
                  goto LABEL_283;
                }
                v48 = DpiFdoGetVirtualGpuType(a2);
                v28 = DpiSriovDetach(v6, v48, v49, v50);
              }
              else
              {
                v28 = DpiSriovAttach(v6, a2);
              }
            }
            else
            {
              if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
              {
                VirtualGpuProfile = -1073741790;
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 4426;
                goto LABEL_283;
              }
              v51 = DpiFdoGetVirtualGpuType(a2);
              v28 = DpiSriovEventComplete((__int64)v6, v51, (__int64)MasterIrp, v96);
            }
          }
          else
          {
            v28 = DpiSriovNotification(v6, a2, (__int64)a2->AssociatedIrp.MasterIrp, Length);
          }
LABEL_120:
          VirtualGpuProfile = v28;
          goto LABEL_279;
        }
        v53 = LowPart - 2253900;
        if ( v53 )
        {
          v54 = v53 - 8;
          if ( v54 )
          {
            v55 = v54 - 4;
            if ( !v55 )
            {
              if ( Options < 2 || !MasterIrp || (v42 = 128LL, Length < 0x80) )
              {
                VirtualGpuProfile = -1073741789;
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 4226;
                goto LABEL_279;
              }
              LOBYTE(v12) = 1;
              CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v12, 0, 0);
              VirtualGpuProfile = v101;
              if ( v101 < 0 )
                goto LABEL_278;
              v65 = DpiFdoGetVirtualGpuType(a2);
              memset(v104, 0, 0x64uLL);
              Type = (unsigned __int16)MasterIrp->Type;
              VirtualGpuProfile = DxgkDdiGetVirtualGpuInfo(
                                    *((__int64 **)DeviceExtension + 504),
                                    v65,
                                    &Type,
                                    &MasterIrp->Size + 1,
                                    (PMDL *)((char *)&MasterIrp->MdlAddress + 4));
              if ( VirtualGpuProfile < 0 )
                goto LABEL_278;
              MasterIrp->Type = Type;
              MasterIrp->ThreadListEntry.Flink = *(struct _LIST_ENTRY **)&v104[1];
              MasterIrp->ThreadListEntry.Blink = *(struct _LIST_ENTRY **)&v104[3];
              MasterIrp->IoStatus.Pointer = *(PVOID *)&v104[5];
              MasterIrp->IoStatus.Information = *(_QWORD *)&v104[7];
              *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v104[9];
              MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v104[11];
              MasterIrp->UserEvent = *(PKEVENT *)&v104[13];
              MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v104[15];
              MasterIrp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)&v104[17];
              MasterIrp->CancelRoutine = *(PDRIVER_CANCEL *)&v104[19];
              MasterIrp->UserBuffer = *(PVOID *)&v104[21];
              MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)&v104[23];
              goto LABEL_54;
            }
            v56 = v55 - 4;
            if ( !v56 )
            {
              v28 = DpiSetPartitionVmbus(v6, a2, a2->AssociatedIrp.MasterIrp, Options);
              goto LABEL_120;
            }
            v57 = v56 - 4;
            if ( !v57 )
            {
              if ( Options < 8 || !MasterIrp )
              {
                VirtualGpuProfile = -1073741789;
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 4278;
                goto LABEL_279;
              }
              CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, 0LL, 1, 0);
              VirtualGpuProfile = v101;
              if ( v101 >= 0 )
              {
                v63 = DpiFdoGetVirtualGpuType(a2);
                v64 = *((_QWORD *)DeviceExtension + 504);
                HIDWORD(v102[0]) = v96;
                LODWORD(v102[0]) = 0;
                v102[1] = (unsigned int)v97[0];
                v102[2] = MasterIrp;
                v102[3] = MasterIrp;
                VirtualGpuProfile = ADAPTER_RENDER::VirtualGpuDriverEscape(
                                      *(_QWORD *)(v64 + 3168),
                                      v63,
                                      MasterIrp,
                                      v102);
                if ( VirtualGpuProfile >= 0 )
                  v3 = LODWORD(v102[1]);
              }
              goto LABEL_278;
            }
            v58 = v57 - 4;
            if ( !v58 )
            {
              v95 = (unsigned int)Feature_GpupLiveMigration_dxgkrnl__private_featureState;
              if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
              {
                LODWORD(v95) = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1;
                wil_details_FeatureReporting_ReportUsageToService(
                  (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
                  v95,
                  3LL);
                wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
                  v95,
                  3,
                  (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
                Length = v97[0];
                v6 = v98;
                Options = v96;
              }
              if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
              {
                VirtualGpuProfile = -1073741637;
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 4478;
                goto LABEL_279;
              }
              if ( Options < 0xC || !MasterIrp || Length < 0x20 )
              {
                VirtualGpuProfile = -1073741789;
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 4489;
                goto LABEL_283;
              }
              CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, 0LL, 0, 1);
              VirtualGpuProfile = v101;
              if ( v101 >= 0 )
              {
                v61 = DpiFdoGetVirtualGpuType(a2);
                LODWORD(v96) = (v97[0] - 8) / 0x18u;
                VirtualGpuProfile = DxgkDdiPrepareLiveMigration(
                                      v100,
                                      v61,
                                      (struct _LUID *)MasterIrp,
                                      (int)MasterIrp->MdlAddress,
                                      (__int64)&MasterIrp->MdlAddress,
                                      (unsigned int *)&v96);
                v62 = (unsigned int)v96;
                *(_DWORD *)&MasterIrp->Type = v96;
                if ( VirtualGpuProfile >= 0 )
                  v3 = 24 * v62 + 8;
              }
              goto LABEL_278;
            }
            if ( v58 != 4 )
              goto LABEL_14;
            v95 = (unsigned int)Feature_GpupLiveMigration_dxgkrnl__private_featureState;
            if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
            {
              *(_QWORD *)v97 = __PAIR64__(HIDWORD(v95), Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1u);
              wil_details_FeatureReporting_ReportUsageToService(
                (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
                __SPAIR64__(HIDWORD(v95), Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1u),
                3LL);
              wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
                v97[0],
                3,
                (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
              v6 = v98;
              Options = v96;
            }
            if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
            {
              VirtualGpuProfile = -1073741637;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 4530;
              goto LABEL_279;
            }
            if ( Options < 0x18 || !MasterIrp )
            {
              VirtualGpuProfile = -1073741789;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 4539;
              goto LABEL_283;
            }
            LOBYTE(v12) = 1;
            CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v12, 0, 0);
            VirtualGpuProfile = v101;
            if ( v101 < 0 )
            {
LABEL_278:
              CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v99);
              goto LABEL_279;
            }
            v59 = DpiFdoGetVirtualGpuType(a2);
            DirtyBitplane = DxgkDdiSaveImmutableMigrationData(
                              *((_QWORD **)DeviceExtension + 504),
                              v59,
                              (struct _LUID *)MasterIrp,
                              (__int64)MasterIrp->MdlAddress,
                              *(_QWORD *)&MasterIrp->Flags);
          }
          else
          {
            if ( a2->RequestorMode )
            {
              if ( !DxgkpCheckProcessForVirtualMachineManagementAccess() )
              {
                VirtualGpuProfile = -1073741790;
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 4104;
                goto LABEL_283;
              }
              Options = v96;
              Length = v97[0];
            }
            if ( Options < 0x78 || !MasterIrp || Length < 0x88 )
            {
              VirtualGpuProfile = -1073741789;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 4117;
              goto LABEL_279;
            }
            CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, 0LL, 0, 1);
            VirtualGpuProfile = v101;
            if ( v101 < 0 )
              goto LABEL_278;
            v66 = DpiFdoGetVirtualGpuType(a2);
            v67 = *(_QWORD *)&MasterIrp->Flags;
            v68 = v66;
            if ( v67 || MasterIrp->AssociatedIrp.MasterIrp || MasterIrp->ThreadListEntry.Flink )
            {
              memset(v105, 0, sizeof(v105));
              v69 = BYTE2(MasterIrp->UserBuffer) == 0;
              v70 = (__int64 *)v100;
              LODWORD(v105[0]) = (unsigned __int16)MasterIrp->Type;
              v71 = !v69;
              v69 = BYTE1(MasterIrp->UserBuffer) == 0;
              v105[2] = (__int64)MasterIrp->AssociatedIrp.MasterIrp;
              v72 = !v69;
              v69 = LOBYTE(MasterIrp->UserBuffer) == 0;
              v105[3] = (__int64)MasterIrp->ThreadListEntry.Flink;
              v105[4] = (__int64)MasterIrp->ThreadListEntry.Blink;
              v105[5] = (__int64)MasterIrp->IoStatus.Pointer;
              v105[6] = MasterIrp->IoStatus.Information;
              v105[7] = *(_QWORD *)&MasterIrp->RequestorMode;
              v105[8] = (__int64)MasterIrp->UserIosb;
              v105[9] = (__int64)MasterIrp->UserEvent;
              v105[10] = MasterIrp->Overlay.AllocationSize.QuadPart;
              v105[11] = (__int64)MasterIrp->Overlay.AsynchronousParameters.UserApcContext;
              v105[12] = (__int64)MasterIrp->CancelRoutine;
              MdlAddress = (__int64)MasterIrp->MdlAddress;
              v105[1] = v67;
              VirtualGpuProfile = DxgkDdiCreateVirtualGpu(v100, v68, v69, v72, v71, v105, MdlAddress);
              if ( VirtualGpuProfile >= 0 )
              {
                memset(v104, 0, 0x64uLL);
                Type = v105[0];
                VirtualGpuProfile = DxgkDdiGetVirtualGpuInfo(
                                      v70,
                                      v68,
                                      &Type,
                                      (PMDL *)((char *)&MasterIrp->MdlAddress + 4),
                                      &MasterIrp->Flags + 1);
                if ( VirtualGpuProfile < 0 )
                {
                  v97[0] = v105[0];
                  DxgkDdiDestroyVirtualGpu(v70, v68, (unsigned int *)v97, 1);
                }
                else
                {
                  v3 = 136LL;
                  LOWORD(MasterIrp->MdlAddress) = v105[0];
                  MasterIrp->ThreadListEntry.Blink = *(struct _LIST_ENTRY **)&v104[1];
                  MasterIrp->IoStatus.Pointer = *(PVOID *)&v104[3];
                  MasterIrp->IoStatus.Information = *(_QWORD *)&v104[5];
                  *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v104[7];
                  MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v104[9];
                  MasterIrp->UserEvent = *(PKEVENT *)&v104[11];
                  MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v104[13];
                  MasterIrp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)&v104[15];
                  MasterIrp->CancelRoutine = *(PDRIVER_CANCEL *)&v104[17];
                  MasterIrp->UserBuffer = *(PVOID *)&v104[19];
                  MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)&v104[21];
                  MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = *(struct _LIST_ENTRY **)&v104[23];
                }
              }
              goto LABEL_278;
            }
            v97[0] = (unsigned __int16)MasterIrp->Type;
            DirtyBitplane = DxgkDdiDestroyVirtualGpu(v100, v66, (unsigned int *)v97, 1);
          }
        }
        else
        {
          if ( a2->RequestorMode )
          {
            if ( !DxgkpCheckProcessForVirtualMachineManagementAccess() )
            {
              VirtualGpuProfile = -1073741790;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 4069;
              goto LABEL_283;
            }
            Options = v96;
          }
          if ( Options < 2 || !MasterIrp )
          {
            VirtualGpuProfile = -1073741789;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 4080;
            goto LABEL_279;
          }
          LOBYTE(v12) = 1;
          CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v12, 0, 0);
          VirtualGpuProfile = v101;
          if ( v101 < 0 )
            goto LABEL_278;
          v73 = DpiFdoGetVirtualGpuType(a2);
          v97[0] = (unsigned __int16)MasterIrp->Type;
          DirtyBitplane = DxgkDdiSetGpuPartitionCount(
                            *((ADAPTER_RENDER ***)DeviceExtension + 504),
                            v73,
                            (unsigned int *)v97);
        }
      }
LABEL_277:
      VirtualGpuProfile = DirtyBitplane;
      goto LABEL_278;
    }
    v21 = 2253964LL;
    if ( LowPart <= 0x22648C )
    {
      if ( LowPart == 2253964 )
      {
        v95 = (unsigned int)Feature_GpupLiveMigration_dxgkrnl__private_featureState;
        if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
        {
          LODWORD(v95) = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
            v95,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v95,
            3,
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
          v6 = v98;
          Options = v96;
        }
        if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
        {
          VirtualGpuProfile = -1073741637;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4884;
          goto LABEL_279;
        }
        if ( Options < 8 || !MasterIrp )
        {
          VirtualGpuProfile = -1073741789;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4893;
          goto LABEL_283;
        }
        LOBYTE(v21) = 1;
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v21, 0, 0);
        VirtualGpuProfile = v101;
        if ( v101 < 0 )
          goto LABEL_278;
        v88 = DpiFdoGetVirtualGpuType(a2);
        DirtyBitplane = DxgkDdiEndLiveMigration(
                          *((_QWORD **)DeviceExtension + 504),
                          v88,
                          (struct _LUID *)MasterIrp,
                          v89);
        goto LABEL_277;
      }
      v75 = LowPart - 2253936;
      if ( !v75 )
      {
        v95 = (unsigned int)Feature_GpupLiveMigration_dxgkrnl__private_featureState;
        if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
        {
          LODWORD(v95) = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
            v95,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v95,
            3,
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
          Length = v97[0];
          v6 = v98;
          Options = v96;
        }
        if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
        {
          VirtualGpuProfile = -1073741637;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4667;
          goto LABEL_279;
        }
        if ( Options < 0xC || !MasterIrp || Length < 4 )
        {
          VirtualGpuProfile = -1073741789;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4678;
          goto LABEL_283;
        }
        LOBYTE(v21) = 1;
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v21, 0, 0);
        VirtualGpuProfile = v101;
        if ( v101 < 0 )
          goto LABEL_278;
        v87 = DpiFdoGetVirtualGpuType(a2);
        DirtyBitplane = DxgkDdiGetDirtyBitplane(
                          *((_QWORD **)DeviceExtension + 504),
                          v87,
                          (struct _LUID *)MasterIrp,
                          LODWORD(MasterIrp->MdlAddress));
        *(_DWORD *)&MasterIrp->Type = DirtyBitplane;
        v3 = 4LL;
        goto LABEL_277;
      }
      v76 = v75 - 4;
      if ( v76 )
      {
        v77 = v76 - 4;
        if ( !v77 )
        {
          v95 = (unsigned int)Feature_GpupLiveMigration_dxgkrnl__private_featureState;
          if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
          {
            LODWORD(v95) = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1;
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
              v95,
              3LL);
            wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
              v95,
              3,
              (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
            v6 = v98;
            Options = v96;
          }
          if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
          {
            VirtualGpuProfile = -1073741637;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 4787;
            goto LABEL_279;
          }
          if ( Options < 0x10 || !MasterIrp )
          {
            VirtualGpuProfile = -1073741789;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 4796;
            goto LABEL_283;
          }
          v28 = DpiLiveMigrationWaitForFence(v6, a2, (__int64)MasterIrp, (__int64)MasterIrp->MdlAddress, 0);
          goto LABEL_120;
        }
        v78 = v77 - 4;
        if ( v78 )
        {
          v79 = v78 - 4;
          if ( !v79 )
          {
            v95 = (unsigned int)Feature_GpupLiveMigration_dxgkrnl__private_featureState;
            if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
            {
              LODWORD(v95) = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1;
              wil_details_FeatureReporting_ReportUsageToService(
                (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
                v95,
                3LL);
              wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
                v95,
                3,
                (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
              v6 = v98;
              Options = v96;
            }
            if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
            {
              VirtualGpuProfile = -1073741637;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 4856;
              goto LABEL_279;
            }
            if ( Options < 0x10 || !MasterIrp )
            {
              VirtualGpuProfile = -1073741789;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 4865;
              goto LABEL_283;
            }
            v28 = DpiLiveMigrationWaitForFence(v6, a2, (__int64)MasterIrp, (__int64)MasterIrp->MdlAddress, 1);
            goto LABEL_120;
          }
          v80 = v79 - 4;
          if ( v80 )
          {
            if ( v80 != 4 )
              goto LABEL_14;
            v95 = (unsigned int)Feature_GpupLiveMigration_dxgkrnl__private_featureState;
            if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
            {
              LODWORD(v95) = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1;
              wil_details_FeatureReporting_ReportUsageToService(
                (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
                v95,
                3LL);
              wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
                v95,
                3,
                (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
              v6 = v98;
              Options = v96;
            }
            if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
            {
              VirtualGpuProfile = -1073741637;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 4633;
              goto LABEL_279;
            }
            if ( Options < 0x18 || !MasterIrp )
            {
              VirtualGpuProfile = -1073741789;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 4642;
              goto LABEL_283;
            }
            LOBYTE(v21) = 1;
            CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v21, 0, 0);
            VirtualGpuProfile = v101;
            if ( v101 < 0 )
              goto LABEL_278;
            v81 = DpiFdoGetVirtualGpuType(a2);
            DirtyBitplane = DxgkDdiRestoreMutableMigrationData(
                              *((_QWORD **)DeviceExtension + 504),
                              v81,
                              (struct _LUID *)MasterIrp,
                              (__int64)MasterIrp->MdlAddress,
                              *(_QWORD *)&MasterIrp->Flags);
          }
          else
          {
            v95 = (unsigned int)Feature_GpupLiveMigration_dxgkrnl__private_featureState;
            if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
            {
              LODWORD(v95) = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1;
              wil_details_FeatureReporting_ReportUsageToService(
                (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
                v95,
                3LL);
              wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
                v95,
                3,
                (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
              v6 = v98;
              Options = v96;
            }
            if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
            {
              VirtualGpuProfile = -1073741637;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 4599;
              goto LABEL_279;
            }
            if ( Options < 0x18 || !MasterIrp )
            {
              VirtualGpuProfile = -1073741789;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 4608;
              goto LABEL_283;
            }
            LOBYTE(v21) = 1;
            CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v21, 0, 0);
            VirtualGpuProfile = v101;
            if ( v101 < 0 )
              goto LABEL_278;
            v82 = DpiFdoGetVirtualGpuType(a2);
            DirtyBitplane = DxgkDdiSaveMutableMigrationData(
                              *((_QWORD **)DeviceExtension + 504),
                              v82,
                              (struct _LUID *)MasterIrp,
                              (__int64)MasterIrp->MdlAddress,
                              *(_QWORD *)&MasterIrp->Flags);
          }
          goto LABEL_277;
        }
        v95 = (unsigned int)Feature_GpupLiveMigration_dxgkrnl__private_featureState;
        if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
        {
          LODWORD(v95) = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
            v95,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v95,
            3,
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
          Length = v97[0];
          v6 = v98;
          Options = v96;
        }
        if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
        {
          VirtualGpuProfile = -1073741637;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4815;
          goto LABEL_279;
        }
        if ( Options < 0xC || !MasterIrp || (v83 = 8LL, Length < 8) )
        {
          VirtualGpuProfile = -1073741789;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4826;
          goto LABEL_283;
        }
        LOBYTE(v21) = 1;
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v21, 0, 0);
        VirtualGpuProfile = v101;
        if ( v101 < 0 )
          goto LABEL_278;
        v84 = DpiFdoGetVirtualGpuType(a2);
        DirtyBitplane = DxgkSendDirtyToVRAM(
                          *((_QWORD **)DeviceExtension + 504),
                          v84,
                          (struct _LUID *)MasterIrp,
                          LODWORD(MasterIrp->MdlAddress),
                          (__int64)MasterIrp);
      }
      else
      {
        v83 = 16LL;
        v95 = (unsigned int)Feature_GpupLiveMigration_dxgkrnl__private_featureState;
        if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
        {
          LODWORD(v95) = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
            v95,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v95,
            3,
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
          Length = v97[0];
          v6 = v98;
          Options = v96;
        }
        if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
        {
          VirtualGpuProfile = -1073741637;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4745;
          goto LABEL_279;
        }
        if ( Options < 0xC || !MasterIrp || Length < 0x10 )
        {
          VirtualGpuProfile = -1073741789;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4756;
          goto LABEL_283;
        }
        LOBYTE(v21) = 1;
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v21, 0, 0);
        VirtualGpuProfile = v101;
        if ( v101 < 0 )
          goto LABEL_278;
        v86 = DpiFdoGetVirtualGpuType(a2);
        DirtyBitplane = DxgkFillBufferWithDirty(
                          *((_QWORD **)DeviceExtension + 504),
                          v86,
                          (struct _LUID *)MasterIrp,
                          LODWORD(MasterIrp->MdlAddress),
                          (__int64)MasterIrp);
        LODWORD(MasterIrp->MdlAddress) = DirtyBitplane;
      }
    }
    else
    {
      v22 = LowPart - 2253968;
      if ( !v22 )
      {
        v95 = (unsigned int)Feature_GpupLiveMigration_dxgkrnl__private_featureState;
        if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
        {
          LODWORD(v95) = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
            v95,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v95,
            3,
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
          v6 = v98;
          Options = v96;
        }
        if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
        {
          VirtualGpuProfile = -1073741637;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4916;
          goto LABEL_283;
        }
        if ( Options < 0x20 || !MasterIrp )
        {
          VirtualGpuProfile = -1073741789;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4925;
          goto LABEL_283;
        }
        LOBYTE(v21) = 1;
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v21, 0, 0);
        VirtualGpuProfile = v101;
        if ( v101 < 0 )
          goto LABEL_278;
        v93 = DpiFdoGetVirtualGpuType(a2);
        DirtyBitplane = DxgkDdiWriteVirtualizedInterrupt(
                          *((_QWORD **)DeviceExtension + 504),
                          v93,
                          (struct _LUID *)MasterIrp,
                          (__int16)MasterIrp->MdlAddress,
                          (__int64)&MasterIrp->Flags);
        goto LABEL_277;
      }
      v23 = v22 - 4;
      if ( v23 )
      {
        v24 = v23 - 4;
        if ( !v24 )
        {
          if ( Options < 8 || !MasterIrp || Length < 4 )
          {
            VirtualGpuProfile = -1073741789;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 4953;
            goto LABEL_279;
          }
          LOBYTE(v21) = 1;
          CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v21, 0, 0);
          VirtualGpuProfile = v101;
          if ( v101 >= 0 )
          {
            v92 = DpiFdoGetVirtualGpuType(a2);
            *(_DWORD *)&MasterIrp->Type = 0;
            if ( !v92 )
              *(_DWORD *)&MasterIrp->Type = (*((_DWORD *)DeviceExtension + 1398) >> 2) & 1;
            v3 = 4LL;
          }
          goto LABEL_278;
        }
        v25 = v24 - 940;
        if ( !v25 )
        {
          if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
          {
            VirtualGpuProfile = -1073741790;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 4441;
            goto LABEL_283;
          }
          v90 = DpiFdoGetVirtualGpuType(a2);
          VirtualizationFlags = DpiGetVirtualizationFlags(v6, v90, MasterIrp, v96, (__int64)MasterIrp, v97[0], &v95);
          v3 = v95;
          VirtualGpuProfile = VirtualizationFlags;
LABEL_279:
          if ( VirtualGpuProfile == 259 )
            return VirtualGpuProfile;
          goto LABEL_283;
        }
        v26 = v25 - 4;
        if ( v26 )
        {
          v27 = v26 - 20;
          if ( v27 )
          {
            if ( v27 != 91048 )
              goto LABEL_14;
            v97[0] = 0;
            v28 = DpiIndirectDdiIoControl(
                    (_DWORD)DeviceExtension,
                    Options,
                    (_DWORD)MasterIrp,
                    Length,
                    (__int64)MasterIrp,
                    (__int64)v97);
          }
          else
          {
            v28 = DpiFlexIovMitigationUpdate(v6, a2, (__int64)MasterIrp, Options, (__int64)MasterIrp, Length);
          }
        }
        else
        {
          v28 = DpiSetPartitionFlexIovVmbus(v6, a2, a2->AssociatedIrp.MasterIrp, Options);
        }
        goto LABEL_120;
      }
      v95 = (unsigned int)Feature_GpupLiveMigration_dxgkrnl__private_featureState;
      if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
      {
        LODWORD(v95) = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
          v95,
          3LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v95,
          3,
          (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
        Length = v97[0];
        v6 = v98;
        Options = v96;
      }
      if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
      {
        VirtualGpuProfile = -1073741637;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4705;
        goto LABEL_279;
      }
      v83 = 8LL;
      if ( Options < 8 || !MasterIrp || Length < 8 )
      {
        VirtualGpuProfile = -1073741789;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4716;
        goto LABEL_283;
      }
      LOBYTE(v21) = 1;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v99, v6, a2, v21, 0, 0);
      VirtualGpuProfile = v101;
      if ( v101 < 0 )
        goto LABEL_278;
      v85 = DpiFdoGetVirtualGpuType(a2);
      DirtyBitplane = DxgkLiveMigrationGetTransferSize(
                        *((_QWORD **)DeviceExtension + 504),
                        v85,
                        (struct _LUID *)MasterIrp,
                        (__int64 *)&MasterIrp->Type);
    }
    if ( DirtyBitplane >= 0 )
      v3 = v83;
    goto LABEL_277;
  }
  VirtualGpuProfile = -1073741637;
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 3905;
LABEL_283:
  a2->IoStatus.Status = VirtualGpuProfile;
  a2->IoStatus.Information = v3;
  IofCompleteRequest(a2, 1);
  return VirtualGpuProfile;
}

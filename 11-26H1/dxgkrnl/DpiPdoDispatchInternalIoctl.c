/*
 * XREFs of DpiPdoDispatchInternalIoctl @ 0x140442E60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14003555C (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14003CDDC (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1400674F4 (Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline @ 0x140086DB4 (Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline @ 0x140094E40 (Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline @ 0x140094E98 (Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pxqqqq_EtwWriteTransfer @ 0x140094EF0 (McTemplateK0pxqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pxqqqqqqbr6br7pp_EtwWriteTransfer @ 0x140094FB0 (McTemplateK0pxqqqqqqbr6br7pp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x14024E5E8 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402AC92C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1402ACB84 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterDdiSync @ 0x140319D70 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x140319DFC (DxgkAcquireAdapterDdiSync.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140320470 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     DpiPdoSetDevicePower @ 0x1403B9898 (DpiPdoSetDevicePower.c)
 *     DpiPdoHandleOpmIoctls @ 0x1403BC9A4 (DpiPdoHandleOpmIoctls.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403DF030 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403EA9FC (DxgkAcquireAdapterOpmI2CSync.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z @ 0x140402F6C (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z.c)
 */

__int64 __fastcall DpiPdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  int VideoOutputTechnology; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v6; // rsi
  _QWORD *UserBuffer; // r12
  DWORD Length; // ecx
  unsigned int Options; // edx
  struct _DEVICE_OBJECT *v10; // r8
  unsigned int LowPart; // r13d
  union _LARGE_INTEGER *Parameters; // r14
  __int64 v13; // rax
  char *DeviceExtension; // rdi
  unsigned __int64 Information; // rdi
  PIRP v16; // rsi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  DXGADAPTER *v31; // rbx
  __int64 v32; // rsi
  MONITOR_MGR *v33; // rdi
  unsigned int v34; // edx
  _QWORD *v35; // rcx
  DXGADAPTER *v36; // rbx
  __int64 v37; // rsi
  MONITOR_MGR *v38; // rdi
  bool v39; // zf
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 (__fastcall *v43)(__int64, __int64, __int64, __int64, PLARGE_INTEGER, DWORD, LONG, _DWORD, _QWORD *); // rax
  __int64 HighPart; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 (__fastcall *v50)(__int64, __int64, __int64, __int64, PLARGE_INTEGER); // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // r8
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-99h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-99h]
  void *v57; // [rsp+28h] [rbp-91h]
  void *v58; // [rsp+28h] [rbp-91h]
  DWORD v59; // [rsp+28h] [rbp-91h]
  unsigned __int64 *v60; // [rsp+30h] [rbp-89h]
  LONG v61; // [rsp+30h] [rbp-89h]
  __int64 v62; // [rsp+38h] [rbp-81h]
  __int64 v63; // [rsp+40h] [rbp-79h]
  unsigned __int64 v64; // [rsp+88h] [rbp-31h] BYREF
  unsigned int v65; // [rsp+90h] [rbp-29h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v66[2]; // [rsp+98h] [rbp-21h] BYREF
  unsigned int v67[2]; // [rsp+A8h] [rbp-11h] BYREF
  DXGMONITOR *v68[12]; // [rsp+B0h] [rbp-9h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+120h] [rbp+67h] BYREF
  PIRP Irp; // [rsp+128h] [rbp+6Fh]
  _DWORD *v71; // [rsp+130h] [rbp+77h] BYREF
  ULONG pSessionId; // [rsp+138h] [rbp+7Fh] BYREF

  Irp = a2;
  v64 = 0LL;
  pSessionId = 0;
  VideoOutputTechnology = -1073741637;
  IoGetRequestorSessionId(a2, &pSessionId);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_QWORD *)(a1 + 64);
  UserBuffer = a2->UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v10 = *(struct _DEVICE_OBJECT **)(v6 + 32);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Parameters = (union _LARGE_INTEGER *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v13 = *(int *)(v6 + 496);
  DeviceExtension = (char *)v10->DeviceExtension;
  Interval.LowPart = Length;
  v65 = Options;
  if ( (_DWORD)v13 != 1 )
  {
    WdLogSingleEntry3(2LL, -1073741637LL, v13, LowPart);
    WdLogGlobalForLineNumber = 1270;
    goto LABEL_3;
  }
  if ( LowPart <= 0x232493 )
  {
    switch ( LowPart )
    {
      case 0x232493u:
LABEL_17:
        v16 = Irp;
        v18 = DpiPdoHandleOpmIoctls(a1, (__int64)Irp);
        Information = v16->IoStatus.Information;
        VideoOutputTechnology = v18;
        goto LABEL_5;
      case 0x232407u:
        Interval.LowPart = 0;
        if ( UserBuffer )
        {
          if ( Length >= 0x28 )
          {
            VideoOutputTechnology = DpiAcquireCoreSyncAccessSafe(a1, 0);
            if ( VideoOutputTechnology >= 0 )
            {
              *UserBuffer = *((_QWORD *)DeviceExtension + 504);
              UserBuffer[1] = *((_QWORD *)DeviceExtension + 337);
              *((_DWORD *)UserBuffer + 4) = *(_DWORD *)(v6 + 504);
              *((_DWORD *)UserBuffer + 6) = *(_DWORD *)(*(_QWORD *)(v6 + 936) + 68LL);
              *((_BYTE *)UserBuffer + 28) = *(_BYTE *)(*(_QWORD *)(v6 + 936) + 66LL);
              *((_DWORD *)UserBuffer + 8) = UserBuffer[4] & 0xFFFFFFFE | (*(_DWORD *)(*((_QWORD *)DeviceExtension + 5)
                                                                                    + 28LL) >= 0x7006u);
              VideoOutputTechnology = DmmGetVideoOutputTechnology(
                                        *((_QWORD **)DeviceExtension + 504),
                                        *(_DWORD *)(v6 + 504),
                                        (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&Interval,
                                        0LL);
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( VideoOutputTechnology >= 0 )
              {
                Information = 40LL;
                *((_DWORD *)UserBuffer + 5) = Interval.LowPart;
                VideoOutputTechnology = 0;
                goto LABEL_4;
              }
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 1340;
            }
          }
          else
          {
            VideoOutputTechnology = -1073741789;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1299;
          }
        }
        else
        {
          VideoOutputTechnology = -1073741811;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1288;
        }
        goto LABEL_3;
      case 0x23242Fu:
        if ( Parameters )
        {
          if ( Options >= 4 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v6 + 484) )
              DpiCheckForOutstandingD3Requests(v6);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v6 + 168), 1u);
            VideoOutputTechnology = DpiPdoSetDevicePower(a1, Parameters->LowPart, 0);
            if ( *(_BYTE *)(v6 + 484) )
              DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
            KeLeaveCriticalRegion();
          }
          else
          {
            VideoOutputTechnology = -1073741789;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1783;
          }
        }
        else
        {
          VideoOutputTechnology = -1073741811;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1772;
        }
        goto LABEL_3;
    }
    if ( LowPart != 2303031 )
    {
      if ( LowPart == 2303043 )
      {
        if ( *((_QWORD *)DeviceExtension + 391) )
        {
          if ( Parameters )
          {
            if ( Options >= 0x10 )
            {
              if ( (unsigned int)(Parameters->HighPart - 1) > 0x3F )
              {
                VideoOutputTechnology = -1073741811;
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 1391;
              }
              else
              {
                VideoOutputTechnology = DpiAcquireCoreSyncAccessSafe(a1, 0);
                if ( VideoOutputTechnology >= 0 )
                {
                  DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)DeviceExtension + 504));
                  KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v6 + 936) + 72LL), Executive, 0, 0, 0LL);
                  DxgkAcquireAdapterDdiSync(*((_QWORD *)DeviceExtension + 504), 1);
                  if ( (unsigned int)Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline()
                    && bTracingEnabled
                    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  {
                    McTemplateK0pxqqqq_EtwWriteTransfer(
                      v27,
                      v26,
                      v28,
                      *(_QWORD *)(v6 + 48),
                      *((_QWORD *)DeviceExtension + 337),
                      *(_DWORD *)(v6 + 504),
                      *((_DWORD *)DeviceExtension + 772),
                      2303047,
                      0);
                  }
                  VideoOutputTechnology = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, union _LARGE_INTEGER))DeviceExtension
                                           + 391))(
                                            *(_QWORD *)(v6 + 48),
                                            *(unsigned int *)(v6 + 504),
                                            Parameters->LowPart,
                                            (unsigned int)Parameters->HighPart,
                                            Parameters[1]);
                  if ( (unsigned int)Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline()
                    && bTracingEnabled
                    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  {
                    LODWORD(v63) = VideoOutputTechnology;
                    LODWORD(v62) = 2303043;
                    LODWORD(v60) = *((_DWORD *)DeviceExtension + 772);
                    LODWORD(v57) = *(_DWORD *)(v6 + 504);
                    McTemplateK0pxqqqqqqbr6br7pp_EtwWriteTransfer(
                      Parameters[1].QuadPart,
                      v29,
                      v30,
                      *(_QWORD *)(v6 + 48),
                      *((_QWORD *)DeviceExtension + 337),
                      v57,
                      v60,
                      v62,
                      v63,
                      Parameters->HighPart,
                      0,
                      Parameters[1].QuadPart,
                      0LL,
                      Parameters[1].QuadPart,
                      0LL);
                  }
                  DxgkReleaseAdapterDdiSync(*((DXGADAPTER **)DeviceExtension + 504));
                  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v6 + 936) + 72LL), 0);
                  DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)DeviceExtension + 504));
                  DpiReleaseCoreSyncAccessSafe(a1, 0);
                  if ( VideoOutputTechnology < 0 )
                  {
                    WdLogSingleEntry1(3LL);
                    WdLogGlobalForLineNumber = 1446;
                  }
                }
              }
            }
            else
            {
              VideoOutputTechnology = -1073741789;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 1379;
            }
          }
          else
          {
            VideoOutputTechnology = -1073741811;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1368;
          }
        }
        goto LABEL_3;
      }
      if ( LowPart != 2303047 )
      {
        if ( LowPart == 2303107 || LowPart == 2303111 || LowPart == 2303115 || LowPart == 2303119 )
          goto LABEL_17;
LABEL_83:
        VideoOutputTechnology = DpiAcquireCoreSyncAccessSafe(a1, 0);
        if ( VideoOutputTechnology < 0 )
          goto LABEL_3;
        v31 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 504);
        v32 = *(unsigned int *)(v6 + 504);
        LODWORD(v71) = pSessionId;
        if ( v31 && (_DWORD)v32 != -1 )
        {
          if ( !DXGADAPTER::IsCoreResourceSharedOwner(v31) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2836;
          }
          if ( !*((_QWORD *)v31 + 395) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2837;
          }
          v33 = *(MONITOR_MGR **)(*((_QWORD *)v31 + 395) + 112LL);
          if ( v33 )
          {
            MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v66, 0LL);
            VideoOutputTechnology = MONITOR_MGR::_GetMonitorInstance(v33, v32, 1, (struct MONITOR_REF_ACCESSOR *)v66);
            if ( VideoOutputTechnology >= 0 )
            {
              MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR(
                (MONITOR_REF_LOCK_ACCESSOR *)v68,
                (const struct MONITOR_REF_ACCESSOR *)v66);
              VideoOutputTechnology = DXGMONITOR::_DispatchInternalIOCtrl(
                                        (DxgMonitor::MonitorDescriptorState **)v68[0],
                                        LowPart,
                                        v65,
                                        Parameters,
                                        Interval.LowPart,
                                        (char *)UserBuffer,
                                        &v64,
                                        (unsigned int)v71);
              MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v68);
              Information = v64;
            }
            else
            {
              WdLogSingleEntry2(7LL, v32, v33);
              Information = 0LL;
              WdLogGlobalForLineNumber = 2865;
            }
            MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v66);
            if ( VideoOutputTechnology == -1073741637 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1939;
              goto LABEL_94;
            }
            if ( VideoOutputTechnology >= 0
              || VideoOutputTechnology == -1073741789
              || VideoOutputTechnology == -2147483643 )
            {
              goto LABEL_94;
            }
LABEL_93:
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1947;
LABEL_94:
            DpiReleaseCoreSyncAccessSafe(a1, 0);
            goto LABEL_4;
          }
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2847;
        }
        Information = 0LL;
        VideoOutputTechnology = -1073741811;
        goto LABEL_93;
      }
      if ( *((_QWORD *)DeviceExtension + 392) )
      {
        if ( !Parameters )
        {
          VideoOutputTechnology = -1073741811;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1469;
          goto LABEL_3;
        }
        if ( Options < 8 )
        {
          VideoOutputTechnology = -1073741789;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1480;
          goto LABEL_3;
        }
        if ( !UserBuffer )
        {
          VideoOutputTechnology = -1073741811;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1491;
          goto LABEL_3;
        }
        if ( Length - 1 > 0x3F )
        {
          VideoOutputTechnology = -1073741811;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1503;
          goto LABEL_3;
        }
        VideoOutputTechnology = DpiAcquireCoreSyncAccessSafe(a1, 0);
        if ( VideoOutputTechnology >= 0 )
        {
          DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)DeviceExtension + 504));
          KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v6 + 936) + 72LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(*((_QWORD *)DeviceExtension + 504), 1);
          if ( (unsigned int)Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline()
            && bTracingEnabled
            && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            McTemplateK0pxqqqq_EtwWriteTransfer(
              v20,
              v19,
              v21,
              *(_QWORD *)(v6 + 48),
              *((_QWORD *)DeviceExtension + 337),
              *(_DWORD *)(v6 + 504),
              *((_DWORD *)DeviceExtension + 772),
              2303047,
              0);
          }
          v22 = Interval.LowPart;
          VideoOutputTechnology = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, DWORD, _QWORD *))DeviceExtension
                                   + 392))(
                                    *(_QWORD *)(v6 + 48),
                                    *(unsigned int *)(v6 + 504),
                                    Parameters->LowPart,
                                    (unsigned int)Parameters->HighPart,
                                    Interval.LowPart,
                                    UserBuffer);
          if ( (unsigned int)Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline()
            && bTracingEnabled
            && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            LODWORD(v63) = VideoOutputTechnology;
            LODWORD(v62) = 2303047;
            LODWORD(v60) = *((_DWORD *)DeviceExtension + 772);
            LODWORD(v58) = *(_DWORD *)(v6 + 504);
            McTemplateK0pxqqqqqqbr6br7pp_EtwWriteTransfer(
              v24,
              v23,
              v25,
              *(_QWORD *)(v6 + 48),
              *((_QWORD *)DeviceExtension + 337),
              v58,
              v60,
              v62,
              v63,
              0,
              v22,
              0LL,
              UserBuffer,
              0LL,
              UserBuffer);
          }
          DxgkReleaseAdapterDdiSync(*((DXGADAPTER **)DeviceExtension + 504));
          KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v6 + 936) + 72LL), 0);
          DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)DeviceExtension + 504));
          DpiReleaseCoreSyncAccessSafe(a1, 0);
          if ( VideoOutputTechnology < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1559;
            goto LABEL_3;
          }
LABEL_37:
          Information = v22;
          goto LABEL_4;
        }
      }
    }
    goto LABEL_3;
  }
  if ( LowPart == 2303127 || LowPart == 2303131 || LowPart == 2303135 || LowPart == 2303139 )
    goto LABEL_17;
  if ( LowPart == 2303195 )
  {
    VideoOutputTechnology = DpiBrightnessSetUncalibratedBrightness3Fallback(v10, *(unsigned int *)(v6 + 504));
    goto LABEL_3;
  }
  if ( LowPart != 2303199 )
  {
    if ( LowPart != 2303203 && LowPart != 2303207 && LowPart != 2303235 )
      goto LABEL_83;
    if ( !(unsigned int)Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_3;
    VideoOutputTechnology = DpiAcquireCoreSyncAccessSafe(a1, 0);
    if ( VideoOutputTechnology < 0 )
      goto LABEL_3;
    v34 = *(_DWORD *)(v6 + 504);
    v35 = (_QWORD *)*((_QWORD *)DeviceExtension + 504);
    LODWORD(v71) = 0;
    v67[0] = 0;
    VideoOutputTechnology = DmmGetSourceConnectedToTargetInClientVidPn(v35, v34, v67);
    if ( VideoOutputTechnology < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1859;
LABEL_108:
      DpiReleaseCoreSyncAccessSafe(a1, 0);
      goto LABEL_3;
    }
    VideoOutputTechnology = DmmGetCurrentWireFormatAndColorSpace(
                              *((_QWORD **)DeviceExtension + 504),
                              v67[0],
                              *(_DWORD *)(v6 + 504),
                              v66,
                              (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)&v71);
    if ( VideoOutputTechnology < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1872;
      goto LABEL_108;
    }
    if ( (_DWORD)v71 != 12 && (_DWORD)v71 != 32 )
    {
      Information = 0LL;
      if ( LowPart == 2303203 )
      {
        *(_BYTE *)UserBuffer = 0;
        VideoOutputTechnology = 0;
      }
      else
      {
        VideoOutputTechnology = -1073741637;
      }
      goto LABEL_94;
    }
    v36 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 504);
    v37 = *(unsigned int *)(v6 + 504);
    LODWORD(v71) = pSessionId;
    if ( v36 && (_DWORD)v37 != -1 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v36) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2836;
      }
      if ( !*((_QWORD *)v36 + 395) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2837;
      }
      v38 = *(MONITOR_MGR **)(*((_QWORD *)v36 + 395) + 112LL);
      if ( v38 )
      {
        MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v66, 0LL);
        VideoOutputTechnology = MONITOR_MGR::_GetMonitorInstance(v38, v37, 1, (struct MONITOR_REF_ACCESSOR *)v66);
        if ( VideoOutputTechnology >= 0 )
        {
          MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR(
            (MONITOR_REF_LOCK_ACCESSOR *)v68,
            (const struct MONITOR_REF_ACCESSOR *)v66);
          VideoOutputTechnology = DXGMONITOR::_DispatchInternalIOCtrl(
                                    (DxgMonitor::MonitorDescriptorState **)v68[0],
                                    LowPart,
                                    v65,
                                    Parameters,
                                    Interval.LowPart,
                                    (char *)UserBuffer,
                                    &v64,
                                    (unsigned int)v71);
          MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v68);
          MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v66);
          Information = v64;
          goto LABEL_94;
        }
        WdLogSingleEntry2(7LL, v37, v38);
        WdLogGlobalForLineNumber = 2865;
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v66);
        goto LABEL_125;
      }
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2847;
    }
    VideoOutputTechnology = -1073741811;
LABEL_125:
    Information = 0LL;
    goto LABEL_94;
  }
  if ( (unsigned int)Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline()
    && *((_DWORD *)DeviceExtension + 772) == 2 )
  {
    v39 = *((_QWORD *)DeviceExtension + 393) == 0LL;
  }
  else
  {
    if ( !*((_QWORD *)DeviceExtension + 392) )
      goto LABEL_3;
    v39 = *((_QWORD *)DeviceExtension + 391) == 0LL;
  }
  if ( !v39 )
  {
    if ( !Parameters )
    {
      VideoOutputTechnology = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1592;
      goto LABEL_3;
    }
    if ( v65 < 0x20 )
    {
      VideoOutputTechnology = -1073741789;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1600;
      goto LABEL_3;
    }
    if ( !UserBuffer )
    {
      VideoOutputTechnology = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1608;
      goto LABEL_3;
    }
    v22 = Interval.LowPart;
    if ( Interval.LowPart - 1 > 0x3F )
    {
      VideoOutputTechnology = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1616;
      goto LABEL_3;
    }
    if ( (unsigned int)(Parameters->HighPart - 1) > 0x3F )
    {
      VideoOutputTechnology = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1624;
      goto LABEL_3;
    }
    VideoOutputTechnology = DpiAcquireCoreSyncAccessSafe(a1, 0);
    if ( VideoOutputTechnology >= 0 )
    {
      DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)DeviceExtension + 504));
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v6 + 936) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*((_QWORD *)DeviceExtension + 504), 1);
      if ( (unsigned int)Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline()
        && bTracingEnabled
        && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        McTemplateK0pxqqqq_EtwWriteTransfer(
          v41,
          v40,
          v42,
          *(_QWORD *)(v6 + 48),
          *((_QWORD *)DeviceExtension + 337),
          *(_DWORD *)(v6 + 504),
          *((_DWORD *)DeviceExtension + 772),
          2303199,
          0);
      }
      if ( (unsigned int)Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline()
        && (v39 = *((_DWORD *)DeviceExtension + 772) == 2, v71 = DeviceExtension + 3088, v39) )
      {
        v43 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, PLARGE_INTEGER, DWORD, LONG, _DWORD, _QWORD *))*((_QWORD *)DeviceExtension + 393);
        HighPart = (unsigned int)Parameters->HighPart;
        v61 = Parameters[2].HighPart;
        v59 = Parameters[2].LowPart;
        Timeout = (PLARGE_INTEGER)Parameters[1].QuadPart;
        v45 = *(_QWORD *)(v6 + 48);
        Interval.QuadPart = (LONGLONG)&Parameters[1];
        v46 = Parameters->LowPart;
        v64 = v6 + 504;
        v47 = *(unsigned int *)(v6 + 504);
        *(_QWORD *)&v66[0].0 = v6 + 48;
        VideoOutputTechnology = v43(v45, v47, v46, HighPart, Timeout, v59, v61, v22, UserBuffer);
      }
      else
      {
        v48 = (unsigned int)Parameters->HighPart;
        v49 = Parameters->LowPart;
        *(_QWORD *)v67 = DeviceExtension + 3088;
        v50 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, PLARGE_INTEGER))*((_QWORD *)DeviceExtension
                                                                                          + 391);
        Interval.QuadPart = (LONGLONG)&Parameters[1];
        Timeouta = (PLARGE_INTEGER)Parameters[1].QuadPart;
        v51 = *(_QWORD *)(v6 + 48);
        v64 = v6 + 504;
        v52 = *(unsigned int *)(v6 + 504);
        *(_QWORD *)&v66[0].0 = v6 + 48;
        VideoOutputTechnology = v50(v51, v52, v49, v48, Timeouta);
        v71 = DeviceExtension + 3088;
        if ( VideoOutputTechnology >= 0 )
        {
          if ( (unsigned int)Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline() )
          {
            Interval = Parameters[3];
            VideoOutputTechnology = KeDelayExecutionThread(0, 0, &Interval);
            if ( VideoOutputTechnology < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1693;
              goto LABEL_3;
            }
          }
          VideoOutputTechnology = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD *))DeviceExtension
                                   + 392))(
                                    *(_QWORD *)(v6 + 48),
                                    *(unsigned int *)(v6 + 504),
                                    Parameters[2].LowPart,
                                    (unsigned int)Parameters[2].HighPart,
                                    v22,
                                    UserBuffer);
          v71 = *(_DWORD **)v67;
          Interval.QuadPart = (LONGLONG)&Parameters[1];
          v64 = v6 + 504;
          *(_QWORD *)&v66[0].0 = v6 + 48;
        }
      }
      if ( (unsigned int)Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline()
        && bTracingEnabled
        && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v63) = VideoOutputTechnology;
        LODWORD(v62) = 2303199;
        LODWORD(v60) = *v71;
        LODWORD(v57) = *(_DWORD *)v64;
        McTemplateK0pxqqqqqqbr6br7pp_EtwWriteTransfer(
          *(__int64 *)&v66[0].0,
          v53,
          v54,
          **(_QWORD **)&v66[0].0,
          *((_QWORD *)DeviceExtension + 337),
          v57,
          v60,
          v62,
          v63,
          Parameters->HighPart,
          v22,
          *(_QWORD *)Interval.QuadPart,
          UserBuffer,
          *(_QWORD *)Interval.QuadPart,
          UserBuffer);
      }
      DxgkReleaseAdapterDdiSync(*((DXGADAPTER **)DeviceExtension + 504));
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v6 + 936) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)DeviceExtension + 504));
      DpiReleaseCoreSyncAccessSafe(a1, 0);
      if ( VideoOutputTechnology < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1728;
        goto LABEL_3;
      }
      goto LABEL_37;
    }
  }
LABEL_3:
  Information = 0LL;
LABEL_4:
  v16 = Irp;
LABEL_5:
  v16->IoStatus.Status = VideoOutputTechnology;
  v16->IoStatus.Information = Information;
  IofCompleteRequest(v16, 1);
  return (unsigned int)VideoOutputTechnology;
}

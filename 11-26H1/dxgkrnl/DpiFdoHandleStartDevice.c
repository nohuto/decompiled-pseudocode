/*
 * XREFs of DpiFdoHandleStartDevice @ 0x1402424B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiFdoIsPostDevice @ 0x140056A38 (DpiFdoIsPostDevice.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400624D8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     DpiFdoIsMdmDeviceAndOwnsMux @ 0x1400905B8 (DpiFdoIsMdmDeviceAndOwnsMux.c)
 *     WindowsQueryLicenseDWORD @ 0x1400A0A90 (WindowsQueryLicenseDWORD.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     DpiDetermineResourceListSize @ 0x14024B078 (DpiDetermineResourceListSize.c)
 *     DpiFilterOutVgaResources @ 0x14024B83C (DpiFilterOutVgaResources.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     DpiReadPnpRegistryValue @ 0x1403914A0 (DpiReadPnpRegistryValue.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403EF980 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall DpiFdoHandleStartDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int *DeviceExtension; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v6; // rcx
  int v7; // esi
  ULONG_PTR v8; // r8
  bool v9; // r15
  int v10; // esi
  PIO_SECURITY_CONTEXT SecurityContext; // rdx
  __int64 v13; // r9
  struct _UNICODE_STRING *v14; // rax
  __int64 v15; // rcx
  __int64 Status; // rax
  PUNICODE_STRING v17; // rcx
  size_t v18; // r12
  void *Pool2; // rax
  unsigned int v20; // eax
  _WORD *StartContext; // r14
  bool v22; // zf
  int v23; // eax
  void *v24; // rdx
  PIRP v25; // rax
  void *v26; // rdx
  PIRP v27; // rax
  unsigned int v29; // eax
  void *v30; // rcx
  char v31; // [rsp+40h] [rbp-D8h]
  int v32; // [rsp+44h] [rbp-D4h] BYREF
  size_t Size; // [rsp+48h] [rbp-D0h] BYREF
  struct _UNICODE_STRING *v34; // [rsp+50h] [rbp-C8h] BYREF
  ULONG_PTR v35; // [rsp+58h] [rbp-C0h]
  struct _UNICODE_STRING *FileName; // [rsp+60h] [rbp-B8h]
  __int64 v37; // [rsp+70h] [rbp-A8h] BYREF
  int v38; // [rsp+78h] [rbp-A0h]
  const wchar_t *v39; // [rsp+80h] [rbp-98h]
  int *v40; // [rsp+88h] [rbp-90h]
  int v41; // [rsp+90h] [rbp-88h]
  int *v42; // [rsp+98h] [rbp-80h]
  int v43; // [rsp+A0h] [rbp-78h]
  __int64 v44; // [rsp+A8h] [rbp-70h]
  int v45; // [rsp+B0h] [rbp-68h]
  __int64 v46; // [rsp+B8h] [rbp-60h]
  __int128 v47; // [rsp+C0h] [rbp-58h]
  __int128 v48; // [rsp+D0h] [rbp-48h]
  void *ThreadHandle; // [rsp+130h] [rbp+18h] BYREF
  ULONG_PTR v51; // [rsp+138h] [rbp+20h] BYREF

  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  LOBYTE(ThreadHandle) = 0;
  v31 = 0;
  v35 = 0LL;
  FileName = 0LL;
  LODWORD(Size) = 0;
  LODWORD(v51) = 0;
  AcquireMiniportListMutex();
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( (int)WindowsQueryLicenseDWORD(v6, &v51) < 0 )
  {
    v7 = 1;
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 7318;
  }
  else
  {
    v7 = v51;
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 7305;
  }
  v32 = 1;
  v37 = 0LL;
  v44 = 0LL;
  v39 = L"MultiMonSupport";
  v45 = 0;
  v46 = 0LL;
  v40 = &v32;
  v42 = &v32;
  v38 = 288;
  v41 = 67108868;
  v43 = 4;
  v47 = 0LL;
  v48 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v37, 0LL, 0LL);
  v8 = 0LL;
  if ( !v32 )
    v7 = 0;
  if ( !v7
    && DeviceExtension[4] == 1953656900
    && DeviceExtension[5] == 2
    && !DpiFdoIsPostDevice((__int64)DeviceObject)
    && *((_BYTE *)DeviceExtension + 480) == (_BYTE)v8 )
  {
    v9 = 1;
    v10 = -1071774664;
    WdLogSingleEntry1((unsigned int)(v8 + 3));
    WdLogGlobalForLineNumber = 7365;
LABEL_96:
    if ( DeviceExtension[59] == 1 )
    {
      v29 = DeviceExtension[60];
      --DeviceExtension[69];
      DeviceExtension[59] = v29;
      DeviceExtension[60] = DeviceExtension[(DeviceExtension[69] & 7) + 61];
    }
    v30 = (void *)*((_QWORD *)DeviceExtension + 164);
    if ( v30 )
    {
      ExFreePoolWithTag(v30, 0);
      *((_QWORD *)DeviceExtension + 164) = 0LL;
    }
    if ( !v9 )
      DxgCreateLiveDumpWithWdLogs(403LL, 2050LL);
    goto LABEL_88;
  }
  if ( *((_BYTE *)DeviceExtension + 1158) != (_BYTE)v8 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_1401693E8);
    if ( !dword_140169420++ )
      KeClearEvent(&stru_140169428);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_1401693E8);
    v8 = 0LL;
    v31 = 1;
  }
  DeviceExtension[678] = v7;
  if ( *((_BYTE *)DeviceExtension + 1155) == 1 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    v51 = v8;
    v34 = (struct _UNICODE_STRING *)v8;
    if ( SecurityContext )
    {
      FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
      v35 = (ULONG_PTR)SecurityContext;
      DpiFilterOutVgaResources(DeviceExtension, SecurityContext, &v51, 0LL);
      LOBYTE(v13) = 1;
      DpiFilterOutVgaResources(DeviceExtension, CurrentStackLocation->Parameters.QueryDirectory.FileName, &v34, v13);
      if ( v51 )
      {
        v14 = v34;
        if ( v34 )
        {
          CurrentStackLocation->Parameters.WMI.ProviderId = v51;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = v14;
          LOBYTE(ThreadHandle) = 1;
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 7433;
    }
  }
  if ( !DpiFdoIsPostDevice((__int64)DeviceObject) && DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
  {
    LODWORD(v51) = 0;
    if ( (int)DpiReadPnpRegistryValue(v15, L"DisableNonPOSTDevice", &v51, 4LL, 2) >= 0 )
    {
      if ( (_DWORD)v51 )
      {
        v10 = -1073741823;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 7482;
LABEL_36:
        v9 = 0;
        goto LABEL_96;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 7469;
    }
  }
  IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  Status = Irp->IoStatus.Status;
  v10 = Status;
  if ( (int)Status < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      DeviceExtension[136],
      Status,
      DeviceExtension[281],
      DeviceExtension[282],
      *(_QWORD *)(*((_QWORD *)DeviceExtension + 5) + 152LL));
    WdLogGlobalForLineNumber = 7507;
    v9 = v10 == -1073741810
      && *(_BYTE *)(*((_QWORD *)DeviceExtension + 5) + 134LL)
      && RtlCompareMemory(DeviceExtension + 136, &GUID_BUS_TYPE_USB, 0x10uLL) == 16;
    goto LABEL_96;
  }
  v17 = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  if ( v17 )
  {
    DpiDetermineResourceListSize(v17, &Size);
    v18 = (unsigned int)Size;
    Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)Size, 1953656900LL);
    *((_QWORD *)DeviceExtension + 164) = Pool2;
    if ( !Pool2 )
    {
      v10 = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 7553;
      goto LABEL_36;
    }
    memmove(Pool2, CurrentStackLocation->Parameters.QueryDirectory.FileName, v18);
    if ( (_BYTE)ThreadHandle == 1 )
    {
      ExFreePoolWithTag(CurrentStackLocation->Parameters.Create.SecurityContext, 0);
      ExFreePoolWithTag(CurrentStackLocation->Parameters.QueryDirectory.FileName, 0);
      CurrentStackLocation->Parameters.WMI.ProviderId = v35;
      CurrentStackLocation->Parameters.QueryDirectory.FileName = FileName;
    }
  }
  DeviceExtension[(DeviceExtension[69] & 7) + 61] = DeviceExtension[60];
  v20 = DeviceExtension[59];
  ++DeviceExtension[69];
  DeviceExtension[60] = v20;
  DeviceExtension[59] = 1;
  if ( DeviceExtension[4] != 1953656900 || DeviceExtension[5] != 2 )
  {
LABEL_47:
    if ( !(_BYTE)word_140168E20 )
      goto LABEL_50;
    goto LABEL_48;
  }
  if ( !*((_BYTE *)DeviceExtension + 2717) )
  {
    HIBYTE(word_140168E20) = 1;
    goto LABEL_47;
  }
  LOBYTE(word_140168E20) = 1;
LABEL_48:
  if ( HIBYTE(word_140168E20) )
    KeSetEvent(&stru_140168E28, 0, 0);
LABEL_50:
  LOBYTE(ThreadHandle) = 0;
  LOBYTE(v51) = 0;
  if ( !*((_BYTE *)DeviceExtension + 2716)
    && (int)DpiFdoIsMdmDeviceAndOwnsMux(
              (__int64)DeviceObject,
              (unsigned __int8 *)&ThreadHandle,
              (unsigned __int8 *)&v51) >= 0
    && (_BYTE)ThreadHandle )
  {
    if ( !(_BYTE)v51 )
      goto LABEL_64;
    goto LABEL_60;
  }
  if ( !qword_140169128 )
  {
    if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
    {
      if ( DpiFdoIsPostDevice((__int64)DeviceObject) || *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL) )
LABEL_60:
        qword_140169128 = (__int64)DeviceObject;
    }
    else if ( *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL) && *((_QWORD *)DeviceExtension + 354) )
    {
      qword_140169128 = *((_QWORD *)DeviceExtension + 354);
    }
  }
LABEL_64:
  if ( !*((_BYTE *)DeviceExtension + 480)
    && *((_BYTE *)DeviceExtension + 1153)
    && !DpiFdoIsMsBddAnchoredDevice((__int64)DeviceObject) )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 7684;
    v9 = 1;
    v10 = -1071774664;
    goto LABEL_96;
  }
  if ( byte_140168E22 && !*((_BYTE *)DeviceExtension + 1158) )
  {
    ThreadHandle = 0LL;
    StartContext = (_WORD *)ExAllocatePool2(256LL, 1552LL, 1953656900LL);
    if ( !StartContext )
    {
      v10 = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 7728;
LABEL_72:
      v9 = 0;
      goto LABEL_96;
    }
    if ( *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL)
      || (v22 = !DpiFdoIsMsBddAnchoredDevice((__int64)DeviceObject), v23 = 0, !v22) )
    {
      v23 = 2;
    }
    *(_DWORD *)StartContext = v23;
    StartContext[2] = 0;
    *((_DWORD *)StartContext + 131) = 0;
    v10 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiFdoStartAdapterThread, StartContext);
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 7759;
      ExFreePoolWithTag(StartContext, 0x74727044u);
      goto LABEL_72;
    }
    ZwClose(ThreadHandle);
  }
  DeviceExtension[71] = 1;
  DeviceExtension[70] = 1;
  PoSetPowerState(DeviceObject, DevicePowerState, (POWER_STATE)1);
  v9 = 0;
  if ( v10 < 0 )
    goto LABEL_96;
  if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
  {
    v24 = (void *)*((_QWORD *)DeviceExtension + 686);
    if ( v24 )
    {
      v25 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 1350), v24);
      *((_QWORD *)DeviceExtension + 686) = 0LL;
      if ( v25 )
      {
        *((_BYTE *)DeviceExtension + 5516) = 1;
        v25->IoStatus.Status = 0;
        v25->IoStatus.Information = 0LL;
        IofCompleteRequest(v25, 0);
        IoInvalidateDeviceState(*((PDEVICE_OBJECT *)DeviceExtension + 19));
      }
    }
    v26 = (void *)*((_QWORD *)DeviceExtension + 690);
    if ( v26 )
    {
      v27 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 1350), v26);
      *((_QWORD *)DeviceExtension + 690) = 0LL;
      if ( v27 )
      {
        *((_BYTE *)DeviceExtension + 5548) = 1;
        v27->IoStatus.Status = 0;
        v27->IoStatus.Information = 0LL;
        IofCompleteRequest(v27, 0);
      }
    }
  }
LABEL_88:
  if ( v31 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_1401693E8);
    if ( !--dword_140169420 )
      KeSetEvent(&stru_140169428, 0, 0);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_1401693E8);
  }
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  ReleaseMiniportListMutex();
  Irp->IoStatus.Status = v10;
  IofCompleteRequest(Irp, 1);
  return (unsigned int)v10;
}

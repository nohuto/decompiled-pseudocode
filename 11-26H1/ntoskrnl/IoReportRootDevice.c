/*
 * XREFs of IoReportRootDevice @ 0x1407A15F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     IopGetRootDeviceId @ 0x1407A1A44 (IopGetRootDeviceId.c)
 *     _CmDeleteDevice @ 0x14089CD0C (_CmDeleteDevice.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     _CmSetDeviceRegProp @ 0x1409AC6A0 (_CmSetDeviceRegProp.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1409B4D20 (PnpCleanupDeviceRegistryValues.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 *     _CmCreateDevice @ 0x140AF540C (_CmCreateDevice.c)
 */

NTSTATUS __stdcall IoReportRootDevice(PDRIVER_OBJECT DriverObject)
{
  PDRIVER_EXTENSION DriverExtension; // r15
  void *v3; // rdi
  NTSTATUS result; // eax
  __int64 v5; // rdx
  int appended; // ebx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v8; // rcx
  __int16 v9; // si
  int Device; // eax
  char v11; // si
  int v12; // r8d
  wchar_t *pszFormat; // [rsp+30h] [rbp-D8h]
  unsigned int v14; // [rsp+38h] [rbp-D0h]
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING SourceString; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+88h] [rbp-80h] BYREF
  void *v20; // [rsp+90h] [rbp-78h] BYREF
  PVOID P[2]; // [rsp+98h] [rbp-70h] BYREF
  _WORD v22[200]; // [rsp+A8h] [rbp-60h] BYREF
  char v23; // [rsp+238h] [rbp+130h] BYREF

  DriverExtension = DriverObject->DriverExtension;
  SourceString.Buffer = v22;
  *(_QWORD *)&DestinationString.Length = 26345472LL;
  *(_QWORD *)&SourceString.Length = 26214400LL;
  LODWORD(v17) = 0;
  LOWORD(v15) = 0;
  v3 = 0LL;
  v20 = 0LL;
  DestinationString.Buffer = (wchar_t *)&v23;
  P[0] = 0LL;
  result = IopGetRootDeviceId(&DriverExtension->ServiceKeyName, &SourceString);
  if ( result < 0 )
    return result;
  if ( SourceString.Length > 0x18Eu )
    return -1073741773;
  RtlCopyUnicodeString(&DestinationString, &SourceString);
  appended = PiPnpRtlBeginOperation(P, v5);
  if ( appended >= 0 )
  {
    PpDevNodeLockTree(1LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    appended = RtlAppendUnicodeToString(&SourceString, L"\\");
    if ( appended >= 0 )
    {
      ppszDestEnd = &v22[(unsigned __int64)SourceString.Length >> 1];
      RtlStringCchPrintfExW(
        ppszDestEnd,
        (400 - (unsigned __int64)SourceString.Length) >> 1,
        &ppszDestEnd,
        0LL,
        0,
        L"%04u",
        0LL);
      v8 = &ppszDestEnd[-((unsigned __int64)SourceString.Length >> 1)] - v22;
      if ( (_DWORD)v8 == -1 )
        v9 = 400 - SourceString.Length;
      else
        v9 = 2 * v8;
      SourceString.Length += v9;
      Device = CmCreateDevice(PiPnpRtlCtx, SourceString.Buffer, 983103, (unsigned int)&v20, (__int64)&v15, 0);
      v11 = v15;
      appended = Device;
      v3 = v20;
      if ( Device < 0 )
        goto LABEL_16;
      if ( (_BYTE)v15 )
      {
        v12 = (int)v20;
        v14 = DestinationString.Length + 4;
        pszFormat = DestinationString.Buffer;
        *(_DWORD *)&DestinationString.Buffer[((unsigned __int64)v14 >> 1) - 2] = 0;
        appended = CmSetDeviceRegProp(PiPnpRtlCtx, SourceString.Buffer, v12, 2, 7, (__int64)pszFormat, v14, 0);
        if ( appended >= 0 )
        {
          LODWORD(v17) = 32;
          appended = CmSetDeviceRegProp(PiPnpRtlCtx, SourceString.Buffer, (_DWORD)v3, 11, 4, (__int64)&v17, 4, 0);
          if ( appended >= 0 )
          {
            BYTE1(v15) = -1;
            appended = PnpSetObjectProperty(
                         PiPnpRtlCtx,
                         SourceString.Buffer,
                         1,
                         0LL,
                         (__int64)&DEVPKEY_Device_Reported,
                         17,
                         (__int64)&v15 + 1,
                         1,
                         0);
            if ( appended >= 0 )
            {
              appended = CmSetDeviceRegProp(
                           PiPnpRtlCtx,
                           SourceString.Buffer,
                           (_DWORD)v3,
                           5,
                           1,
                           (__int64)DriverExtension->ServiceKeyName.Buffer,
                           (unsigned int)DriverExtension->ServiceKeyName.Length + 2,
                           0);
              if ( appended >= 0 )
              {
                DriverObject->Flags |= 0x800u;
                PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 8u, 0, 0LL, 0LL, 0LL, 0LL);
                goto LABEL_18;
              }
            }
          }
        }
LABEL_16:
        if ( v11 )
        {
          CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, SourceString.Buffer, 0LL);
          PnpCleanupDeviceRegistryValues(&SourceString);
        }
      }
    }
  }
LABEL_18:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  PpDevNodeUnlockTree(1LL);
  if ( v3 )
    ZwClose(v3);
  if ( P[0] )
    PiPnpRtlEndOperation(P[0]);
  return appended;
}

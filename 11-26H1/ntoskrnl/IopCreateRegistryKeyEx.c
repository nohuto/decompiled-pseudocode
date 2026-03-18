/*
 * XREFs of IopCreateRegistryKeyEx @ 0x140AF90BC
 * Callers:
 *     IoSetSystemPartition @ 0x140796AD0 (IoSetSystemPartition.c)
 *     PipHardwareConfigTriggerRespecialize @ 0x14079BAB4 (PipHardwareConfigTriggerRespecialize.c)
 *     NtDisableLastKnownGood @ 0x1408A6AA0 (NtDisableLastKnownGood.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1409880EC (PiDevCfgConfigureSoftwareDevices.c)
 *     PipOpenServiceEnumKeys @ 0x140A12308 (PipOpenServiceEnumKeys.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140AF8694 (IopCreateSecureDeviceClassSettings.c)
 *     IopUpdateSecureDeviceClassState @ 0x140AF8840 (IopUpdateSecureDeviceClassState.c)
 *     IopWriteResourceList @ 0x140AF8FD4 (IopWriteResourceList.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140B3E4A0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x140CBE34C (IopStoreSystemPartitionInformation.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     PiInitFirmwareResources @ 0x140CC1048 (PiInitFirmwareResources.c)
 *     PipHardwareConfigInit @ 0x140CC1BEC (PipHardwareConfigInit.c)
 *     IoReportHalResourceUsage @ 0x140CC4140 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x140CC4328 (IopInitializeResourceMap.c)
 *     PnpOpenCCSPnpRegKey @ 0x140CC46EC (PnpOpenCCSPnpRegKey.c)
 *     PipInitComputerIds @ 0x140D056B0 (PipInitComputerIds.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 */

__int64 __fastcall IopCreateRegistryKeyEx(
        _QWORD *a1,
        void *a2,
        UNICODE_STRING *a3,
        ACCESS_MASK a4,
        ULONG CreateOptions,
        ULONG *a6)
{
  _QWORD *v6; // rsi
  __int64 v8; // r15
  __int64 v10; // r12
  NTSTATUS v11; // ebx
  wchar_t *Buffer; // rsi
  unsigned int v14; // r13d
  wchar_t *v15; // r14
  __int64 v16; // rcx
  wchar_t *v17; // rdi
  char v18; // al
  HANDLE Handle[2]; // [rsp+48h] [rbp-51h] BYREF
  __int128 v20; // [rsp+58h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-31h] BYREF
  char v23; // [rsp+F8h] [rbp+5Fh]
  ULONG Disposition; // [rsp+100h] [rbp+67h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+108h] [rbp+6Fh]

  DesiredAccess = a4;
  v6 = a1;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = a3;
  Disposition = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *a1 = 0LL;
  LODWORD(v8) = 1;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  LODWORD(v10) = 0;
  *(_OWORD *)Handle = 0LL;
  v20 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwCreateKey(&Handle[1], a4, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
  if ( v11 == -1073741772 )
  {
    if ( !a2 )
      return (unsigned int)v11;
    Buffer = a3->Buffer;
    v14 = 0;
    v15 = (wchar_t *)((char *)Buffer + a3->Length);
    Handle[0] = 0LL;
    Handle[1] = a2;
    v23 = 1;
    while ( 1 )
    {
      if ( v14 > 1 )
        ZwClose(Handle[(unsigned int)v10]);
      v16 = (unsigned int)v8;
      v17 = Buffer;
      v8 = ((_BYTE)v8 - 1) & 1;
      for ( Handle[v8] = 0LL; v17 < v15; ++v17 )
      {
        if ( *v17 == 92 )
          break;
      }
      v10 = v16;
      if ( (_DWORD)v17 == (_DWORD)Buffer )
        break;
      WORD1(v20) = (_WORD)v17 - (_WORD)Buffer;
      LOWORD(v20) = (_WORD)v17 - (_WORD)Buffer;
      ObjectAttributes.RootDirectory = Handle[v16];
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
      *((_QWORD *)&v20 + 1) = Buffer;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = ZwCreateKey(&Handle[v8], DesiredAccess, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
      if ( v11 >= 0 )
      {
        ++v14;
        if ( v17 == v15 || (Buffer = v17 + 1, v17 + 1 == v15) )
          v18 = 0;
        else
          v18 = v23;
        v23 = v18;
        if ( v18 )
          continue;
      }
      goto LABEL_22;
    }
    v11 = -1073741811;
LABEL_22:
    if ( v14 > 1 )
      ZwClose(Handle[v10]);
    v6 = a1;
  }
  if ( v11 >= 0 )
  {
    *v6 = Handle[(unsigned int)v8];
    if ( a6 )
      *a6 = Disposition;
  }
  return (unsigned int)v11;
}

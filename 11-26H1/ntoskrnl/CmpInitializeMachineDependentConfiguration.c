/*
 * XREFs of CmpInitializeMachineDependentConfiguration @ 0x140CF3188
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140344B6C (HalpAcpiGetTable.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __report_rangecheckfailure @ 0x1405246B0 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwOpenSection @ 0x1407286A0 (ZwOpenSection.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14085A110 (CmpAddProcessorConfigurationEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpInitializeSystemBiosInformation @ 0x140CF1840 (CmpInitializeSystemBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140CF371C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140CF3AB4 (CmpSetVideoBiosInformation.c)
 */

NTSTATUS __fastcall CmpInitializeMachineDependentConfiguration(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r14d
  unsigned int v3; // ecx
  unsigned __int64 v4; // rax
  NTSTATUS result; // eax
  int v6; // edi
  __int64 v7; // rbx
  unsigned int v8; // ecx
  unsigned int SecondLevelCacheSize; // r9d
  unsigned __int8 *v10; // rax
  int v11; // ecx
  int v12; // edx
  bool v13; // zf
  int Blink; // ebx
  __int64 Table; // rax
  HANDLE Handle; // [rsp+40h] [rbp-F8h] BYREF
  ULONG Disposition; // [rsp+48h] [rbp-F0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-E8h] BYREF
  HANDLE SectionHandle; // [rsp+58h] [rbp-E0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-A8h] BYREF
  int Data; // [rsp+A0h] [rbp-98h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-80h]
  UNICODE_STRING v25; // [rsp+C0h] [rbp-78h] BYREF
  UNICODE_STRING v26; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-58h] BYREF
  int v28; // [rsp+E8h] [rbp-50h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+F0h] [rbp-48h] BYREF

  v24 = a1;
  v27 = 0LL;
  v28 = 0;
  memset(&ObjectAttributes, 0, 44);
  v1 = a1;
  v2 = 0;
  v25 = 0LL;
  Disposition = 0;
  Handle = 0LL;
  v3 = 0;
  KeyHandle = 0LL;
  v26 = 0LL;
  SectionHandle = 0LL;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  DestinationString = 0LL;
  while ( v3 < 0x2A )
  {
    v4 = 2LL * v3;
    if ( v4 >= 0x54 )
      _report_rangecheckfailure();
    *(_WORD *)((char *)&CmpDeviceIndexTable + v4) = 0;
    ++v3;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspSiloMonitorLock.IptSaveArea;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
  {
    Data = 1;
    RtlInitUnicodeString(&DestinationString, L"PhysicalAddressExtension");
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspSiloMonitorLock.SavedApcStateFill[32];
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&v25, L"CentralProcessor");
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v25;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    ZwClose(KeyHandle);
    if ( Disposition == 1 )
    {
      CmpConfigurationData = (PVOID)ExAllocatePool2(256LL, (unsigned int)CmpConfigurationAreaSize, 0x20204D43u);
      v6 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        while ( 1 )
        {
          v7 = KiProcessorBlock[v6];
          v8 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + *(unsigned int *)(v7 + 36));
          Affinity.Reserved[1] = 0;
          Affinity.Reserved[2] = 0;
          *(_DWORD *)&Affinity.Group = (unsigned __int16)(v8 >> 6);
          Affinity.Mask = 1LL << v8;
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          CmpAddProcessorConfigurationEntry(v7, v6, (int)Handle);
          SecondLevelCacheSize = KeGetPcr()->SecondLevelCacheSize;
          if ( v6 )
          {
            if ( *(_BYTE *)(v7 + 65) )
            {
              v10 = (unsigned __int8 *)(v7 + 36816);
              do
              {
                v11 = v10[KiProcessorBlock[0] - v7];
                v12 = *v10 - v11;
                if ( v12 )
                  break;
                ++v10;
              }
              while ( v11 );
              if ( v12 )
                CmProcessorMismatch |= 1u;
              if ( SecondLevelCacheSize != v2 )
                CmProcessorMismatch |= 4u;
              if ( *(_BYTE *)(v7 + 64) != *(_BYTE *)(KiProcessorBlock[0] + 64) )
              {
LABEL_25:
                CmProcessorMismatch |= 2u;
                goto LABEL_26;
              }
              v13 = *(_WORD *)(v7 + 66) == *(_WORD *)(KiProcessorBlock[0] + 66);
            }
            else
            {
              v13 = *(_BYTE *)(KiProcessorBlock[0] + 65) == 0;
            }
            if ( !v13 )
              goto LABEL_25;
          }
          else
          {
            v2 = SecondLevelCacheSize;
          }
LABEL_26:
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
          if ( ++v6 >= (unsigned int)KeNumberProcessors_0 )
          {
            v1 = v24;
            break;
          }
        }
      }
      if ( CmpConfigurationData )
      {
        ExFreePoolWithTag(CmpConfigurationData, 0);
        CmpConfigurationData = 0LL;
      }
    }
    RtlInitUnicodeString(&v26, L"\\Device\\PhysicalMemory");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v26;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes) >= 0 )
    {
      Blink = (int)ExpSysDbgLock.ThreadListEntry.Blink;
      if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) == 1 )
        CmpSetSystemBiosInformation(v1, SectionHandle, Handle);
      else
        CmpInitializeSystemBiosInformation(v1);
      Table = HalpAcpiGetTable(v1, 1346584902, 0, 0);
      if ( Table )
      {
        if ( *(_BYTE *)(Table + 8) > 1u )
        {
          LODWORD(v27) = *(unsigned __int16 *)(Table + 109);
          v28 = *(_DWORD *)(Table + 112);
          HIDWORD(v27) = *(unsigned __int8 *)(Table + 45);
          if ( *(_BYTE *)(Table + 8) > 1u )
          {
            RtlInitUnicodeString(&DestinationString, L"BootArchitecture");
            ZwSetValueKey(Handle, &DestinationString, 0, 4u, &v27, 4u);
            RtlInitUnicodeString(&DestinationString, L"PreferredProfile");
            ZwSetValueKey(Handle, &DestinationString, 0, 4u, (char *)&v27 + 4, 4u);
            RtlInitUnicodeString(&DestinationString, L"Capabilities");
            ZwSetValueKey(Handle, &DestinationString, 0, 4u, &v28, 4u);
          }
        }
      }
      if ( Blink == 1 )
        CmpSetVideoBiosInformation(SectionHandle, Handle);
      ZwClose(SectionHandle);
    }
    ZwClose(Handle);
    return 0;
  }
  return result;
}

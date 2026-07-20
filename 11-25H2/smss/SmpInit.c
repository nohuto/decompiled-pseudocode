/*
 * XREFs of SmpInit @ 0x1400150FC
 * Callers:
 *     wmain @ 0x140001510 (wmain.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmpCreateSecurityDescriptors @ 0x14000B8C0 (SmpCreateSecurityDescriptors.c)
 *     InitializeWow64OnBoot @ 0x14000CB90 (InitializeWow64OnBoot.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpInitializePendingRename @ 0x14000DCC0 (SmpInitializePendingRename.c)
 *     SmpInitializeKnownSubSystems @ 0x14000E340 (SmpInitializeKnownSubSystems.c)
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 SmpInit()
{
  NTSTATUS v0; // eax
  int SecurityDescriptors; // edi
  int v2; // edx
  NTSTATUS v4; // eax
  void *v5; // rax
  NTSTATUS v6; // eax
  _BYTE *Heap; // rax
  _BYTE *v8; // rdi
  NTSTATUS v9; // esi
  void *v10; // rcx
  int v11; // eax
  NTSTATUS v12; // eax
  unsigned int v13; // ecx
  ULONG i; // edi
  NTSTATUS v15; // eax
  int v16; // esi
  ULONG ReturnLength[2]; // [rsp+28h] [rbp-E0h] BYREF
  void *EventHandle; // [rsp+30h] [rbp-D8h] BYREF
  __int64 ProcessInformation; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  const wchar_t *v21; // [rsp+48h] [rbp-C0h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v23[3]; // [rsp+80h] [rbp-88h] BYREF
  _DWORD SystemInformation[260]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v25[4]; // [rsp+4A8h] [rbp+3A0h] BYREF
  __int64 v26; // [rsp+4B8h] [rbp+3B0h]
  __int64 v27; // [rsp+4C8h] [rbp+3C0h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset_0(SystemInformation, 0, 0x408uLL);
  ReturnLength[0] = 0;
  v23[1] = L"\\SmApiPort";
  EventHandle = 0LL;
  v21 = L"\\Device\\VolumesSafeForWriteAccess";
  v23[0] = 1441812LL;
  v20 = 4456514LL;
  SmpInitSaveGlobals = (__int64)&SmpInitLastCall;
  SmBaseTag = RtlCreateTagHeap(
                *(HANDLE *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                0,
                (PWSTR)L"SMSS!",
                (PWSTR)L"INIT");
  v0 = NtQuerySystemInformation(SystemBasicInformation, &SmpSystemInfo, 0x40u, 0LL);
  SecurityDescriptors = v0;
  if ( v0 < 0 )
  {
    v2 = 1722;
    SmpInitProgressByLine = 1720;
    SmpInitReturnStatus = v0;
    SmpInitLastCall = (__int64)NtQuerySystemInformation;
LABEL_3:
    SmpLogFailure((__int64)"SmpInit", v2, SecurityDescriptors);
    return (unsigned int)SecurityDescriptors;
  }
  v4 = NtQuerySystemInformation(SystemSessionPoolTagInformation|0x80, &SmpSystemWriteConstraintInfo, 8u, 0LL);
  if ( v4 < 0 )
  {
    SmpLogFailure((__int64)"SmpInit", 1738, v4);
    SmpSystemWriteConstraintInfo = 0;
  }
  LODWORD(ProcessInformation) = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDefaultHardErrorMode, &ProcessInformation, 4u);
  SecurityDescriptors = SmpInitializeKnownSubSystems();
  if ( SecurityDescriptors < 0 )
  {
    SmpInitProgressByLine = 1759;
    v5 = SmpInitializeKnownSubSystems;
    v2 = 1760;
LABEL_9:
    SmpInitReturnStatus = SecurityDescriptors;
    SmpInitLastCall = (__int64)v5;
    goto LABEL_3;
  }
  SmpManufacturingMode = 0;
  v6 = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, 0LL, 0, ReturnLength);
  SecurityDescriptors = v6;
  if ( v6 >= 0 )
  {
    SmpInitProgressByLine = 1817;
    SmpInitReturnStatus = v6;
    SmpInitLastCall = (__int64)NtQuerySystemInformation;
    SmpLogFailure((__int64)"SmpInit", 1818, v6);
    return 3221225473LL;
  }
  else
  {
    if ( v6 != -1073741820 )
    {
      v5 = NtQuerySystemInformation;
      v2 = 1811;
      SmpInitProgressByLine = 1809;
      goto LABEL_9;
    }
    Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, ReturnLength[0]);
    v8 = Heap;
    if ( !Heap )
    {
      SecurityDescriptors = -1073741670;
      SmpInitProgressByLine = 1783;
      v2 = 1784;
      SmpInitReturnStatus = -1073741670;
      SmpInitLastCall = (__int64)RtlAllocateHeap;
      goto LABEL_3;
    }
    v9 = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, Heap, ReturnLength[0], ReturnLength);
    v10 = *(void **)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL);
    if ( v9 >= 0 )
    {
      SmpManufacturingMode = *v8 & 1;
      RtlFreeHeap(v10, 0, v8);
      SecurityDescriptors = SmpCreateSecurityDescriptors(1);
      if ( SecurityDescriptors >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v23;
        ObjectAttributes.Attributes = 0;
        ObjectAttributes.SecurityDescriptor = SmpApiPortSecurityDescriptor;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        memset_0(v25, 0, 0x48uLL);
        v25[0] = 0x20000;
        v26 = 328LL;
        v27 = 1000000LL;
        v11 = NtAlpcCreatePort(&SmpApiConnectionPort, &ObjectAttributes, v25);
        SecurityDescriptors = v11;
        if ( v11 < 0 )
        {
          v2 = 1855;
          SmpInitProgressByLine = 1854;
          SmpInitReturnStatus = v11;
          SmpInitLastCall = (__int64)NtAlpcCreatePort;
          goto LABEL_3;
        }
        SmpUniqueProcessId = (unsigned int)KeGetPcr()->Unused[0];
        SmpActiveProcessorCount = MEMORY[0x7FFE03C0];
        v12 = NtQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, 0LL);
        SecurityDescriptors = v12;
        if ( v12 < 0 )
        {
          v2 = 1874;
          SmpInitProgressByLine = 1873;
          SmpInitReturnStatus = v12;
          SmpInitLastCall = (__int64)NtQuerySystemInformation;
          goto LABEL_3;
        }
        SmpMaximumNodeCount = SystemInformation[0] + 1;
        RtlInitializeBitMap(&SmpNodeBitmap, &SmpNodeBitmapBuffer, SystemInformation[0] + 1);
        RtlClearAllBits(&SmpNodeBitmap);
        v13 = SmpMaximumNodeCount;
        for ( i = 0; i < v13; ++i )
        {
          if ( *(_QWORD *)&SystemInformation[4 * i + 2] )
          {
            RtlSetBits(&SmpNodeBitmap, i, 1u);
            v13 = SmpMaximumNodeCount;
          }
        }
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v15 = NtOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
        v16 = v15;
        if ( v15 < 0 )
        {
          SmpLogFailureString((__int64)"SmpInit", 0x77Cu, (__int64)v21, v15);
          EventHandle = 0LL;
        }
        SecurityDescriptors = SmpInitializePendingRename();
        if ( SecurityDescriptors >= 0 )
        {
          SecurityDescriptors = SmpLoadDataFromRegistry(EventHandle);
          if ( v16 >= 0 )
            NtClose(EventHandle);
          if ( SecurityDescriptors < 0 )
            return (unsigned int)SecurityDescriptors;
          SecurityDescriptors = InitializeWow64OnBoot();
          if ( SecurityDescriptors >= 0 )
            return (unsigned int)SecurityDescriptors;
          SmpInitProgressByLine = 1955;
          v5 = InitializeWow64OnBoot;
          v2 = 1957;
        }
        else
        {
          SmpInitProgressByLine = 1928;
          v5 = SmpInitializePendingRename;
          v2 = 1930;
        }
      }
      else
      {
        SmpInitProgressByLine = 1830;
        v5 = SmpCreateSecurityDescriptors;
        v2 = 1831;
      }
      goto LABEL_9;
    }
    RtlFreeHeap(v10, 0, v8);
    SmpInitProgressByLine = 1796;
    SmpInitReturnStatus = v9;
    SmpInitLastCall = (__int64)NtQuerySystemInformation;
    SmpLogFailure((__int64)"SmpInit", 1798, v9);
    return (unsigned int)v9;
  }
}

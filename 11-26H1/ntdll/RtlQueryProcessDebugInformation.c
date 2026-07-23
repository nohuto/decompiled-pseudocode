/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x1800742B0
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x18013A290 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x18013A330 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpQueryCriticalSectionOwner32 @ 0x180073E88 (RtlpQueryCriticalSectionOwner32.c)
 *     RtlpQueryCriticalSectionOwner64 @ 0x180073F44 (RtlpQueryCriticalSectionOwner64.c)
 *     RtlQueryProcessLockInformation @ 0x180074010 (RtlQueryProcessLockInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180074CE8 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpCopyRemoteDebugInformation @ 0x180075000 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800751D0 (RtlpValidateRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x180075718 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlpQueryProcessMachine @ 0x1800757E4 (RtlpQueryProcessMachine.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800758F0 (RtlQueryCriticalSectionOwner.c)
 *     RtlQueryProcessModuleInformation @ 0x180075A08 (RtlQueryProcessModuleInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x180075B50 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessBackTraceInformation @ 0x180076560 (RtlQueryProcessBackTraceInformation.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtWaitForSingleObject @ 0x18015EEC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18015F160 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x18015F2E0 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x18015F300 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x18015F5C0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18015F620 (ZwReadVirtualMemory.c)
 *     NtTerminateThread @ 0x18015F8A0 (NtTerminateThread.c)
 *     NtPowerInformation @ 0x18015FA10 (NtPowerInformation.c)
 *     NtCreateThreadEx @ 0x180160750 (NtCreateThreadEx.c)
 *     NtQuerySystemInformationEx @ 0x180161C10 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180163510 (_alloca_probe.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlQueryProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  NTSTATUS ProcessMachine; // ebx
  unsigned int v7; // r13d
  __int128 *v8; // r12
  HANDLE TargetProcessId; // rax
  SIZE_T OffsetFree; // r8
  struct _TEB *v11; // rcx
  __int64 WowTebOffset; // rax
  _WORD *v13; // rax
  HANDLE *p_SystemInformation; // rbx
  NTSTATUS v15; // eax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  int v20; // edx
  __int16 v21; // cx
  __int64 v22; // r8
  NTSTATUS (__cdecl *v23)(PVOID); // rbx
  NTSTATUS result; // eax
  HANDLE v25; // r14
  HANDLE TargetProcessHandle; // r15
  size_t v27; // rax
  HANDLE v28; // rcx
  HANDLE CriticalSectionHandle; // rcx
  void *CriticalSectionOwner32; // rax
  HANDLE v31; // rax
  HANDLE v32; // r12
  PVOID ViewBaseTarget; // rax
  NTSTATUS v34; // eax
  void *UniqueProcess; // r15
  int v36; // eax
  HANDLE InputBuffer; // [rsp+60h] [rbp+0h] BYREF
  ULONG ReturnLength[2]; // [rsp+68h] [rbp+8h] BYREF
  HANDLE ProcessHandle; // [rsp+70h] [rbp+10h] BYREF
  _CLIENT_ID ClientId; // [rsp+78h] [rbp+18h] BYREF
  ULONG_PTR NumberOfBytesRead; // [rsp+88h] [rbp+28h] BYREF
  PUSER_THREAD_START_ROUTINE StartRoutine; // [rsp+90h] [rbp+30h]
  _CLIENT_ID v43; // [rsp+98h] [rbp+38h] BYREF
  _OBJECT_ATTRIBUTES v44; // [rsp+A8h] [rbp+48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp+78h] BYREF
  LARGE_INTEGER Timeout; // [rsp+108h] [rbp+A8h] BYREF
  __int128 v47; // [rsp+110h] [rbp+B0h] BYREF
  NTSTATUS (__stdcall *v48)(HANDLE, PROCESSINFOCLASS, PVOID, ULONG, PULONG); // [rsp+120h] [rbp+C0h]
  _OBJECT_ATTRIBUTES v49; // [rsp+128h] [rbp+C8h] BYREF
  _OWORD ThreadInformation[2]; // [rsp+158h] [rbp+F8h] BYREF
  __int64 v51; // [rsp+178h] [rbp+118h]
  int v52; // [rsp+180h] [rbp+120h]
  _QWORD ProcessInformation[2]; // [rsp+190h] [rbp+130h] BYREF
  __int128 v54; // [rsp+1A0h] [rbp+140h]
  __int128 v55; // [rsp+1B0h] [rbp+150h]
  __int128 v56; // [rsp+1C0h] [rbp+160h]
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+1D0h] [rbp+170h] BYREF
  __int64 v58; // [rsp+1F8h] [rbp+198h]
  __int128 v59; // [rsp+200h] [rbp+1A0h]
  __int64 v60; // [rsp+210h] [rbp+1B0h]
  _BYTE Buffera[4]; // [rsp+240h] [rbp+1E0h] BYREF
  int v62; // [rsp+244h] [rbp+1E4h]
  NTSTATUS (__cdecl *v63)(PVOID); // [rsp+280h] [rbp+220h]
  __int128 SystemInformation; // [rsp+370h] [rbp+310h] BYREF
  HANDLE v65; // [rsp+380h] [rbp+320h]

  v51 = 0LL;
  v52 = 0;
  ProcessHandle = 0LL;
  StartRoutine = (PUSER_THREAD_START_ROUTINE)RtlpQueryProcessDebugInformationRemote;
  ProcessMachine = 0;
  v7 = 0;
  v48 = 0LL;
  v8 = 0LL;
  TargetProcessId = Buffer->TargetProcessId;
  memset(ThreadInformation, 0, sizeof(ThreadInformation));
  memset(&ObjectAttributes, 0, 44);
  ClientId = 0LL;
  v47 = 0LL;
  if ( TargetProcessId && TargetProcessId != UniqueProcessId )
    return -1073741811;
  if ( (Flags & 0x3FFFFFBE) != 0 && (Flags & 0x40000000) != 0 )
    return -1073741637;
  Buffer->Flags = Flags;
  OffsetFree = Buffer->OffsetFree;
  Timeout.QuadPart = -600000000LL;
  if ( OffsetFree )
    memset_thunk_772440563353939046(&Buffer[1], 0, OffsetFree - 208);
  Buffer->OffsetFree = 208LL;
  if ( Flags == -2147481600 )
  {
    *(&v44.Length + 1) = 0;
    *(&v44.Attributes + 1) = 0;
    LOWORD(ReturnLength[0]) = 0;
    InputBuffer = 0LL;
    if ( !Buffer->CriticalSectionHandle )
      return -1073741811;
    memset(&v44.RootDirectory, 0, 20);
    v43.UniqueThread = 0LL;
    v44.Length = 48;
    *(_OWORD *)&v44.SecurityDescriptor = 0LL;
    v43.UniqueProcess = UniqueProcessId;
    ProcessMachine = NtOpenProcess(&InputBuffer, 0x1010u, &v44, &v43);
    if ( ProcessMachine < 0 )
      goto LABEL_109;
    ProcessMachine = RtlpQueryProcessMachine(InputBuffer, ReturnLength);
    if ( ProcessMachine < 0 )
      goto LABEL_109;
    if ( LOWORD(ReturnLength[0]) != 34404 )
    {
      if ( LOWORD(ReturnLength[0]) == 332 || LOWORD(ReturnLength[0]) == 452 )
      {
        CriticalSectionOwner32 = (void *)RtlpQueryCriticalSectionOwner32(
                                           InputBuffer,
                                           (int)Buffer->CriticalSectionHandle);
LABEL_108:
        Buffer->CriticalSectionOwnerThread = CriticalSectionOwner32;
        ProcessMachine = 0;
        goto LABEL_109;
      }
      if ( LOWORD(ReturnLength[0]) != 43620 )
      {
        ProcessMachine = -1073741811;
LABEL_109:
        v28 = InputBuffer;
        if ( !InputBuffer )
          return ProcessMachine;
        goto LABEL_66;
      }
    }
    CriticalSectionOwner32 = (void *)RtlpQueryCriticalSectionOwner64(
                                       InputBuffer,
                                       (__int64)Buffer->CriticalSectionHandle);
    goto LABEL_108;
  }
  if ( (Flags & 0x80000000) != 0 && (Flags & 0x41) != 0 && (Flags & 0x3FFFFFBE) == 0 )
  {
    if ( (Flags & 0x40000000) != 0 )
    {
      v8 = (__int128 *)UniqueProcessId;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess == UniqueProcessId )
    {
      v8 = 0LL;
    }
    else
    {
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ClientId.UniqueThread = 0LL;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueProcess = UniqueProcessId;
      if ( NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId) >= 0 )
      {
        v31 = ProcessHandle;
      }
      else
      {
        v31 = 0LL;
        ProcessHandle = 0LL;
      }
      *(_QWORD *)&v47 = v31;
      v8 = &v47;
      *((_QWORD *)&v47 + 1) = RtlpQueryReadVirtualMemory;
      v48 = NtQueryInformationProcess;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == UniqueProcessId || (Flags & 0x40000000) != 0 || ProcessHandle )
  {
    if ( ((Flags & 0x41) == 0 || (ProcessMachine = RtlQueryProcessModuleInformation(v8, Flags, Buffer)) == 0)
      && ((Flags & 2) == 0 || (ProcessMachine = RtlQueryProcessBackTraceInformation(Buffer)) == 0)
      && ((Flags & 0x20) == 0 || (ProcessMachine = RtlQueryProcessLockInformation((__int64)Buffer)) == 0)
      && ((Flags & 0x21C) == 0 || (ProcessMachine = RtlQueryProcessHeapInformation(Buffer)) == 0)
      && ((Flags & 0x80u) == 0 || (ProcessMachine = AVrfpQueryProcessVerifierOptions(Buffer)) == 0)
      && (Flags & 0xC00) != 0 )
    {
      CriticalSectionHandle = Buffer->CriticalSectionHandle;
      Buffer->CriticalSectionOwnerThread = 0LL;
      ProcessMachine = 0;
      if ( CriticalSectionHandle )
        Buffer->CriticalSectionOwnerThread = RtlQueryCriticalSectionOwner(CriticalSectionHandle);
      else
        ProcessMachine = -1073741811;
    }
    v28 = ProcessHandle;
    if ( !ProcessHandle )
      return ProcessMachine;
    goto LABEL_66;
  }
  if ( (Flags & 0x80000000) == 0 && ((Flags - 1024) & 0xFFFFFBFF) == 0 )
  {
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ClientId.UniqueProcess = UniqueProcessId;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueThread = 0LL;
    if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) < 0 )
    {
LABEL_44:
      ProcessHandle = 0LL;
      goto LABEL_45;
    }
    InputBuffer = ProcessHandle;
    if ( ProcessHandle != (HANDLE)-1LL )
      goto LABEL_27;
    if ( !NtCurrentTeb()->WowTebOffset )
    {
LABEL_43:
      NtClose(ProcessHandle);
      goto LABEL_44;
    }
    v11 = NtCurrentTeb();
    WowTebOffset = v11->WowTebOffset;
    if ( (int)WowTebOffset < 0 )
      v11 = (struct _TEB *)((char *)v11 + WowTebOffset);
    v13 = (_DWORD)v11 == LODWORD(v11->NtTib.SubSystemTib)
        ? (_WORD *)LODWORD(v11->glDispatchTable[137])
        : v11->TlsSlots[10];
    if ( !v13 || !v13[17] || !v13[16] )
    {
LABEL_27:
      ReturnLength[0] = 20;
      p_SystemInformation = (HANDLE *)&SystemInformation;
      v15 = NtQuerySystemInformationEx(
              SystemSupportedProcessorArchitectures2,
              &InputBuffer,
              8u,
              &SystemInformation,
              0x14u,
              ReturnLength);
      if ( v15 == -1073741789 )
      {
        v16 = ReturnLength[0] + 15LL;
        if ( v16 <= ReturnLength[0] )
          v16 = 0xFFFFFFFFFFFFFF0LL;
        v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
        v18 = alloca(v17);
        v19 = alloca(v17);
        p_SystemInformation = &InputBuffer;
        v15 = NtQuerySystemInformationEx(
                SystemSupportedProcessorArchitectures2,
                &InputBuffer,
                8u,
                &InputBuffer,
                ReturnLength[0],
                ReturnLength);
      }
      if ( v15 < 0 )
        goto LABEL_43;
      v20 = *(_DWORD *)p_SystemInformation;
      v21 = 0;
      LODWORD(v22) = 0;
      if ( !(unsigned __int16)*(_DWORD *)p_SystemInformation )
        goto LABEL_43;
      do
      {
        v22 = (unsigned int)(v22 + 1);
        if ( (v20 & 0x1C0000) != 0x180000 )
          LOWORD(v20) = v21;
        v21 = v20;
        v20 = *((_DWORD *)p_SystemInformation + v22);
      }
      while ( (_WORD)v20 );
      if ( !v21 )
        goto LABEL_43;
    }
    *(_QWORD *)ReturnLength = 0LL;
    v23 = 0LL;
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           ProcessHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PHANDLE)ReturnLength,
           0x10u,
           0,
           0) >= 0 )
    {
      v62 = 0;
      memset_thunk_772440563353939046(Buffera, 0, 0x124uLL);
      NumberOfBytesRead = 0LL;
      if ( ZwReadVirtualMemory(*(HANDLE *)ReturnLength, &LdrSystemDllInitBlock, Buffera, 0x128uLL, &NumberOfBytesRead) >= 0
        && NumberOfBytesRead == 296 )
      {
        v23 = v63;
      }
      NtClose(*(HANDLE *)ReturnLength);
      if ( v23 )
      {
        StartRoutine = v23;
        v7 = 1;
      }
    }
    goto LABEL_43;
  }
LABEL_45:
  InputBuffer = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(Buffer, UniqueProcessId, v7, &InputBuffer);
  if ( result < 0 )
    return result;
  v25 = InputBuffer;
  TargetProcessHandle = InputBuffer;
  if ( !InputBuffer )
    TargetProcessHandle = Buffer->TargetProcessHandle;
  InputBuffer = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  ProcessInformation[1] = 0LL;
  ProcessInformation[0] = 64LL;
  memset(&v44, 0, 40);
  ProcessMachine = NtQueryInformationProcess(
                     TargetProcessHandle,
                     ProcessBasicInformation,
                     ProcessInformation,
                     0x40u,
                     0LL);
  if ( ProcessMachine < 0 )
    goto LABEL_55;
  if ( (BYTE8(v56) & 0x40) == 0 )
  {
    v32 = 0LL;
    goto LABEL_82;
  }
  *(&v44.Length + 1) = 1;
  v44.RootDirectory = 0LL;
  v44.ObjectName = (PUNICODE_STRING)L"QueryDebugInformation request";
  v27 = 2 * wcslen(L"QueryDebugInformation request");
  if ( v27 >= 0xFFFE )
    LOWORD(v27) = -4;
  LOWORD(v44.RootDirectory) = v27;
  WORD1(v44.RootDirectory) = v27 + 2;
  ProcessMachine = NtPowerInformation(PlmPowerRequestCreate, &v44, 0x28u, &InputBuffer, 8u);
  if ( ProcessMachine < 0 )
    goto LABEL_55;
  v65 = TargetProcessHandle;
  *(_WORD *)((char *)&SystemInformation + 13) = 0;
  HIBYTE(SystemInformation) = 0;
  *(_QWORD *)&SystemInformation = InputBuffer;
  DWORD2(SystemInformation) = 3;
  BYTE12(SystemInformation) = 1;
  ProcessMachine = NtPowerInformation(PowerRequestAction, &SystemInformation, 0x18u, 0LL, 0);
  if ( ProcessMachine >= 0 )
  {
    v32 = InputBuffer;
LABEL_82:
    v58 = 0LL;
    v59 = 0LL;
    AttributeList.Attributes[0].Value = (ULONG_PTR)&SystemInformation;
    v60 = 0LL;
    ViewBaseTarget = Buffer->ViewBaseTarget;
    *(_QWORD *)&v49.Length = 48LL;
    *(_QWORD *)&v49.Attributes = 512LL;
    SystemInformation = 0LL;
    v43.UniqueProcess = 0LL;
    v49.RootDirectory = 0LL;
    v49.ObjectName = 0LL;
    *(_OWORD *)&v49.SecurityDescriptor = 0LL;
    AttributeList.Attributes[0].Attribute = 65539LL;
    AttributeList.Attributes[0].Size = 16LL;
    AttributeList.Attributes[0].ReturnLength = 0LL;
    AttributeList.TotalLength = 40LL;
    ProcessMachine = NtCreateThreadEx(
                       &v43.UniqueProcess,
                       0x1FFFFFu,
                       &v49,
                       v25,
                       StartRoutine,
                       ViewBaseTarget,
                       6u,
                       0LL,
                       0LL,
                       0LL,
                       &AttributeList);
    if ( ProcessMachine >= 0 )
    {
      UniqueProcess = v43.UniqueProcess;
      v36 = NtWaitForSingleObject(v43.UniqueProcess, 1u, &Timeout);
      ProcessMachine = v36;
      if ( v36 < 0 )
      {
        NtTerminateThread(UniqueProcess, v36);
      }
      else
      {
        ProcessMachine = ZwQueryInformationThread(UniqueProcess, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
        if ( ProcessMachine >= 0 )
          ProcessMachine = ThreadInformation[0];
      }
      NtClose(UniqueProcess);
    }
    NtClose(v25);
    if ( v32 )
    {
      *(_WORD *)((char *)&SystemInformation + 13) = 0;
      HIBYTE(SystemInformation) = 0;
      *(_QWORD *)&SystemInformation = v32;
      DWORD2(SystemInformation) = 3;
      BYTE12(SystemInformation) = 0;
      v65 = 0LL;
      NtPowerInformation(PowerRequestAction, &SystemInformation, 0x18u, 0LL, 0);
      NtClose(v32);
    }
    if ( ProcessMachine < 0 )
      return ProcessMachine;
    if ( v7 == 1 )
    {
      ProcessMachine = 0;
      Buffer->CriticalSectionOwnerThread = (HANDLE)(unsigned int)_mm_cvtsi128_si32(
                                                                   _mm_srli_si128(
                                                                     *(__m128i *)((char *)&Buffer->CommitSize
                                                                                + Buffer->ViewSize),
                                                                     4));
    }
    else
    {
      ProcessMachine = RtlpCopyRemoteDebugInformation(Buffer);
      if ( ProcessMachine < 0 )
        return ProcessMachine;
    }
    v34 = -1073741558;
    if ( (Flags & 1) != 0 && !Buffer->Modules )
      ProcessMachine = -1073741558;
    if ( (Flags & 0x40) == 0 || Buffer->Modules )
    {
      if ( ProcessMachine < 0 )
        return ProcessMachine;
      return RtlpValidateRemoteDebugInformation(Buffer, Flags, &Buffer[1], Buffer->OffsetFree - 208);
    }
    return v34;
  }
  NtClose(InputBuffer);
LABEL_55:
  v28 = v25;
LABEL_66:
  NtClose(v28);
  return ProcessMachine;
}

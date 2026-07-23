/*
 * XREFs of RtlCreateProcessReflection @ 0x180139530
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180064A50 (RtlpCreateUserThreadEx.c)
 *     RtlpProcessReflectionStartup @ 0x180139B00 (RtlpProcessReflectionStartup.c)
 *     NtWaitForSingleObject @ 0x18015EEC0 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18015F000 (ZwSetEvent.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x18015F160 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x18015F5C0 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x18015F740 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x18015F780 (NtCreateSection.c)
 *     ZwQuerySystemTime @ 0x18015F980 (ZwQuerySystemTime.c)
 *     NtWaitForMultipleObjects @ 0x18015F990 (NtWaitForMultipleObjects.c)
 */

NTSTATUS __cdecl RtlCreateProcessReflection(
        HANDLE ProcessHandle,
        ULONG Flags,
        PVOID StartRoutine,
        PVOID StartContext,
        HANDLE EventHandle,
        PRTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION ReflectionInformation)
{
  HANDLE v7; // rsi
  int v12; // ebx
  _QWORD *v13; // rcx
  ULONG_PTR v14; // rax
  _QWORD *v15; // rax
  void *v16; // rcx
  _QWORD *v17; // rax
  void *v18; // rcx
  PVOID v19; // rax
  _OWORD *v20; // rax
  _OWORD *v21; // rcx
  NTSTATUS UserThread; // eax
  HANDLE v23; // rcx
  NTSTATUS v24; // eax
  int FileHandle; // [rsp+38h] [rbp-89h]
  PVOID v26; // [rsp+68h] [rbp-59h] BYREF
  PVOID v27; // [rsp+70h] [rbp-51h] BYREF
  ULONG_PTR CommitSize; // [rsp+78h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-41h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-39h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp-31h] BYREF
  PVOID v32; // [rsp+98h] [rbp-29h] BYREF
  HANDLE SectionHandle; // [rsp+A0h] [rbp-21h] BYREF
  HANDLE SourceHandle; // [rsp+A8h] [rbp-19h] BYREF
  HANDLE Handles[2]; // [rsp+B0h] [rbp-11h] BYREF
  ULONG_PTR ViewSize; // [rsp+C0h] [rbp-1h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+C8h] [rbp+7h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+D0h] [rbp+Fh] BYREF
  LARGE_INTEGER v39; // [rsp+D8h] [rbp+17h] BYREF

  RegionSize = 4096LL;
  Handles[0] = 0LL;
  v27 = 0LL;
  v7 = 0LL;
  BaseAddress = 0LL;
  v26 = 0LL;
  CommitSize = 0LL;
  SectionHandle = 0LL;
  MaximumSize.QuadPart = 0LL;
  ViewSize = 0LL;
  v32 = 0LL;
  SystemTime.QuadPart = 0LL;
  v39.QuadPart = 0LL;
  SourceHandle = 0LL;
  Handle = 0LL;
  ZwQuerySystemTime(&SystemTime);
  if ( (Flags & 0xFFFFFFE1) != 0 )
    return -1073741584;
  if ( (Flags & 8) != 0 && StartRoutine )
    return -1073741581;
  if ( ReflectionInformation )
  {
    *(_OWORD *)&ReflectionInformation->ReflectionProcessHandle = 0LL;
    ReflectionInformation->ReflectionClientId = 0LL;
  }
  v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v12 < 0 )
  {
    BaseAddress = 0LL;
    goto LABEL_41;
  }
  NtQueryInformationProcess(
    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
    ProcessImageFileName,
    BaseAddress,
    RegionSize,
    (PULONG)&RegionSize);
  RegionSize = 4096LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  CommitSize = 88LL;
  v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v26, 0LL, &CommitSize, 0x3000u, 4u);
  if ( v12 < 0 )
  {
    v26 = 0LL;
    goto LABEL_41;
  }
  v13 = v26;
  v14 = CommitSize;
  *((_QWORD *)v26 + 3) = StartContext;
  v13[2] = StartRoutine;
  *v13 = v14;
  *((_DWORD *)v13 + 2) = Flags;
  v13[6] = EventHandle;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    *((_DWORD *)v13 + 2) = Flags | 0x10;
    v12 = RtlpProcessReflectionStartup((PSIZE_T)v26);
    if ( v12 >= 0 && ReflectionInformation )
    {
      v15 = v26;
      ReflectionInformation->ReflectionProcessHandle = (HANDLE)*((_QWORD *)v26 + 7);
      v16 = (void *)v15[8];
      v17 = v26;
      ReflectionInformation->ReflectionThreadHandle = v16;
      v18 = (void *)v17[9];
      v19 = v26;
LABEL_40:
      ReflectionInformation->ReflectionClientId.UniqueProcess = v18;
      ReflectionInformation->ReflectionClientId.UniqueThread = (void *)*((_QWORD *)v19 + 10);
      goto LABEL_41;
    }
    goto LABEL_41;
  }
  MaximumSize.QuadPart = CommitSize;
  v12 = NtCreateSection(&SectionHandle, 6u, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v12 < 0 )
    goto LABEL_41;
  ViewSize = CommitSize;
  v12 = ZwMapViewOfSection(SectionHandle, ProcessHandle, &v32, 0LL, CommitSize, 0LL, &ViewSize, ViewUnmap, 0, 4u);
  if ( v12 >= 0 )
  {
    v12 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &v27,
            0LL,
            CommitSize,
            0LL,
            &ViewSize,
            ViewUnmap,
            0,
            4u);
    if ( v12 < 0 )
    {
      v27 = 0LL;
      goto LABEL_41;
    }
    if ( !ReflectionInformation
      || (v12 = ZwCreateEvent(&SourceHandle, 0x1F0003u, 0LL, NotificationEvent, 0), v12 >= 0)
      && (v12 = ZwCreateEvent(&Handle, 0x1F0003u, 0LL, NotificationEvent, 0), v12 >= 0)
      && (v12 = ZwDuplicateObject(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  SourceHandle,
                  ProcessHandle,
                  (PHANDLE)v26 + 4,
                  0x1F0003u,
                  0,
                  2u),
          v12 >= 0)
      && (v12 = ZwDuplicateObject(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  Handle,
                  ProcessHandle,
                  (PHANDLE)v26 + 5,
                  0x1F0003u,
                  0,
                  2u),
          v12 >= 0)
      && (!EventHandle
       || (v12 = ZwDuplicateObject(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   EventHandle,
                   ProcessHandle,
                   (PHANDLE)v26 + 6,
                   0x1F0003u,
                   0,
                   2u),
           v12 >= 0)) )
    {
      v20 = v26;
      v21 = v27;
      *(_OWORD *)v27 = *(_OWORD *)v26;
      v21[1] = v20[1];
      v21[2] = v20[2];
      v21[3] = v20[3];
      v21[4] = v20[4];
      *((_QWORD *)v21 + 10) = *((_QWORD *)v20 + 10);
      UserThread = RtlpCreateUserThreadEx(
                     ProcessHandle,
                     0LL,
                     2,
                     0,
                     0LL,
                     0LL,
                     FileHandle,
                     (PUSER_THREAD_START_ROUTINE)RtlpProcessReflectionStartup,
                     v32,
                     Handles,
                     0LL);
      v7 = Handles[0];
      v12 = UserThread;
      if ( UserThread >= 0 )
      {
        if ( ReflectionInformation )
        {
          Handles[1] = SourceHandle;
          if ( NtWaitForMultipleObjects(2u, Handles, WaitAny, 0, 0LL) == 1 )
          {
            if ( *((_QWORD *)v27 + 7) )
            {
              if ( ZwDuplicateObject(
                     ProcessHandle,
                     *((HANDLE *)v27 + 7),
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     &ReflectionInformation->ReflectionProcessHandle,
                     0x1FFFFFu,
                     0,
                     2u) >= 0 )
              {
                v24 = ZwDuplicateObject(
                        ProcessHandle,
                        *((HANDLE *)v27 + 8),
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &ReflectionInformation->ReflectionThreadHandle,
                        0x1FFFFFu,
                        0,
                        2u);
                v23 = Handle;
                if ( v24 >= 0 )
                {
                  v12 = ZwSetEvent(Handle, 0LL);
                  v18 = (void *)*((_QWORD *)v27 + 9);
                  v19 = v27;
                  goto LABEL_40;
                }
              }
              else
              {
                v23 = Handle;
              }
              v12 = ZwSetEvent(v23, 0LL);
              goto LABEL_41;
            }
            NtWaitForSingleObject(v7, 0, 0LL);
          }
          v12 = -1073741823;
        }
      }
    }
LABEL_41:
    if ( v32 )
      NtUnmapViewOfSection(ProcessHandle, v32);
    goto LABEL_43;
  }
  v32 = 0LL;
LABEL_43:
  if ( v27 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v27);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( v26 )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v26, &CommitSize, 0x8000u);
  if ( SourceHandle )
    NtClose(SourceHandle);
  if ( Handle )
    NtClose(Handle);
  if ( v7 )
    NtClose(v7);
  ZwQuerySystemTime(&v39);
  return v12;
}

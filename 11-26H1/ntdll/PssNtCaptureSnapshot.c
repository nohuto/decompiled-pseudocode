/*
 * XREFs of PssNtCaptureSnapshot @ 0x1800B2290
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x180059D10 (RtlQueryPerformanceCounter.c)
 *     PsspCaptureThreadInformation @ 0x1800B0C00 (PsspCaptureThreadInformation.c)
 *     PsspCaptureProcessInformation @ 0x1800B28E8 (PsspCaptureProcessInformation.c)
 *     PssNtFreeSnapshot @ 0x1800B2AB0 (PssNtFreeSnapshot.c)
 *     PsspCaptureHandleInformation @ 0x1800B376C (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x1800B3D74 (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x180105228 (PsspCaptureAuxiliaryPages.c)
 *     PsspSampleCounters @ 0x18010DE00 (PsspSampleCounters.c)
 *     PsspCaptureIptTrace @ 0x18015967C (PsspCaptureIptTrace.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     ZwQueryInformationThread @ 0x18015F2E0 (ZwQueryInformationThread.c)
 *     ZwCreateProcessEx @ 0x18015F7E0 (ZwCreateProcessEx.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl PssNtCaptureSnapshot(
        PHANDLE SnapshotHandle,
        HANDLE ProcessHandle,
        ULONG CaptureFlags,
        ULONG ThreadContextFlags)
{
  __int64 v4; // r14
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  ULONG v10; // r12d
  HANDLE v11; // rcx
  int v12; // ecx
  HANDLE v13; // rdx
  NTSTATUS result; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // edx
  ULONG v18; // ecx
  int v19; // r8d
  int v20; // eax
  __int64 v21; // rcx
  PVOID BaseAddress; // [rsp+50h] [rbp-79h] BYREF
  int v23; // [rsp+58h] [rbp-71h]
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-69h] BYREF
  int v25; // [rsp+68h] [rbp-61h]
  __int64 v26; // [rsp+70h] [rbp-59h] BYREF
  ULONG v27; // [rsp+78h] [rbp-51h]
  __int64 v28; // [rsp+80h] [rbp-49h] BYREF
  int v29; // [rsp+88h] [rbp-41h]
  HANDLE ParentProcess; // [rsp+90h] [rbp-39h]
  int v31; // [rsp+98h] [rbp-31h]
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-29h] BYREF
  HANDLE ProcessHandlea; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-19h] BYREF
  __int128 ThreadInformation; // [rsp+B8h] [rbp-11h] BYREF
  __int128 v36; // [rsp+C8h] [rbp-1h] BYREF

  v4 = 0LL;
  v29 = ThreadContextFlags;
  ParentProcess = ProcessHandle;
  RegionSize = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  *(_QWORD *)&ThreadInformation = 0LL;
  ProcessHandlea = 0LL;
  if ( (CaptureFlags & 0x3FF8000) != 0 )
    return -1073741811;
  v27 = CaptureFlags & 0x1C000000;
  if ( (CaptureFlags & 0x1C000000) == 0x4000000 )
    return -1073741776;
  v28 = 0LL;
  *(_QWORD *)&v36 = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  v8 = 0LL;
  v34 = 0LL;
  v9 = 0LL;
  v10 = CaptureFlags & 0x40000000;
  if ( (CaptureFlags & 0x40000000) != 0 )
  {
    v8 = MEMORY[0x7FFE0300];
    PsspSampleCounters(&v28, &v34);
    v9 = v28;
  }
  v11 = *SnapshotHandle;
  BaseAddress = v11;
  v25 = 0;
  if ( !v11 )
  {
    RegionSize = 1144LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
    v11 = BaseAddress;
    *SnapshotHandle = BaseAddress;
    v25 = 1;
  }
  memset_thunk_772440563353939046(v11, 0, 0x478uLL);
  v12 = v25;
  v13 = ParentProcess;
  *(_DWORD *)BaseAddress = 1146311504;
  *((_DWORD *)BaseAddress + 1) = v12;
  *((_DWORD *)BaseAddress + 2) = CaptureFlags;
  v23 = PsspCaptureProcessInformation(BaseAddress, v13, CaptureFlags);
  if ( v23 < 0 )
    goto LABEL_17;
  if ( (CaptureFlags & 2) != 0 )
  {
    if ( v10 )
    {
      PsspSampleCounters(&v26, &v36);
      v7 = v26;
    }
    v28 = 2147352576LL;
    v23 = PsspCaptureAuxiliaryPages(BaseAddress, ParentProcess, CaptureFlags, &v28);
    if ( v23 < 0 )
      goto LABEL_17;
    if ( v10 )
    {
      PsspSampleCounters(&PerformanceCounter, &ThreadInformation);
      *((_QWORD *)BaseAddress + 135) = ThreadInformation - v36;
      *((_QWORD *)BaseAddress + 136) = 1000000 * (PerformanceCounter.QuadPart - v7) / v8;
    }
  }
  if ( (CaptureFlags & 0x800) == 0 )
    goto LABEL_9;
  if ( v10 )
  {
    PsspSampleCounters(&v26, &v36);
    v7 = v26;
  }
  v23 = PsspCaptureVaSpaceInformation(BaseAddress, ParentProcess, CaptureFlags);
  if ( v23 < 0 )
  {
LABEL_17:
    PssNtFreeSnapshot(BaseAddress);
    result = v23;
    *SnapshotHandle = 0LL;
    return result;
  }
  if ( v10 )
  {
    ThreadInformation = 0LL;
    RtlQueryPerformanceCounter(&PerformanceCounter);
    if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadCycleTime, &ThreadInformation, 0x10u, 0LL) < 0 )
    {
      *(_QWORD *)&ThreadInformation = 0LL;
      v15 = 0LL;
    }
    else
    {
      v15 = ThreadInformation;
    }
    *((_QWORD *)BaseAddress + 133) = v15 - v36;
    *((_QWORD *)BaseAddress + 134) = 1000000 * (PerformanceCounter.QuadPart - v7) / v8;
  }
LABEL_9:
  if ( (CaptureFlags & 1) != 0 )
  {
    if ( v10 )
    {
      PsspSampleCounters(&v26, &v36);
      v7 = v26;
    }
    v16 = v27;
    v17 = ((int)CaptureFlags >> 31) & 0x1000;
    v25 = v17;
    while ( 1 )
    {
      v18 = v17;
      v19 = v16 & 0x10000000;
      v20 = v16 & 0x8000000;
      v31 = v19;
      LODWORD(v28) = v20;
      if ( v19 )
      {
        v18 = v17 | 0x400;
      }
      else if ( v20 )
      {
        v18 = v17 | 1;
      }
      v23 = ZwCreateProcessEx(&ProcessHandlea, 0x1418u, 0LL, ParentProcess, v18, 0LL, 0LL, 0LL, 0);
      if ( v23 >= 0 )
        break;
      if ( (v27 & 0x4000000) == 0 )
        goto LABEL_17;
      if ( v31 )
      {
        v16 = v27 & 0xEFFFFFFF;
      }
      else
      {
        if ( !(_DWORD)v28 )
          goto LABEL_17;
        v16 = v27 & 0xF7FFFFFF;
      }
      v17 = v25;
      v27 = v16;
    }
    *((_QWORD *)BaseAddress + 110) = MEMORY[0x7FFE0014];
    *((_QWORD *)BaseAddress + 109) = ProcessHandlea;
    if ( v10 )
    {
      ThreadInformation = 0LL;
      RtlQueryPerformanceCounter(&PerformanceCounter);
      if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadCycleTime, &ThreadInformation, 0x10u, 0LL) < 0 )
      {
        *(_QWORD *)&ThreadInformation = 0LL;
        v21 = 0LL;
      }
      else
      {
        v21 = ThreadInformation;
      }
      *((_QWORD *)BaseAddress + 131) = v21 - v36;
      *((_QWORD *)BaseAddress + 132) = 1000000 * (PerformanceCounter.QuadPart - v7) / v8;
    }
  }
  if ( (CaptureFlags & 4) != 0 )
  {
    if ( v10 )
    {
      PsspSampleCounters(&v26, &v36);
      v7 = v26;
    }
    LODWORD(v28) = PsspCaptureHandleInformation(BaseAddress, ParentProcess, CaptureFlags);
    if ( (int)v28 < 0 )
    {
      PssNtFreeSnapshot(BaseAddress);
      result = v28;
      *SnapshotHandle = 0LL;
      return result;
    }
    if ( v10 )
    {
      PsspSampleCounters(&PerformanceCounter, &ThreadInformation);
      *((_QWORD *)BaseAddress + 137) = ThreadInformation - v36;
      *((_QWORD *)BaseAddress + 138) = 1000000 * (PerformanceCounter.QuadPart - v7) / v8;
    }
  }
  if ( (CaptureFlags & 0x80u) != 0 )
  {
    if ( v10 )
    {
      PsspSampleCounters(&v26, &v36);
      v7 = v26;
    }
    v29 = PsspCaptureThreadInformation((__int64)BaseAddress, ParentProcess, CaptureFlags, v29);
    if ( v29 < 0 )
    {
      PssNtFreeSnapshot(BaseAddress);
      result = v29;
      *SnapshotHandle = 0LL;
      return result;
    }
    if ( !v10 )
      goto LABEL_25;
    PsspSampleCounters(&PerformanceCounter, &ThreadInformation);
    *((_QWORD *)BaseAddress + 139) = ThreadInformation - v36;
    *((_QWORD *)BaseAddress + 140) = 1000000 * (PerformanceCounter.QuadPart - v7) / v8;
    goto LABEL_47;
  }
  if ( v10 )
  {
LABEL_47:
    v36 = 0LL;
    RtlQueryPerformanceCounter(&PerformanceCounter);
    if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadCycleTime, &v36, 0x10u, 0LL) >= 0 )
      v4 = v36;
    *((_QWORD *)BaseAddress + 129) = v4 - v34;
    *((_QWORD *)BaseAddress + 130) = 1000000 * (PerformanceCounter.QuadPart - v9) / v8;
  }
LABEL_25:
  if ( (CaptureFlags & 0x2000) != 0 )
    PsspCaptureIptTrace(BaseAddress, ParentProcess);
  return 0;
}

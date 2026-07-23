/*
 * XREFs of RtlpReferenceCurrentDirectory @ 0x1800A4340
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
 *     RtlpCheckForSameCurdir @ 0x1800A4070 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x1800A4170 (RtlGetCurrentDirectory_U.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpResetDriveEnvironment @ 0x18009A29C (RtlpResetDriveEnvironment.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A462C (RtlpCreateNewDirectoryReference.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwFsControlFile @ 0x18015F560 (ZwFsControlFile.c)
 */

unsigned __int16 *__fastcall RtlpReferenceCurrentDirectory(char a1)
{
  unsigned __int16 *v2; // rbx
  int v3; // edi
  int v4; // ebp
  NTSTATUS v5; // eax
  char v6; // di
  __int64 v7; // rax
  __int64 v8; // rdx
  PVOID v10; // r14
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r15
  _QWORD v12[2]; // [rsp+50h] [rbp-48h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp+10h] BYREF

  BaseAddress = 0LL;
  IoStatusBlock = 0LL;
  while ( 1 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    v2 = (unsigned __int16 *)RtlpCurDirRef;
    if ( !RtlpCurDirRef )
      return 0LL;
    _InterlockedIncrement((volatile signed __int32 *)RtlpCurDirRef);
    v3 = *((_DWORD *)v2 + 4);
    RtlLeaveCriticalSection(&FastPebLock);
    if ( !a1 )
      return v2;
    v4 = MEMORY[0x7FFE02DC];
    if ( (v2[20] & 1) == 0 && MEMORY[0x7FFE02DC] == v3 )
      return v2;
    v5 = ZwFsControlFile(*((HANDLE *)v2 + 1), 0LL, 0LL, 0LL, &IoStatusBlock, 0x90028u, 0LL, 0, 0LL, 0);
    if ( v5 >= 0 )
    {
      if ( (v2[20] & 1) == 0 )
      {
        RtlEnterCriticalSection(&FastPebLock);
        *((_DWORD *)v2 + 4) = v4;
        RtlLeaveCriticalSection(&FastPebLock);
      }
      return v2;
    }
    if ( v5 != -1073741806 && v5 != -1073741202 )
      return v2;
    v6 = 0;
    if ( (int)RtlpCreateNewDirectoryReference(v2 + 12, v2[13], &BaseAddress) < 0 )
    {
      v7 = *((_QWORD *)v2 + 4);
      v8 = v2[13];
      v12[0] = 6LL;
      v12[1] = v7;
      if ( (int)RtlpCreateNewDirectoryReference(v12, v8, &BaseAddress) < 0 )
        return v2;
      v6 = 1;
    }
    v10 = BaseAddress;
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    *(_DWORD *)BaseAddress = 2;
    RtlEnterCriticalSection(&FastPebLock);
    if ( RtlpCurDirRef == v2 )
      break;
    RtlLeaveCriticalSection(&FastPebLock);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    {
      NtClose(*((HANDLE *)v2 + 1));
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v2);
    }
    *(_DWORD *)v10 = 1;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF) == 1 )
    {
      NtClose(*((HANDLE *)v10 + 1));
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v10);
    }
  }
  RtlpCurDirRef = v10;
  ProcessParameters->CurrentDirectory.DosPath.Length = *((_WORD *)v10 + 12);
  ProcessParameters->CurrentDirectory.DosPath.Buffer = (wchar_t *)*((_QWORD *)v10 + 4);
  ProcessParameters->CurrentDirectory.Handle = (void *)*((_QWORD *)v10 + 1);
  if ( v6 )
    RtlpResetDriveEnvironment(**((_WORD **)v2 + 4));
  RtlLeaveCriticalSection(&FastPebLock);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    NtClose(*((HANDLE *)v2 + 1));
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    NtClose(*((HANDLE *)v2 + 1));
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  return (unsigned __int16 *)v10;
}

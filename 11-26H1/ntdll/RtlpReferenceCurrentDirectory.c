/*
 * XREFs of RtlpReferenceCurrentDirectory @ 0x1800A5210
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180047AE0 (RtlGetFullPathName_Ustr.c)
 *     RtlpCheckForSameCurdir @ 0x1800A4F40 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x1800A5040 (RtlGetCurrentDirectory_U.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpResetDriveEnvironment @ 0x18009B16C (RtlpResetDriveEnvironment.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A54FC (RtlpCreateNewDirectoryReference.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwFsControlFile @ 0x18015F660 (ZwFsControlFile.c)
 */

__int64 __fastcall RtlpReferenceCurrentDirectory(char a1)
{
  __int64 v2; // rbx
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  char v6; // di
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // r14
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r15
  _QWORD v12[2]; // [rsp+50h] [rbp-48h] BYREF
  _OWORD v13[3]; // [rsp+60h] [rbp-38h] BYREF
  _DWORD *v14; // [rsp+A8h] [rbp+10h] BYREF

  v14 = 0LL;
  v13[0] = 0LL;
  while ( 1 )
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    v2 = RtlpCurDirRef;
    if ( !RtlpCurDirRef )
      return 0LL;
    _InterlockedIncrement((volatile signed __int32 *)RtlpCurDirRef);
    v3 = *(_DWORD *)(v2 + 16);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    if ( !a1 )
      return v2;
    v4 = MEMORY[0x7FFE02DC];
    if ( (*(_BYTE *)(v2 + 40) & 1) == 0 && MEMORY[0x7FFE02DC] == v3 )
      return v2;
    v5 = ZwFsControlFile(*(_QWORD *)(v2 + 8), 0LL, 0LL, 0LL, v13, 589864, 0LL, 0, 0LL, 0);
    if ( v5 >= 0 )
    {
      if ( (*(_BYTE *)(v2 + 40) & 1) == 0 )
      {
        RtlEnterCriticalSection((__int64)&FastPebLock);
        *(_DWORD *)(v2 + 16) = v4;
        RtlLeaveCriticalSection((__int64)&FastPebLock);
      }
      return v2;
    }
    if ( v5 != -1073741806 && v5 != -1073741202 )
      return v2;
    v6 = 0;
    if ( (int)RtlpCreateNewDirectoryReference(v2 + 24, *(unsigned __int16 *)(v2 + 26), &v14) < 0 )
    {
      v7 = *(_QWORD *)(v2 + 32);
      v8 = *(unsigned __int16 *)(v2 + 26);
      v12[0] = 6LL;
      v12[1] = v7;
      if ( (int)RtlpCreateNewDirectoryReference(v12, v8, &v14) < 0 )
        return v2;
      v6 = 1;
    }
    v10 = (__int64)v14;
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    *v14 = 2;
    RtlEnterCriticalSection((__int64)&FastPebLock);
    if ( RtlpCurDirRef == v2 )
      break;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    {
      NtClose(*(HANDLE *)(v2 + 8));
      RtlFreeHeap_0();
    }
    *(_DWORD *)v10 = 1;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF) == 1 )
    {
      NtClose(*(HANDLE *)(v10 + 8));
      RtlFreeHeap_0();
    }
  }
  RtlpCurDirRef = v10;
  ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v10 + 24);
  ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v10 + 32);
  ProcessParameters->CurrentDirectory.Handle = *(void **)(v10 + 8);
  if ( v6 )
    RtlpResetDriveEnvironment(**(_WORD **)(v2 + 32));
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    NtClose(*(HANDLE *)(v2 + 8));
    RtlFreeHeap_0();
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    NtClose(*(HANDLE *)(v2 + 8));
    RtlFreeHeap_0();
  }
  return v10;
}

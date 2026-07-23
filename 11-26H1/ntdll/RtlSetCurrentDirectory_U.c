/*
 * XREFs of RtlSetCurrentDirectory_U @ 0x1800A3DE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x1800333F0 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpCheckForSameCurdir @ 0x1800A4070 (RtlpCheckForSameCurdir.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A462C (RtlpCreateNewDirectoryReference.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

NTSTATUS __cdecl RtlSetCurrentDirectory_U(PUNICODE_STRING PathName)
{
  struct _PEB *v2; // rax
  void *ProcessHeap; // rsi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r14
  unsigned int i; // ebx
  _WORD *Heap_0; // rax
  unsigned int FullPathName_Ustr; // eax
  unsigned __int64 v8; // rbx
  unsigned __int16 v9; // ax
  NTSTATUS v10; // edi
  __int64 v11; // rdx
  HANDLE *v12; // rbx
  NTSTATUS v14; // ebx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF

  *(_OWORD *)BaseAddress = 0LL;
  v17 = 0LL;
  v2 = NtCurrentPeb();
  v16 = 0LL;
  ProcessHeap = v2->ProcessHeap;
  ProcessParameters = v2->ProcessParameters;
  if ( (unsigned __int8)RtlpCheckForSameCurdir() )
    return 0;
  if ( (unsigned int)RtlpIsDosDeviceName_Ustr((__m128i *)PathName) )
    return -1073741565;
  for ( i = ProcessParameters->CurrentDirectory.DosPath.MaximumLength; ; i = v8 + 4 )
  {
    Heap_0 = RtlAllocateHeap_0(ProcessHeap, 0, i);
    BaseAddress[1] = Heap_0;
    if ( !Heap_0 )
      return -1073741801;
    LOWORD(BaseAddress[0]) = 0;
    if ( i > 0xFFFF )
    {
      WORD1(BaseAddress[0]) = -1;
LABEL_24:
      v14 = -1073741675;
      goto LABEL_19;
    }
    WORD1(BaseAddress[0]) = i;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(&PathName->Length, i, Heap_0, 0LL, 0LL, (int *)&v17);
    v8 = FullPathName_Ustr;
    if ( !FullPathName_Ustr )
    {
      v14 = -1073741773;
LABEL_19:
      RtlFreeHeap_0(ProcessHeap, 0, BaseAddress[1]);
      return v14;
    }
    v9 = WORD1(BaseAddress[0]);
    if ( v8 <= (unsigned __int64)WORD1(BaseAddress[0]) - 4 )
      goto LABEL_8;
    if ( (NtCurrentPeb()->BitField & 0x80u) == 0 )
      break;
    RtlFreeHeap_0(ProcessHeap, 0, BaseAddress[1]);
  }
  v9 = WORD1(BaseAddress[0]);
LABEL_8:
  if ( (unsigned int)v8 > v9 )
  {
    v14 = -1073741562;
    goto LABEL_19;
  }
  if ( (unsigned int)v8 > 0xFFFF )
  {
    LOWORD(BaseAddress[0]) = -1;
    goto LABEL_24;
  }
  LOWORD(BaseAddress[0]) = v8;
  v10 = RtlpCreateNewDirectoryReference(BaseAddress, v9, &v16);
  RtlFreeHeap_0(ProcessHeap, 0, BaseAddress[1]);
  if ( v10 >= 0 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    v11 = v16;
    v12 = (HANDLE *)RtlpCurDirRef;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v16 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v11 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v11 + 24);
    RtlpCurDirRef = (PVOID)v11;
    RtlLeaveCriticalSection(&FastPebLock);
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12, 0xFFFFFFFF) == 1 )
      {
        NtClose(v12[1]);
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v12);
      }
    }
  }
  return v10;
}

/*
 * XREFs of RtlSetCurrentDirectory_U @ 0x1800A4CB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlGetFullPathName_Ustr @ 0x180047AE0 (RtlGetFullPathName_Ustr.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x180048E70 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpCheckForSameCurdir @ 0x1800A4F40 (RtlpCheckForSameCurdir.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A54FC (RtlpCreateNewDirectoryReference.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall RtlSetCurrentDirectory_U(__m128i *a1)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r14
  unsigned int i; // ebx
  _WORD *Heap_0; // rax
  unsigned int FullPathName_Ustr; // eax
  unsigned __int64 v6; // rbx
  unsigned __int16 v7; // ax
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned int v12; // ebx
  __int128 v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF

  v13 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  if ( (unsigned __int8)RtlpCheckForSameCurdir() )
    return 0LL;
  if ( (unsigned int)RtlpIsDosDeviceName_Ustr(a1) )
    return 3221225731LL;
  for ( i = ProcessParameters->CurrentDirectory.DosPath.MaximumLength; ; i = v6 + 4 )
  {
    Heap_0 = (_WORD *)RtlAllocateHeap_0();
    *((_QWORD *)&v13 + 1) = Heap_0;
    if ( !Heap_0 )
      return 3221225495LL;
    LOWORD(v13) = 0;
    if ( i > 0xFFFF )
    {
      WORD1(v13) = -1;
LABEL_24:
      v12 = -1073741675;
      goto LABEL_19;
    }
    WORD1(v13) = i;
    FullPathName_Ustr = RtlGetFullPathName_Ustr((unsigned __int16 *)a1, i, Heap_0, 0LL, 0LL, (int *)&v15);
    v6 = FullPathName_Ustr;
    if ( !FullPathName_Ustr )
    {
      v12 = -1073741773;
LABEL_19:
      RtlFreeHeap_0();
      return v12;
    }
    v7 = WORD1(v13);
    if ( v6 <= (unsigned __int64)WORD1(v13) - 4 )
      goto LABEL_8;
    if ( (NtCurrentPeb()->BitField & 0x80u) == 0 )
      break;
    RtlFreeHeap_0();
  }
  v7 = WORD1(v13);
LABEL_8:
  if ( (unsigned int)v6 > v7 )
  {
    v12 = -1073741562;
    goto LABEL_19;
  }
  if ( (unsigned int)v6 > 0xFFFF )
  {
    LOWORD(v13) = -1;
    goto LABEL_24;
  }
  LOWORD(v13) = v6;
  v8 = RtlpCreateNewDirectoryReference(&v13, v7, &v14);
  RtlFreeHeap_0();
  if ( v8 >= 0 )
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    v9 = v14;
    v10 = RtlpCurDirRef;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v14 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v9 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v9 + 24);
    RtlpCurDirRef = v9;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v10 + 8));
        RtlFreeHeap_0();
      }
    }
  }
  return (unsigned int)v8;
}

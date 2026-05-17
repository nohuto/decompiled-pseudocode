/*
 * XREFs of RtlGetCurrentDirectory_U @ 0x1800A5040
 * Callers:
 *     LdrpLogEtwDllSearchResults @ 0x180099320 (LdrpLogEtwDllSearchResults.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1801206CC (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpReferenceCurrentDirectory @ 0x1800A5210 (RtlpReferenceCurrentDirectory.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlGetCurrentDirectory_U(__int64 a1, char *a2)
{
  size_t v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rdi
  wchar_t *Buffer; // rdx
  unsigned int Length; // ebx
  __int64 v8; // rbx
  size_t v9; // r14
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx

  v2 = (unsigned int)a1;
  LOBYTE(a1) = 1;
  v4 = RtlpReferenceCurrentDirectory(a1, a2);
  v5 = v4;
  if ( v4 )
  {
    Buffer = *(wchar_t **)(v4 + 32);
    Length = *(unsigned __int16 *)(v4 + 24);
  }
  else
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    Length = ProcessParameters->CurrentDirectory.DosPath.Length;
  }
  LODWORD(v8) = Length >> 1;
  if ( (unsigned int)v8 < 2 || Buffer[(unsigned int)(v8 - 2)] == 58 )
  {
    v9 = 2LL * (unsigned int)v8;
    if ( v2 > v9 )
      goto LABEL_6;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v4 + 8));
        RtlFreeHeap_0();
      }
      return (unsigned int)(2 * v8 + 2);
    }
    else
    {
      RtlLeaveCriticalSection((__int64)&FastPebLock);
      return (unsigned int)(2 * v8 + 2);
    }
  }
  else
  {
    v9 = 2LL * (unsigned int)v8;
    if ( v2 >= v9 )
    {
LABEL_6:
      memmove(a2, Buffer, v9);
      if ( v5 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
        {
          NtClose(*(HANDLE *)(v5 + 8));
          RtlFreeHeap_0();
        }
      }
      else
      {
        RtlLeaveCriticalSection((__int64)&FastPebLock);
      }
      if ( (unsigned int)v8 > 1 && *(_WORD *)&a2[2 * (unsigned int)(v8 - 2)] == 58 )
      {
        *(_WORD *)&a2[v9] = 0;
      }
      else
      {
        v8 = (unsigned int)(v8 - 1);
        *(_WORD *)&a2[2 * v8] = 0;
      }
      return (unsigned int)(2 * v8);
    }
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v4 + 8));
        RtlFreeHeap_0();
      }
      return (unsigned int)v9;
    }
    else
    {
      RtlLeaveCriticalSection((__int64)&FastPebLock);
      return (unsigned int)v9;
    }
  }
}

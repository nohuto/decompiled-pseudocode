/*
 * XREFs of RtlpQueryPseudoEnvironmentVariable @ 0x18009C828
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x18009BE40 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlFindCharInUnicodeString @ 0x180099860 (RtlFindCharInUnicodeString.c)
 *     RtlStringCbPrintfExW @ 0x1800BFE84 (RtlStringCbPrintfExW.c)
 *     NtQuerySystemInformation @ 0x18015F500 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x180161C10 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpQueryPseudoEnvironmentVariable(int a1, _WORD *a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  char v7; // r14
  unsigned __int16 *Heap_0; // rdi
  int v9; // ecx
  NTSTATUS v10; // ebx
  int Args; // r8d
  unsigned int i; // edx
  const wchar_t *Buffer; // rdx
  unsigned __int64 v14; // rbx
  size_t v15; // rbx
  _RTL_USER_PROCESS_PARAMETERS *v16; // rbx
  NTSTATUS CharInUnicodeString; // eax
  unsigned __int64 Length; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  USHORT NonInclusivePrefixLength; // [rsp+44h] [rbp-94h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-90h] BYREF
  int InputBuffer; // [rsp+4Ch] [rbp-8Ch] BYREF
  int v24; // [rsp+50h] [rbp-88h]
  unsigned int v25; // [rsp+54h] [rbp-84h]
  __int64 v26; // [rsp+58h] [rbp-80h]
  unsigned __int16 *v27; // [rsp+60h] [rbp-78h]
  __int128 SystemInformation; // [rsp+68h] [rbp-70h] BYREF
  __int128 v29; // [rsp+78h] [rbp-60h]
  wchar_t Src[16]; // [rsp+88h] [rbp-50h] BYREF

  SystemInformation = 0LL;
  v29 = 0LL;
  NonInclusivePrefixLength = 0;
  InputBuffer = 0;
  ReturnLength = 0;
  v26 = 0LL;
  v7 = 0;
  Heap_0 = 0LL;
  v27 = 0LL;
  if ( !a1 )
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    RtlEnterCriticalSection(&FastPebLock);
    v7 = 1;
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    Length = ProcessParameters->CurrentDirectory.DosPath.Length;
    goto LABEL_22;
  }
  v9 = a1 - 1;
  if ( !v9 )
  {
    v16 = NtCurrentPeb()->ProcessParameters;
    CharInUnicodeString = RtlFindCharInUnicodeString(
                            1u,
                            &v16->ImagePathName,
                            &RtlDosPathSeperatorsString,
                            &NonInclusivePrefixLength);
    Buffer = v16->ImagePathName.Buffer;
    if ( CharInUnicodeString >= 0 )
    {
      v14 = (NonInclusivePrefixLength >> 1) + 1;
      goto LABEL_10;
    }
    Length = v16->ImagePathName.Length;
LABEL_22:
    v14 = Length >> 1;
    goto LABEL_10;
  }
  if ( v9 != 1 )
  {
    v10 = NtQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL);
    if ( v10 < 0 )
      goto LABEL_27;
    if ( (_DWORD)v29 == 1 )
    {
      Buffer = L"Legacy";
      v14 = 6LL;
    }
    else
    {
      Buffer = L"UEFI";
      v14 = 4LL;
    }
    goto LABEL_10;
  }
  InputBuffer = 4;
  ReturnLength = 0;
  NtQuerySystemInformationEx(SystemLogicalProcessorAndGroupInformation, &InputBuffer, 4u, 0LL, 0, &ReturnLength);
  Heap_0 = (unsigned __int16 *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
  v27 = Heap_0;
  if ( !Heap_0 )
  {
    v10 = -1073741801;
    goto LABEL_27;
  }
  v10 = NtQuerySystemInformationEx(
          SystemLogicalProcessorAndGroupInformation,
          &InputBuffer,
          4u,
          Heap_0,
          ReturnLength,
          &ReturnLength);
  if ( v10 >= 0 )
  {
    Args = 0;
    v24 = 0;
    for ( i = 0; ; ++i )
    {
      v25 = i;
      if ( i >= Heap_0[5] )
        break;
      Args += HIBYTE(Heap_0[24 * i + 16]);
      v24 = Args;
    }
    v10 = RtlStringCbPrintfExW(Src, 0, (wchar_t *)L"%u", Args);
    if ( v10 >= 0 )
    {
      Buffer = Src;
      v14 = (v26 - (__int64)Src) >> 1;
LABEL_10:
      if ( a2 )
      {
        if ( v14 < a3 )
        {
          *a4 = v14;
          v15 = v14;
          memmove(a2, Buffer, v15 * 2);
          a2[v15] = 0;
          v10 = 0;
          goto LABEL_27;
        }
        if ( a3 )
          *a2 = 0;
      }
      *a4 = v14 + 1;
      v10 = -1073741789;
    }
  }
LABEL_27:
  if ( v7 )
    RtlLeaveCriticalSection(&FastPebLock);
  if ( Heap_0 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  return (unsigned int)v10;
}

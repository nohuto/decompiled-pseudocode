/*
 * XREFs of RtlpQueryPseudoEnvironmentVariable @ 0x18009D6F8
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x18009CD10 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlFindCharInUnicodeString @ 0x18009A730 (RtlFindCharInUnicodeString.c)
 *     RtlStringCbPrintfExW @ 0x1800C27B4 (RtlStringCbPrintfExW.c)
 *     NtQuerySystemInformation @ 0x18015F600 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x180161D10 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpQueryPseudoEnvironmentVariable(int a1, _WORD *a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  char v7; // r14
  __int64 Heap_0; // rdi
  int v9; // ecx
  int v10; // ebx
  int Args; // r8d
  unsigned int i; // edx
  const wchar_t *Buffer; // rdx
  unsigned __int64 v14; // rbx
  size_t v15; // rbx
  _RTL_USER_PROCESS_PARAMETERS *v16; // rbx
  int CharInUnicodeString; // eax
  unsigned __int64 Length; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  unsigned __int16 v21; // [rsp+44h] [rbp-94h] BYREF
  int v22; // [rsp+48h] [rbp-90h] BYREF
  int v23; // [rsp+4Ch] [rbp-8Ch] BYREF
  int v24; // [rsp+50h] [rbp-88h]
  unsigned int v25; // [rsp+54h] [rbp-84h]
  __int64 v26; // [rsp+58h] [rbp-80h]
  __int64 v27; // [rsp+60h] [rbp-78h]
  __int128 SystemInformation; // [rsp+68h] [rbp-70h] BYREF
  __int128 v29; // [rsp+78h] [rbp-60h]
  wchar_t Src[16]; // [rsp+88h] [rbp-50h] BYREF

  SystemInformation = 0LL;
  v29 = 0LL;
  v21 = 0;
  v23 = 0;
  v22 = 0;
  v26 = 0LL;
  v7 = 0;
  Heap_0 = 0LL;
  v27 = 0LL;
  if ( !a1 )
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    RtlEnterCriticalSection((__int64)&FastPebLock);
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
                            1,
                            (__int16 *)&v16->ImagePathName,
                            RtlDosPathSeperatorsString,
                            &v21);
    Buffer = v16->ImagePathName.Buffer;
    if ( CharInUnicodeString >= 0 )
    {
      v14 = (v21 >> 1) + 1;
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
  v23 = 4;
  v22 = 0;
  NtQuerySystemInformationEx(107LL, &v23, 4LL, 0LL, 0, &v22);
  Heap_0 = RtlAllocateHeap_0();
  v27 = Heap_0;
  if ( !Heap_0 )
  {
    v10 = -1073741801;
    goto LABEL_27;
  }
  v10 = NtQuerySystemInformationEx(107LL, &v23, 4LL, Heap_0, v22, &v22);
  if ( v10 >= 0 )
  {
    Args = 0;
    v24 = 0;
    for ( i = 0; ; ++i )
    {
      v25 = i;
      if ( i >= *(unsigned __int16 *)(Heap_0 + 10) )
        break;
      Args += *(unsigned __int8 *)(Heap_0 + 48LL * i + 33);
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
    RtlLeaveCriticalSection((__int64)&FastPebLock);
  if ( Heap_0 )
    RtlFreeHeap_0();
  return (unsigned int)v10;
}

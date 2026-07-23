/*
 * XREFs of _IsProgramFilesPath @ 0x18009A0B4
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18001D950 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlQueryEnvironmentVariable @ 0x18009BE40 (RtlQueryEnvironmentVariable.c)
 *     _wcsnicmp @ 0x180128DF0 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall IsProgramFilesPath(wchar_t *String1, size_t *a2)
{
  WCHAR *Heap_0; // rsi
  SIZE_T v5; // rdi
  NTSTATUS EnvironmentVariable; // ebx
  NTSTATUS v7; // eax
  size_t v8; // rdi
  ULONG_PTR ReturnLength[2]; // [rsp+30h] [rbp-308h] BYREF
  WCHAR Value[352]; // [rsp+40h] [rbp-2F8h] BYREF

  *a2 = 0LL;
  ReturnLength[0] = 0LL;
  Heap_0 = Value;
  LOWORD(v5) = 702;
  EnvironmentVariable = RtlQueryEnvironmentVariable(0LL, L"ProgramFiles", 0xCuLL, Value, 0x15FuLL, ReturnLength);
  if ( ReturnLength[0] > 0x7FFF )
    return (unsigned int)-1073741801;
  if ( EnvironmentVariable != -1073741789 )
  {
    if ( EnvironmentVariable >= 0 )
      goto LABEL_6;
    return (unsigned int)EnvironmentVariable;
  }
  v5 = (unsigned __int16)(2 * LOWORD(ReturnLength[0]));
  Heap_0 = (WCHAR *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v5);
  if ( Heap_0 )
  {
LABEL_6:
    ReturnLength[0] = 0LL;
    v7 = RtlQueryEnvironmentVariable(
           0LL,
           L"ProgramFiles",
           0xCuLL,
           Heap_0,
           (unsigned __int64)(unsigned __int16)v5 >> 1,
           ReturnLength);
    EnvironmentVariable = v7;
    if ( ReturnLength[0] > 0x7FFF )
    {
      EnvironmentVariable = -1073741801;
    }
    else if ( v7 >= 0 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( Heap_0[v8] );
      if ( wcsnicmp(String1, Heap_0, v8) )
        EnvironmentVariable = -1073741637;
      else
        *a2 = v8;
    }
    if ( Heap_0 != Value )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
    return (unsigned int)EnvironmentVariable;
  }
  return 3221225659LL;
}

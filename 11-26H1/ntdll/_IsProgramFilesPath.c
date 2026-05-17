/*
 * XREFs of _IsProgramFilesPath @ 0x18009AF84
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x1800327F0 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlQueryEnvironmentVariable @ 0x18009CD10 (RtlQueryEnvironmentVariable.c)
 *     _wcsnicmp @ 0x180129080 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall IsProgramFilesPath(wchar_t *String1, size_t *a2)
{
  const wchar_t *Heap_0; // rsi
  unsigned __int16 v5; // di
  int EnvironmentVariable; // ebx
  int v7; // eax
  size_t v8; // rdi
  _QWORD v10[2]; // [rsp+30h] [rbp-308h] BYREF
  wchar_t String2[352]; // [rsp+40h] [rbp-2F8h] BYREF

  *a2 = 0LL;
  v10[0] = 0LL;
  Heap_0 = String2;
  v5 = 702;
  EnvironmentVariable = RtlQueryEnvironmentVariable(0LL, L"ProgramFiles", 12LL, String2, 351LL, v10);
  if ( v10[0] > 0x7FFFuLL )
    return (unsigned int)-1073741801;
  if ( EnvironmentVariable != -1073741789 )
  {
    if ( EnvironmentVariable >= 0 )
      goto LABEL_6;
    return (unsigned int)EnvironmentVariable;
  }
  v5 = 2 * LOWORD(v10[0]);
  Heap_0 = (const wchar_t *)RtlAllocateHeap_0();
  if ( Heap_0 )
  {
LABEL_6:
    v10[0] = 0LL;
    v7 = RtlQueryEnvironmentVariable(0LL, L"ProgramFiles", 12LL, Heap_0, (unsigned __int64)v5 >> 1, v10);
    EnvironmentVariable = v7;
    if ( v10[0] > 0x7FFFuLL )
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
    if ( Heap_0 != String2 )
      RtlFreeHeap_0();
    return (unsigned int)EnvironmentVariable;
  }
  return 3221225659LL;
}

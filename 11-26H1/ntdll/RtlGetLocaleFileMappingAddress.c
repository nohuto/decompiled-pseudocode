/*
 * XREFs of RtlGetLocaleFileMappingAddress @ 0x1800F8F80
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     NtInitializeNlsFiles @ 0x180161030 (NtInitializeNlsFiles.c)
 */

__int64 __fastcall RtlGetLocaleFileMappingAddress(signed __int64 *a1, int *a2)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( gBaseAddress )
  {
    *a1 = gBaseAddress;
    *a2 = gSystemLocale;
  }
  else
  {
    result = NtInitializeNlsFiles(a1, a2, 0LL);
    if ( (int)result < 0 )
      return result;
    gSystemLocale = *a2;
    if ( _InterlockedCompareExchange64(&gBaseAddress, *a1, 0LL) )
    {
      NtUnmapViewOfSection(-1LL, *a1);
      *a1 = gBaseAddress;
    }
  }
  return 0LL;
}

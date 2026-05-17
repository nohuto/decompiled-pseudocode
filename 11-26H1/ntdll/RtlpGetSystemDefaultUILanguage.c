/*
 * XREFs of RtlpGetSystemDefaultUILanguage @ 0x18000A750
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180009CD0 (RtlpQueryDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x180142090 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpLoadInstallLanguageFallback @ 0x18000144C (RtlpLoadInstallLanguageFallback.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x1801610B0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180161AD0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpGetSystemDefaultUILanguage(_WORD *a1, _WORD *a2, __int64 a3)
{
  int v3; // ebx
  _WORD *v4; // rdi
  __int16 v6; // ax
  int ProcessRegistryInfo; // eax
  __int16 v9; // [rsp+30h] [rbp+8h] BYREF
  _WORD *v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v4 = a2;
  v9 = 0;
  v10 = 0LL;
  if ( a1 )
  {
    *a1 = 0;
    if ( !a2
      && (ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((__int64 *)&v10),
          v4 = v10,
          v3 = ProcessRegistryInfo,
          ProcessRegistryInfo < 0)
      || !v4
      || (v6 = v4[2]) == 0 )
    {
      v3 = NtQueryInstallUILanguage(&v9, a2, a3);
      if ( v3 < 0 )
        return (unsigned int)v3;
      if ( (int)NtIsUILanguageComitted() >= 0 )
      {
        if ( v4 )
        {
          RtlpLoadInstallLanguageFallback((__int64)v4, v4 + 3, v4 + 4);
          v4[2] = v9;
        }
      }
      v6 = v9;
    }
    *a1 = v6;
    return (unsigned int)v3;
  }
  return 3221225485LL;
}

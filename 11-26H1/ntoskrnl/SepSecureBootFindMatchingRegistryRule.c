/*
 * XREFs of SepSecureBootFindMatchingRegistryRule @ 0x14081C240
 * Callers:
 *     SeQuerySecureBootPolicyValue @ 0x14081C0D0 (SeQuerySecureBootPolicyValue.c)
 * Callees:
 *     SepEqualAsciiWideStringCaseInSensitive @ 0x14081C1B8 (SepEqualAsciiWideStringCaseInSensitive.c)
 */

char *__fastcall SepSecureBootFindMatchingRegistryRule(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  char *NormalContext; // r11
  char *v4; // rdi
  char *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  NormalContext = (char *)RtlpBootStatHandleLock.SchedulerApc.NormalContext;
  v4 = (char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2];
  v11 = 0LL;
  v7 = (char *)RtlpBootStatHandleLock.SchedulerApc.NormalContext
     + 16 * *((unsigned __int16 *)RtlpBootStatHandleLock.SchedulerApc.Reserved[1] + 19);
  while ( NormalContext < v7 )
  {
    if ( *(_DWORD *)NormalContext == -2130706432 )
    {
      v8 = *((unsigned int *)NormalContext + 1);
      *((_QWORD *)&v11 + 1) = &v4[v8 + 2];
      LOWORD(v11) = *(_WORD *)&v4[v8];
      WORD1(v11) = v11 + 2;
      if ( SepEqualAsciiWideStringCaseInSensitive(a2, (unsigned __int16 *)&v11) )
      {
        v9 = *((unsigned int *)NormalContext + 2);
        *((_QWORD *)&v11 + 1) = &v4[v9 + 2];
        LOWORD(v11) = *(_WORD *)&v4[v9];
        WORD1(v11) = v11 + 2;
        if ( SepEqualAsciiWideStringCaseInSensitive(a3, (unsigned __int16 *)&v11) )
          return NormalContext;
      }
    }
    NormalContext += 16;
  }
  return 0LL;
}

/*
 * XREFs of SepSecureBootFindMatchingRegistryRule @ 0x140816030
 * Callers:
 *     SeQuerySecureBootPolicyValue @ 0x140815EC0 (SeQuerySecureBootPolicyValue.c)
 * Callees:
 *     SepEqualAsciiWideStringCaseInSensitive @ 0x140815FA8 (SepEqualAsciiWideStringCaseInSensitive.c)
 */

char *__fastcall SepSecureBootFindMatchingRegistryRule(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  char *v3; // r11
  struct _LIST_ENTRY *Blink; // rdi
  char *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v3 = (char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[0];
  Blink = RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink;
  v11 = 0LL;
  v7 = (char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[0]
     + 16 * *(unsigned __int16 *)(*(_QWORD *)&RtlpBootStatHandleLock.SavedApcStateFill[40] + 38LL);
  while ( v3 < v7 )
  {
    if ( *(_DWORD *)v3 == -2130706432 )
    {
      v8 = *((unsigned int *)v3 + 1);
      *((_QWORD *)&v11 + 1) = (char *)&Blink->Flink + v8 + 2;
      LOWORD(v11) = *(_WORD *)((char *)&Blink->Flink + v8);
      WORD1(v11) = v11 + 2;
      if ( SepEqualAsciiWideStringCaseInSensitive(a2, (unsigned __int16 *)&v11) )
      {
        v9 = *((unsigned int *)v3 + 2);
        *((_QWORD *)&v11 + 1) = (char *)&Blink->Flink + v9 + 2;
        LOWORD(v11) = *(_WORD *)((char *)&Blink->Flink + v9);
        WORD1(v11) = v11 + 2;
        if ( SepEqualAsciiWideStringCaseInSensitive(a3, (unsigned __int16 *)&v11) )
          return v3;
      }
    }
    v3 += 16;
  }
  return 0LL;
}

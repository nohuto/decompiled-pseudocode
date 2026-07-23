/*
 * XREFs of PipCheckForUnsatisfiedDependencies @ 0x1409B10B8
 * Callers:
 *     PipAttemptDependentStart @ 0x1407A2860 (PipAttemptDependentStart.c)
 *     PnpCheckForActiveDependencies @ 0x1409AF220 (PnpCheckForActiveDependencies.c)
 * Callees:
 *     PiEnumerateProviderListEntry @ 0x1407A2650 (PiEnumerateProviderListEntry.c)
 *     PipIsProviderStarted @ 0x1407A2A5C (PipIsProviderStarted.c)
 */

char __fastcall PipCheckForUnsatisfiedDependencies(__int64 a1)
{
  char v1; // r11
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // rbx

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 && (v3 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 80LL)) != 0 )
    v4 = (__int64 *)(v3 + 16);
  else
    v4 = &PiDependencyNodeEmptyList;
  if ( (__int64 *)*v4 != v4 )
  {
    PiEnumerateProviderListEntry(*v4);
    return 1;
  }
  return v1;
}

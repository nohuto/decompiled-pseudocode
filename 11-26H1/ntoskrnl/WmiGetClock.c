/*
 * XREFs of WmiGetClock @ 0x1406CA3F0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     EtwpGetPerfCounter @ 0x14032F3E0 (EtwpGetPerfCounter.c)
 */

unsigned __int64 WmiGetClock()
{
  int v0; // edx
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int64 result; // rax
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // ecx

  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  result = 0LL;
  if ( !v0 )
  {
    v7 = BYTE1(Flink[281].Blink) - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
        return RtlGetSystemTimePrecise().QuadPart;
      if ( v8 == 1 )
        return __rdtsc();
    }
    return EtwpGetPerfCounter();
  }
  v3 = v0 - 1;
  if ( !v3 )
    return RtlGetSystemTimePrecise().QuadPart;
  v4 = v3 - 1;
  if ( !v4 )
    return EtwpGetPerfCounter();
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return RtlGetSystemTimePrecise().QuadPart;
      return __rdtsc();
    }
  }
  return result;
}

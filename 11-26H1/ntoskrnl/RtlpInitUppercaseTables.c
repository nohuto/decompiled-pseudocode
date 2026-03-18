/*
 * XREFs of RtlpInitUppercaseTables @ 0x14080221C
 * Callers:
 *     ExInitializeNls @ 0x140B6CCE4 (ExInitializeNls.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     NtGetNlsSectionPtr @ 0x140A97650 (NtGetNlsSectionPtr.c)
 */

__int64 RtlpInitUppercaseTables()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v1; // rbx
  __int64 v2; // rax
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v4 = 0LL;
  v1 = CurrentServerSiloGlobals;
  if ( (int)NtGetNlsSectionPtr(14, 0, 0, (unsigned int)&v4, 0LL) >= 0 )
  {
    v2 = v4;
  }
  else
  {
    v2 = 0LL;
    v4 = 0LL;
  }
  if ( v2 )
  {
    _InterlockedExchange64((volatile __int64 *)&v1[75], v2 + 4);
    _InterlockedExchange64((volatile __int64 *)&v1[75].Blink, v4 + 2 * (*(unsigned __int16 *)(v4 + 2) + 2LL));
    v1[74].Blink = (struct _LIST_ENTRY *)v4;
  }
  else
  {
    v1[75].Flink = 0LL;
    v1[75].Blink = 0LL;
    v1[74].Blink = 0LL;
  }
  return 0LL;
}

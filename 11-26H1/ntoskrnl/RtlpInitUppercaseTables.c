/*
 * XREFs of RtlpInitUppercaseTables @ 0x140807CBC
 * Callers:
 *     ExInitializeNls @ 0x140B700B4 (ExInitializeNls.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     NtGetNlsSectionPtr @ 0x140A9B7D0 (NtGetNlsSectionPtr.c)
 */

__int64 RtlpInitUppercaseTables()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v1; // rbx
  PVOID v2; // rax
  PVOID SectionPointer; // [rsp+48h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  SectionPointer = 0LL;
  v1 = CurrentServerSiloGlobals;
  if ( NtGetNlsSectionPtr(0xEu, 0, 0LL, &SectionPointer, 0LL) >= 0 )
  {
    v2 = SectionPointer;
  }
  else
  {
    v2 = 0LL;
    SectionPointer = 0LL;
  }
  if ( v2 )
  {
    _InterlockedExchange64((volatile __int64 *)&v1[75], (__int64)v2 + 4);
    _InterlockedExchange64(
      (volatile __int64 *)&v1[75].Blink,
      (__int64)SectionPointer + 2 * *((unsigned __int16 *)SectionPointer + 1) + 4);
    v1[74].Blink = (struct _LIST_ENTRY *)SectionPointer;
  }
  else
  {
    v1[75].Flink = 0LL;
    v1[75].Blink = 0LL;
    v1[74].Blink = 0LL;
  }
  return 0LL;
}

/*
 * XREFs of RtlHpGlobalsInitialize @ 0x140628520
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x1406D70BC (RtlHpKInitializeHeapManager.c)
 *     ExpInitSystemPhase0 @ 0x140CEA460 (ExpInitSystemPhase0.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     RtlpHpInitializeLock @ 0x14034D510 (RtlpHpInitializeLock.c)
 *     RtlIsProcessorFeaturePresent @ 0x1404B90A0 (RtlIsProcessorFeaturePresent.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 RtlHpGlobalsInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int64 Blink; // rax
  signed __int64 v5; // rcx
  unsigned __int64 v6; // rtt
  unsigned __int64 v7; // rax
  signed __int64 v8; // rcx
  unsigned __int64 v9; // rtt

  memset_0(&PspTlsContext.Timer.Processor, 0, 0x80uLL);
  v1 = ExGenRandom(1, v0) & 0x7FFFFFFF;
  v3 = ExGenRandom(1, v2);
  LODWORD(v3) = v3 & 0x7FFFFFFF;
  PspTlsContext.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)((unsigned __int64)&PspTlsContext.Timer.Processor ^ ((v1 << 32) | v3));
  if ( !PspTlsContext.WaitBlock[1].WaitListEntry.Blink )
    PspTlsContext.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)1;
  Blink = (unsigned __int64)PspTlsContext.WaitBlock[1].WaitListEntry.Blink;
  do
  {
    v5 = Blink ^ (Blink >> 12) ^ ((Blink ^ (Blink >> 12)) << 25) ^ ((Blink ^ (Blink >> 12) ^ ((Blink ^ (Blink >> 12)) << 25)) >> 27);
    v6 = Blink;
    Blink = _InterlockedCompareExchange64(
              (volatile signed __int64 *)&PspTlsContext.WaitBlock[1].WaitListEntry.Blink,
              v5,
              Blink);
  }
  while ( v6 != Blink );
  v7 = (unsigned __int64)PspTlsContext.WaitBlock[1].WaitListEntry.Blink;
  *(_QWORD *)&PspTlsContext.Timer.Processor = 0x2545F4914F6CDD1DLL * v5;
  do
  {
    v8 = v7 ^ (v7 >> 12) ^ ((v7 ^ (v7 >> 12)) << 25) ^ ((v7 ^ (v7 >> 12) ^ ((v7 ^ (v7 >> 12)) << 25)) >> 27);
    v9 = v7;
    v7 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)&PspTlsContext.WaitBlock[1].WaitListEntry.Blink,
           v8,
           v7);
  }
  while ( v9 != v7 );
  PspTlsContext.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(0x2545F4914F6CDD1DLL * v8);
  PspTlsContext.WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)&RtlpHeapFailureInfo;
  if ( RtlIsProcessorFeaturePresent(0x2Au) )
    *(_DWORD *)&PspTlsContext.WaitBlockFill11[32] |= 2u;
  if ( RtlIsProcessorFeaturePresent(0x3Cu) )
    *(_DWORD *)&PspTlsContext.WaitBlockFill11[32] |= 4u;
  *(_DWORD *)&PspTlsContext.WaitBlockFill11[32] |= 1u;
  return RtlpHpInitializeLock(&stru_140E62450, 1);
}

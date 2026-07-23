/*
 * XREFs of RtlHpGlobalsInitialize @ 0x1800CFD78
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800CFAEC (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlRandomEx @ 0x18008F0D0 (RtlRandomEx.c)
 *     RtlIsProcessorFeaturePresent @ 0x1800D11A0 (RtlIsProcessorFeaturePresent.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlHpGlobalsInitialize()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rax
  signed __int64 v2; // rcx
  unsigned __int64 v3; // rtt
  unsigned __int64 v4; // rax
  signed __int64 v5; // rcx
  unsigned __int64 v6; // rtt
  bool v7; // zf
  int v8; // eax
  __int64 result; // rax
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  memset_thunk_772440563353939046(&RtlpHpHeapGlobals, 0, 0x80uLL);
  Seed = ((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) ^ (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  v0 = (unsigned __int64)RtlRandomEx(&Seed) << 32;
  qword_1801C5F00 = (unsigned __int64)&RtlpHpHeapGlobals ^ (v0 | RtlRandomEx(&Seed));
  if ( !qword_1801C5F00 )
    qword_1801C5F00 = 1LL;
  v1 = qword_1801C5F00;
  do
  {
    v2 = v1 ^ (v1 >> 12) ^ ((v1 ^ (v1 >> 12)) << 25) ^ ((v1 ^ (v1 >> 12) ^ ((v1 ^ (v1 >> 12)) << 25)) >> 27);
    v3 = v1;
    v1 = _InterlockedCompareExchange64(&qword_1801C5F00, v2, v1);
  }
  while ( v3 != v1 );
  v4 = qword_1801C5F00;
  RtlpHpHeapGlobals = 0x2545F4914F6CDD1DLL * v2;
  do
  {
    v5 = v4 ^ (v4 >> 12) ^ ((v4 ^ (v4 >> 12)) << 25) ^ ((v4 ^ (v4 >> 12) ^ ((v4 ^ (v4 >> 12)) << 25)) >> 27);
    v6 = v4;
    v4 = _InterlockedCompareExchange64(&qword_1801C5F00, v5, v4);
  }
  while ( v6 != v4 );
  qword_1801C5EC8 = 0x2545F4914F6CDD1DLL * v5;
  qword_1801C5ED0 = (__int64)&RtlpHeapFailureInfo;
  if ( RtlIsProcessorFeaturePresent(0x2Au) )
    LODWORD(qword_1801C5EE8) = qword_1801C5EE8 | 2;
  v7 = RtlIsProcessorFeaturePresent(0x3Cu) == 0;
  v8 = qword_1801C5EE8;
  if ( !v7 )
    v8 = qword_1801C5EE8 | 4;
  result = v8 | 1u;
  LODWORD(qword_1801C5EE8) = result;
  stru_1801C6298.0 = 0LL;
  return result;
}

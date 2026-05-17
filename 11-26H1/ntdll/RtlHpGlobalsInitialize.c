/*
 * XREFs of RtlHpGlobalsInitialize @ 0x1800D4060
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800D3DD4 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlRandomEx @ 0x18006EC80 (RtlRandomEx.c)
 *     RtlIsProcessorFeaturePresent @ 0x1800D5BC0 (RtlIsProcessorFeaturePresent.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
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
  __int32 v10; // [rsp+30h] [rbp+8h] BYREF

  memset_thunk_772440563353939046(&RtlpHpHeapGlobals, 0, 0x80uLL);
  v10 = ((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) ^ (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  v0 = (unsigned __int64)(unsigned int)RtlRandomEx(&v10) << 32;
  qword_1801C6F00 = (unsigned __int64)&RtlpHpHeapGlobals ^ (v0 | (unsigned int)RtlRandomEx(&v10));
  if ( !qword_1801C6F00 )
    qword_1801C6F00 = 1LL;
  v1 = qword_1801C6F00;
  do
  {
    v2 = v1 ^ (v1 >> 12) ^ ((v1 ^ (v1 >> 12)) << 25) ^ ((v1 ^ (v1 >> 12) ^ ((v1 ^ (v1 >> 12)) << 25)) >> 27);
    v3 = v1;
    v1 = _InterlockedCompareExchange64(&qword_1801C6F00, v2, v1);
  }
  while ( v3 != v1 );
  v4 = qword_1801C6F00;
  RtlpHpHeapGlobals = 0x2545F4914F6CDD1DLL * v2;
  do
  {
    v5 = v4 ^ (v4 >> 12) ^ ((v4 ^ (v4 >> 12)) << 25) ^ ((v4 ^ (v4 >> 12) ^ ((v4 ^ (v4 >> 12)) << 25)) >> 27);
    v6 = v4;
    v4 = _InterlockedCompareExchange64(&qword_1801C6F00, v5, v4);
  }
  while ( v6 != v4 );
  qword_1801C6EC8 = 0x2545F4914F6CDD1DLL * v5;
  qword_1801C6ED0 = (__int64)&RtlpHeapFailureInfo;
  if ( (unsigned __int8)RtlIsProcessorFeaturePresent(42LL) )
    LODWORD(qword_1801C6EE8) = qword_1801C6EE8 | 2;
  v7 = (unsigned __int8)RtlIsProcessorFeaturePresent(60LL) == 0;
  v8 = qword_1801C6EE8;
  if ( !v7 )
    v8 = qword_1801C6EE8 | 4;
  result = v8 | 1u;
  LODWORD(qword_1801C6EE8) = result;
  qword_1801C7298 = 0LL;
  return result;
}

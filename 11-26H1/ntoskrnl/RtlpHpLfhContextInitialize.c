/*
 * XREFs of RtlpHpLfhContextInitialize @ 0x14063C740
 * Callers:
 *     RtlpHpHeapCreate @ 0x14063B29C (RtlpHpHeapCreate.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall RtlpHpLfhContextInitialize(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        __int16 a6)
{
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 Blink; // rax
  signed __int64 v17; // rcx
  unsigned __int64 v18; // rtt
  unsigned __int8 v19; // cl
  _QWORD *v20; // rdi
  __int64 v21; // r8
  unsigned __int64 result; // rax
  signed __int64 v23; // rcx
  unsigned __int64 v24; // rtt

  memset_0((void *)a1, 0, 0x6C0uLL);
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 73) = a4;
  v10 = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a5;
  v11 = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a1 + 24) = v10;
  *(_QWORD *)&v10 = *(_QWORD *)(a5 + 48);
  *(_WORD *)(a1 + 74) = a6 - a1;
  *(_OWORD *)(a1 + 40) = v11;
  v12 = 0LL;
  *(_QWORD *)(a1 + 56) = v10;
  do
    *(_QWORD *)(a1 + 8 * v12++ + 8) ^= *(_QWORD *)&PspTlsContext.Timer.Processor ^ a1;
  while ( v12 < 4 );
  v13 = *(_QWORD *)(a1 + 40);
  if ( v13 )
    *(_QWORD *)(a1 + 40) = a1 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ v13;
  v14 = *(_QWORD *)(a1 + 48);
  if ( v14 )
    *(_QWORD *)(a1 + 48) = a1 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ v14;
  v15 = *(_QWORD *)(a1 + 56);
  if ( v15 )
    *(_QWORD *)(a1 + 56) = a1 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ v15;
  Blink = (unsigned __int64)PspTlsContext.WaitBlock[1].WaitListEntry.Blink;
  do
  {
    v17 = Blink ^ (Blink >> 12) ^ ((Blink ^ (Blink >> 12)) << 25) ^ ((Blink ^ (Blink >> 12) ^ ((Blink ^ (Blink >> 12)) << 25)) >> 27);
    v18 = Blink;
    Blink = _InterlockedCompareExchange64(
              (volatile signed __int64 *)&PspTlsContext.WaitBlock[1].WaitListEntry.Blink,
              v17,
              Blink);
  }
  while ( v18 != Blink );
  *(_QWORD *)(a1 + 88) = 0x2545F4914F6CDD1DLL * v17;
  v19 = 64;
  if ( a3 <= 0x40 )
    v19 = a3;
  *(_BYTE *)(a1 + 72) = v19;
  if ( v19 > 1u )
    *(_QWORD *)(a1 + 64) = (char *)qword_140038690
                         + ((unsigned __int64)((64 - v19 + 61) * (62 - (64 - (unsigned int)v19))) >> 1);
  memset64((void *)(a1 + 448), 1uLL, 0x80uLL);
  *(_WORD *)(a1 + 76) = 0;
  v20 = &RtlpLowFragHeapRandomData;
  v21 = 32LL;
  *(_BYTE *)(a1 + 82) = 2;
  do
  {
    result = (unsigned __int64)PspTlsContext.WaitBlock[1].WaitListEntry.Blink;
    do
    {
      v23 = result ^ (result >> 12) ^ ((result ^ (result >> 12)) << 25) ^ ((result ^ (result >> 12) ^ ((result ^ (result >> 12)) << 25)) >> 27);
      v24 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&PspTlsContext.WaitBlock[1].WaitListEntry.Blink,
                 v23,
                 result);
    }
    while ( v24 != result );
    *v20++ = 0x2545F4914F6CDD1DLL * v23;
    --v21;
  }
  while ( v21 );
  return result;
}

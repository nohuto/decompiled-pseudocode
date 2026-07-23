/*
 * XREFs of RtlpCreateHeapEncoding @ 0x18006C39C
 * Callers:
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpCreateHeapEncoding(__int64 a1)
{
  unsigned __int64 v2; // rax
  signed __int64 v3; // rcx
  unsigned __int64 v4; // rtt
  unsigned __int64 v5; // rax
  signed __int64 v6; // rcx
  unsigned __int64 v7; // rtt

  if ( (*(_BYTE *)(a1 + 120) & 2) == 0 && (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    *(_BYTE *)(a1 + 138) = 16;
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 136);
    v2 = qword_1801C5F00;
    do
    {
      v3 = v2 ^ (v2 >> 12) ^ ((v2 ^ (v2 >> 12)) << 25) ^ ((v2 ^ (v2 >> 12) ^ ((v2 ^ (v2 >> 12)) << 25)) >> 27);
      v4 = v2;
      v2 = _InterlockedCompareExchange64(&qword_1801C5F00, v3, v2);
    }
    while ( v4 != v2 );
    *(_DWORD *)(a1 + 136) |= 1332534557 * v3;
    v5 = qword_1801C5F00;
    do
    {
      v6 = v5 ^ (v5 >> 12) ^ ((v5 ^ (v5 >> 12)) << 25) ^ ((v5 ^ (v5 >> 12) ^ ((v5 ^ (v5 >> 12)) << 25)) >> 27);
      v7 = v5;
      v5 = _InterlockedCompareExchange64(&qword_1801C5F00, v6, v5);
    }
    while ( v7 != v5 );
    *(_DWORD *)(a1 + 140) = (unsigned __int16)(-8931 * v6);
  }
}

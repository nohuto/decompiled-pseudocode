/*
 * XREFs of RtlpHpEnvTlsGetValue @ 0x14042FE40
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x140520DB8 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpEnvTlsGetValue(unsigned int a1)
{
  __int64 v2; // r10
  unsigned int v3; // ecx

  v2 = (a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v3, v2);
  return *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v3 - 2)
                               + 8 * (v2 ^ (unsigned int)(1 << v3))
                               + 8)
                   + 8LL * ((a1 >> 4) & 0x1FF));
}

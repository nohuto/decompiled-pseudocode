/*
 * XREFs of MiInitializeUltraSpace @ 0x140D07E90
 * Callers:
 *     MiCreateTopLevelUltraMappings @ 0x140D07D28 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     RtlSetAllBitsEx @ 0x1403711E0 (RtlSetAllBitsEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiInitializeUltraSpace(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // rdx
  int v10; // eax
  int v12; // ecx
  void *v13; // rcx

  v4 = a3 >> 30;
  v6 = ((a3 >> 30) + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  result = ExAllocatePoolMm(
             66LL,
             16 * (v6 >> 6),
             1649764685,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v8 = result;
  if ( result )
  {
    *(_QWORD *)(a1 + 24) = v6;
    *(_QWORD *)(a1 + 32) = result;
    RtlSetAllBitsEx((_QWORD *)(a1 + 24));
    if ( v4 != v6 )
      RtlClearBitsEx(a1 + 24, v4, v6 - v4);
    v9 = __rdtsc() >> 4;
    v10 = v4;
    if ( _BitScanReverse((unsigned int *)&v12, v4) )
      v10 = 1 << v12;
    *(_QWORD *)(a1 + 16) = (unsigned int)v9 & (v10 - 1);
    *(_QWORD *)(a1 + 40) = v6;
    v13 = (void *)(((16 * (v6 >> 6)) >> 1) + v8);
    *(_QWORD *)(a1 + 48) = v13;
    memset_0(v13, 0, 4 * (v6 >> 5));
    result = 1LL;
    *(_QWORD *)(a1 + 8) = a2;
    *(_DWORD *)(a1 + 56) = v4;
  }
  return result;
}

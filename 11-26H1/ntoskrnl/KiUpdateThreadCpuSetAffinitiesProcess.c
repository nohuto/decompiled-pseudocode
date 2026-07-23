/*
 * XREFs of KiUpdateThreadCpuSetAffinitiesProcess @ 0x1405282EC
 * Callers:
 *     KeRecomputeCpuSetAffinityProcess @ 0x140528290 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x14052FE54 (KeSetCpuSetsProcess.c)
 * Callees:
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x14045C12C (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 */

__int64 __fastcall KiUpdateThreadCpuSetAffinitiesProcess(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 48);
  *a2 = 0LL;
  for ( i = *(_QWORD **)(a1 + 48); i != v2; i = (_QWORD *)*i )
    result = KiUpdateThreadCpuSetAffinitiesFromDpcLevel((__int64)(i - 95), (__int64)a2);
  return result;
}

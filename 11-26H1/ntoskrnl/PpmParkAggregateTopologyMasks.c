/*
 * XREFs of PpmParkAggregateTopologyMasks @ 0x14060F130
 * Callers:
 *     PpmParkDetectComplexAndModulePresence @ 0x14060F3C4 (PpmParkDetectComplexAndModulePresence.c)
 * Callees:
 *     RtlOrAffinityEx @ 0x14025A978 (RtlOrAffinityEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

unsigned int __fastcall PpmParkAggregateTopologyMasks(
        __int64 a1,
        unsigned int a2,
        struct _KAFFINITY_EX *a3,
        struct _KAFFINITY_EX *a4)
{
  __int64 v5; // rdi
  unsigned int result; // eax
  struct _KAFFINITY_EX *v9; // rbx

  v5 = a2;
  *(_QWORD *)&a3->Count = 2097153LL;
  memset_0(&a3->8, 0, sizeof(a3->8));
  *(_QWORD *)&a4->Count = 2097153LL;
  result = (unsigned int)memset_0(&a4->8, 0, sizeof(a4->8));
  if ( (_DWORD)v5 && a1 )
  {
    v9 = (struct _KAFFINITY_EX *)(a1 + 544);
    do
    {
      RtlOrAffinityEx(a3, v9 - 1, (__int64)a3);
      result = RtlOrAffinityEx(a4, v9, (__int64)a4);
      v9 = (struct _KAFFINITY_EX *)((char *)v9 + 808);
      --v5;
    }
    while ( v5 );
  }
  return result;
}

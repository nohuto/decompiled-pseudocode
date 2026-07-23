/*
 * XREFs of EtwpQueueApcPoolDpc @ 0x140503254
 * Callers:
 *     EtwpQueueApc @ 0x14020AAF0 (EtwpQueueApc.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218430 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall EtwpQueueApcPoolDpc(
        volatile signed __int32 *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  unsigned int Number; // edx

  if ( _interlockedbittestandset(a1 + 40, 1u) )
    return 3221227272LL;
  if ( !ExAcquireRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1360LL) + 704LL)
                                         + 8LL * **(unsigned int **)a1),
          1u) )
    return 3221225473LL;
  *((_QWORD *)a1 + 6) = a5;
  *((_QWORD *)a1 + 7) = a6;
  *((_QWORD *)a1 + 8) = a7;
  *((_QWORD *)a1 + 11) = a2;
  *((_QWORD *)a1 + 9) = a3;
  *((_QWORD *)a1 + 10) = a4;
  Number = KeGetCurrentPrcb()->Number;
  if ( !*((_QWORD *)a1 + 19) )
    *((_WORD *)a1 + 49) = Number + 2048;
  if ( (unsigned __int8)KiInsertQueueDpc((ULONG_PTR)(a1 + 24), (__int64)a1, 0LL, 0LL, 0) )
    return 0LL;
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1360LL) + 704LL)
                                   + 8LL * **(unsigned int **)a1),
    1u);
  return 3221225626LL;
}

/*
 * XREFs of ViDeadlockKeInitializeMutex_Exit @ 0x140C3DA00
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockInitializeResource @ 0x140C3C330 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall ViDeadlockKeInitializeMutex_Exit(__int64 a1, __int64 a2)
{
  return VfDeadlockInitializeResource(*(_QWORD *)(a1 + 16), a2, *(void **)a1);
}

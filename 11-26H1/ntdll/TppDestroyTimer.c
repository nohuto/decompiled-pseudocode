/*
 * XREFs of TppDestroyTimer @ 0x1800D7474
 * Callers:
 *     TppTimerpFree @ 0x1800D73E0 (TppTimerpFree.c)
 *     TppFreeWait @ 0x1800D7420 (TppFreeWait.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x180162470 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TppDestroyTimer(_QWORD *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  void *v4; // rcx
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[18];
  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 432), 0xFFFFFFFF);
  if ( v3 > 0 && v3 - 1 <= 0 )
  {
    v4 = *(void **)(v2 + 56);
    WorkerFactoryInformation = -1;
    NtSetInformationWorkerFactory(v4, WorkerFactoryBindingCount, &WorkerFactoryInformation, 4u);
  }
  TppCleanupGroupMemberDestroy(a1);
}

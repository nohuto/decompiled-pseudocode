/*
 * XREFs of KiArmForceParkDutyCyclingForSharedReadyQueue @ 0x14052B5F8
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1403096A0 (KiAddThreadToPrcbQueue.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiShouldSearchSharedReadyQueue @ 0x14042BF30 (KiShouldSearchSharedReadyQueue.c)
 */

__int64 __fastcall KiArmForceParkDutyCyclingForSharedReadyQueue(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // r11
  ULONG_PTR v5; // rcx

  result = KiShouldSearchSharedReadyQueue(a1, a2);
  if ( (_BYTE)result )
  {
    result = *(_QWORD *)(v3 + 1768);
    if ( !result )
    {
      *(_QWORD *)(v3 + 1768) |= *(_QWORD *)(v4 + 200);
      v5 = *(_QWORD *)(v4 + 34544);
      *(_DWORD *)(v5 + 336) = 1;
      *(_DWORD *)(v5 + 340) = 1;
      return KiInsertQueueDpc(v5, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}

/*
 * XREFs of KiArmForceParkDutyCyclingForSharedReadyQueue @ 0x140529008
 * Callers:
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1402BE9E0 (KiAddThreadToPrcbQueue.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KiShouldSearchSharedReadyQueue @ 0x140439680 (KiShouldSearchSharedReadyQueue.c)
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

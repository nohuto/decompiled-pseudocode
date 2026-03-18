/*
 * XREFs of CiThreadLocate @ 0x140003A10
 * Callers:
 *     CiThreadNotification @ 0x1400039C0 (CiThreadNotification.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CiThreadLocate(unsigned __int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx

  v2 = 0LL;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = KeGetCurrentThread();
  v3 = *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  if ( ((__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink & 1) != 0 )
  {
    if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
      goto LABEL_17;
    v3 = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue ^ *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  }
  if ( !v3 )
    goto LABEL_17;
  while ( 1 )
  {
    if ( a1 < *(_QWORD *)(v3 + 56) )
    {
      v4 = *(_QWORD *)v3;
      goto LABEL_9;
    }
    if ( a1 <= *(_QWORD *)(v3 + 56) )
      break;
    v4 = *(_QWORD *)(v3 + 8);
LABEL_9:
    if ( ((__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink & 1) != 0 && v4 )
      v3 ^= v4;
    else
      v3 = v4;
    if ( !v3 )
      goto LABEL_17;
  }
  v2 = v3 - 40;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 - 40 + 32)) <= 1 )
    __fastfail(0xEu);
LABEL_17:
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
  return v2;
}

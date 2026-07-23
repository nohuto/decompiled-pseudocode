/*
 * XREFs of PopPowerRequestDebounceTimerWorker @ 0x1407CC4F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x140AE4F44 (PopPowerRequestHandleRequestUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AEFCB4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestDebounceTimerWorker(__int64 a1)
{
  unsigned int v1; // ebx
  _DWORD *v2; // rdi
  __int64 i; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  v1 = 0;
  v2 = &unk_140E019EC;
  do
  {
    if ( (*v2 & 8) != 0 )
    {
      *v2 &= ~8u;
      PopPowerRequestHandleRequestUpdate(0LL, v1, 0LL);
    }
    ++v1;
    v2 += 12;
  }
  while ( v1 < 6 );
  for ( i = 0LL; (unsigned int)i < 6; i = (unsigned int)(i + 1) )
  {
    if ( (*((_DWORD *)&unk_140E019EC + 12 * i) & 8) != 0 )
    {
      KeCancelTimer2((__int64)&stru_140F12EA0.SavedApcStateFill[40]);
      v5[0] = 0LL;
      v5[1] = -1LL;
      KeSetTimer2((__int64)&stru_140F12EA0.SavedApcStateFill[40], -50000000LL, 0LL, (__int64)v5);
      return PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
}

/*
 * XREFs of SleepQueueDpc @ 0x14000F910
 * Callers:
 *     <none>
 * Callees:
 *     RestartContext @ 0x14000E2E0 (RestartContext.c)
 */

__int64 **SleepQueueDpc()
{
  __int64 v0; // rdx
  __int64 ***v1; // rax
  __int64 v2; // rcx
  __int64 *v3; // rcx
  __int64 **result; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  __int64 *v8; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v9; // [rsp+28h] [rbp-8h]

  v9 = &v8;
  v8 = (__int64 *)&v8;
  byte_14008EB30 = KeAcquireSpinLockRaiseToDpc(&gmutSleep);
  v0 = MEMORY[0xFFFFF78000000008];
  while ( 1 )
  {
    v1 = (__int64 ***)SleepQueue;
    if ( (__int64 *)SleepQueue == &SleepQueue )
      break;
    v2 = *(_QWORD *)(SleepQueue + 16);
    if ( v2 > v0 )
    {
      ExSetTimer(SleepTimer, v0 - v2, 0LL, 0LL);
      break;
    }
    if ( *(__int64 **)(SleepQueue + 8) != &SleepQueue
      || (v6 = *(_QWORD *)SleepQueue, *(_QWORD *)(*(_QWORD *)SleepQueue + 8LL) != SleepQueue)
      || (SleepQueue = *(_QWORD *)SleepQueue, *(_QWORD *)(v6 + 8) = &SleepQueue, v7 = v9, *v9 != (__int64 *)&v8) )
    {
LABEL_15:
      __fastfail(3u);
    }
    v1[1] = v9;
    *v1 = &v8;
    *v7 = v1;
    v9 = (__int64 **)v1;
  }
  KeReleaseSpinLock(&gmutSleep, byte_14008EB30);
  while ( 1 )
  {
    v3 = v8;
    result = &v8;
    if ( v8 == (__int64 *)&v8 )
      return result;
    if ( (__int64 **)v8[1] != &v8 )
      goto LABEL_15;
    v5 = (__int64 *)*v8;
    if ( *(__int64 **)(*v8 + 8) != v8 )
      goto LABEL_15;
    v8 = (__int64 *)*v8;
    v5[1] = (__int64)&v8;
    RestartContext((_QWORD *)v3[3]);
  }
}

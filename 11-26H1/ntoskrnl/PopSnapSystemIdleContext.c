/*
 * XREFs of PopSnapSystemIdleContext @ 0x1409F5434
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1404E8B40 (PopIdlePhaseWatchdogCallback.c)
 *     PopArmIdlePhaseWatchdog @ 0x1409F52D8 (PopArmIdlePhaseWatchdog.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopSnapSystemIdleContext(__int64 *a1, unsigned int *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 Pool2; // rax
  __int64 v7; // rdx
  _OWORD *v8; // rcx
  char *v9; // rax
  __int128 v10; // xmm1
  _DWORD *v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ecx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock, (__int64)a2, a3, a4);
  Pool2 = ExAllocatePool2(0x100uLL);
  v7 = 2LL;
  *a1 = Pool2;
  v8 = (_OWORD *)Pool2;
  v9 = &PopSystemIdleContext;
  do
  {
    *v8 = *(_OWORD *)v9;
    v8[1] = *((_OWORD *)v9 + 1);
    v8[2] = *((_OWORD *)v9 + 2);
    v8[3] = *((_OWORD *)v9 + 3);
    v8[4] = *((_OWORD *)v9 + 4);
    v8[5] = *((_OWORD *)v9 + 5);
    v8[6] = *((_OWORD *)v9 + 6);
    v8 += 8;
    v10 = *((_OWORD *)v9 + 7);
    v9 += 128;
    *(v8 - 1) = v10;
    --v7;
  }
  while ( v7 );
  *v8 = *(_OWORD *)v9;
  v8[1] = *((_OWORD *)v9 + 1);
  v8[2] = *((_OWORD *)v9 + 2);
  v8[3] = *((_OWORD *)v9 + 3);
  *((_QWORD *)v8 + 8) = *((_QWORD *)v9 + 8);
  *a2 = 0;
  if ( dword_140E0B874 )
  {
    v12 = &unk_140E0B79C;
    v13 = 4LL;
    do
    {
      if ( !*((_BYTE *)v12 - 4) )
      {
        if ( *v12 )
        {
          if ( *v12 == 1 )
            v14 = *(v12 - 3) - *(v12 - 5);
          else
            v14 = -1;
        }
        else
        {
          v14 = 0;
        }
        if ( v14 > *a2 )
          *a2 = v14;
      }
      v12 += 14;
      --v13;
    }
    while ( v13 );
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopSystemIdleLock);
}

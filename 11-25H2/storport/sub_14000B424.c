/*
 * XREFs of sub_14000B424 @ 0x14000B424
 * Callers:
 *     sub_14000B0B0 @ 0x14000B0B0 (sub_14000B0B0.c)
 * Callees:
 *     sub_140051828 @ 0x140051828 (sub_140051828.c)
 *     sub_1400A6658 @ 0x1400A6658 (sub_1400A6658.c)
 */

void __fastcall sub_14000B424(_DWORD *SpinLock, __int64 a2, __int64 a3)
{
  KSPIN_LOCK v4; // rax
  int v5; // eax
  unsigned int v6; // r8d
  bool v7; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( SpinLock )
  {
    v4 = *((_QWORD *)SpinLock + 6);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *(_DWORD *)(v4 + 968) <= 1u )
    {
      v5 = SpinLock[10];
      if ( !v5 )
      {
        v6 = SpinLock[48];
        if ( v6 )
        {
          if ( (unsigned int)a2 <= v6 )
            v5 = v6 - a2;
          SpinLock[8] = v5;
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)SpinLock, &LockHandle);
          v7 = SpinLock[48] == 0;
          SpinLock[10] = 1850304845;
          if ( v7 )
          {
            if ( SpinLock[10] )
            {
              ++dword_140168D98;
              sub_140051828(SpinLock, 0LL);
            }
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
      }
    }
    else
    {
      sub_1400A6658(SpinLock, a2, a3);
    }
  }
}

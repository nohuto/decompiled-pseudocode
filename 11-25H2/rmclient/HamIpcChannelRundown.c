/*
 * XREFs of HamIpcChannelRundown @ 0x180005458
 * Callers:
 *     HampConnectionDestroy @ 0x180004D70 (HampConnectionDestroy.c)
 * Callees:
 *     RmpClientWnfDestroySubscription @ 0x180004DD0 (RmpClientWnfDestroySubscription.c)
 *     HampIpcChannelAcquireLock @ 0x1800054D0 (HampIpcChannelAcquireLock.c)
 *     HampIpcChannelObjectMakeZombieUnsafe @ 0x18000F430 (HampIpcChannelObjectMakeZombieUnsafe.c)
 */

__int64 __fastcall HamIpcChannelRundown(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  HampIpcChannelAcquireLock();
  *(_DWORD *)(a1 + 20) |= 1u;
  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( (v2 & 1) != 0 )
    {
      if ( v2 == 1 )
        break;
      v3 = v2 ^ ((a1 + 24) | 1);
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 32);
    }
    if ( !v3 )
      break;
    HampIpcChannelObjectMakeZombieUnsafe(v3, a1);
  }
  *(_DWORD *)(a1 + 16) = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 8);
  if ( *(_QWORD *)a1 )
    return RmpClientWnfDestroySubscription(*(_QWORD *)a1);
  return result;
}

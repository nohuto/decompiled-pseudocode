/*
 * XREFs of ExpTryAcquireFannedOutPushLockExclusive @ 0x1404D13D4
 * Callers:
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1404D7FF0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

char __fastcall ExpTryAcquireFannedOutPushLockExclusive(unsigned int a1)
{
  char v2; // bl
  ULONG MaximumProcessorCount; // r10d
  ULONG i; // edi
  __int64 v5; // r14
  unsigned int v6; // ecx
  __int64 v7; // rsi
  unsigned int v8; // ecx
  volatile signed __int64 *v9; // rcx

  v2 = 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  for ( i = 0; ; ++i )
  {
    if ( i >= MaximumProcessorCount )
      return 1;
    v5 = (a1 >> 13) & 0x3FFFF;
    _BitScanReverse(&v6, v5);
    v7 = (a1 >> 4) & 0x1FF;
    if ( _interlockedbittestandset64(
           (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress
                                                               + i)
                                                             + 8LL * (v6 - 2))
                                                 + 8 * (v5 ^ (unsigned int)(1 << v6))
                                                 + 8)
                                     + 8 * v7),
           0LL) )
    {
      break;
    }
  }
  while ( i )
  {
    _BitScanReverse(&v8, v5);
    v9 = (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress
                                                             + --i)
                                                           + 8LL * (v8 - 2))
                                               + 8 * (v5 ^ (unsigned int)(1 << v8))
                                               + 8)
                                   + 8 * v7);
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
  }
  return v2;
}

/*
 * XREFs of ExAcquireAutoExpandPushLockExclusive @ 0x140275DA0
 * Callers:
 *     MiLockAweVadsExclusive @ 0x1404F877C (MiLockAweVadsExclusive.c)
 *     MiLockLoaderEntry @ 0x1405208A8 (MiLockLoaderEntry.c)
 *     MiLockAwePagesExclusive @ 0x140706A18 (MiLockAwePagesExclusive.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall ExAcquireAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v3; // r15
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned int v6; // ecx
  __int64 v7; // rbp
  volatile signed __int32 *v8; // roff
  volatile signed __int32 *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdi
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  volatile signed __int32 *v14; // roff
  volatile signed __int32 *v15; // rcx

  v3 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
    v3 = KeAbPreAcquire((struct _KTHREAD *)BugCheckParameter2, 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v3, BugCheckParameter2);
  v4 = *(unsigned int *)(BugCheckParameter2 + 8);
  if ( (v4 & 1) != 0 )
  {
    v5 = ((unsigned int)v4 >> 13) & 0x3FFFF;
    _BitScanReverse(&v6, v5);
    v7 = (v4 >> 4) & 0x1FF;
    v8 = (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress
                                                           + 8LL * (v6 - 2))
                                               + 8 * (v5 ^ (unsigned int)(1 << v6))
                                               + 8)
                                   + 8 * v7);
    v9 = v8;
    if ( _interlockedbittestandset64(v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v3, BugCheckParameter2);
    v10 = 1;
    LODWORD(v11) = KeQueryMaximumProcessorCountEx(0xFFFFu);
    while ( v10 < (unsigned int)v11 )
    {
      _BitScanReverse(&v12, v5);
      if ( _interlockedbittestandset64(
             (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress
                                                                 + v10)
                                                               + 8LL * (v12 - 2))
                                                   + 8 * (v5 ^ (unsigned int)(1 << v12))
                                                   + 8)
                                       + 8 * v7),
             0LL) )
      {
        v11 = (unsigned int)(v11 - 1);
        _BitScanReverse(&v13, v5);
        v14 = (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress
                                                                  + v11)
                                                                + 8LL * (v13 - 2))
                                                    + 8 * (v5 ^ (unsigned int)(1 << v13))
                                                    + 8)
                                        + 8 * v7);
        v15 = v14;
        if ( _interlockedbittestandset64(v14, 0LL) )
          ExfAcquirePushLockExclusiveEx(v15, v3, BugCheckParameter2);
      }
      else
      {
        ++v10;
      }
    }
  }
  if ( v3 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v3 + 33) |= 2u;
    else
      *(_BYTE *)(v3 + 10) = 1;
  }
}

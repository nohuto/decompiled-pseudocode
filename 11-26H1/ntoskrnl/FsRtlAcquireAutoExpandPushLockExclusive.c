/*
 * XREFs of FsRtlAcquireAutoExpandPushLockExclusive @ 0x14021AF74
 * Callers:
 *     FsRtlRemovePerFileObjectContext @ 0x14021ACC0 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x14021ADC0 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlInsertPerStreamContext @ 0x14021B420 (FsRtlInsertPerStreamContext.c)
 *     FsRtlRemovePerStreamContext @ 0x14021B5C0 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerFileContextWithReserve @ 0x140488BE0 (FsRtlInsertPerFileContextWithReserve.c)
 *     FsRtlRemovePerFileContext @ 0x1405B80C0 (FsRtlRemovePerFileContext.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140919AA0 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x140A87D80 (FsRtlTeardownPerFileContexts.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 */

int __fastcall FsRtlAcquireAutoExpandPushLockExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // r15
  unsigned int v7; // ecx
  __int64 v8; // rbp
  volatile signed __int32 *v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // r14
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  volatile signed __int32 *v14; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((struct _KTHREAD *)a1, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    LODWORD(v3) = ExfAcquirePushLockExclusiveEx(a1, v3, a1);
  v5 = *(unsigned int *)(a1 + 8);
  if ( (v5 & 1) != 0 )
  {
    v6 = ((unsigned int)v5 >> 13) & 0x3FFFF;
    _BitScanReverse(&v7, v6);
    v8 = (v5 >> 4) & 0x1FF;
    v9 = (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress
                                                           + 8LL * (v7 - 2))
                                               + 8 * (v6 ^ (unsigned int)(1 << v7))
                                               + 8)
                                   + 8 * v8);
    if ( _interlockedbittestandset64(v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v4, a1);
    v10 = 1;
    LODWORD(v3) = KeQueryMaximumProcessorCountEx(0xFFFFu);
    LODWORD(v11) = v3;
    if ( (unsigned int)v3 > 1 )
    {
      do
      {
        _BitScanReverse(&v12, v6);
        v3 = *(_QWORD *)(*((_QWORD *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress + v10) + 8LL * (v12 - 2));
        if ( _interlockedbittestandset64(
               (volatile signed __int32 *)(*(_QWORD *)(v3 + 8 * (v6 ^ (unsigned int)(1 << v12)) + 8) + 8 * v8),
               0LL) )
        {
          v11 = (unsigned int)(v11 - 1);
          _BitScanReverse(&v13, v6);
          v3 = *(_QWORD *)(*((_QWORD *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress + v11) + 8LL * (v13 - 2));
          v14 = (volatile signed __int32 *)(*(_QWORD *)(v3 + 8 * (v6 ^ (unsigned int)(1 << v13)) + 8) + 8 * v8);
          if ( _interlockedbittestandset64(v14, 0LL) )
            LODWORD(v3) = ExfAcquirePushLockExclusiveEx(v14, v4, a1);
        }
        else
        {
          ++v10;
        }
      }
      while ( v10 < (unsigned int)v11 );
    }
  }
  if ( v4 )
  {
    LODWORD(v3) = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v4 + 33) |= 2u;
    else
      *(_BYTE *)(v4 + 10) = 1;
  }
  return v3;
}

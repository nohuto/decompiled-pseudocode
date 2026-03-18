/*
 * XREFs of FsRtlAcquireAutoExpandPushLockExclusive @ 0x140449634
 * Callers:
 *     FsRtlRemovePerStreamContext @ 0x140449180 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1404492B0 (FsRtlInsertPerStreamContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x140449380 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140449480 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlInsertPerFileContextWithReserve @ 0x14048F0A0 (FsRtlInsertPerFileContextWithReserve.c)
 *     FsRtlRemovePerFileContext @ 0x1405B58B0 (FsRtlRemovePerFileContext.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140A36AA0 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x140A81F10 (FsRtlTeardownPerFileContexts.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402767B0 (KeQueryMaximumProcessorCountEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 */

int __fastcall FsRtlAcquireAutoExpandPushLockExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  AutoBoost *v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // r15
  unsigned int v10; // ecx
  __int64 v11; // rbp
  unsigned __int64 *v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // r14
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned __int64 *v17; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire(a1, 0LL, 0LL, a4);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    LODWORD(v6) = ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v6, a1);
  v8 = *(unsigned int *)(a1 + 8);
  if ( (v8 & 1) != 0 )
  {
    v9 = ((unsigned int)v8 >> 13) & 0x3FFFF;
    _BitScanReverse(&v10, v9);
    v11 = (v8 >> 4) & 0x1FF;
    v12 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)ExSaPageArrays + 8LL * (v10 - 2))
                                         + 8 * (v9 ^ (unsigned int)(1 << v10))
                                         + 8)
                             + 8 * v11);
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(v12, v7, a1);
    v13 = 1;
    LODWORD(v6) = KeQueryMaximumProcessorCountEx(0xFFFFu);
    LODWORD(v14) = (_DWORD)v6;
    if ( (unsigned int)v6 > 1 )
    {
      do
      {
        _BitScanReverse(&v15, v9);
        v6 = *(AutoBoost **)(*(_QWORD *)(ExSaPageArrays + 8LL * v13) + 8LL * (v15 - 2));
        if ( _interlockedbittestandset64(
               (volatile signed __int32 *)(*((_QWORD *)v6 + (v9 ^ (unsigned int)(1 << v15)) + 1) + 8 * v11),
               0LL) )
        {
          v14 = (unsigned int)(v14 - 1);
          _BitScanReverse(&v16, v9);
          v6 = *(AutoBoost **)(*(_QWORD *)(ExSaPageArrays + 8 * v14) + 8LL * (v16 - 2));
          v17 = (unsigned __int64 *)(*((_QWORD *)v6 + (v9 ^ (unsigned int)(1 << v16)) + 1) + 8 * v11);
          if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
            LODWORD(v6) = ExfAcquirePushLockExclusiveEx(v17, v7, a1);
        }
        else
        {
          ++v13;
        }
      }
      while ( v13 < (unsigned int)v14 );
    }
  }
  if ( v7 )
  {
    LODWORD(v6) = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v7 + 33) |= 2u;
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  return (int)v6;
}

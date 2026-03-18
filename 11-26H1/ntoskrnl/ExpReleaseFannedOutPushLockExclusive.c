/*
 * XREFs of ExpReleaseFannedOutPushLockExclusive @ 0x140449868
 * Callers:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14027CBB0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140449480 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1404497DC (FsRtlReleaseAutoExpandPushLockExclusive.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402767B0 (KeQueryMaximumProcessorCountEx.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall ExpReleaseFannedOutPushLockExclusive(unsigned __int64 a1)
{
  ULONG MaximumProcessorCount; // eax
  __int64 v3; // rbp
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // ecx
  volatile signed __int64 *v8; // rcx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( MaximumProcessorCount )
  {
    v3 = MaximumProcessorCount;
    v4 = ((unsigned int)a1 >> 13) & 0x3FFFF;
    v5 = (a1 >> 4) & 0x1FF;
    v6 = 0LL;
    do
    {
      _BitScanReverse(&v7, v4);
      v8 = (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + ExSaPageArrays) + 8LL * (v7 - 2))
                                                 + 8 * (v4 ^ (unsigned __int64)(unsigned int)(1 << v7))
                                                 + 8)
                                     + 8 * v5);
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v8);
      v6 += 8LL;
      --v3;
    }
    while ( v3 );
  }
}

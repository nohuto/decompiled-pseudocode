/*
 * XREFs of MiModifiedWriterShouldWrite @ 0x1403FF7EC
 * Callers:
 *     MiModifiedPageWriter @ 0x1403FF5C0 (MiModifiedPageWriter.c)
 * Callees:
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403E40C8 (MiStoreUpdateMemoryConditions.c)
 *     MiModifiedWriterWaitForMdl @ 0x1403FF444 (MiModifiedWriterWaitForMdl.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1403FF93C (MiStoreCheckCompleteWriteBatch.c)
 *     MiModifiedWriterWakeStore @ 0x1403FF9C8 (MiModifiedWriterWakeStore.c)
 *     MiModifiedWriterWakeMdls @ 0x1403FFA38 (MiModifiedWriterWakeMdls.c)
 *     MiModifiedWriterDeterminePriority @ 0x1403FFAC8 (MiModifiedWriterDeterminePriority.c)
 */

__int64 __fastcall MiModifiedWriterShouldWrite(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // rdx
  _QWORD *v6; // rsi
  int v7; // eax

  v2 = 0;
  if ( *(_DWORD *)(a1 + 92) )
    return 1LL;
  if ( !*(_QWORD *)(a1 + 23456) )
    return 1LL;
  MiStoreCheckCompleteWriteBatch(a1);
  v6 = (_QWORD *)(a1 + 1032);
  if ( (_QWORD *)*v6 == v6 && !(unsigned int)MiModifiedWriterWaitForMdl((_BYTE *)a1, v5) )
    return 1LL;
  if ( *(_DWORD *)(a1 + 828) )
  {
    KeResetEvent((PRKEVENT)(a1 + 824));
    if ( *(_DWORD *)(a1 + 820) )
      IoBoostThreadIoPriority((KSPIN_LOCK *)KeGetCurrentThread(), 2, 0);
  }
  MiModifiedWriterWakeStore(a1);
  if ( *(_DWORD *)(a1 + 1012) )
    MiModifiedWriterWakeMdls(a1);
  if ( *(_DWORD *)(a1 + 1156) )
  {
    KeResetEvent((PRKEVENT)(a1 + 1152));
    MiStoreUpdateMemoryConditions(a1);
  }
  if ( (_QWORD *)*v6 != v6 )
  {
    v7 = *(_DWORD *)(a1 + 1296);
    if ( (v7 & 1) == 0
      || (v7 & 0xFFFFFFFE) != 0
      || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1296), 0, 1) != 1 )
    {
      LOBYTE(v2) = (unsigned int)MiModifiedWriterDeterminePriority(a1, a2) == 0;
      return v2;
    }
    KeResetEvent((PRKEVENT)(a1 + 864));
    return 1LL;
  }
  return 2LL;
}

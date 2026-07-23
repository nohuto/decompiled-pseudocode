/*
 * XREFs of KsepMatchInitMachineInfo @ 0x140CD3A58
 * Callers:
 *     KseInitialize @ 0x140CD3040 (KseInitialize.c)
 * Callees:
 *     KsepLogError @ 0x1404C635C (KsepLogError.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140CD3600 (KsepMatchInitAcpiOemInfo.c)
 *     KsepMatchInitBiosInfo @ 0x140CD3750 (KsepMatchInitBiosInfo.c)
 *     KsepMatchInitCpuInfo @ 0x140CD39C8 (KsepMatchInitCpuInfo.c)
 */

__int64 __fastcall KsepMatchInitMachineInfo(__int64 a1)
{
  int matched; // eax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  char StackBase; // al
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  char v8; // al
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  char v12; // al

  matched = KsepMatchInitAcpiOemInfo(a1);
  v2 = matched;
  if ( matched < 0 )
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v3) = matched;
    StackBase = (char)stru_140E66D40.StackBase;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v3) = 655514;
    if ( (StackBase & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", v2);
    KsepLogError(0LL, (__int64)"KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", v2);
  }
  v5 = KsepMatchInitCpuInfo();
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v7) = v5;
    v8 = (char)stru_140E66D40.StackBase;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v7) = 655520;
    if ( (v8 & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v6);
    KsepLogError(0LL, (__int64)"KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v6);
  }
  v9 = KsepMatchInitBiosInfo();
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(
                              (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                              1u)
         + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v11) = v9;
    v12 = (char)stru_140E66D40.StackBase;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v11) = 655526;
    if ( (v12 & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v10);
    KsepLogError(0LL, (__int64)"KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v10);
  }
  KsepShimDbLock.FirstArgument = &xmmword_140E61EB0;
  KsepShimDbLock.TrapFrame = (_KTRAP_FRAME *)&xmmword_140E62310;
  KsepShimDbLock.ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)&xmmword_140E62348;
  KsepShimDbLock.ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)&xmmword_140E62390;
  return 0LL;
}

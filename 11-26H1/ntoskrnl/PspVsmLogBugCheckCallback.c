/*
 * XREFs of PspVsmLogBugCheckCallback @ 0x140619820
 * Callers:
 *     <none>
 * Callees:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall PspVsmLogBugCheckCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // r8d
  unsigned int v7; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  PVOID *v14; // rcx
  char *v15; // rdx
  char v16; // al

  v4 = PspIumLogBuffer;
  v5 = 0;
  if ( PspIumLogBuffer )
  {
    ReasonSpecificData[4] = PspIumLogBuffer;
    *((_DWORD *)ReasonSpecificData + 10) = 0x2000;
    *((_OWORD *)ReasonSpecificData + 1) = xmmword_1400324A0;
    memset_0(&NormalizationListLock.WaitBlockFill11[136], 0, 0x100uLL);
    v6 = 0;
    NormalizationListLock.WaitBlock[2].WaitListEntry.Blink = (struct _LIST_ENTRY *)0x1674C6857LL;
    *(_QWORD *)&NormalizationListLock.WaitBlockFill11[112] = 288LL;
    NormalizationListLock.WaitBlock[2].Thread = (struct _KTHREAD *)0x8000006B8000006BLL;
    NormalizationListLock.WaitBlock[2].Object = (PVOID)0x10000000018LL;
    while ( 1 )
    {
      v7 = *(_DWORD *)(v4 + 12);
      v8 = v7;
      if ( v7 >= 0x26 )
        v8 = 38LL;
      v9 = v6;
      if ( v6 >= v8 )
        break;
      v10 = *(_DWORD *)(v4 + 8LL * v6++ + 1172);
      *((_DWORD *)&NormalizationListLock.QueueListEntry.Flink + v9) = v10;
      NormalizationListLock.SchedulerApcFill3[v9 + 24] = *(_BYTE *)(v4 + 8 * v9 + 1168);
    }
    while ( 1 )
    {
      v11 = *(_DWORD *)(v4 + 8);
      v12 = v11;
      if ( v11 >= 8 )
        v12 = 8LL;
      if ( v5 >= v12 )
        break;
      v13 = 8LL;
      v14 = &NormalizationListLock.WaitBlock[2].SparePtr + v5;
      v15 = (char *)(v4 + 8 * (v5 + 8LL * v5 + 2));
      do
      {
        v16 = *v15;
        v15 += 2;
        *(_BYTE *)v14 = v16;
        v14 = (PVOID *)((char *)v14 + 1);
        --v13;
      }
      while ( v13 );
      ++v5;
    }
    WheaLogInternalEvent(&NormalizationListLock.WaitBlockFill11[104]);
  }
}

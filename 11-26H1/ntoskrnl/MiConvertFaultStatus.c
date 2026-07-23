/*
 * XREFs of MiConvertFaultStatus @ 0x1403A4CB0
 * Callers:
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 * Callees:
 *     EtwTracePageFault @ 0x1402162F0 (EtwTracePageFault.c)
 *     MiPageAvailable @ 0x1402A9BBC (MiPageAvailable.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 *     MiCheckAvailablePagesForFaultDelay @ 0x1404118C0 (MiCheckAvailablePagesForFaultDelay.c)
 *     FsRtlIsTotalDeviceFailure @ 0x1404673E0 (FsRtlIsTotalDeviceFailure.c)
 *     MiDelayFaultingThread @ 0x1404FED04 (MiDelayFaultingThread.c)
 */

__int64 __fastcall MiConvertFaultStatus(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // r9
  __int64 v6; // r8
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // ecx

  if ( a3 == -1073740748 )
    return 873LL;
  if ( a3 < 0
    && (a3 == -1073741670 || a3 == -1073741801 || a3 == -1073741663 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a3)) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( ((__int64)CurrentThread[1].Queue & 4) == 0 && (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) == 0 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      if ( (v9 & 1) != 0 )
      {
        v14 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( *(_BYTE *)v14 == 5 )
        {
          v15 = *(_DWORD *)(v14 + 56);
          if ( (v15 & 0xC) != 0 && (v15 & 0x80u) == 0 )
            return 3221225688LL;
        }
      }
      v10 = 0;
      v11 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 56) + 174LL));
      v12 = MiCheckAvailablePagesForFaultDelay(v11, (_DWORD)CurrentThread, a3, (*(_DWORD *)(a1 + 80) & 0x10) == 0, 0LL);
      if ( v12 )
      {
        v10 = 65546;
        if ( (v12 & 2) != 0 )
          v10 = 196618;
      }
      v13 = 10LL;
      if ( *(_QWORD *)(v11 + 22528) < 0x400uLL )
        v10 = 10;
      if ( (*(_DWORD *)(a1 + 80) & 4) != 0 || (v13 = v10, (_WORD)v10) )
        MiDelayFaultingThread(v13);
      if ( !(unsigned int)MiPageAvailable(v11, 0) )
      {
        MiWaitForFreePage(v11, (*(_DWORD *)(a1 + 80) >> 3) & 2);
        return 873LL;
      }
      return 873LL;
    }
    return 3221225495LL;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 104) && (PerfGlobalGroupMask & 0x1000) != 0 )
    {
      v5 = 0LL;
      if ( (*(_QWORD *)(a1 + 16) & 1) == 0 )
        v5 = *(_QWORD *)(a1 + 16);
      v6 = *(_DWORD *)(a1 + 80) >> 8;
      LOBYTE(v6) = BYTE1(*(_DWORD *)(a1 + 80)) & 1;
      EtwTracePageFault(a3, *(_QWORD *)a1, v6, v5);
    }
    return (unsigned int)a3;
  }
}

/*
 * XREFs of PopTransitionToSleep @ 0x140C0A210
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 *     MmEmptyAllWorkingSets @ 0x1406FCAF8 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1406FCC28 (MmTrimFilePagesFromWorkingSets.c)
 *     MmFlushAllPagesEx @ 0x1406FDDA0 (MmFlushAllPagesEx.c)
 *     PopEnlargeHiberFile @ 0x1407D32A4 (PopEnlargeHiberFile.c)
 *     PopInvokeSystemStateHandler @ 0x140C0A314 (PopInvokeSystemStateHandler.c)
 *     MmDuplicateMemory @ 0x140C130F0 (MmDuplicateMemory.c)
 */

LONG __fastcall PopTransitionToSleep(struct _KEVENT *a1)
{
  unsigned int Lock; // r14d
  LONG v3; // eax
  LONG v4; // ebx
  int v6; // eax
  bool v7; // cl
  char v8; // si
  char v9; // r15
  unsigned int v10; // r12d
  int v11; // eax
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-10h]
  bool v15; // [rsp+90h] [rbp+30h] BYREF

  Lock = a1[3].Header.Lock;
  v14 = 0LL;
  v15 = 0;
  v12 = 0LL;
  v13 = 0LL;
  qword_140F109C0 = (__int64)KeGetCurrentThread();
  if ( Lock == 3 || Lock == 6 )
  {
    if ( (PopSimulateHiberBugcheck & 0x20) != 0 )
    {
      KeSetEvent(a1, 0, 1u);
      KeWaitForSingleObject(&a1[1], Executive, 0, 0, 0LL);
      v4 = 0;
      goto LABEL_5;
    }
    v6 = PopEnlargeHiberFile(&v15);
    v7 = v15;
    *((_QWORD *)&v13 + 1) = 0LL;
    *(_QWORD *)&v12 = xHalPciEarlyRestore;
    if ( v6 < 0 )
      v7 = 1;
    LODWORD(v14) = 16;
    v8 = 0;
    *((_QWORD *)&v12 + 1) = PopEndMirroring;
    v9 = 0;
    *(_QWORD *)&v13 = PopMirrorPhysicalMemory;
    v10 = 60;
    if ( v7 )
    {
      MmEmptyAllWorkingSets();
      v9 = 1;
      v11 = v14 | 1;
    }
    else if ( (dword_140F1042C & 0x20) != 0 && PopEnableMinimalHiberFile || PopForceMinimalHiberFile )
    {
      MmEmptyAllWorkingSets();
      v9 = 1;
      v11 = v14 | 4;
    }
    else
    {
      if ( Lock == 6 )
      {
        MmTrimFilePagesFromWorkingSets();
        v11 = v14 | 1;
LABEL_20:
        LODWORD(v14) = v11;
        byte_140F1217C = v8;
        byte_140F1217D = v9;
        dword_140F12178 = v11;
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES);
        if ( v8 )
          MmFlushAllPagesEx(v9, v10);
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES_END);
        PopHibernatePowerStateHandlerType = Lock;
        qword_140E67710 = a1;
        v3 = MmDuplicateMemory(&v12);
        qword_140E67710 = 0LL;
        PopHibernatePowerStateHandlerType = 7;
        goto LABEL_4;
      }
      v11 = 20;
      v10 = 8;
    }
    v8 = 1;
    goto LABEL_20;
  }
  KeSetEvent(a1, 0, 1u);
  KeWaitForSingleObject(&a1[1], Executive, 0, 0, 0LL);
  v3 = PopInvokeSystemStateHandler(Lock);
LABEL_4:
  v4 = v3;
LABEL_5:
  qword_140F10B68 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - PopDirectedDripsDiagLock.WriteOperationCount;
  a1[3].Header.SignalState = v4;
  return KeSetEvent(a1 + 2, 0, 0);
}

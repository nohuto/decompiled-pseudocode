/*
 * XREFs of EtwpEnableKernelTrace @ 0x140A00560
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x1409FF720 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpFixBootLoggers @ 0x140CE814C (EtwpFixBootLoggers.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     IoPerfInit @ 0x14050857C (IoPerfInit.c)
 *     DbgSetDebugPrintCallback @ 0x140532200 (DbgSetDebugPrintCallback.c)
 *     KeStartProfile @ 0x1405F5C68 (KeStartProfile.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     AlpcRegisterLogRoutine @ 0x14077B514 (AlpcRegisterLogRoutine.c)
 *     ObEnableEtwReferenceTrace @ 0x1407C71F8 (ObEnableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x140829E18 (WmiSetNetworkNotify.c)
 *     EtwpTimeProfileStart @ 0x14082E308 (EtwpTimeProfileStart.c)
 *     EtwpDisableKernelTrace @ 0x140A00180 (EtwpDisableKernelTrace.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140B13914 (EtwpUpdateFileInfoDriverState.c)
 */

__int64 __fastcall EtwpEnableKernelTrace(
        char *a1,
        __int64 (__fastcall *a2)(__int64 a1, int a2, unsigned int a3, __int16 a4, unsigned __int8 a5),
        _QWORD *a3,
        unsigned int a4)
{
  int updated; // esi
  unsigned int v5; // r10d
  __int64 v6; // r9
  char *v7; // rbx
  __int64 v8; // r13
  int v10; // r15d
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r8
  int v14; // r14d
  signed __int64 v16; // rbx
  char *v17; // rcx
  __int64 (__fastcall *v18)(__int64, int, unsigned int, __int16, unsigned __int8); // rcx
  __int64 v19; // r8
  unsigned int i; // edi
  __int128 v23; // [rsp+48h] [rbp-21h] BYREF
  __int128 v24; // [rsp+58h] [rbp-11h]
  _OWORD v25[2]; // [rsp+68h] [rbp-1h] BYREF

  updated = 0;
  v5 = a4;
  v6 = (__int64)a3;
  v7 = (char *)a2;
  v8 = 8LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( !LOBYTE(stru_140F03830.CycleTime) )
  {
    v18 = a2;
    a2 = (__int64 (__fastcall *)(__int64, int, unsigned int, __int16, unsigned __int8))((char *)&stru_140FC11F0.Padding[4]
                                                                                      - (char *)a2);
    v19 = 8LL;
    do
    {
      *(_DWORD *)v18 &= ~*(_DWORD *)((char *)v18 + (_QWORD)a2);
      v18 = (__int64 (__fastcall *)(__int64, int, unsigned int, __int16, unsigned __int8))((char *)v18 + 4);
      --v19;
    }
    while ( v19 );
  }
  v10 = DWORD1(v23);
  v11 = 0x80000LL;
  if ( v7 )
  {
    if ( (*((_DWORD *)v7 + 1) & 0x80000) != 0 )
    {
      v10 = DWORD1(v23) | 0x80000;
      DWORD1(v23) |= 0x80000u;
    }
    v11 = 0x800000LL;
    if ( (*((_DWORD *)v7 + 1) & 0x800000) != 0 )
    {
      v10 |= 0x800000u;
      DWORD1(v23) = v10;
    }
    if ( (*((_DWORD *)v7 + 1) & 0x880000) != 0 )
    {
      *(_QWORD *)&v25[0] = 0LL;
      *((_QWORD *)&v25[0] + 1) = -1LL;
      KeSetTimer2(
        (__int64)&EtwpMemInfoTimer,
        -10000LL * (unsigned int)EtwpMemInfoInterval,
        10000LL * (unsigned int)EtwpMemInfoInterval,
        (__int64)v25);
      v6 = (__int64)a3;
      v5 = a4;
    }
  }
  if ( LOBYTE(stru_140F03830.CycleTime) > 3u )
  {
    updated = EtwpUpdateFileInfoDriverState((_DWORD)a1, (_DWORD)v7, 1, v6, v5);
    if ( updated )
    {
LABEL_11:
      if ( updated >= 0 )
        return (unsigned int)updated;
      goto LABEL_42;
    }
  }
  v12 = v23;
  v13 = 1024LL;
  if ( v7 )
  {
    v6 = 0x2000000LL;
    if ( (*(_DWORD *)v7 & 0x2000000) != 0 )
    {
      v12 = v23 | 0x2000000;
      qword_140E02070 = (__int64)EtwpTraceFileIo;
      LODWORD(v23) = v23 | 0x2000000;
    }
    if ( (*(_DWORD *)v7 & 0x4000000) != 0 )
    {
      v12 |= 0x4000000u;
      qword_140E02068 = (__int64)EtwpTraceFileIo;
      LODWORD(v23) = v12;
    }
    if ( (*(_DWORD *)v7 & 0x200) != 0 )
    {
      v12 |= 0x200u;
      qword_140E02060 = (__int64)EtwpTraceFileName;
      LODWORD(v23) = v12;
    }
    if ( (*(_DWORD *)v7 & 0x100) != 0 )
    {
      v12 |= 0x100u;
      EtwpDiskIoNotifyRoutines = (__int64)EtwpTraceIo;
      qword_140E02050 = (__int64)EtwpTraceRedirectedIo;
      LODWORD(v23) = v12;
    }
    if ( (*(_DWORD *)v7 & 0x400) != 0 )
    {
      v12 |= 0x400u;
      qword_140E68540 = (__int64)EtwpTraceIoInit;
      LODWORD(v23) = v12;
    }
    if ( (*((_DWORD *)v7 + 4) & 1) != 0 )
    {
      v14 = v24 | 1;
      qword_140E68548 = (__int64)EtwpTraceOpticalIo;
      LODWORD(v24) = v24 | 1;
    }
    else
    {
      v14 = v24;
    }
    if ( (*((_DWORD *)v7 + 4) & 2) != 0 )
    {
      v14 |= 2u;
      qword_140E68550 = (__int64)EtwpTraceOpticalIoInit;
      LODWORD(v24) = v14;
    }
    v13 = 0x200000LL;
    if ( (*(_DWORD *)v7 & 0x200000) != 0 )
    {
      v12 |= 0x200000u;
      EtwpSplitIoNotifyRoutines = (__int64)EtwpTraceSplitIo;
      LODWORD(v23) = v12;
    }
    if ( (*((_DWORD *)v7 + 4) & 0x400000) != 0 )
    {
      v14 |= 0x400000u;
      qword_140E02030 = (__int64)EtwpTraceFltIo;
      LODWORD(v24) = v14;
    }
    if ( (*((_DWORD *)v7 + 4) & 0x80000) != 0 )
    {
      v14 |= 0x80000u;
      qword_140E02038 = (__int64)EtwpTraceFltIo;
      LODWORD(v24) = v14;
    }
    if ( (*((_DWORD *)v7 + 4) & 0x100000) != 0 )
    {
      v14 |= 0x100000u;
      qword_140E02040 = (__int64)EtwpTraceFltTimedIo;
      LODWORD(v24) = v14;
    }
    if ( (*((_DWORD *)v7 + 4) & 0x200000) != 0 )
    {
      v14 |= 0x200000u;
      qword_140E02048 = (__int64)EtwpTraceFltTimedIo;
      LODWORD(v24) = v14;
    }
    a2 = EtwpTraceWdf;
    if ( (*((_DWORD *)v7 + 4) & 0x1000000) != 0 )
    {
      v14 |= 0x1000000u;
      qword_140E0EC70 = (__int64)EtwpTraceWdf;
      LODWORD(v24) = v14;
    }
    if ( (*((_DWORD *)v7 + 4) & 0x2000000) != 0 )
    {
      v14 |= 0x2000000u;
      qword_140E0EC78 = (__int64)EtwpTraceWdf;
      LODWORD(v24) = v14;
    }
    v11 = 0x8000000LL;
    if ( (*((_DWORD *)v7 + 2) & 0x8000000) != 0 )
    {
      DWORD2(v23) |= 0x8000000u;
      qword_140E0EC80 = (__int64)EtwpSystemTraceWdf;
    }
    if ( (*(_DWORD *)v7 & 0x20000) != 0 )
    {
      updated = 0;
      CmpTraceRoutine = (__int64)EtwpTraceRegistry;
      v12 |= 0x20000u;
      LODWORD(v23) = v12;
      ExpPlatformBinaryLock.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)EtwpTraceRegistryTransaction;
      goto LABEL_37;
    }
  }
  else
  {
    v14 = v24;
  }
  if ( !v7 )
    goto LABEL_11;
LABEL_37:
  if ( (*(_DWORD *)v7 & 0x100000) != 0 )
  {
    updated = AlpcRegisterLogRoutine();
    if ( updated < 0 )
      goto LABEL_42;
    v12 |= 0x100000u;
    LODWORD(v23) = v12;
  }
  if ( (*(_DWORD *)v7 & 0x10000) != 0 )
  {
    EtwpTdiIoNotify = (__int64)EtwpTraceNetwork;
    WmiSetNetworkNotify((__int64)EtwpTraceNetwork);
    v12 |= 0x10000u;
    LODWORD(v23) = v12;
  }
  if ( (*((_DWORD *)v7 + 1) & 0x10) != 0 )
  {
    updated = IoPerfInit(1);
    if ( updated < 0 )
      goto LABEL_42;
    v10 |= 0x10u;
    DWORD1(v23) = v10;
  }
  if ( (*(_DWORD *)v7 & 0x40000) != 0 )
  {
    updated = DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 1u);
    if ( updated < 0 )
      goto LABEL_42;
    LODWORD(v23) = v12 | 0x40000;
  }
  if ( (*((_DWORD *)v7 + 1) & 2) == 0 )
  {
LABEL_63:
    if ( (*((_DWORD *)v7 + 1) & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStartProfile((ULONG_PTR)qword_140F03E98 + 616 * i);
      DWORD1(v23) = v10 | 0x400;
    }
    if ( (*((_DWORD *)v7 + 4) & 0x80u) != 0 )
    {
      ObEnableEtwReferenceTrace(v11, (__int64)a2, v13, (struct _KLOCK_ENTRIES *)v6);
      LODWORD(v24) = v14 | 0x80;
    }
    if ( (*((_DWORD *)v7 + 1) & 0x20000) != 0 )
      _InterlockedIncrement(&EtwpEthreadSyncTrackingSequence);
    goto LABEL_11;
  }
  updated = EtwpTimeProfileStart();
  if ( updated >= 0 )
  {
    v10 |= 2u;
    DWORD1(v23) = v10;
    goto LABEL_63;
  }
LABEL_42:
  v16 = v7 - a1;
  memset(v25, 0, sizeof(v25));
  v17 = (char *)((char *)v25 - a1);
  do
  {
    *(_DWORD *)&v17[(_QWORD)a1] = *(_DWORD *)a1 & ~*(_DWORD *)&a1[v16];
    a1 += 4;
    --v8;
  }
  while ( v8 );
  EtwpDisableKernelTrace(v25, (__int64)&v23, a3, (struct _KLOCK_ENTRIES *)a4);
  return (unsigned int)updated;
}

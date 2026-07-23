/*
 * XREFs of EtwpDisableKernelTrace @ 0x140A00180
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x1409FF720 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpEnableKernelTrace @ 0x140A00560 (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KeStopProfile @ 0x1404A4318 (KeStopProfile.c)
 *     DbgSetDebugPrintCallback @ 0x140532200 (DbgSetDebugPrintCallback.c)
 *     IoPerfReset @ 0x1405CE5DC (IoPerfReset.c)
 *     ZwUnloadDriver @ 0x14072BB00 (ZwUnloadDriver.c)
 *     AlpcUnregisterLogRoutine @ 0x1407C49A8 (AlpcUnregisterLogRoutine.c)
 *     ObDisableEtwReferenceTrace @ 0x1407C7144 (ObDisableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x140829E18 (WmiSetNetworkNotify.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14082E448 (EtwpUpdateFileInfoDriverRegistration.c)
 *     WmiTraceRundownNotify @ 0x140B0D0B4 (WmiTraceRundownNotify.c)
 */

void __fastcall EtwpDisableKernelTrace(_DWORD *a1, __int64 a2, _QWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // ebp
  _DWORD *v8; // rcx
  const signed __int32 *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // rdi
  unsigned int i; // edi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF

  v4 = (unsigned int)a4;
  if ( !a2 )
    goto LABEL_2;
  if ( (*(_DWORD *)a2 & 0x20000) != 0 )
  {
    CmpTraceRoutine = 0LL;
    ExpPlatformBinaryLock.Timer.Header.WaitListHead.Blink = 0LL;
  }
  if ( _bittest((const signed __int32 *)a2, 0x14u) )
    AlpcUnregisterLogRoutine((__int64)a1, a2, (__int64)a3, a4);
  if ( (*(_DWORD *)a2 & 0x2000000) != 0 )
  {
    qword_140E02070 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_2;
  }
  if ( (*(_DWORD *)a2 & 0x4000000) != 0 )
  {
    qword_140E02068 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_2;
  }
  if ( (*(_DWORD *)a2 & 0x200) != 0 )
  {
    qword_140E02060 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_2;
  }
  if ( (*(_DWORD *)a2 & 0x100) != 0 )
  {
    EtwpDiskIoNotifyRoutines = 0LL;
    qword_140E02050 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_2;
  }
  if ( (*(_DWORD *)a2 & 0x400) != 0 )
  {
    qword_140E68540 = 0LL;
    goto LABEL_27;
  }
  if ( !a2 )
  {
LABEL_2:
    v8 = (_DWORD *)(a2 + 16);
    goto LABEL_3;
  }
LABEL_27:
  v8 = (_DWORD *)(a2 + 16);
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
  {
    qword_140E68548 = 0LL;
    goto LABEL_29;
  }
LABEL_3:
  if ( !a2 )
  {
LABEL_4:
    v9 = (const signed __int32 *)(a2 + 16);
    goto LABEL_5;
  }
LABEL_29:
  if ( (*v8 & 2) != 0 )
  {
    qword_140E68550 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_4;
  }
  if ( (*(_DWORD *)a2 & 0x200000) != 0 )
  {
    EtwpSplitIoNotifyRoutines = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_4;
  }
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    WmiSetNetworkNotify(0LL);
  }
  else if ( !a2 )
  {
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(a2 + 4) & 0x10) != 0 )
  {
    IoPerfReset(1);
  }
  else if ( !a2 )
  {
    goto LABEL_4;
  }
  v9 = (const signed __int32 *)(a2 + 16);
  if ( (*(_DWORD *)(a2 + 16) & 0x400000) != 0 )
  {
    qword_140E02030 = 0LL;
    goto LABEL_39;
  }
LABEL_5:
  if ( !a2 )
  {
LABEL_6:
    v10 = (_DWORD *)(a2 + 16);
    goto LABEL_7;
  }
LABEL_39:
  if ( (*v9 & 0x80000) != 0 )
  {
    qword_140E02038 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_6;
  }
  if ( _bittest(v9, 0x14u) )
  {
    qword_140E02040 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_6;
  }
  v10 = (_DWORD *)(a2 + 16);
  if ( (*(_DWORD *)(a2 + 16) & 0x200000) != 0 )
  {
    qword_140E02048 = 0LL;
    goto LABEL_45;
  }
LABEL_7:
  if ( !a2 )
  {
LABEL_8:
    v11 = (_DWORD *)(a2 + 4);
    goto LABEL_9;
  }
LABEL_45:
  if ( (*v10 & 0x1000000) != 0 )
  {
    qword_140E0EC70 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_8;
  }
  if ( (*v10 & 0x2000000) != 0 )
  {
    qword_140E0EC78 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(a2 + 8) & 0x8000000) != 0 )
  {
    qword_140E0EC80 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_8;
  }
  if ( (*(_DWORD *)a2 & 0x40000) != 0 )
  {
    DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 0);
  }
  else if ( !a2 )
  {
    goto LABEL_8;
  }
  v11 = (_DWORD *)(a2 + 4);
  if ( (*(_DWORD *)(a2 + 4) & 2) == 0 )
  {
LABEL_9:
    if ( !a2 )
      goto LABEL_10;
    goto LABEL_55;
  }
  KeStopProfile((ULONG_PTR)&stru_140F03830.1008);
LABEL_55:
  if ( (*v11 & 0x400) != 0 )
  {
    for ( i = 0; i < EtwpPmcProfile; ++i )
      KeStopProfile((ULONG_PTR)qword_140F03E98 + 616 * i);
  }
  else if ( !a2 )
  {
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(a2 + 16) & 0x80u) != 0 )
  {
    ObDisableEtwReferenceTrace((__int64)v10, a2, (__int64)a3, a4);
  }
  else if ( !a2 )
  {
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(a2 + 4) & 0x880000) != 0 && (!a1 || (a1[1] & 0x880000) == 0) )
    KeCancelTimer2((__int64)&EtwpMemInfoTimer);
LABEL_10:
  DestinationString = 0LL;
  if ( !a1 || (*a1 & 0x6000200) == 0 )
  {
    if ( dword_140E68530 )
    {
      WmiTraceRundownNotify(*a3, v4);
      EtwpUpdateFileInfoDriverRegistration(0);
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
      ZwUnloadDriver(&DestinationString);
      dword_140E68530 = 0;
    }
  }
}

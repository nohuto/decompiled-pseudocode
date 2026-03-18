/*
 * XREFs of PpmRegisterPerfCap @ 0x14044DCE0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14044DEC8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x14044E340 (PpmEventBiosCapChange.c)
 *     PpmEventThermalCapChange @ 0x14044E43C (PpmEventThermalCapChange.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140609114 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x14060E318 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x14060E414 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmCheckApplyPerfConstraints @ 0x140B141C8 (PpmCheckApplyPerfConstraints.c)
 */

__int64 __fastcall PpmRegisterPerfCap(_DWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // r13d
  __int64 Prcb; // rax
  __int64 v7; // rdi
  PBOOLEAN v8; // rsi
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  int v11; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  PBOOLEAN v15; // rdx
  unsigned int i; // r8d
  __int64 v17; // r9

  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
  v4 = 0;
  if ( !a1[5] )
  {
    v5 = a1[1];
    if ( v5 != -1 )
    {
      Prcb = KeGetPrcb(v5);
      v7 = *(_QWORD *)(Prcb + 35272);
      v8 = *(PBOOLEAN *)(Prcb + 35264);
      goto LABEL_4;
    }
LABEL_18:
    v4 = -1073741811;
    PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
    return v4;
  }
  v15 = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
  v5 = -1;
  v7 = 0LL;
  if ( *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2) == (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
    goto LABEL_18;
  do
  {
    v8 = v15;
    for ( i = 0; i < *((_DWORD *)v15 + 74); ++i )
    {
      v17 = *((_QWORD *)v15 + 39) + 1224LL * i;
      if ( *(_DWORD *)(v17 + 16) && *(_DWORD *)(v17 + 20) == a1[1] )
      {
        v7 = *((_QWORD *)v15 + 39) + 1224LL * i;
        if ( v17 )
          goto LABEL_4;
        break;
      }
    }
    v15 = *(PBOOLEAN *)v15;
  }
  while ( v15 != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) );
LABEL_4:
  if ( !v8 || !v7 )
    goto LABEL_18;
  v9 = a1[2];
  v10 = a1[3];
  *(_DWORD *)(v7 + 32) = a1[4];
  v11 = *(_DWORD *)(v7 + 24);
  if ( v11 != v9 )
  {
    if ( v11 == 100 )
    {
      *(_QWORD *)(v7 + 40) = MEMORY[0xFFFFF78000000008];
    }
    else if ( v9 == 100 )
    {
      PopDiagTraceProcessorThrottleDurationPerfTrack(
        (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v7 + 40)) / 0x2710uLL,
        v5);
      *(_QWORD *)(v7 + 40) = 0LL;
    }
    v13 = *(_QWORD *)v7;
    *(_DWORD *)(v7 + 24) = v9;
    if ( v13 )
    {
      PpmEventBiosCapChange(v13, v9);
    }
    else if ( !*((_DWORD *)v8 + 76) )
    {
      PpmEventHiddenProcessorBiosCapChange(*((_QWORD *)v8 + 2) - 35264LL, (unsigned int)a1[1], v9);
    }
    PopDiagTraceProcessorThrottlePerfTrack(100 - v9, v5);
  }
  if ( *(_DWORD *)(v7 + 28) != v10 )
  {
    v14 = *(_QWORD *)v7;
    *(_DWORD *)(v7 + 28) = v10;
    if ( v14 )
    {
      PpmEventThermalCapChange(v14, v10);
    }
    else if ( !*((_DWORD *)v8 + 76) )
    {
      PpmEventHiddenProcessorThermalCapChange(*((_QWORD *)v8 + 2) - 35264LL, (unsigned int)a1[1], v10);
    }
  }
  v8[1445] = 1;
  PpmCheckApplyPerfConstraints(0LL);
  return v4;
}

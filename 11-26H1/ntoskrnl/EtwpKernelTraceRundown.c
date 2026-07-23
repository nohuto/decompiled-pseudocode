/*
 * XREFs of EtwpKernelTraceRundown @ 0x140A99DCC
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x1404C6488 (EtwpUpdateSelectedGroupMasks.c)
 *     EtwKernelMemoryRundown @ 0x14082D960 (EtwKernelMemoryRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x140A99D58 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpCloseLogger @ 0x140218480 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x140218514 (EtwpOpenLogger.c)
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 *     IoSetThreadHardErrorMode @ 0x14048B160 (IoSetThreadHardErrorMode.c)
 *     KeEtwRundown @ 0x1405E7258 (KeEtwRundown.c)
 *     PsPerfLogSessionRundown @ 0x140804B5C (PsPerfLogSessionRundown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x140835688 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogMemInfoRundown @ 0x140835768 (EtwpLogMemInfoRundown.c)
 *     EtwpLogRefSetAutoMark @ 0x1408357CC (EtwpLogRefSetAutoMark.c)
 *     EtwpObjectTypeRundown @ 0x140835A9C (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x140835BF8 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x140835E28 (EtwpProcessorRundown.c)
 *     EtwpSpinLockConfigRunDown @ 0x14083610C (EtwpSpinLockConfigRunDown.c)
 *     MmIdentifyPhysicalMemory @ 0x14086E774 (MmIdentifyPhysicalMemory.c)
 *     MmLogSystemShareablePfnInfo @ 0x14087D834 (MmLogSystemShareablePfnInfo.c)
 *     EtwpProcessThreadImageRundown @ 0x1409BBF74 (EtwpProcessThreadImageRundown.c)
 *     MmLogQueryCombineStats @ 0x140A5D5AC (MmLogQueryCombineStats.c)
 *     EtwpSampledProfileRunDown @ 0x140B05658 (EtwpSampledProfileRunDown.c)
 *     CmEtwRunDown @ 0x140B07438 (CmEtwRunDown.c)
 *     WmiTraceRundownNotify @ 0x140B0D0B4 (WmiTraceRundownNotify.c)
 *     EtwpClockSourceRunDown @ 0x140B60BD4 (EtwpClockSourceRunDown.c)
 */

BOOLEAN __fastcall EtwpKernelTraceRundown(
        unsigned int *a1,
        struct _ETW_SILODRIVERSTATE *a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned int **a5,
        unsigned int a6)
{
  int v7; // ebp
  unsigned int v8; // r14d
  BOOLEAN v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r8
  int v14; // r9d
  unsigned int v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // rdi
  _DWORD *v18; // r15
  _DWORD *v19; // rdi
  _DWORD *v20; // r15
  _DWORD *v21; // rdi
  unsigned __int16 v22; // r8
  int v23; // r9d
  __int64 v24; // rdi
  char v26[16]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+80h] [rbp+18h] BYREF

  v27 = a3;
  v7 = a4;
  v26[0] = 0;
  v8 = a3;
  v10 = IoSetThreadHardErrorMode(0);
  v12 = EtwpOpenLogger(v8, (__int64)a2, 0LL, v26);
  if ( v12 )
  {
    if ( !a1 )
    {
      v17 = 4LL;
      goto LABEL_21;
    }
    if ( (a1[1] & 0x20) != 0 && !(_BYTE)v7 )
      EtwpLogRefSetAutoMark(0);
    if ( (*a1 & 0xC004) != 0 || (a1[4] & 0x40) != 0 || (*a1 & 1) != 0 || (*a1 & 2) != 0 || (a1[1] & 0x8000000) != 0 )
      EtwpProcessThreadImageRundown((__int64)a1, v12, v7, a5, a6);
    v15 = *a1;
    if ( (*a1 & 0x20000) != 0 )
    {
      if ( (a1[2] & 0x1000000) == 0 )
      {
        LOBYTE(v14) = 0;
LABEL_17:
        v16 = v15 >> 17;
        LOBYTE(v16) = (v15 & 0x20000) != 0;
        CmEtwRunDown((_DWORD)a2, v8, v16, v14, v7);
LABEL_18:
        v17 = (__int64)(a1 + 1);
        if ( (a1[1] & 2) != 0 )
        {
          LOBYTE(v13) = 1;
          LOBYTE(v11) = v7;
          EtwpSampledProfileRunDown(v12, v11, v13);
LABEL_22:
          if ( (*(_DWORD *)v17 & 0x400) != 0 )
          {
            LOBYTE(v11) = v7;
            EtwpSampledProfileRunDown(v12, v11, 0LL);
            v18 = a1 + 1;
LABEL_25:
            if ( (*(_DWORD *)v17 & 0x10000) != 0 )
            {
              EtwpSpinLockConfigRunDown(v12, v7);
              v19 = a1 + 1;
LABEL_28:
              if ( (*v18 & 0x20000) != 0 )
              {
                EtwpExecutiveResourceConfigRunDown(v12, v7);
                v20 = a1 + 1;
LABEL_31:
                if ( (*v19 & 0x400008) != 0 )
                  PsPerfLogSessionRundown((__int64)a2, v8, v7);
                if ( (*v20 & 0x8000049) != 0 )
                  EtwpPoolRunDown(v12, v7);
                if ( (a1[2] & 0x100000) != 0 )
                {
                  LOBYTE(v11) = v7;
                  EtwpClockSourceRunDown(v12, v11);
                }
LABEL_37:
                KeEtwRundown(a2, v8, v7, (__int64)a1);
                v21 = a1 + 1;
                if ( (_BYTE)v7 )
                {
                  if ( a1 )
                  {
                    if ( (*v21 & 0x8000000) != 0 )
                    {
                      MmIdentifyPhysicalMemory((__int64)a2, v8, 0x285u, 1);
                      MmLogSystemShareablePfnInfo((__int64)a2, v8);
                    }
                    if ( (*v21 & 0x20) != 0 )
                      EtwpLogRefSetAutoMark(v7);
                  }
                  goto LABEL_65;
                }
                if ( a1 )
                {
                  if ( (*v21 & 0x8000000) != 0 )
                  {
                    MmLogSystemShareablePfnInfo((__int64)a2, v8);
                    MmIdentifyPhysicalMemory((__int64)a2, v8, 0x285u, 1);
                  }
                  if ( (*v21 & 9) != 0 || (a1[5] & 0x40) != 0 )
                  {
                    EtwpLogMemInfoRundown(v12);
                    if ( (a1[5] & 0x40) != 0 )
                    {
                      v22 = 650;
                      v23 = 2;
                    }
                    else
                    {
                      v22 = 547;
                      v23 = 0;
                    }
                    MmIdentifyPhysicalMemory((__int64)a2, v8, v22, v23);
                  }
                  if ( (a1[1] & 0x80000) != 0 )
                  {
                    MmLogQueryCombineStats((__int64)a2, &v27, 0LL);
                    v8 = v27;
                  }
                  if ( (*a1 & 0x200) != 0 )
                    WmiTraceRundownNotify(**(_QWORD **)(v12 + 1360), v8);
                  v24 = (__int64)(a1 + 4);
                  if ( (a1[4] & 0x8000) != 0 )
                  {
                    PopExecuteOnTargetProcessors(
                      (__int64)&stru_140FC11F0.WaitRegister,
                      (__int64)PpmTracePerfIdleRundown,
                      0LL,
                      0LL);
                    goto LABEL_55;
                  }
                }
                else
                {
                  v24 = 16LL;
                }
                if ( !a1 )
                {
LABEL_65:
                  EtwpCloseLogger(v8, (__int64)a2, v26[0]);
                  return IoSetThreadHardErrorMode(v10);
                }
LABEL_55:
                if ( (*(_DWORD *)v24 & 0x40) != 0 || (*(_DWORD *)v24 & 0x80u) != 0 )
                  EtwpObjectTypeRundown(v12, 0);
                if ( (a1[2] & 0x10000) != 0 )
                  EtwpProcessorRundown(v12);
                goto LABEL_65;
              }
LABEL_30:
              v20 = v19;
              if ( !a1 )
                goto LABEL_37;
              goto LABEL_31;
            }
LABEL_27:
            v19 = v18;
            if ( !a1 )
              goto LABEL_30;
            goto LABEL_28;
          }
LABEL_24:
          v18 = (_DWORD *)v17;
          if ( !a1 )
            goto LABEL_27;
          goto LABEL_25;
        }
LABEL_21:
        if ( !a1 )
          goto LABEL_24;
        goto LABEL_22;
      }
    }
    else if ( (a1[2] & 0x1000000) == 0 )
    {
      goto LABEL_18;
    }
    LOBYTE(v14) = 1;
    goto LABEL_17;
  }
  return IoSetThreadHardErrorMode(v10);
}

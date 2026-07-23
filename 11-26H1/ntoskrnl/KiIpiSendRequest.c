/*
 * XREFs of KiIpiSendRequest @ 0x14032BF00
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14021C500 (KeQueryTotalCycleTimeThread.c)
 *     KxFlushNonGlobalTb @ 0x140252950 (KxFlushNonGlobalTb.c)
 *     KxFlushEntireTb @ 0x140252BEC (KxFlushEntireTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140252FDC (KeFlushProcessWriteBuffers.c)
 *     KiUpdateSpeculationControl @ 0x140305F40 (KiUpdateSpeculationControl.c)
 *     KeUpdateThreadTag @ 0x14030F4C0 (KeUpdateThreadTag.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     KiIpiSendRequestEx @ 0x14032BD90 (KiIpiSendRequestEx.c)
 *     KeChangeMemoryAttributes @ 0x140453D18 (KeChangeMemoryAttributes.c)
 *     KiIpiSendPacket @ 0x140491944 (KiIpiSendPacket.c)
 *     KeIpiGenericCall @ 0x1404A43F0 (KeIpiGenericCall.c)
 *     KeSynchronizeAddressPolicy @ 0x1404C5F18 (KeSynchronizeAddressPolicy.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1404CCE24 (KiAdjustUserIsolationDomainThread.c)
 *     KeSynchronizeSecurityDomain @ 0x1404D6B28 (KeSynchronizeSecurityDomain.c)
 *     KiRequestApcInterruptSynchronously @ 0x140522BEC (KiRequestApcInterruptSynchronously.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     HalRequestIpi @ 0x1402F9560 (HalRequestIpi.c)
 *     EtwpGetPerfCounter @ 0x14032F3E0 (EtwpGetPerfCounter.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140460C50 (KiIpiEnlightenedGuestPriorityKick.c)
 *     EtwpGetHostPerfCounter @ 0x1404688A4 (EtwpGetHostPerfCounter.c)
 *     PerfInfoLogIpiSend @ 0x1404E9E00 (PerfInfoLogIpiSend.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiIpiSendRequest(__int64 a1, unsigned __int64 a2, char *a3, _OWORD *a4, __int64 a5)
{
  int v7; // r15d
  __int64 v8; // r13
  __int64 v9; // r8
  char v10; // r12
  int v11; // ebx
  bool i; // zf
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  char *v15; // rbx
  _QWORD *v16; // rdi
  __int64 v17; // r14
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // dx
  unsigned __int16 v20; // ax
  __int64 v21; // r9
  unsigned __int16 v22; // cx
  signed __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // r10d
  __int64 v30; // r8
  __int64 result; // rax
  __int64 v32; // r11
  __int64 v33; // r15
  __int64 v34; // r11
  unsigned __int64 v35; // r15
  unsigned int v36; // edi
  int v37; // edi
  _QWORD *v38; // r14
  unsigned __int64 v39; // rbp
  unsigned int v40; // edx
  unsigned __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r10
  signed __int64 *v44; // r8
  signed __int64 v45; // rax
  signed __int64 v46; // rdx
  unsigned int v47; // edx
  unsigned int v48; // r9d
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rax
  unsigned __int16 v53; // cx
  _QWORD *v54; // r8
  __int64 v55; // rax
  __int64 v56; // rcx
  char *v57; // rdx
  __int64 v58; // rcx
  unsigned __int16 j; // cx
  unsigned int v60; // [rsp+30h] [rbp-A8h]
  unsigned int v61; // [rsp+34h] [rbp-A4h]
  unsigned int v62; // [rsp+38h] [rbp-A0h]
  int v63; // [rsp+3Ch] [rbp-9Ch]
  int v64; // [rsp+40h] [rbp-98h]
  unsigned int v65; // [rsp+44h] [rbp-94h]
  signed __int64 v66; // [rsp+50h] [rbp-88h]
  __int128 v68; // [rsp+70h] [rbp-68h] BYREF
  __int128 v69; // [rsp+80h] [rbp-58h]

  v60 = a2;
  LODWORD(v66) = 0;
  v7 = a2;
  v8 = a1;
  v68 = 0LL;
  v69 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) != 0 )
  {
    v9 = qword_140FC9C80;
    v10 = 1;
    v11 = 0;
    if ( qword_140FC9C80 )
    {
      a2 = *(unsigned int *)(qword_140FC9C80 + 4520);
      for ( i = !_BitScanForward((unsigned int *)&a1, a2); !i; i = !_BitScanForward((unsigned int *)&a1, a2) )
      {
        a2 = ((_DWORD)a2 - 1) & (unsigned int)a2;
        v13 = qword_140FC9C80 + 32 * a1 + 4556;
        if ( v13 && (*(_DWORD *)(v13 + 8) & 0x400000) != 0 )
          v11 |= 1 << *(_BYTE *)(qword_140FC9C80 + 2 * a1 + 4505);
      }
      if ( (v11 & 2) == 0 )
      {
        *(_QWORD *)&v68 = 0LL;
LABEL_8:
        if ( (v11 & 4) != 0 )
          *((LARGE_INTEGER *)&v68 + 1) = RtlGetSystemTimePrecise();
        else
          *((_QWORD *)&v68 + 1) = 0LL;
        if ( (v11 & 8) != 0 )
        {
          v14 = __rdtsc();
          a2 = (unsigned __int64)HIDWORD(v14) << 32;
          *(_QWORD *)&v69 = v14;
        }
        else
        {
          *(_QWORD *)&v69 = 0LL;
        }
        if ( (v11 & 0x10) != 0 )
          *((_QWORD *)&v69 + 1) = EtwpGetHostPerfCounter(a1, a2, v9);
        else
          *((_QWORD *)&v69 + 1) = 0LL;
        goto LABEL_14;
      }
    }
    else
    {
      LOBYTE(v11) = 30;
    }
    *(_QWORD *)&v68 = EtwpGetPerfCounter(a1, a2, qword_140FC9C80);
    goto LABEL_8;
  }
  v10 = 0;
LABEL_14:
  v15 = (char *)(v8 + 12232);
  v16 = (_QWORD *)(v8 + 12240);
  *(_QWORD *)(v8 + 12232) = 2097153LL;
  v17 = v8 + 12496;
  memset_0((void *)(v8 + 12240), 0, 0x100uLL);
  *(_QWORD *)(v8 + 12496) = 2097153LL;
  memset_0((void *)(v8 + 12504), 0, 0x100uLL);
  v18 = *(_WORD *)(v8 + 12234);
  v19 = v18;
  if ( v7 )
  {
    if ( *(_WORD *)&stru_140FC11F0.WaitRegister.Flags <= v18 )
      v19 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
    v21 = 0LL;
    *(_WORD *)(v8 + 12234) = v18;
    v53 = 0;
    *(_WORD *)v15 = v19;
    *(_DWORD *)(v8 + 12236) = 0;
    if ( v19 )
    {
      v54 = (_QWORD *)((char *)&stru_140FC11F0.116 + 4);
      v21 = v19;
      v53 = v19;
      do
      {
        *(_QWORD *)((char *)v54 + v15 - (char *)(&stru_140FC11F0.MiscFlags + 1) + 8) = *v54;
        ++v54;
        --v21;
      }
      while ( v21 );
    }
    for ( ; v53 < *(_WORD *)(v8 + 12234); *(_QWORD *)&v15[8 * v55 + 8] = v21 )
      v55 = v53++;
    if ( v7 == 1 )
    {
      v56 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV
                          + *(unsigned int *)(v8 + 36)) >> 6;
      if ( *(unsigned __int16 *)v15 > (unsigned int)v56 )
      {
        v57 = &v15[8 * v56];
        v58 = *((_QWORD *)v57 + 1);
        _bittestandreset64(
          &v58,
          *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + *(unsigned int *)(v8 + 36)) & 0x3F);
        *((_QWORD *)v57 + 1) = v58;
      }
    }
    v26 = a5;
    if ( (a5 & 0x80000000) != 0 )
    {
      LODWORD(v26) = a5 & 0x7FFFFFFF;
      for ( j = v21; j < LOWORD(KiDpcCorralLock.Header.WaitListHead.Blink); ++j )
      {
        if ( *((_QWORD *)&KiDpcCorralLock.SListFaultAddress + j) )
        {
          v60 = v21;
          RtlSubtractAffinityEx(
            (struct _KAFFINITY_EX *)(v8 + 12232),
            (struct _KAFFINITY_EX *)&KiDpcCorralLock.Header.WaitListHead.Blink,
            v8 + 12232);
          LODWORD(v21) = 0;
          break;
        }
      }
    }
  }
  else
  {
    v20 = *(_WORD *)a3;
    *(_WORD *)(v8 + 12234) = v18;
    if ( v20 <= v18 )
      v19 = v20;
    LODWORD(v21) = 0;
    *(_WORD *)v15 = v19;
    v22 = 0;
    *(_DWORD *)(v8 + 12236) = 0;
    if ( v19 )
    {
      v23 = a3 - v15;
      v24 = v19;
      v22 = v19;
      do
      {
        *v16 = *(_QWORD *)((char *)v16 + v23);
        ++v16;
        --v24;
      }
      while ( v24 );
    }
    for ( ; v22 < *(_WORD *)(v8 + 12234); *(_QWORD *)&v15[8 * v25 + 8] = 0LL )
      v25 = v22++;
    v26 = a5;
  }
  *(_DWORD *)(v8 + 11648) = 1;
  v63 = v21;
  v61 = v21;
  v27 = (unsigned int)v21;
  v28 = v26 & 0xF | ((_QWORD)a4 << 7);
  v62 = v21;
  v29 = v21;
  v65 = *(_DWORD *)(v8 + 36);
  v30 = (unsigned int)v21;
  result = (unsigned __int16)KiSubNodeCount;
  *(_DWORD *)(v8 + 11652) = (unsigned __int16)KiSubNodeCount;
  v64 = v21;
  if ( !(_DWORD)result )
    goto LABEL_33;
  do
  {
    v32 = *(_QWORD *)(KiSubNodes + 8LL * (unsigned int)v21);
    if ( !v32
      || (v33 = *(_QWORD *)(v32 + 128), v34 = *(unsigned __int16 *)(v32 + 136), *(_WORD *)v15 <= (unsigned __int16)v34)
      || (v35 = *(_QWORD *)&v15[8 * v34 + 8] & v33) == 0 )
    {
      v30 = (unsigned int)(v30 + 1);
      v61 = v30;
      goto LABEL_28;
    }
    v37 = v34;
    v38 = 0LL;
    v39 = v35;
LABEL_42:
    v40 = v37 + 1;
    while ( 1 )
    {
      if ( v39 )
      {
        _BitScanForward64(&v41, v39);
        v39 &= ~(1LL << v41);
        v42 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16
                                                                                              * (unsigned __int16)v34].Flink
              + (unsigned __int8)v41);
        v43 = KiProcessorBlock[v42];
        _m_prefetchw((const void *)(v43 + 39680));
        v44 = (signed __int64 *)(v43 + ((v65 + 827LL) << 6));
        _m_prefetchw(v44);
        if ( !v38 )
        {
          v38 = v44 + 7;
          *((_DWORD *)v44 + 14) = __popcnt(v35);
        }
        v44[6] = (signed __int64)v38;
        if ( v26 == 5 )
        {
          *((_OWORD *)v44 + 1) = *a4;
          *((_OWORD *)v44 + 2) = a4[1];
          v66 = v44[5];
        }
        v44[1] = v28;
        v45 = *(_QWORD *)(v43 + 39680);
        do
        {
          v46 = v45;
          *v44 = v45;
          v45 = _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 39680), (signed __int64)v44, v45);
        }
        while ( v45 != v46 );
        if ( v45 )
        {
          v63 = 1;
        }
        else
        {
          v62 = 1;
          v47 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v42);
          v48 = v47 & 0x3F;
          v49 = v47 >> 6;
          if ( *(unsigned __int16 *)(v8 + 12496) > (unsigned int)v49 )
          {
LABEL_52:
            v50 = 8 * v49;
            v51 = *(_QWORD *)(8 * v49 + v8 + 12504);
            _bittestandset64(&v51, v48);
            *(_QWORD *)(v50 + v8 + 12504) = v51;
            goto LABEL_53;
          }
          if ( *(unsigned __int16 *)(v8 + 12498) > (unsigned int)v49 )
          {
            *(_WORD *)(v8 + 12496) = v49 + 1;
            goto LABEL_52;
          }
        }
LABEL_53:
        v52 = *(_QWORD *)(v43 + 36600);
        if ( v52 )
          _InterlockedIncrement((volatile signed __int32 *)(v52 + 32));
        goto LABEL_42;
      }
      LOWORD(v34) = v34 + 1;
      v37 = (unsigned __int16)v34;
      if ( (unsigned __int16)v34 >= v40 )
        break;
      v39 = *(_QWORD *)(8LL * (unsigned __int16)v34 + 8);
    }
    v30 = v61;
    LODWORD(v21) = v64;
LABEL_28:
    result = (unsigned __int16)KiSubNodeCount;
    LODWORD(v21) = v21 + 1;
    v64 = v21;
  }
  while ( (unsigned int)v21 < (unsigned __int16)KiSubNodeCount );
  if ( (_DWORD)v30 )
  {
    v30 = (unsigned int)-(int)v30;
    result = (unsigned int)(v30 + _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 11652), v30));
    if ( !(_DWORD)result )
    {
      *(_DWORD *)(v8 + 11648) = 0;
      return result;
    }
  }
  v29 = v63;
  v17 = v8 + 12496;
  v27 = v62;
LABEL_33:
  if ( v26 != 5 && v29 )
  {
    if ( (_DWORD)v27 )
    {
      ++*(_DWORD *)(v8 + 36624);
      KiIpiEnlightenedGuestPriorityKick(v17, v27, v30);
      result = HalRequestIpi(0, v17);
    }
    v36 = v60;
  }
  else
  {
    v36 = v60;
    if ( v60 - 1 <= 1 )
      ++*(_DWORD *)(v8 + 36620);
    else
      ++*(_DWORD *)(v8 + 36624);
    KiIpiEnlightenedGuestPriorityKick(v8 + 12232, v27, v30);
    result = HalRequestIpi(v60, v8 + 12232);
  }
  if ( v10 )
    return PerfInfoLogIpiSend((unsigned int)&v68, v26, v66, v36, v8 + 12232);
  return result;
}

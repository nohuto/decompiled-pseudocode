/*
 * XREFs of EtwpTraceMessageVa @ 0x1402179E0
 * Callers:
 *     WmiTraceMessage @ 0x1402179A0 (WmiTraceMessage.c)
 *     NtTraceEvent @ 0x1404067D0 (NtTraceEvent.c)
 *     WmiTraceMessageVa @ 0x1404F3590 (WmiTraceMessageVa.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     PsGetEffectiveServerSilo @ 0x140216B30 (PsGetEffectiveServerSilo.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218430 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCloseLogger @ 0x140218480 (EtwpCloseLogger.c)
 *     EtwpReserveTraceBuffer @ 0x140218740 (EtwpReserveTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140218D00 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpUpdateEventsLostCount @ 0x140258E50 (EtwpUpdateEventsLostCount.c)
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     EtwpSendTraceEvent @ 0x1404A2958 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404A2A54 (EtwpInvokeEventCallback.c)
 *     EtwpTraceLostWppEvent @ 0x1404E038C (EtwpTraceLostWppEvent.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 EtwpTraceMessageVa(
        __int64 Blink,
        __int64 a2,
        _DWORD *a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int8 a6,
        ...)
{
  char v6; // r12
  unsigned __int16 v7; // bx
  int ReserveTraceBufferStatus; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 EffectiveServerSilo; // rax
  _QWORD *v11; // r15
  __int64 v12; // r15
  __int64 v13; // rdi
  unsigned __int8 v14; // bl
  struct _KTHREAD *v15; // rax
  __int64 v16; // r13
  int v17; // eax
  char v18; // r12
  char v19; // cl
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  char *v22; // rax
  __int64 ULong64FromUser; // rax
  char *v24; // rax
  unsigned __int64 ULongFromUser; // rax
  char *v26; // rax
  char *v27; // rax
  __int64 v28; // r9
  signed __int64 *v29; // rcx
  signed __int64 v30; // r8
  char v32; // dl
  unsigned int v33; // ecx
  __int64 v34; // r8
  signed __int32 v35; // ecx
  volatile signed __int32 *v36; // rax
  char v37; // dl
  __int16 v38; // r9
  char v39; // r10
  signed __int32 *v40; // r8
  signed __int32 v41; // eax
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 *v44; // rcx
  __int64 v45; // rcx
  SIZE_T v46; // rax
  SIZE_T v47; // rax
  struct _KTHREAD *v48; // rcx
  _DWORD *v49; // r8
  unsigned int *v50; // rcx
  volatile signed __int64 *v51; // rdx
  signed __int64 *v52; // roff
  signed __int64 v53; // rax
  unsigned __int64 v54; // r8
  signed __int64 v55; // rtt
  unsigned __int64 v56; // r8
  char v57; // [rsp+30h] [rbp-118h]
  char *v58; // [rsp+38h] [rbp-110h]
  void *v59; // [rsp+38h] [rbp-110h]
  int v60; // [rsp+38h] [rbp-110h]
  void *v61; // [rsp+38h] [rbp-110h]
  char v63; // [rsp+58h] [rbp-F0h]
  unsigned int v64; // [rsp+58h] [rbp-F0h]
  signed __int32 *v65; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v66; // [rsp+68h] [rbp-E0h]
  SIZE_T v67; // [rsp+68h] [rbp-E0h]
  unsigned __int64 v68; // [rsp+68h] [rbp-E0h]
  unsigned __int64 v69; // [rsp+70h] [rbp-D8h]
  unsigned int v70; // [rsp+74h] [rbp-D4h]
  size_t Srca; // [rsp+78h] [rbp-D0h]
  char v73; // [rsp+88h] [rbp-C0h]
  unsigned __int64 v74; // [rsp+98h] [rbp-B0h]
  int v75; // [rsp+A0h] [rbp-A8h]
  int v76; // [rsp+A4h] [rbp-A4h]
  int v77; // [rsp+A8h] [rbp-A0h]
  _QWORD v78[2]; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v79; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v80; // [rsp+D0h] [rbp-78h]
  unsigned __int64 v81; // [rsp+D8h] [rbp-70h]
  unsigned __int64 v82; // [rsp+E0h] [rbp-68h]
  __int64 v83; // [rsp+E8h] [rbp-60h]
  __int128 v84; // [rsp+F0h] [rbp-58h] BYREF

  v6 = a2;
  v63 = a2;
  v7 = Blink;
  v70 = HIDWORD(Blink);
  v79 = 0LL;
  v80 = 0LL;
  v84 = 0LL;
  ReserveTraceBufferStatus = 0;
  v78[0] = 0LL;
  v74 = 0LL;
  v81 = 0LL;
  if ( a6 )
  {
    if ( !KeGetPcr()->Prcb.NestingLevel
      && ((CurrentThread = KeGetCurrentThread(),
           Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink,
           Blink != -3)
        ? (EffectiveServerSilo = PsGetEffectiveServerSilo(Blink))
        : (EffectiveServerSilo = CurrentThread->Process[3].ActiveGroupsMask.Masks[0]),
          EffectiveServerSilo) )
    {
      v11 = *(_QWORD **)(EffectiveServerSilo + 1504);
    }
    else
    {
      v11 = &PspHostSiloGlobals;
    }
    v12 = v11[104];
  }
  else
  {
    v12 = EtwpHostSiloState;
  }
  v78[1] = v12;
  v13 = v7;
  if ( (unsigned int)v7 >= *(_DWORD *)(v12 + 16) )
    return (unsigned int)-1073741816;
  v14 = 0;
  if ( a6 == 1 || (unsigned __int8)KeGetEffectiveIrql(Blink, a2, a3) < 2u )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v12 + 704) + 8 * v13), 1u) )
    {
      KeLeaveCriticalRegionThread(KeGetCurrentThread());
      goto LABEL_14;
    }
    v14 = 1;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(v12 + 712) + 8 * v13);
  if ( (v16 & 1) == 0 )
    goto LABEL_15;
  EtwpCloseLogger((unsigned int)v13, v12, v14);
LABEL_14:
  v16 = 0LL;
LABEL_15:
  v83 = v16;
  if ( !v16 )
    return (unsigned int)-1073741816;
  v17 = *(_DWORD *)(v16 + 12);
  if ( (v17 & 0x80u) != 0 )
  {
    ReserveTraceBufferStatus = -1073741790;
    goto LABEL_53;
  }
  if ( !a6 && (v17 & 0x1000000) != 0 )
  {
    ReserveTraceBufferStatus = -1073741637;
    goto LABEL_53;
  }
  v18 = v6 & 0x40;
  v19 = v63 & 0x80;
  v57 = v63 & 0x80;
  if ( v18 )
  {
    if ( !v70 )
    {
      ReserveTraceBufferStatus = -1073741306;
      goto LABEL_53;
    }
    v21 = a5;
    v20 = a5 + v70;
    v74 = v20;
    v81 = v20;
  }
  else
  {
    v20 = 0LL;
    v21 = a5;
  }
  v69 = 0LL;
  while ( 1 )
  {
    if ( !v18 )
    {
      v22 = (char *)(v21 + 8);
      v58 = v22;
      if ( !a6 )
        goto LABEL_28;
LABEL_51:
      ULong64FromUser = RtlReadULong64FromUser(v22 - 8);
      v19 = v63 & 0x80;
      goto LABEL_29;
    }
    if ( !v19 )
    {
      v22 = (char *)(v21 + 8);
      v58 = v22;
      if ( (unsigned __int64)v22 > v20 )
      {
        ReserveTraceBufferStatus = -1073741306;
        goto LABEL_53;
      }
      if ( !a6 )
      {
LABEL_28:
        ULong64FromUser = *((_QWORD *)v22 - 1);
        goto LABEL_29;
      }
      goto LABEL_51;
    }
    v27 = (char *)(v21 + 4);
    v58 = v27;
    if ( (unsigned __int64)v27 > v20 )
    {
      ReserveTraceBufferStatus = -1073741306;
      goto LABEL_53;
    }
    if ( a6 )
    {
      LODWORD(ULong64FromUser) = RtlReadULongFromUser(v27 - 4);
      v19 = v63 & 0x80;
      ULong64FromUser = (unsigned int)ULong64FromUser;
    }
    else
    {
      ULong64FromUser = *((unsigned int *)v27 - 1);
    }
LABEL_29:
    if ( !ULong64FromUser )
      break;
    if ( v18 && v19 )
    {
      v26 = v58 + 4;
      v59 = v58 + 4;
      if ( a6 )
        ULongFromUser = (unsigned int)RtlReadULongFromUser(v26 - 4);
      else
        ULongFromUser = *((unsigned int *)v26 - 1);
    }
    else
    {
      v24 = v58 + 8;
      v59 = v58 + 8;
      if ( a6 )
        ULongFromUser = RtlReadULong64FromUser(v24 - 8);
      else
        ULongFromUser = *((_QWORD *)v24 - 1);
    }
    if ( ULongFromUser )
    {
      v69 += ULongFromUser;
      if ( v69 < ULongFromUser )
      {
        ReserveTraceBufferStatus = -1073741675;
        goto LABEL_53;
      }
    }
    v19 = v63 & 0x80;
    v21 = (__int64)v59;
    v20 = v74;
  }
  if ( a6 )
    RtlCopyFromUser(&v84, a3, 0x10uLL);
  else
    RtlCopyVolatileMemory(&v84, a3, 0x10uLL);
  v32 = v63 & 0xFE;
  if ( *(_QWORD *)(v16 + 264) )
    v32 = v63;
  v73 = v32;
  v75 = v32 & 1;
  v77 = v32 & 2;
  v76 = v32 & 4;
  v60 = v32 & 0x20;
  v33 = (v76 != 0 ? 4 : 0)
      + (v60 != 0 ? 8 : 0)
      + ((v32 & 0x18) != 0 ? 8 : 0)
      + v69
      + (v77 != 0 ? 0x10 : 0)
      + 4 * v75
      + 8;
  v64 = v33;
  if ( v69 > v33 )
  {
    ReserveTraceBufferStatus = -1073741306;
    if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_LOST_WPP_EVENT) )
      EtwpTraceLostWppEvent(&v84, a4, v16 + 136, 3221225990LL);
    EtwpUpdateEventsLostCount(v16);
    goto LABEL_53;
  }
  v34 = EtwpReserveTraceBuffer(v16, v33, (unsigned int)&v79, (unsigned int)v78, 0);
  v35 = 0;
  v36 = *(volatile signed __int32 **)(v16 + 264);
  if ( v36 )
    v35 = _InterlockedIncrement(v36);
  if ( !v34 )
  {
    ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v16, v64);
    if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_LOST_WPP_EVENT) )
      EtwpTraceLostWppEvent(&v84, a4, v16 + 136, (unsigned int)ReserveTraceBufferStatus);
    goto LABEL_53;
  }
  *(_DWORD *)v34 = -1879048192;
  *(_WORD *)v34 = v64;
  *(_WORD *)(v34 + 4) = a4;
  v37 = v57;
  v38 = 64;
  if ( !v57 )
    v38 = 128;
  v39 = v73;
  *(_WORD *)(v34 + 6) = v38 | v73 & 0x3F;
  v40 = (signed __int32 *)(v34 + 8);
  v65 = v40;
  if ( v75 )
  {
    *v40++ = v35;
    v65 = v40;
  }
  if ( v76 )
  {
    if ( a6 )
    {
      v41 = RtlReadULongFromUser(a3);
      v37 = v57;
      v40 = v65;
      v39 = v73;
    }
    else
    {
      v41 = *a3;
    }
    *v40++ = v41;
LABEL_84:
    v65 = v40;
  }
  else if ( v77 )
  {
    *(_OWORD *)v40 = v84;
    v40 += 4;
    goto LABEL_84;
  }
  if ( (v39 & 8) != 0 )
  {
    *(_QWORD *)v40 = v78[0];
    v40 += 2;
    v65 = v40;
  }
  if ( v60 )
  {
    v48 = KeGetCurrentThread();
    *v40 = v48[1].CurrentRunTime;
    v49 = v40 + 1;
    *v49 = v48[1].CycleTime;
    v65 = v49 + 1;
  }
  v82 = v69;
  v42 = a5;
  while ( 2 )
  {
    if ( v18 && v37 )
    {
      v43 = v42 + 4;
      v68 = v43;
      v50 = (unsigned int *)(v43 - 4);
      if ( a6 )
      {
        v45 = (unsigned int)RtlReadULongFromUser(v50);
        v43 = v68;
        goto LABEL_93;
      }
      v45 = *v50;
    }
    else
    {
      v43 = v42 + 8;
      v66 = v43;
      v44 = (__int64 *)(v43 - 8);
      if ( a6 )
      {
        v45 = RtlReadULong64FromUser(v44);
        v43 = v66;
      }
      else
      {
        v45 = *v44;
      }
LABEL_93:
      v37 = v57;
    }
    v61 = (void *)v45;
    if ( !v45 )
      goto LABEL_121;
    if ( !v18 )
    {
LABEL_96:
      v46 = v43 + 8;
      v67 = v46;
      if ( a6 )
      {
        v47 = RtlReadULong64FromUser(v46 - 8);
        v45 = (__int64)v61;
      }
      else
      {
        v47 = *(_QWORD *)(v46 - 8);
      }
      goto LABEL_98;
    }
    if ( v43 < v74 )
    {
      if ( !v37 )
        goto LABEL_96;
      v47 = v43 + 4;
      v67 = v47;
      if ( a6 )
      {
        LODWORD(v47) = RtlReadULongFromUser(v47 - 4);
        v45 = (__int64)v61;
      }
      else
      {
        LODWORD(v47) = *(_DWORD *)(v47 - 4);
      }
      v47 = (unsigned int)v47;
LABEL_98:
      Srca = v47;
      if ( v47 )
      {
        if ( v47 > v69 )
          break;
        if ( v18 )
        {
          ProbeForRead((volatile void *)v45, v47, 1u);
          RtlCopyFromUser(v65, v61, Srca);
        }
        else
        {
          RtlCopyVolatileMemory(v65, (const void *)v45, v47);
        }
        v69 -= Srca;
        v82 = v69;
        v65 = (signed __int32 *)((char *)v65 + Srca);
      }
      v37 = v57;
      v42 = v67;
      continue;
    }
    break;
  }
  ReserveTraceBufferStatus = -1073741306;
LABEL_121:
  if ( ReserveTraceBufferStatus >= 0 )
  {
    if ( (*(_DWORD *)(v16 + 12) & 0x80000) != 0
      && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
    {
      EtwpSendTraceEvent(v16, &v79);
    }
    if ( *(_QWORD *)(v16 + 1552) )
      EtwpInvokeEventCallback(v16, &v79, &v84, a6);
  }
  v51 = (volatile signed __int64 *)*((_QWORD *)&v79 + 1);
  v52 = (signed __int64 *)*((_QWORD *)&v79 + 1);
  _m_prefetchw(*((const void **)&v79 + 1));
  v53 = *v52;
  v54 = v79;
  while ( (v53 ^ v54) < 0xF )
  {
    v55 = v53;
    v53 = _InterlockedCompareExchange64(v51, v53 + 1, v53);
    if ( v55 == v53 )
      goto LABEL_53;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v54 + 12));
LABEL_53:
  if ( v14 )
  {
    _mm_lfence();
    v28 = *(_QWORD *)(*(_QWORD *)(v12 + 704) + 8LL * (unsigned int)v13);
    v29 = (signed __int64 *)(*(_QWORD *)v28 + *(_DWORD *)(v28 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v28 + 20)));
    _m_prefetchw(v29);
    while ( 1 )
    {
      while ( 1 )
      {
        v30 = *v29;
        if ( (*v29 & 1) != 0 )
          break;
        if ( v30 == _InterlockedCompareExchange64(v29, v30 - 2, v30) )
          goto LABEL_57;
      }
      if ( v30 != 1 )
        break;
      v29 = *(signed __int64 **)v28;
    }
    v56 = v30 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v56, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      KeSetEvent((PRKEVENT)(v56 + 8), 0, 0);
LABEL_57:
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
  }
  return (unsigned int)ReserveTraceBufferStatus;
}

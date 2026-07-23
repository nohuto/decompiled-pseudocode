/*
 * XREFs of EtwTraceEvent @ 0x140216EE0
 * Callers:
 *     IoWMIWriteEvent @ 0x1403E0E10 (IoWMIWriteEvent.c)
 *     NtTraceEvent @ 0x1404067D0 (NtTraceEvent.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCloseLogger @ 0x140218480 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x140218514 (EtwpOpenLogger.c)
 *     EtwpReserveTraceBuffer @ 0x140218740 (EtwpReserveTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140218D00 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpSendTraceEvent @ 0x1404A2958 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404A2A54 (EtwpInvokeEventCallback.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall EtwTraceEvent(unsigned __int16 a1, _WORD *a2, __int64 a3, int a4, char a5)
{
  SIZE_T v5; // r15
  _WORD *v6; // r13
  unsigned int ReserveTraceBufferStatus; // edi
  unsigned int v8; // r10d
  struct _LIST_ENTRY *Flink; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  int v12; // eax
  unsigned __int16 UShortFromUser; // ax
  unsigned int v14; // r14d
  int ULongFromUser; // eax
  char *v16; // r12
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r15
  int j; // edx
  unsigned int v20; // ecx
  struct _LIST_ENTRY *v21; // r13
  __int64 v22; // r12
  int *v23; // rax
  int *v24; // r15
  __int64 v25; // r9
  int i; // r12d
  volatile void *v27; // rcx
  __int64 v28; // r13
  volatile void *ULong64FromUser; // r13
  void *v30; // rcx
  int v31; // r12d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v33; // r14
  volatile signed __int64 *v34; // rdx
  signed __int64 *v35; // roff
  signed __int64 v36; // rax
  signed __int64 v37; // rtt
  _BYTE v39[16]; // [rsp+30h] [rbp-1E8h] BYREF
  int v40; // [rsp+40h] [rbp-1D8h]
  struct _LIST_ENTRY *v41; // [rsp+48h] [rbp-1D0h]
  int v42; // [rsp+50h] [rbp-1C8h]
  int v43; // [rsp+54h] [rbp-1C4h]
  size_t Size; // [rsp+58h] [rbp-1C0h]
  int v45; // [rsp+60h] [rbp-1B8h]
  int v46; // [rsp+64h] [rbp-1B4h]
  void *v47; // [rsp+68h] [rbp-1B0h]
  int v48; // [rsp+70h] [rbp-1A8h]
  int v49; // [rsp+74h] [rbp-1A4h]
  unsigned int v50; // [rsp+78h] [rbp-1A0h]
  struct _LIST_ENTRY *v51; // [rsp+80h] [rbp-198h]
  unsigned __int64 v52; // [rsp+88h] [rbp-190h]
  _WORD *v53; // [rsp+90h] [rbp-188h]
  __int64 v54; // [rsp+98h] [rbp-180h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-178h]
  __int128 v56; // [rsp+A8h] [rbp-170h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-160h]
  __int64 v58; // [rsp+C0h] [rbp-158h]
  int *v59; // [rsp+C8h] [rbp-150h]
  volatile void *Address[32]; // [rsp+D0h] [rbp-148h] BYREF

  v5 = (unsigned int)a3;
  LODWORD(Size) = a3;
  v6 = a2;
  v53 = a2;
  v39[8] = a5;
  v56 = 0LL;
  v57 = 0LL;
  v48 = 0;
  v39[0] = 0;
  v52 = 0LL;
  v49 = 0;
  v40 = 0;
  ReserveTraceBufferStatus = 0;
  v54 = 0LL;
  v8 = a1;
  v50 = a1;
  if ( a5 )
    Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  else
    Flink = (struct _LIST_ENTRY *)EtwpHostSiloState;
  v51 = Flink;
  v41 = Flink;
  if ( v8 >= LODWORD(Flink[1].Flink) )
    return (unsigned int)-1073741816;
  LOBYTE(a3) = a5;
  v10 = EtwpOpenLogger(v8, Flink, a3, v39);
  v55 = v10;
  if ( !v10 )
    return (unsigned int)-1073741816;
  v12 = *(_DWORD *)(v10 + 12);
  if ( (v12 & 0x80u) != 0 )
  {
    ReserveTraceBufferStatus = -1073741790;
LABEL_67:
    v21 = v41;
    goto LABEL_64;
  }
  if ( !a5 && (v12 & 0x1000000) != 0 )
  {
    ReserveTraceBufferStatus = -1073741637;
    goto LABEL_67;
  }
  if ( a5 )
  {
    ProbeForRead(v6, v5, 4u);
    UShortFromUser = RtlReadUShortFromUser(v6);
  }
  else
  {
    UShortFromUser = *v6;
  }
  v14 = UShortFromUser;
  v40 = UShortFromUser;
  if ( UShortFromUser < (unsigned int)v5 )
  {
    ReserveTraceBufferStatus = -1073741811;
    v43 = -1073741811;
    v21 = v41;
  }
  else
  {
    if ( a5 )
      ULongFromUser = RtlReadULongFromUser(v6 + 22);
    else
      ULongFromUser = *((_DWORD *)v6 + 11);
    v42 = ULongFromUser;
    v48 = ULongFromUser;
    if ( (ULongFromUser & 0x100000) == 0 )
    {
LABEL_28:
      v22 = v55;
      v23 = (int *)EtwpReserveTraceBuffer(v55, v14, (unsigned int)&v56, (unsigned int)&v54, 0);
      v24 = v23;
      v59 = v23;
      if ( v23 )
      {
        if ( (v42 & 0x100000) != 0 )
        {
          v46 = 0;
          v47 = (char *)v23 + (unsigned int)Size;
          if ( a5 )
            RtlCopyFromUser(v23, v6, (unsigned int)Size);
          else
            RtlCopyVolatileMemory(v23, v6, (unsigned int)Size);
          for ( i = 0; ; ++i )
          {
            v46 = i;
            if ( i >= (int)v52 )
              break;
            v27 = Address[2 * i];
            Size = (size_t)v27;
            v28 = LODWORD(Address[2 * i + 1]);
            if ( v27 && (_DWORD)v28 )
            {
              if ( a5 )
              {
                ProbeForRead(v27, (unsigned int)v28, 1u);
                RtlCopyFromUser(v47, (void *)Size, (unsigned int)v28);
              }
              else
              {
                RtlCopyVolatileMemory(v47, (const void *)v27, LODWORD(Address[2 * i + 1]));
              }
              v47 = (char *)v47 + v28;
            }
          }
          v6 = v53;
        }
        else if ( a5 )
        {
          ProbeForRead(v6, v14, 4u);
          RtlCopyFromUser(v24, v6, v14);
        }
        else
        {
          RtlCopyVolatileMemory(v23, v6, v14);
        }
        if ( (v42 & 0x80000) != 0 )
        {
          if ( a5 )
            ULong64FromUser = (volatile void *)RtlReadULong64FromUser(v6 + 12);
          else
            ULong64FromUser = (volatile void *)*((_QWORD *)v6 + 3);
          if ( a5 )
          {
            v58 = 1LL;
            ProbeForRead(ULong64FromUser, 1uLL, 4u);
          }
          v30 = v24 + 6;
          if ( a5 )
            RtlCopyFromUser(v30, (void *)ULong64FromUser, 0x10uLL);
          else
            RtlCopyVolatileMemory(v30, (const void *)ULong64FromUser, 0x10uLL);
        }
        v31 = 1;
        v21 = v41;
        CurrentThread = KeGetCurrentThread();
        *v24 = a4 | v14;
        *((_QWORD *)v24 + 2) = v54;
        v24[10] = CurrentThread->SchedulerApc.SpareLong0;
        v24[11] = CurrentThread->UserTime;
        v24[2] = CurrentThread[1].CurrentRunTime;
        v24[3] = CurrentThread[1].CycleTime;
        v33 = v55;
        if ( (*(_DWORD *)(v55 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v55, &v56);
        }
        if ( *(_QWORD *)(v33 + 1552) )
        {
          LOBYTE(v25) = a5;
          EtwpInvokeEventCallback(v33, &v56, v24 + 6, v25);
        }
        v34 = (volatile signed __int64 *)*((_QWORD *)&v56 + 1);
        v35 = (signed __int64 *)*((_QWORD *)&v56 + 1);
        _m_prefetchw(*((const void **)&v56 + 1));
        v36 = *v35;
        v11 = v56;
        while ( (v36 ^ v11) < 0xF )
        {
          v37 = v36;
          v36 = _InterlockedCompareExchange64(v34, v36 + 1, v36);
          if ( v37 == v36 )
            goto LABEL_62;
        }
        v31 = 0;
LABEL_62:
        if ( !v31 )
          _InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
        goto LABEL_64;
      }
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v22, v14);
      goto LABEL_67;
    }
    v45 = 0;
    v16 = (char *)v6 + v5;
    v17 = v14 - (unsigned int)Size;
    if ( (unsigned int)v17 <= 0x100 )
    {
      if ( (_DWORD)v17 )
      {
        if ( a5 )
        {
          ProbeForRead(v16, (unsigned int)v17, 4u);
          RtlCopyFromUser(Address, v16, (unsigned int)v17);
        }
        else
        {
          RtlCopyVolatileMemory(Address, v16, v14 - (unsigned int)Size);
        }
        v14 = Size;
        v40 = Size;
        v18 = v17 >> 4;
        v52 = v18;
        v49 = v18;
        for ( j = 0; ; ++j )
        {
          v45 = j;
          if ( j >= (int)v18 )
          {
            v6 = v53;
            goto LABEL_28;
          }
          v20 = (unsigned int)Address[2 * j + 1];
          v14 += v20;
          v40 = v14;
          if ( v14 < v20 )
            break;
        }
        ReserveTraceBufferStatus = -2147483643;
        v43 = -2147483643;
        v21 = v41;
        goto LABEL_64;
      }
      goto LABEL_28;
    }
    ReserveTraceBufferStatus = -1073741684;
    v43 = -1073741684;
    v21 = v41;
  }
LABEL_64:
  LOBYTE(v11) = v39[0];
  EtwpCloseLogger(v50, v21, v11);
  return ReserveTraceBufferStatus;
}

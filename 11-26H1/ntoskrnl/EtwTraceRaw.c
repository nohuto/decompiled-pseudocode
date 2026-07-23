/*
 * XREFs of EtwTraceRaw @ 0x1405105E8
 * Callers:
 *     NtTraceEvent @ 0x1404067D0 (NtTraceEvent.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCloseLogger @ 0x140218480 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x140218514 (EtwpOpenLogger.c)
 *     EtwpReserveTraceBuffer @ 0x140218740 (EtwpReserveTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140218D00 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpReleaseTraceBuffer @ 0x140258A90 (EtwpReleaseTraceBuffer.c)
 *     EtwpSendTraceEvent @ 0x1404A2958 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404A2A54 (EtwpInvokeEventCallback.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 */

__int64 __fastcall EtwTraceRaw(unsigned __int16 a1, volatile void *a2, __int64 a3, char a4)
{
  SIZE_T v5; // r13
  int ReserveTraceBufferStatus; // ebx
  struct _LIST_ENTRY *Flink; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  void *v11; // rax
  char v13[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _LIST_ENTRY *v14; // [rsp+38h] [rbp-60h]
  signed __int64 v15[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h]

  v5 = (unsigned int)a3;
  v16 = 0LL;
  v17 = 0LL;
  v13[0] = 0;
  ReserveTraceBufferStatus = 0;
  v15[0] = 0LL;
  if ( a4 )
    Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  else
    Flink = (struct _LIST_ENTRY *)EtwpHostSiloState;
  v14 = Flink;
  if ( (unsigned int)a1 < LODWORD(Flink[1].Flink) )
  {
    LOBYTE(a3) = a4;
    v9 = EtwpOpenLogger(a1, (__int64)Flink, a3, v13);
    v10 = v9;
    v15[1] = v9;
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 12) & 0x80u) != 0 )
      {
        ReserveTraceBufferStatus = -1073741790;
LABEL_29:
        EtwpCloseLogger(a1, (__int64)Flink, v13[0]);
        return (unsigned int)ReserveTraceBufferStatus;
      }
      if ( a4 )
      {
        ReserveTraceBufferStatus = EtwpCheckLoggerControlAccess(0x200u);
        if ( ReserveTraceBufferStatus < 0 )
          goto LABEL_29;
        ProbeForRead(a2, v5, 4u);
      }
      else if ( (*(_DWORD *)(v9 + 12) & 0x1000000) != 0 )
      {
        ReserveTraceBufferStatus = -1073741637;
        goto LABEL_29;
      }
      v11 = (void *)EtwpReserveTraceBuffer((unsigned int *)v10, v5, (__int64)&v16, v15, 0);
      if ( v11 )
      {
        if ( a4 )
          RtlCopyFromUser(v11, (void *)a2, v5);
        else
          RtlCopyVolatileMemory(v11, (const void *)a2, v5);
        if ( (*(_DWORD *)(v10 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v10, (__int64)&v16);
        }
        if ( *(_QWORD *)(v10 + 1552) )
          EtwpInvokeEventCallback(v10, (__int64 *)&v16);
        EtwpReleaseTraceBuffer((signed __int64 *)&v16);
      }
      else
      {
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v10, v5);
      }
      goto LABEL_29;
    }
  }
  return (unsigned int)-1073741816;
}

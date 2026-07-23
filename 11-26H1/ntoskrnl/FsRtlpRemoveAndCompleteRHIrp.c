/*
 * XREFs of FsRtlpRemoveAndCompleteRHIrp @ 0x1403F49E4
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403F8BE4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockCleanup @ 0x1403F959C (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1403FAC10 (FsRtlUninitializeOplock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1404D1580 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 *     FsRtlpBreakRHOplocksForNonCachedIo @ 0x140B717F0 (FsRtlpBreakRHOplocksForNonCachedIo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockEnqueueRH @ 0x14030C928 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlpOplockDequeueRH @ 0x14030CAB8 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x1403F94AC (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     FsRtlpFreeRHOpContext @ 0x1403FB0A4 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403FB0D4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404CE5A4 (FsRtlpOplockSendModernAppTermination.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FsRtlpFillOutputBuffer @ 0x140ADA4D4 (FsRtlpFillOutputBuffer.c)
 */

char __fastcall FsRtlpRemoveAndCompleteRHIrp(
        _QWORD *P,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        char a8)
{
  int v10; // r14d
  char v12; // r12
  __int64 v13; // rsi
  __int64 v15; // r8
  int v16; // [rsp+30h] [rbp-B9h] BYREF
  int v17; // [rsp+34h] [rbp-B5h] BYREF
  int v18; // [rsp+38h] [rbp-B1h] BYREF
  unsigned int v19; // [rsp+3Ch] [rbp-ADh] BYREF
  int v20; // [rsp+40h] [rbp-A9h] BYREF
  int v21; // [rsp+44h] [rbp-A5h] BYREF
  __int64 v22; // [rsp+48h] [rbp-A1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23[2]; // [rsp+50h] [rbp-99h] BYREF
  int *v24; // [rsp+70h] [rbp-79h]
  __int64 v25; // [rsp+78h] [rbp-71h]
  __int64 *v26; // [rsp+80h] [rbp-69h]
  __int64 v27; // [rsp+88h] [rbp-61h]
  int *v28; // [rsp+90h] [rbp-59h]
  __int64 v29; // [rsp+98h] [rbp-51h]
  int *v30; // [rsp+A0h] [rbp-49h]
  __int64 v31; // [rsp+A8h] [rbp-41h]
  int *v32; // [rsp+B0h] [rbp-39h]
  __int64 v33; // [rsp+B8h] [rbp-31h]
  __int64 *v34; // [rsp+C0h] [rbp-29h]
  __int64 v35; // [rsp+C8h] [rbp-21h]
  int *v36; // [rsp+D0h] [rbp-19h]
  __int64 v37; // [rsp+D8h] [rbp-11h]

  v10 = a3;
  v12 = 1;
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v18 = a3;
    v24 = &v18;
    v25 = 4LL;
    v26 = (__int64 *)&v19;
    v19 = a4;
    v28 = &v20;
    v21 = a6;
    v30 = &v21;
    v16 = a7;
    v32 = &v16;
    v34 = &v22;
    v17 = *(_DWORD *)(a2 + 144);
    v36 = &v17;
    v27 = 4LL;
    v20 = a5;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 4LL;
    v22 = a2;
    v35 = 8LL;
    v37 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)byte_140046269, 0LL, 0LL, 9u, v23);
  }
  v13 = P[2];
  P[2] = 0LL;
  *(_BYTE *)(v13 + 69) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64((volatile __int64 *)(v13 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v13 + 69));
  FsRtlpOplockDequeueRH(P);
  if ( *(_BYTE *)(v13 + 68) )
  {
    v12 = 0;
    v10 = -1073741536;
    ObfDereferenceObjectWithTag((PVOID)P[3], 0x746C6644u);
    if ( P[5] )
      FsRtlpClearOwner(a2, P);
    *(_QWORD *)(v13 + 56) = 0LL;
  }
  else
  {
    FsRtlpFillOutputBuffer(v13, 3, (a4 >> 12) & 7, a5, (a5 & 2) != 0 ? a6 : 0, (a5 & 2) != 0 ? a7 : 0);
    if ( (a5 & 1) != 0 )
    {
      *((_DWORD *)P + 12) = P[6] & 0xFF0FFFFF | (a4 != 0 ? 0x100000 : 0x800000);
      FsRtlpOplockEnqueueRH((__int64 *)(a2 + 72), P);
      LOBYTE(v15) = 1;
      FsRtlpModifyThreadPriorities(a2, P, v15);
      FsRtlpOplockSendModernAppTermination(a2, P);
      goto LABEL_13;
    }
    ObfDereferenceObjectWithTag((PVOID)P[3], 0x746C6644u);
    if ( P[5] )
      FsRtlpClearOwner(a2, P);
  }
  if ( a8 )
    P[11] = 0LL;
  FsRtlpFreeRHOpContext(P);
LABEL_13:
  *(_DWORD *)(v13 + 48) = v10;
  IofCompleteRequest((PIRP)v13, 1);
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v17 = v10;
    v24 = &v17;
    v25 = 4LL;
    v26 = &v22;
    v16 = *(_DWORD *)(a2 + 144);
    v22 = a2;
    v28 = &v16;
    v27 = 8LL;
    v29 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)&word_14004620E, 0LL, 0LL, 5u, v23);
  }
  return v12;
}

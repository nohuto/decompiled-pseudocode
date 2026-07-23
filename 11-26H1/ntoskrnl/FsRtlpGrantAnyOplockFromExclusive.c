/*
 * XREFs of FsRtlpGrantAnyOplockFromExclusive @ 0x1405B99A8
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B8BC0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     FsRtlpSyncWithAckTimeout @ 0x1403FABC0 (FsRtlpSyncWithAckTimeout.c)
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14052CC9C (FsRtlpCancelExclusiveIrp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FsRtlpOplockMoveAckTimeout @ 0x140791C0C (FsRtlpOplockMoveAckTimeout.c)
 *     FsRtlpOplockPerfMoveData @ 0x140791E08 (FsRtlpOplockPerfMoveData.c)
 *     FsRtlpFillOutputBuffer @ 0x140ADA4D4 (FsRtlpFillOutputBuffer.c)
 *     FsRtlpOplockPerfSendData @ 0x140AEAF28 (FsRtlpOplockPerfSendData.c)
 */

__int64 __fastcall FsRtlpGrantAnyOplockFromExclusive(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD **a5,
        char a6,
        __int64 a7,
        _BYTE *a8,
        _BYTE *a9,
        char a10,
        unsigned int a11)
{
  __int64 v12; // r8
  unsigned int v15; // edi
  __int64 v16; // r10
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // edx
  int v24; // r9d
  unsigned int v25; // r14d
  char v26; // r10
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v28; // al
  bool v29; // zf
  __int64 v30; // [rsp+50h] [rbp-81h] BYREF
  int v31; // [rsp+58h] [rbp-79h] BYREF
  __int64 v32; // [rsp+60h] [rbp-71h] BYREF
  __int64 v33; // [rsp+68h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+70h] [rbp-61h] BYREF
  __int64 *v35; // [rsp+90h] [rbp-41h]
  __int64 v36; // [rsp+98h] [rbp-39h]
  __int64 *v37; // [rsp+A0h] [rbp-31h]
  __int64 v38; // [rsp+A8h] [rbp-29h]
  int *v39; // [rsp+B0h] [rbp-21h]
  __int64 v40; // [rsp+B8h] [rbp-19h]

  v12 = a1;
  v30 = a1;
  if ( (a10 & 0x38) != 0 && a4 != 12288 )
  {
    v15 = -1073740519;
LABEL_7:
    *(_DWORD *)(a2 + 48) = v15;
    IofCompleteRequest((PIRP)a2, 1);
    return v15;
  }
  LODWORD(v16) = 0;
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 48) + 73LL) && (a4 & 0x2000) != 0 )
  {
    FsRtlpFillOutputBuffer(a2, (*(_DWORD *)(a1 + 144) >> 12) & 7, (a4 >> 12) & 5, 1, 0, 0);
    v15 = -2147483602;
    goto LABEL_7;
  }
  if ( a6 )
  {
    *(_QWORD *)(*(_QWORD *)a7 + 16LL) = *(_QWORD *)(a1 + 8);
    FsRtlpOplockPerfMoveData(v30 + 160, *(_QWORD *)a7 + 24LL);
    FsRtlpOplockMoveAckTimeout(v30 + 176, *(_QWORD *)a7 + 40LL);
    v18 = *(_QWORD **)a7;
    v19 = (_QWORD *)(v30 + 104);
    v20 = *(_QWORD *)(v30 + 104);
    if ( *(_QWORD *)(v20 + 8) != v30 + 104 )
      __fastfail(3u);
    *v18 = v20;
    v18[1] = v19;
    *(_QWORD *)(v20 + 8) = v18;
    *v19 = v18;
    if ( (unsigned int)dword_140E06B30 > 5 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)a7 + 16LL);
      v35 = &v32;
      v32 = v21;
      v33 = v30;
      v37 = &v33;
      v36 = 8LL;
      v38 = 8LL;
      v31 = *(_DWORD *)(v30 + 144);
      v39 = &v31;
      v40 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06B30,
        (unsigned __int8 *)byte_140046E00,
        0LL,
        0LL,
        5u,
        &v34);
      v16 = 0LL;
    }
    v22 = v30;
    *(_QWORD *)a7 = v16;
    v23 = a4 & 0x3010;
    v24 = a4 & 0x4040;
    *(_QWORD *)(v22 + 8) = v16;
    v12 = v30;
  }
  else
  {
    *a8 = 1;
    if ( !a4 )
    {
      *a9 = 1;
      goto LABEL_15;
    }
    v24 = a4 & 0x4040;
    v23 = a4 & 0x3010;
    if ( v24 == 0 && v23 != 0 )
    {
      *(_QWORD *)(a1 + 8) = 0LL;
      v12 = v30;
LABEL_21:
      if ( a5 )
      {
        FsRtlpOplockPerfMoveData(v12 + 160, *a5 + 9);
        FsRtlpOplockMoveAckTimeout(v30 + 176, *a5 + 11);
      }
      else
      {
        FsRtlpSyncWithAckTimeout((PVOID *)(v12 + 176));
        FsRtlpOplockPerfSendData(v30 + 160);
        v26 = 0;
      }
      v25 = FsRtlpRequestShareableOplock(&v30, a3, a2, a4, a5, a6, 1, a10, a11, v26);
      goto LABEL_30;
    }
  }
  if ( a4 )
  {
    if ( v23 == 0 || v24 != 0 )
    {
      *(_QWORD *)v12 = a2;
      v25 = 259;
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
      *(_QWORD *)(a2 + 56) = v30;
      *(_QWORD *)(v30 + 16) = KeGetCurrentThread()->ApcState.Process;
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(v30 + 24) = CurrentThread;
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_BYTE *)(v30 + 32) = 0;
      if ( a6 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(a3 + 48), 0x746C6644u);
        *(_QWORD *)(v30 + 8) = *(_QWORD *)(a3 + 48);
      }
      *(_DWORD *)(v30 + 144) = a4 | *(_DWORD *)(v30 + 144) & 0x8000020 | 0x40;
      v28 = KeAcquireQueuedSpinLock(7uLL);
      v29 = *(_BYTE *)(a2 + 68) == 0;
      *(_BYTE *)(a2 + 69) = v28;
      if ( v29 )
      {
        _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
      }
      else
      {
        FsRtlpCancelExclusiveIrp(a2, 1, a6 == 0);
      }
      goto LABEL_30;
    }
    goto LABEL_21;
  }
LABEL_15:
  v25 = v16;
  *(_DWORD *)(v30 + 144) = *(_DWORD *)(v12 + 144) & 0x8000020 | 1;
  *(_DWORD *)(a2 + 48) = v16;
  IofCompleteRequest((PIRP)a2, 1);
  FsRtlpSyncWithAckTimeout((PVOID *)(v30 + 176));
  FsRtlpOplockPerfSendData(v30 + 160);
LABEL_30:
  if ( a6 )
    *(_DWORD *)(v30 + 144) |= 0x1000000u;
  return v25;
}

/*
 * XREFs of ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x14002E9D4
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     McTemplateK0pqqqqUR4_EtwWriteTransfer @ 0x14002EDF0 (McTemplateK0pqqqqUR4_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiProcessHistoryBuffer(struct _VIDSCH_DMA_PACKET *a1, struct _VIDSCH_HISTORY_BUFFER_DATA *a2)
{
  struct _VIDSCH_DMA_PACKET *v2; // r11
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // r10
  unsigned int v13; // ecx
  int v14; // edx
  unsigned int v15; // eax
  int v16; // r8d
  unsigned __int64 v17; // r12
  int v18; // r13d
  unsigned __int64 v19; // r15
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rbx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  int v29; // r8d
  int v30; // edx
  unsigned int v31; // edx
  int v32; // r8d
  int v33; // ecx
  int v34; // r8d
  __int64 v35; // rbx
  int v36; // ecx
  int v37; // r8d
  unsigned int v38; // [rsp+50h] [rbp-39h]
  _QWORD *v39; // [rsp+58h] [rbp-31h]
  __int128 v40; // [rsp+60h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int64 v42; // [rsp+88h] [rbp-1h] BYREF
  int v43; // [rsp+90h] [rbp+7h]
  int v44; // [rsp+94h] [rbp+Bh]
  __int64 v45; // [rsp+98h] [rbp+Fh]
  __int64 v46; // [rsp+A0h] [rbp+17h]
  unsigned int v47; // [rsp+A8h] [rbp+1Fh]
  int v48; // [rsp+ACh] [rbp+23h]
  char v50; // [rsp+100h] [rbp+77h]
  int v51; // [rsp+108h] [rbp+7Fh]
  int v52; // [rsp+108h] [rbp+7Fh]

  v2 = a1;
  if ( (qword_14008A010 & 0x461C8ED7) != 0
    && (qword_14008A018 & 0xFFFFFFFFB9E37128uLL) == 0
    && (qword_14008A010 & 0x4000) != 0 )
  {
    v3 = *(_QWORD *)a2;
    v39 = (_QWORD *)*((_QWORD *)a1 + 6);
    v4 = v39[12];
    v51 = *((_DWORD *)a2 + 2);
    v5 = *(_QWORD *)(v4 + 24);
    v6 = *(unsigned __int16 *)(v4 + 4);
    v7 = *(_QWORD *)(v5 + 696);
    v8 = v7 + 8 * v6;
    if ( (unsigned int)v6 < *(_DWORD *)(v5 + 768) )
      v7 += 8 * v6;
    else
      v8 = *(_QWORD *)(v5 + 696);
    v9 = *(unsigned int *)(v3 + 8);
    v10 = v3 + *((unsigned int *)a2 + 2);
    v11 = v3 + (unsigned int)(v9 + 16);
    v40 = *(_OWORD *)v3;
    if ( v11 < v3 || v11 > v10 )
    {
      v22 = *(unsigned int *)(v3 + 8);
      WdLogSingleEntry1(1LL, v9);
      WdLogGlobalForLineNumber = 11834;
      DxgkLogInternalTriageEvent(
        v23,
        0x40000,
        v24,
        (unsigned int)L"Invalid history buffer private data size. PrivateDataSize=%d",
        v22,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v12 = *(_QWORD *)(v5 + 8);
      v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 3032LL)
                                  + 352LL * *(unsigned __int16 *)(*(_QWORD *)v8 + 6LL)
                                  + 40)
                      + 4LL * *(unsigned __int16 *)(*(_QWORD *)v7 + 8LL));
      v50 = v13;
      if ( v13 )
      {
        v14 = 8;
        if ( v13 <= 0x20 )
          v14 = 4;
        v15 = 8064;
        if ( v13 <= 0x20 )
          v15 = 16128;
        v52 = v14;
        v16 = *(_OWORD *)v3;
        v38 = v15;
        v17 = DWORD1(v40);
        while ( 1 )
        {
          v18 = v17;
          if ( v15 < (unsigned int)v17 )
            v18 = v15;
          v19 = (unsigned int)(v18 * v14);
          if ( v19 > v10 - v11 )
            break;
          if ( (byte_14008A202 & 1) != 0 )
          {
            McTemplateK0pqqqqUR4_EtwWriteTransfer(
              (unsigned int)&DxgkControlGuid_Context,
              v14,
              v16,
              v39[7],
              v16,
              *((_DWORD *)v2 + 24),
              v13,
              v19,
              v11);
            LOBYTE(v13) = v50;
            v14 = v52;
            v16 = v40;
            v2 = a1;
          }
          v15 = v38;
          v11 += v19;
          LODWORD(v17) = v17 - v18;
          if ( !(_DWORD)v17 )
            return;
        }
        WdLogSingleEntry3(1LL, v11, v10, v19);
        WdLogGlobalForLineNumber = 11875;
        DxgkLogInternalTriageEvent(
          v20,
          0x40000,
          v21,
          (unsigned int)L"Attempting to read memory outside the bounds of the history buffer. TimestampsStart=%I64X, Times"
                         "tampsEnd=%I64X, BytesAccessed=%d",
          v11,
          v10,
          v19,
          0LL);
      }
      else
      {
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 1256), &LockHandle);
        v25 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1248LL);
        if ( v25 )
        {
          v44 = 0;
          v48 = 0;
          while ( 1 )
          {
            v43 = v51;
            v42 = v3;
            v26 = v39[8];
            v27 = *(_QWORD *)(v5 + 8);
            v45 = v25;
            v46 = 64512LL;
            v47 = 0;
            v28 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *))DxgCoreInterface[50])(v27, v26, &v42);
            if ( v28 < 0 )
              break;
            if ( HIDWORD(v46) )
            {
              if ( v47 == 32 )
              {
                v30 = 4;
              }
              else
              {
                if ( v47 != 64 )
                {
                  WdLogSingleEntry1(1LL, v47);
                  WdLogGlobalForLineNumber = 11964;
                  DxgkLogInternalTriageEvent(
                    v33,
                    0x40000,
                    v34,
                    (unsigned int)L"Driver returned invalid precision in formatting DDI. Precision=%d",
                    v47,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_25;
                }
                v30 = 8;
              }
              v31 = HIDWORD(v46) * v30;
              if ( v31 > 0xFC00 )
              {
                WdLogSingleEntry3(1LL, HIDWORD(v46), v47, 64512LL);
                WdLogGlobalForLineNumber = 11974;
                DxgkLogInternalTriageEvent(
                  HIDWORD(v46),
                  0x40000,
                  v32,
                  (unsigned int)L"Driver reporting more timestamps than will fit in formatting buffer. NumTimestamps=%d, P"
                                 "recision=%d, BufferSize=%d",
                  HIDWORD(v46),
                  v47,
                  64512LL,
                  0LL);
                goto LABEL_25;
              }
              if ( (byte_14008A202 & 1) != 0 )
                McTemplateK0pqqqqUR4_EtwWriteTransfer(
                  (unsigned int)&DxgkControlGuid_Context,
                  v31,
                  v29,
                  v39[7],
                  v40,
                  *((_DWORD *)a1 + 24),
                  v47,
                  v31,
                  v25);
            }
            if ( !v48 )
              goto LABEL_25;
          }
          v35 = v28;
          WdLogSingleEntry1(1LL, v28);
          WdLogGlobalForLineNumber = 11936;
          DxgkLogInternalTriageEvent(
            v36,
            0x40000,
            v37,
            (unsigned int)L"Call to formatting DDI failed. Status=%d",
            v35,
            0LL,
            0LL,
            0LL);
        }
LABEL_25:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
  }
}

/*
 * XREFs of NvmeControllerResetRecovery @ 0x14012BD30
 * Callers:
 *     NvmeAdapterFirmwareActivateResetWorker @ 0x1400D6F20 (NvmeAdapterFirmwareActivateResetWorker.c)
 *     NvmeNamespaceSetUnresponsiveAttribute @ 0x140113520 (NvmeNamespaceSetUnresponsiveAttribute.c)
 *     NvmeControllerCommandTimeoutDetectThread @ 0x14012B190 (NvmeControllerCommandTimeoutDetectThread.c)
 *     NvmeDeviceHierarchicalReset @ 0x14012C1C0 (NvmeDeviceHierarchicalReset.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeControllerCancelAllIoCompletionDPCs @ 0x1400F1470 (NvmeControllerCancelAllIoCompletionDPCs.c)
 *     NvmeControllerCompletionDpcQuiesce @ 0x1400F1914 (NvmeControllerCompletionDpcQuiesce.c)
 *     NvmeControllerCompletionQueuePollingQuiesce @ 0x1400F1A40 (NvmeControllerCompletionQueuePollingQuiesce.c)
 *     NvmeControllerQueuesReInit @ 0x1400F96F4 (NvmeControllerQueuesReInit.c)
 *     NvmeControllerReinitialize @ 0x1400F9990 (NvmeControllerReinitialize.c)
 *     NvmeControllerReset @ 0x1400FA490 (NvmeControllerReset.c)
 *     NvmeControllerRestart @ 0x1400FA9B4 (NvmeControllerRestart.c)
 *     NvmeControllerSubmissionQueueQuiesce @ 0x1400FB564 (NvmeControllerSubmissionQueueQuiesce.c)
 *     NvmeControllerFreePendingZombieCommands @ 0x14011FE2C (NvmeControllerFreePendingZombieCommands.c)
 *     IsOutstandingRequestInNvmeControllerQueueEx @ 0x14012B134 (IsOutstandingRequestInNvmeControllerQueueEx.c)
 *     NvmeControllerProcessPendingRequestForResetRecovery @ 0x14012BA9C (NvmeControllerProcessPendingRequestForResetRecovery.c)
 */

char __fastcall NvmeControllerResetRecovery(unsigned __int16 *SystemArgument2, int a2)
{
  volatile signed __int32 *v4; // rcx
  char v5; // bp
  int v6; // esi
  unsigned int i; // ebx
  char v8; // dl
  __int64 v9; // rcx
  unsigned int j; // r11d
  int v11; // r11d
  __int64 v12; // rdx
  int v13; // r8d
  ULONGLONG *v14; // rbx
  const wchar_t *v15; // r9
  __int64 v16; // r8
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rbx
  unsigned int v22; // edx
  unsigned __int64 v23; // rsi
  signed __int32 v24; // ecx
  _QWORD *v25; // rcx
  signed __int32 v27[8]; // [rsp+0h] [rbp-E8h] BYREF
  wchar_t *v28; // [rsp+30h] [rbp-B8h]
  __int64 v29; // [rsp+38h] [rbp-B0h]
  wchar_t *v30; // [rsp+40h] [rbp-A8h]
  __int64 v31; // [rsp+48h] [rbp-A0h]
  wchar_t *v32; // [rsp+50h] [rbp-98h]
  __int64 v33; // [rsp+58h] [rbp-90h]
  wchar_t *v34; // [rsp+60h] [rbp-88h]
  __int64 v35; // [rsp+68h] [rbp-80h]
  wchar_t *v36; // [rsp+70h] [rbp-78h]
  __int64 v37; // [rsp+78h] [rbp-70h]
  wchar_t *v38; // [rsp+80h] [rbp-68h]
  __int64 v39; // [rsp+88h] [rbp-60h]
  wchar_t *v40; // [rsp+90h] [rbp-58h]
  __int64 v41; // [rsp+98h] [rbp-50h]
  __int128 v42; // [rsp+A0h] [rbp-48h]

  v4 = (volatile signed __int32 *)*((_QWORD *)SystemArgument2 + 161);
  v5 = 1;
  if ( !v4 || *(_DWORD *)(*((_QWORD *)SystemArgument2 + 16) + 84LL) != 1 )
  {
    v6 = -1073741436;
    v5 = 0;
    goto LABEL_21;
  }
  if ( !_InterlockedCompareExchange(v4, 1, 0) )
  {
    StorEtwNvmeControllerEvent(
      (__int64)SystemArgument2,
      1,
      4LL,
      (__int64)L"Controller reset recovery started",
      L"ResetReason",
      a2,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
    _interlockedbittestandset((volatile signed __int32 *)SystemArgument2 + 237, 1u);
    NvmeControllerCancelAllIoCompletionDPCs((__int64)SystemArgument2);
    NvmeControllerCompletionDpcQuiesce((__int64)SystemArgument2);
    if ( *((_QWORD *)SystemArgument2 + 91) )
    {
      for ( i = 0;
            i < SystemArgument2[11];
            ExpInterlockedFlushSList((PSLIST_HEADER)(*((_QWORD *)SystemArgument2 + 91) + 64LL + 192LL * i++)) )
      {
        ;
      }
    }
    NvmeControllerSubmissionQueueQuiesce((__int64)SystemArgument2);
    _interlockedbittestandset((volatile signed __int32 *)SystemArgument2 + 268, 4u);
    NvmeControllerCompletionQueuePollingQuiesce((__int64)SystemArgument2);
    _interlockedbittestandreset((volatile signed __int32 *)SystemArgument2 + 268, 4u);
    NvmeControllerProcessPendingRequestForResetRecovery((__int64)SystemArgument2, a2);
    *((_QWORD *)SystemArgument2 + 121) &= ~1uLL;
    v6 = NvmeControllerReset((__int64)SystemArgument2, v8, a2);
    if ( v6 >= 0 )
    {
      for ( j = 0; j < SystemArgument2[11]; j = v11 + 1 )
      {
        if ( IsOutstandingRequestInNvmeControllerQueueEx(v9, *((_QWORD *)SystemArgument2 + 91) + 192LL * j) )
          goto LABEL_15;
      }
      if ( IsOutstandingRequestInNvmeControllerQueueEx(v9, *((_QWORD *)SystemArgument2 + 89)) )
LABEL_15:
        KeBugCheckEx(0x176u, 4uLL, (ULONG_PTR)SystemArgument2, 0LL, 0LL);
      NvmeControllerReinitialize((union _SLIST_HEADER *)SystemArgument2, v12, v13);
    }
    else
    {
      v5 = 0;
      NvmeControllerQueuesReInit((__int64)SystemArgument2);
    }
    v14 = *(ULONGLONG **)(*((_QWORD *)SystemArgument2 + 161) + 40LL);
    *v14 = KeQueryUnbiasedInterruptTime();
    _InterlockedOr(v27, 0);
    _InterlockedCompareExchange(*((volatile signed __int32 **)SystemArgument2 + 161), 2, 1);
    _interlockedbittestandreset((volatile signed __int32 *)SystemArgument2 + 237, 1u);
    _InterlockedExchange(*((volatile __int32 **)SystemArgument2 + 161), 0);
    NvmeControllerRestart((__int64)SystemArgument2);
    NvmeControllerFreePendingZombieCommands((__int64)SystemArgument2);
    if ( v6 >= 0 )
    {
      if ( v6 )
        goto LABEL_23;
      v41 = 0LL;
      v40 = (wchar_t *)&word_140152E7C;
      v15 = L"Controller reset recovery succeeded";
      v39 = 0LL;
      v16 = 4LL;
      v38 = (wchar_t *)&word_140152E7C;
      v37 = 0LL;
      v36 = (wchar_t *)&word_140152E7C;
      v35 = 0LL;
      v34 = (wchar_t *)&word_140152E7C;
      v33 = 0LL;
      v32 = (wchar_t *)&word_140152E7C;
      v31 = 0LL;
      v30 = (wchar_t *)&word_140152E7C;
      v29 = 0LL;
      v28 = (wchar_t *)&word_140152E7C;
LABEL_22:
      StorEtwNvmeControllerEvent(
        (__int64)SystemArgument2,
        1,
        v16,
        (__int64)v15,
        L"ResetReason",
        a2,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      goto LABEL_23;
    }
LABEL_21:
    v17 = *((int *)SystemArgument2 + 298);
    v15 = L"Controller reset recovery failed";
    v41 = 0LL;
    v40 = (wchar_t *)&word_140152E7C;
    v39 = 0LL;
    v38 = (wchar_t *)&word_140152E7C;
    v37 = 0LL;
    v36 = (wchar_t *)&word_140152E7C;
    v35 = 0LL;
    v34 = (wchar_t *)&word_140152E7C;
    v16 = 2LL;
    v33 = v17;
    v32 = L"ControllerErrorState";
    v31 = v6;
    v30 = L"Status";
    v29 = *((_QWORD *)SystemArgument2 + 121);
    v28 = L"ControllerState";
    goto LABEL_22;
  }
  v6 = 259;
LABEL_23:
  if ( (SystemArgument2[680] & 0x10) != 0 )
  {
    v18 = *(_DWORD *)SystemArgument2 == 1314276178;
    v42 = 0LL;
    LODWORD(v42) = v6;
    BYTE4(v42) = v5;
    if ( v18 )
    {
      v19 = *(_QWORD *)(*((_QWORD *)SystemArgument2 + 171) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
      v20 = *(_DWORD *)(v19 + 12);
      v21 = v19 + 64;
      _InterlockedOr(v27, 0);
      if ( v20 )
      {
        if ( v19 != -64 )
        {
          v22 = _InterlockedIncrement((volatile signed __int32 *)v19) % v20;
          v23 = (unsigned __int64)v22 << 6;
          v24 = v22;
          if ( (*((_DWORD *)SystemArgument2 + 334) & 1) != 0 )
            v24 = _InterlockedIncrement((volatile signed __int32 *)SystemArgument2 + 352);
          *(_DWORD *)(v23 + v21 + 4) = v24;
          v25 = (_QWORD *)(v23 + v21 + 8);
          *(_DWORD *)(v23 + v21) = 2;
          if ( (*((_DWORD *)SystemArgument2 + 334) & 2) != 0 )
            KeQuerySystemTimePrecise(v25);
          else
            *v25 = MEMORY[0xFFFFF78000000014];
          *(_OWORD *)(v23 + v21 + 16) = v42;
          *(_OWORD *)(v23 + v21 + 32) = 0LL;
        }
      }
    }
  }
  return v5;
}

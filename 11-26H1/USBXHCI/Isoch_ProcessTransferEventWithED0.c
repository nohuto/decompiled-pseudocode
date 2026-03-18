/*
 * XREFs of Isoch_ProcessTransferEventWithED0 @ 0x1400145DC
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x140012B40 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     Isoch_Stage_CompleteTD @ 0x140013290 (Isoch_Stage_CompleteTD.c)
 *     Isoch_CompleteStaleTransfers @ 0x140014960 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1400150B0 (Isoch_Transfer_CompleteStaleStages.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x140015174 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_FindTrbMatch @ 0x1400154F0 (Isoch_FindTrbMatch.c)
 *     WPP_RECORDER_SF_DDLDDi @ 0x140016038 (WPP_RECORDER_SF_DDLDDi.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 *     Endpoint_StoppedCompletionCode @ 0x140023BC0 (Endpoint_StoppedCompletionCode.c)
 *     WPP_RECORDER_SF_DDL @ 0x14004D46C (WPP_RECORDER_SF_DDL.c)
 *     WPP_RECORDER_SF_DDLi @ 0x14004D56C (WPP_RECORDER_SF_DDLi.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // si
  __int64 v5; // rdi
  unsigned __int8 *v7; // r14
  __int64 v8; // r13
  unsigned __int8 *v9; // r12
  __int64 v11; // rdx
  char v12; // al
  KIRQL v13; // dl
  KSPIN_LOCK *v14; // rcx
  unsigned __int8 *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rax
  volatile signed __int32 *v20; // r10
  unsigned __int8 *v21; // [rsp+60h] [rbp-18h] BYREF
  char v22; // [rsp+C0h] [rbp+48h] BYREF
  int v23; // [rsp+C8h] [rbp+50h] BYREF
  int v24; // [rsp+D0h] [rbp+58h] BYREF
  int v25; // [rsp+D8h] [rbp+60h] BYREF

  v4 = 0;
  v5 = a2;
  v24 = 0;
  v23 = 0;
  v25 = 0;
  v22 = 0;
  v21 = 0LL;
  v7 = (unsigned __int8 *)(a1 + 11);
  v8 = a2 + 56;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = *(unsigned __int8 *)(a1 + 15);
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_DDLDDi(*(_QWORD *)(*(_QWORD *)v8 + 80LL), v18, *v7, 40);
  }
  v9 = v7;
  if ( *v7 == 14 || *v7 == 15 )
  {
    Isoch_ProcessTransferRingEmptyEvent(v5, a1);
    return v4;
  }
  if ( *v7 != 20 )
  {
    if ( *v7 == 23 )
    {
      ++*(_DWORD *)(v5 + 272);
      if ( !*(_QWORD *)a1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 4;
          WPP_RECORDER_SF_DDL(*(_QWORD *)(*(_QWORD *)v8 + 80LL), a2, *v7, 41);
        }
        return v4;
      }
    }
LABEL_9:
    *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
    if ( *v7 == 36 )
    {
      *(_DWORD *)(v5 + 336) |= 0x80u;
      v19 = *(_QWORD *)(v5 + 40);
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 916));
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 960));
      *(_BYTE *)(v19 + 872) = 1;
    }
    if ( (*(_DWORD *)(v5 + 336) & 0x40) != 0 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
      return v4;
    }
    Isoch_FindTrbMatch(v5, a1, (unsigned int)&v21, (unsigned int)&v25, (__int64)&v23);
    LOBYTE(v11) = *(_BYTE *)(v5 + 104);
    v12 = Endpoint_StoppedCompletionCode(*v9, v11);
    v14 = (KSPIN_LOCK *)(v5 + 96);
    if ( v12 )
    {
      *(_DWORD *)(v5 + 336) |= 0x40u;
      KeReleaseSpinLock(v14, v13);
      if ( v21 )
        Isoch_Stage_CompleteTD(v21, *v9, v23, 0, &v22, &v24);
      v20 = *(volatile signed __int32 **)(v5 + 56);
      _m_prefetchw((const void *)(v20 + 8));
      if ( (_InterlockedOr(v20 + 8, 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)v20,
          *((_QWORD *)v20 + 1),
          *((_QWORD *)v20 + 3),
          0x2000000,
          (__int64)"Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v20 + 8));
        if ( (_InterlockedXor(v20 + 8, 8u) & 8) != 0 )
          ESM_AddEsmEvent(v20, 118LL);
      }
    }
    else
    {
      KeReleaseSpinLock(v14, v13);
      v15 = v21;
      if ( !v21 )
        return v4;
      v16 = *(_QWORD *)v21;
      Isoch_CompleteStaleTransfers(v5, *(_QWORD *)v21);
      Isoch_Transfer_CompleteStaleStages(v17, v16, v15);
      Isoch_Stage_CompleteTD(v15, *v9, v23, 0, &v22, &v24);
    }
    return 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDLi(*(_QWORD *)(*(_QWORD *)v8 + 80LL), *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 143LL), *v7, a4);
    v9 = (unsigned __int8 *)(a1 + 11);
  }
  ((void (__fastcall *)(__int64, _QWORD))qword_14006BC90)(UcxDriverGlobals, *(_QWORD *)(*(_QWORD *)v8 + 24LL));
  if ( *(_QWORD *)a1 )
    goto LABEL_9;
  return v4;
}

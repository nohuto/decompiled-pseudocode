/*
 * XREFs of Bulk_ProcessTransferEventWithED0 @ 0x140023810
 * Callers:
 *     Bulk_EP_TransferEventHandler @ 0x140022EC0 (Bulk_EP_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDD @ 0x140015804 (WPP_RECORDER_SF_DDDDD.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEvent @ 0x140020E80 (ESM_AddEvent.c)
 *     Endpoint_StoppedCompletionCode @ 0x140023BC0 (Endpoint_StoppedCompletionCode.c)
 *     Endpoint_HaltedCompletionCode @ 0x140023BE0 (Endpoint_HaltedCompletionCode.c)
 *     Bulk_FindStage @ 0x140023C2C (Bulk_FindStage.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x140023E70 (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     Bulk_Stage_CalculateBytesTransferred @ 0x140023EFC (Bulk_Stage_CalculateBytesTransferred.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140024070 (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1400242DC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     WPP_RECORDER_SF_dddqLddi @ 0x1400314DC (WPP_RECORDER_SF_dddqLddi.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x14004DBE4 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 */

char __fastcall Bulk_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v2; // bl
  unsigned __int8 *v5; // rbp
  _DWORD *v6; // r13
  _QWORD *v7; // rsi
  KIRQL *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // r13
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // edx
  unsigned int v15; // r10d
  int v16; // edx
  _QWORD *v17; // r10
  __int64 v19; // [rsp+40h] [rbp-68h]
  __int64 v20; // [rsp+B0h] [rbp+8h] BYREF
  int v21; // [rsp+B8h] [rbp+10h] BYREF
  _DWORD *v22; // [rsp+C0h] [rbp+18h]

  v2 = 0;
  v21 = 0;
  v20 = 0LL;
  v5 = (unsigned __int8 *)(a1 + 11);
  v6 = (_DWORD *)(a2 + 64);
  v7 = (_QWORD *)(a2 + 56);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v19) = HIDWORD(a1);
    WPP_RECORDER_SF_dddqLddi(
      *(_QWORD *)(*v7 + 80LL),
      *v5,
      *(unsigned __int8 *)(a1 + 15),
      *(_DWORD *)(a1 + 8) & 0xFFFFFF);
  }
  if ( !(unsigned __int8)Endpoint_StoppedCompletionCode(*v5, a2) )
  {
    v22 = v6;
LABEL_6:
    v8 = (KIRQL *)(a2 + 104);
    *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    if ( (unsigned __int8)Bulk_FindStage(a2, *(_QWORD *)a1, &v20, &v21) )
    {
      v10 = v20;
      if ( v20 )
      {
        v11 = Bulk_Stage_CalculateBytesTransferred(v9, v20, a1);
        v12 = *(unsigned int *)(v10 + 40);
        LODWORD(v20) = v11;
        if ( v11 > (unsigned int)v12 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v19) = v11;
            WPP_RECORDER_SF_DDDDD(
              *(_QWORD *)(*v7 + 80LL),
              3u,
              v12,
              0x35u,
              (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
              *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 143LL),
              *(_DWORD *)(*v7 + 152LL),
              *v22,
              v19,
              v12);
            v7 = (_QWORD *)(a2 + 56);
          }
          LODWORD(v20) = 0;
          v8 = (KIRQL *)(a2 + 104);
          v5 = (unsigned __int8 *)(a1 + 11);
        }
        v22 = (_DWORD *)(a2 + 64);
      }
      else
      {
        LODWORD(v20) = 0;
      }
      if ( (unsigned __int8)Endpoint_HaltedCompletionCode(*v7, *(unsigned __int8 *)(a1 + 11)) )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *v8);
        if ( v10 )
          Bulk_ProcessTransferEventWithHaltedCompletion(a2, v10, *v5, (unsigned int)v20);
        return 1;
      }
      if ( (unsigned __int8)Endpoint_StoppedCompletionCode((unsigned int)v13, v13) )
      {
        Bulk_ProcessTransferEventWithStoppedCompletion(a2, v10, v14, v15, v21);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 143LL);
          LOBYTE(v16) = 4;
          WPP_RECORDER_SF_DDDD(
            *(_QWORD *)(*v7 + 80LL),
            v16,
            14,
            54,
            (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a2 + 48) + 143LL),
            *(_DWORD *)(*v7 + 152LL),
            *v22,
            *(_DWORD *)(a2 + 360));
        }
        *(_DWORD *)(a2 + 332) |= 8u;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *v8);
        v17 = (_QWORD *)*v7;
        _m_prefetchw((const void *)(*v7 + 32LL));
        if ( (_InterlockedOr((volatile signed __int32 *)v17 + 8, 0x10u) & 0x10) != 0 )
        {
          Controller_HwVerifierBreakIfEnabled(
            *v17,
            v17[1],
            v17[3],
            0x2000000LL,
            "Received duplicate Stopped Transfer Events",
            0LL,
            0LL);
        }
        else
        {
          _m_prefetchw(v17 + 4);
          if ( (_InterlockedXor((volatile signed __int32 *)v17 + 8, 8u) & 8) != 0 )
            ESM_AddEvent(v17 + 38, 118);
        }
        return 1;
      }
    }
    else if ( !*v6 )
    {
      Bulk_ValidateED0TrbPointerOnMismatch(a2, a1);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *v8);
    return v2;
  }
  if ( (*(_DWORD *)(*v7 + 32LL) & 0x40) == 0 )
  {
    v22 = (_DWORD *)(a2 + 64);
    v7 = (_QWORD *)(a2 + 56);
    v5 = (unsigned __int8 *)(a1 + 11);
    goto LABEL_6;
  }
  return 1;
}

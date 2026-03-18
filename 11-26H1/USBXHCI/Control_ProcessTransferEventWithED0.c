/*
 * XREFs of Control_ProcessTransferEventWithED0 @ 0x140021C4C
 * Callers:
 *     Control_EP_TransferEventHandler @ 0x140020300 (Control_EP_TransferEventHandler.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 *     WPP_RECORDER_SF_DDqLDDi @ 0x140022190 (WPP_RECORDER_SF_DDqLDDi.c)
 *     Endpoint_StoppedCompletionCode @ 0x140023BC0 (Endpoint_StoppedCompletionCode.c)
 *     Endpoint_HaltedCompletionCode @ 0x140023BE0 (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140024070 (WPP_RECORDER_SF_DDDD.c)
 *     Control_ProcessTransferEventPointer @ 0x1400305DC (Control_ProcessTransferEventPointer.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x14003D0E0 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     memmove @ 0x140059540 (memmove.c)
 */

char __fastcall Control_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v5; // r14
  KIRQL v6; // al
  __int64 v7; // rbx
  size_t v9; // r8
  __int64 v10; // rdx
  __int64 *v11; // r10
  KIRQL v12; // dl
  const char *v13; // rax
  int v14; // edx
  __int64 v15; // rax
  char v16; // dl
  KIRQL v17; // dl
  size_t Size; // [rsp+90h] [rbp+8h] BYREF
  int v19; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  v19 = 0;
  LODWORD(Size) = 0;
  v5 = a2 + 56;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqLDDi(
      *(_QWORD *)(*(_QWORD *)v5 + 80LL),
      *(unsigned __int8 *)(a1 + 15),
      *(unsigned __int8 *)(a1 + 11),
      18);
  if ( (unsigned __int8)Endpoint_StoppedCompletionCode(*(unsigned __int8 *)(a1 + 11), a2) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v5 + 32LL) & 0x40) != 0 )
      return 1;
    v5 = a2 + 56;
  }
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v7 = *(_QWORD *)(a2 + 360);
  *(_BYTE *)(a2 + 104) = v6;
  if ( !v7 )
  {
    v12 = v6;
    goto LABEL_15;
  }
  if ( (unsigned __int8)Control_ProcessTransferEventPointer(a2, v7, a1, (unsigned int)&v19, (__int64)&Size) )
  {
    v9 = (unsigned int)Size;
    if ( (unsigned int)Size > *(_DWORD *)(v7 + 104) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 143LL);
        LOBYTE(v14) = 3;
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)v5 + 80LL),
          v14,
          14,
          19,
          (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a2 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)v5 + 152LL),
          Size,
          *(_DWORD *)(v7 + 104));
      }
      v9 = 0LL;
    }
    if ( (_DWORD)v9 )
    {
      v15 = *(_QWORD *)(v7 + 48);
      *(_DWORD *)(v7 + 108) = v9;
      if ( (*(_DWORD *)(v15 + 32) & 1) != 0 && *(_DWORD *)(v7 + 64) == 2 )
        memmove(*(void **)(v7 + 80), *(const void **)(*(_QWORD *)(v7 + 88) + 16LL), v9);
    }
    if ( (unsigned __int8)Endpoint_HaltedCompletionCode(*(_QWORD *)(a2 + 56), *(unsigned __int8 *)(a1 + 11)) )
    {
      *(_DWORD *)(v7 + 124) = v10;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
      v11 = *(__int64 **)(a2 + 56);
      _m_prefetchw(v11 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)v11 + 8, 0x20u) & 0x20) == 0 )
      {
LABEL_12:
        ESM_AddEsmEvent((__int64)v11);
        return 1;
      }
      v13 = "Received duplicate Transfer Event TRB with Halted Completion Code";
      goto LABEL_19;
    }
    if ( (unsigned __int8)Endpoint_StoppedCompletionCode((unsigned int)v10, v10) )
    {
      if ( *(_DWORD *)(v7 + 108) == *(_DWORD *)(v7 + 104) )
      {
        *(_DWORD *)(v7 + 124) = 1;
      }
      else if ( v16 == 28 )
      {
        *(_DWORD *)(v7 + 124) = 28;
      }
      ++*(_DWORD *)(v7 + 132);
      v17 = *(_BYTE *)(a2 + 104);
      *(_DWORD *)(a2 + 372) = v19 - *(_DWORD *)(v7 + 132) + 1;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v17);
      v11 = *(__int64 **)(a2 + 56);
      _m_prefetchw(v11 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)v11 + 8, 0x10u) & 0x10) == 0 )
      {
        _m_prefetchw(v11 + 4);
        if ( (_InterlockedXor((volatile signed __int32 *)v11 + 8, 8u) & 8) == 0 )
          return 1;
        goto LABEL_12;
      }
      v13 = "Received duplicate Stopped Transfer Events";
LABEL_19:
      Controller_HwVerifierBreakIfEnabled(*v11, v11[1], v11[3], 0x2000000LL, v13, 0LL, 0LL);
      return 1;
    }
    v12 = *(_BYTE *)(a2 + 104);
LABEL_15:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v12);
    return v2;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
  Control_ValidateED0TrbPointerOnMismatch(a2, a1);
  return v2;
}

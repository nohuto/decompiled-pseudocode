/*
 * XREFs of Control_ProcessTransferEventWithED1 @ 0x140020330
 * Callers:
 *     Control_EP_TransferEventHandler @ 0x140020300 (Control_EP_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     Control_Transfer_CompleteCancelable @ 0x140020920 (Control_Transfer_CompleteCancelable.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x140020E80 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_DDqq @ 0x140021AF0 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_DDqLDDi @ 0x140022190 (WPP_RECORDER_SF_DDqLDDi.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140024070 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDiqq @ 0x14004CA64 (WPP_RECORDER_SF_DDiqq.c)
 *     memmove @ 0x140059540 (memmove.c)
 */

__int64 __fastcall Control_ProcessTransferEventWithED1(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rsi
  __int64 v4; // r15
  __int64 v5; // rdi
  unsigned __int8 v7; // r12
  unsigned int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // ebx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 *v16; // r10
  void *v17; // rcx
  __int64 v18; // rax
  bool v19; // zf
  int v20; // eax
  int v22; // edx
  const char *v23; // rax
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]

  v2 = *a1;
  v3 = *a1 & 0xFFFFFFFFFFFFFFF8uLL;
  v4 = *a1 & 4;
  v5 = a2;
  v7 = 1;
  if ( a2 )
  {
    if ( v3 != *(_QWORD *)(a2 + 360) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDiqq(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), HIBYTE(*((_DWORD *)a1 + 3)), v2, 20);
      Controller_ReportFatalError(*(_QWORD *)(v5 + 40), 2, 4126, 0, *(_QWORD *)(v5 + 48), *(_QWORD *)(v5 + 56), v5);
      return 0;
    }
    goto LABEL_3;
  }
  v5 = *(_QWORD *)(v3 + 56);
  if ( v3 == *(_QWORD *)(v5 + 360) )
  {
LABEL_3:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDqLDDi(
        *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
        HIWORD(*((_DWORD *)a1 + 3)) & 0x1F,
        a1[1] & 0xFFFFFF,
        22);
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDiqq(*(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL), HIBYTE(*((_DWORD *)a1 + 3)), v2, 21);
    goto LABEL_3;
  }
LABEL_5:
  v8 = *((_DWORD *)a1 + 3);
  v9 = *(_QWORD *)(v5 + 56);
  v10 = HIWORD(v8) & 0x1F;
  v11 = HIBYTE(v8);
  if ( v10 != *(_DWORD *)(v9 + 152) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(v9 + 80),
      2u,
      0xEu,
      0x17u,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      v11,
      v10);
  if ( *((_BYTE *)a1 + 15) != *(_BYTE *)(*(_QWORD *)(v5 + 48) + 143LL)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v31) = *((_WORD *)a1 + 7) & 0x1F;
    LODWORD(v30) = *((unsigned __int8 *)a1 + 15);
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
      2u,
      0xEu,
      0x18u,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      v30,
      v31);
  }
  v12 = a1[1] & 0xFFFFFF;
  if ( v12 > *(_DWORD *)(v3 + 104) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 143LL);
      LOBYTE(v26) = 3;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
        v26,
        14,
        25,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v5 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL),
        *((_BYTE *)a1 + 8),
        *(_DWORD *)(v3 + 104));
    }
    v12 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 143LL);
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_DDqq(
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
      v22,
      v2,
      26,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v5 + 48) + 143LL),
      *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL),
      *(_QWORD *)(v3 + 24),
      v3);
  }
  if ( !v4 )
  {
    v18 = *(_QWORD *)(v3 + 48);
    *(_DWORD *)(v3 + 108) = v12;
    if ( (*(_DWORD *)(v18 + 32) & 1) != 0 && *(_DWORD *)(v3 + 64) == 2 )
      memmove(*(void **)(v3 + 80), *(const void **)(*(_QWORD *)(v3 + 88) + 16LL), v12);
  }
  v13 = *((unsigned __int8 *)a1 + 11);
  v14 = **(_QWORD **)(v5 + 56);
  if ( _bittest64((const signed __int64 *)(v14 + 736), 0x3Eu) && (_BYTE)v13 == 0xC7
    || (*(_QWORD *)(v14 + 744) & 0x20) != 0 && (_BYTE)v13 == 0xC6
    || (unsigned __int8)v13 <= 0x24u && (v15 = 0x150000045CLL, _bittest64(&v15, v13)) )
  {
    *(_DWORD *)(v3 + 124) = v13;
    v16 = *(__int64 **)(v5 + 56);
    _m_prefetchw(v16 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)v16 + 8, 0x20u) & 0x20) == 0 )
    {
LABEL_18:
      v17 = v16 + 38;
LABEL_19:
      ESM_AddEvent(v17);
      return v7;
    }
    v23 = "Received duplicate Transfer Event TRB with Halted Completion Code";
    goto LABEL_33;
  }
  if ( (_BYTE)v13 == 26 || (unsigned __int8)(v13 - 27) <= 1u )
  {
    *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
    v24 = *(_DWORD *)(v3 + 132) + 1;
    *(_DWORD *)(v3 + 132) = v24;
    if ( v4 )
    {
      if ( *(_DWORD *)(v3 + 108) == *(_DWORD *)(v3 + 104) )
      {
        *(_DWORD *)(v3 + 124) = 1;
      }
      else if ( *((_BYTE *)a1 + 11) == 28 )
      {
        *(_DWORD *)(v3 + 124) = 28;
      }
      v25 = *(_DWORD *)(v3 + 128) - v24;
    }
    else
    {
      v25 = 0;
    }
    *(_DWORD *)(v5 + 372) = v25;
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
    v16 = *(__int64 **)(v5 + 56);
    _m_prefetchw(v16 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)v16 + 8, 0x10u) & 0x10) == 0 )
    {
      _m_prefetchw(v16 + 4);
      if ( (_InterlockedXor((volatile signed __int32 *)v16 + 8, 8u) & 8) == 0 )
        return v7;
      goto LABEL_18;
    }
    v23 = "Received duplicate Stopped Transfer Events";
LABEL_33:
    Controller_HwVerifierBreakIfEnabled(*v16, v16[1], v16[3], 0x2000000LL, v23, 0LL, 0LL);
    return v7;
  }
  *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  ++*(_DWORD *)(v3 + 132);
  if ( v4 )
  {
    v19 = *(_DWORD *)(v3 + 112) == 3;
    *(_DWORD *)(v3 + 124) = *((unsigned __int8 *)a1 + 11);
    if ( !v19 && *(_DWORD *)(v3 + 116) != 3 )
      Control_Transfer_CompleteCancelable(v5);
  }
  v20 = *(_DWORD *)(v5 + 372);
  if ( !v20 || (v27 = v20 - 1, (*(_DWORD *)(v5 + 372) = v27) != 0) || (*(_DWORD *)(v5 + 368) & 4) == 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
    return v7;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
  v28 = *(_QWORD *)(v5 + 56);
  if ( !*(_BYTE *)(v28 + 37)
    || (v29 = *(_QWORD *)(v28 + 144),
        _InterlockedIncrement((volatile signed __int32 *)(v29 + 20)) == *(_DWORD *)(v29 + 8)) )
  {
    v17 = (void *)(v28 + 304);
    goto LABEL_19;
  }
  return v7;
}

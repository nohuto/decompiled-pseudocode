/*
 * XREFs of Bulk_ProcessTransferEventWithED1 @ 0x140022EF0
 * Callers:
 *     Bulk_EP_TransferEventHandler @ 0x140022EC0 (Bulk_EP_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x140001BD4 (WPP_RECORDER_SF_ddd.c)
 *     Bulk_MapTransfers @ 0x14000FBB0 (Bulk_MapTransfers.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x140015804 (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x140018350 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_Stage_Release @ 0x140018AA8 (Bulk_Stage_Release.c)
 *     ESM_RunStateMachine @ 0x140020FDC (ESM_RunStateMachine.c)
 *     Controller_ReportFatalErrorEx @ 0x140021FAC (Controller_ReportFatalErrorEx.c)
 *     Bulk_FindStage @ 0x140023C2C (Bulk_FindStage.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x140023E70 (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140024070 (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1400242DC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     WPP_RECORDER_SF_DDDqLDDi @ 0x140028BC0 (WPP_RECORDER_SF_DDDqLDDi.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x140029210 (Bulk_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDDqqq @ 0x140029490 (WPP_RECORDER_SF_DDDqqq.c)
 *     McTemplateK0pppxsb16b16_EtwWriteTransfer @ 0x140033FB4 (McTemplateK0pppxsb16b16_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_s @ 0x140036CC4 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_DDDi @ 0x140039164 (WPP_RECORDER_SF_DDDi.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memmove @ 0x140059540 (memmove.c)
 */

__int64 __fastcall Bulk_ProcessTransferEventWithED1(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bp
  __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  KSPIN_LOCK *v6; // rbx
  __int64 *v7; // r9
  char v8; // cl
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  char v12; // cl
  int v13; // edx
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // rbx
  __int64 v17; // r8
  unsigned int v18; // ebp
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rbx
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  KIRQL v31; // al
  __int64 v32; // r8
  bool v33; // zf
  char *v34; // rcx
  KIRQL v35; // dl
  KSPIN_LOCK *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rbx
  int v40; // r8d
  int v41; // r9d
  _QWORD *v42; // rdx
  int v43; // ecx
  __int64 v44; // rsi
  __int64 v45; // rbp
  __int64 v46; // rbx
  KIRQL v47; // al
  char v48; // al
  __int64 v49; // rax
  int v51; // [rsp+20h] [rbp-98h]
  __int128 v52; // [rsp+70h] [rbp-48h] BYREF
  int v53; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v54; // [rsp+D0h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v54 = 0LL;
  if ( !a2 )
  {
    v16 = *(_QWORD *)v4;
    v3 = *(_QWORD *)(*(_QWORD *)v4 + 56LL);
    goto LABEL_20;
  }
  if ( !v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        4u,
        0xEu,
        0x2Cu,
        (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids);
    goto LABEL_14;
  }
  v6 = (KSPIN_LOCK *)(a2 + 96);
  *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v7 = *(__int64 **)(v3 + 376);
  if ( (__int64 *)(v3 + 376) != v7 )
  {
    while ( 1 )
    {
      v8 = *((_BYTE *)v7 + 130);
      v9 = *((unsigned __int8 *)v7 + 132);
      *((_BYTE *)v7 + 133) = v9;
      *((_BYTE *)v7 + 134) = v8;
      if ( v8 )
      {
        v10 = v9 * (unsigned int)*((unsigned __int8 *)v7 + 128);
        *((_BYTE *)v7 + 134) = v8 - 1;
        *((_BYTE *)v7 + 133) = (v9 + 1) % (unsigned int)*((unsigned __int8 *)v7 + 129);
        v11 = (__int64)v7 + v10 + 144;
        if ( v11 )
          break;
      }
LABEL_11:
      v7 = (__int64 *)*v7;
      if ( (__int64 *)(v3 + 376) == v7 )
      {
        v6 = (KSPIN_LOCK *)(v3 + 96);
        goto LABEL_13;
      }
    }
    while ( v11 != v4 )
    {
      v12 = *((_BYTE *)v7 + 134);
      if ( v12 )
      {
        v13 = *((unsigned __int8 *)v7 + 133);
        v14 = v13 * (unsigned int)*((unsigned __int8 *)v7 + 128);
        *((_BYTE *)v7 + 134) = v12 - 1;
        *((_BYTE *)v7 + 133) = (v13 + 1) % (unsigned int)*((unsigned __int8 *)v7 + 129);
        v11 = (__int64)v7 + v14 + 144;
        if ( v11 )
          continue;
      }
      goto LABEL_11;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), *(_BYTE *)(v3 + 104));
    v16 = *(_QWORD *)v4;
LABEL_20:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDqLDDi(
        *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
        *(_DWORD *)(a1 + 8) & 0xFFFFFF,
        HIWORD(*(_DWORD *)(a1 + 12)) & 0x1F,
        (*(_DWORD *)(a1 + 12) >> 2) & 1);
    v17 = *(unsigned int *)(v4 + 40);
    v18 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
    if ( v18 > (unsigned int)v17 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
          3u,
          v17,
          0x39u,
          (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids);
      v18 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDqqq(
        *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 143LL),
        v17,
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v51,
        *(_BYTE *)(*(_QWORD *)(v3 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(v3 + 56) + 152LL),
        *(_DWORD *)(v3 + 64),
        *(_QWORD *)(v16 + 24),
        v16,
        v4);
    v19 = *(unsigned __int8 *)(a1 + 11);
    v20 = **(_QWORD **)(v3 + 56);
    if ( _bittest64((const signed __int64 *)(v20 + 736), 0x3Eu) && (_BYTE)v19 == 0xC7
      || (*(_QWORD *)(v20 + 744) & 0x20) != 0 && (_BYTE)v19 == 0xC6
      || (unsigned __int8)v19 <= 0x24u && (v21 = 0x150000045CLL, _bittest64(&v21, v19)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *(unsigned __int8 *)(a1 + 11);
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
          v22,
          14,
          59,
          (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v3 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(v3 + 56) + 152LL),
          *(_DWORD *)(v3 + 64),
          *(_BYTE *)(a1 + 11));
      }
      Bulk_ProcessTransferEventWithHaltedCompletion(v3, v4, *(unsigned __int8 *)(a1 + 11), v18);
      goto LABEL_75;
    }
    v23 = *(unsigned __int8 *)(a1 + 11);
    if ( (_BYTE)v23 == 26 || (unsigned __int8)(v23 - 27) <= 1u )
    {
      v37 = *(_QWORD *)(v4 + 96);
      v38 = 16LL * *(unsigned int *)(v4 + 104);
      v53 = 0;
      v39 = *(_QWORD *)(v37 + 24) + v38;
      *(_BYTE *)(v3 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      if ( (unsigned __int8)Bulk_FindStage(v3, v39, &v54, &v53) && v54 == v4 )
        Bulk_ProcessTransferEventWithStoppedCompletion(v3, v4, *(unsigned __int8 *)(a1 + 11), v18, v53);
      *(_DWORD *)(v3 + 332) |= 8u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), *(_BYTE *)(v3 + 104));
      v42 = *(_QWORD **)(v3 + 56);
      _m_prefetchw(v42 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)v42 + 8, 0x10u) & 0x10) != 0 )
      {
        v44 = v42[3];
        v45 = v42[1];
        v46 = *v42;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_s(*(_QWORD *)(v46 + 72), (_BYTE)v42, v40, v41);
        if ( (*(_DWORD *)(v46 + 848) & 0x2000000) != 0 && !*(_BYTE *)(v46 + 797) )
        {
          DbgPrint("xHCI Hardware Verifier Break: %s\n", "Received duplicate Stopped Transfer Events");
          if ( !KdRefreshDebuggerNotPresent() )
            __debugbreak();
        }
        v52 = 0LL;
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x10) != 0 )
          McTemplateK0pppxsb16b16_EtwWriteTransfer(
            v43,
            (_DWORD)v42,
            v40,
            *(_QWORD *)(v46 + 8),
            v45,
            v44,
            0,
            (__int64)"Received duplicate Stopped Transfer Events",
            (__int64)&v52,
            (__int64)&v52);
        goto LABEL_75;
      }
      _m_prefetchw(v42 + 4);
      if ( (_InterlockedXor((volatile signed __int32 *)v42 + 8, 8u) & 8) == 0 )
      {
LABEL_75:
        v2 = 1;
        goto LABEL_76;
      }
      v30 = v42 + 38;
      v47 = KeAcquireSpinLockRaiseToDpc(v42 + 143);
      v32 = v47;
      LOBYTE(v53) = v47;
      *((_DWORD *)v30 + *((unsigned __int8 *)v30 + 833) + 192) = 118;
      *((_BYTE *)v30 + 833) = (*((_BYTE *)v30 + 833) + 1) & 0xF;
      v33 = *((_BYTE *)v30 + 1016) == 0;
      v34 = (char *)v30 + 884;
      *((_DWORD *)v30 + *((unsigned __int8 *)v30 + 949) + 221) = 118;
    }
    else
    {
      *(_DWORD *)(v16 + 108) += v18;
      v24 = *(_QWORD *)(v16 + 48);
      *(_DWORD *)(v16 + 68) = v23;
      if ( (*(_DWORD *)(v24 + 32) & 1) != 0 && *(_DWORD *)(v16 + 76) == 2 )
        memmove(*(void **)(v4 + 64), *(const void **)(*(_QWORD *)(v4 + 72) + 16LL), v18);
      Bulk_Stage_FreeScatterGatherList(v3, v4);
      *(_BYTE *)(v3 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      Bulk_Stage_Release(v3, v4);
      ++*(_DWORD *)(v16 + 116);
      if ( *(_DWORD *)(v16 + 68) == 13 || *(_DWORD *)(v16 + 112) == *(_DWORD *)(v16 + 104) )
        Bulk_Transfer_CompleteCancelable(v3, (__int64 *)v16, -1, 0);
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 1004LL) == 1 )
        _InterlockedDecrement((volatile signed __int32 *)(v3 + 356));
      else
        --*(_DWORD *)(v3 + 356);
      v25 = *(_DWORD *)(v3 + 360);
      if ( !v25 || (v26 = *(_DWORD *)(v3 + 332), v27 = v25 - 1, *(_DWORD *)(v3 + 360) = v27, (v26 & 2) == 0) || v27 )
      {
        v35 = *(_BYTE *)(v3 + 104);
        v36 = (KSPIN_LOCK *)(v3 + 96);
LABEL_74:
        KeReleaseSpinLock(v36, v35);
        goto LABEL_75;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), *(_BYTE *)(v3 + 104));
      v28 = *(_QWORD *)(v3 + 56);
      if ( *(_BYTE *)(v28 + 37) )
      {
        v29 = *(_QWORD *)(v28 + 144);
        if ( _InterlockedIncrement((volatile signed __int32 *)(v29 + 20)) != *(_DWORD *)(v29 + 8) )
          goto LABEL_75;
      }
      v30 = (_QWORD *)(v28 + 304);
      v31 = KeAcquireSpinLockRaiseToDpc(v30 + 105);
      v32 = v31;
      LOBYTE(v53) = v31;
      *((_DWORD *)v30 + *((unsigned __int8 *)v30 + 833) + 192) = 150;
      *((_BYTE *)v30 + 833) = (*((_BYTE *)v30 + 833) + 1) & 0xF;
      v33 = *((_BYTE *)v30 + 1016) == 0;
      v34 = (char *)v30 + 884;
      *((_DWORD *)v30 + *((unsigned __int8 *)v30 + 949) + 221) = 150;
    }
    v48 = v34[65];
    if ( v33 )
    {
      v34[65] = (v48 + 1) & 0xF;
      if ( !*((_BYTE *)v30 + 848) )
      {
        *((_BYTE *)v30 + 848) = 1;
        v49 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 1632))(
                WdfDriverGlobals,
                v30[120],
                v32);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01033
                                                                                                  + 1640))(
          WdfDriverGlobals,
          v49,
          "State Machine Tag",
          1021LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
        ESM_RunStateMachine((char *)v30, 1000, (KIRQL *)&v53);
        LOBYTE(v32) = v53;
      }
    }
    else
    {
      v34[65] = (v48 + 1) & 0xF;
    }
    v36 = v30 + 105;
    v35 = v32;
    goto LABEL_74;
  }
LABEL_13:
  KeReleaseSpinLock(v6, *(_BYTE *)(v3 + 104));
LABEL_14:
  if ( !*(_DWORD *)(v3 + 64) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = HIWORD(*(_DWORD *)(a1 + 12)) & 0x1F;
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_DDDi(
        *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
        v15,
        HIBYTE(*(_DWORD *)(a1 + 12)),
        55,
        v51,
        HIBYTE(*(_DWORD *)(a1 + 12)),
        HIWORD(*(_DWORD *)(a1 + 12)) & 0x1F,
        0,
        *(_QWORD *)a1);
    }
    Controller_ReportFatalErrorEx(
      *(_QWORD *)(v3 + 40),
      2u,
      4126,
      0LL,
      0LL,
      *(_QWORD *)(v3 + 48),
      *(_QWORD *)(v3 + 56),
      v3);
  }
LABEL_76:
  _InterlockedExchange((volatile __int32 *)(v3 + 348), 1);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 108), 3, 2) == 2 )
    Bulk_MapTransfers(v3);
  return v2;
}

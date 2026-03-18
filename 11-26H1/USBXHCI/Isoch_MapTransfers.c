/*
 * XREFs of Isoch_MapTransfers @ 0x1400101E0
 * Callers:
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x140010120 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140012B70 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x140015174 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_EvtDmaCallback @ 0x14001B370 (Isoch_EvtDmaCallback.c)
 *     Isoch_EP_StartMapping @ 0x140034B30 (Isoch_EP_StartMapping.c)
 *     Isoch_CommonBufferCallback @ 0x140038250 (Isoch_CommonBufferCallback.c)
 * Callees:
 *     Isoch_RetrieveNextStage @ 0x140010510 (Isoch_RetrieveNextStage.c)
 *     Isoch_PrepareStage @ 0x140011770 (Isoch_PrepareStage.c)
 *     Isoch_MapStage @ 0x14001AF10 (Isoch_MapStage.c)
 *     TR_AttemptStateChange @ 0x140020250 (TR_AttemptStateChange.c)
 *     ESM_AddEvent @ 0x140020E80 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Isoch_MapTransfers(__int64 a1, __int64 a2)
{
  char v2; // si
  void *v4; // r8
  char i; // di
  int v6; // eax
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edx
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v2 = 0;
  while ( 2 )
  {
    v4 = &WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      LOBYTE(v11) = 5;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v11,
        14,
        68,
        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        v2);
      v4 = &WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids;
    }
    for ( i = 0; ; ++i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
        LOBYTE(v10) = 5;
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v10,
          14,
          67,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
          i);
      }
      *(_QWORD *)(a1 + 352) = 0LL;
      if ( !(unsigned __int8)Isoch_RetrieveNextStage(a1, a2, v4) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 2, 3) != 3
          && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 0, 1) == 1 )
        {
          a2 = *(_QWORD *)(a1 + 56);
          if ( !*(_BYTE *)(a2 + 37) )
            goto LABEL_26;
          v9 = *(_QWORD *)(a2 + 144);
          if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 20)) == *(_DWORD *)(v9 + 8) )
            goto LABEL_26;
        }
        goto LABEL_15;
      }
      v6 = Isoch_PrepareStage(a1);
      if ( v6 != 1 )
        break;
LABEL_21:
      v4 = &WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids;
    }
    switch ( v6 )
    {
      case 3:
        goto LABEL_15;
      case 2:
        goto LABEL_27;
      case 4:
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 2, 3) != 3
          && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 0, 1) == 1 )
        {
          a2 = *(_QWORD *)(a1 + 56);
          if ( !*(_BYTE *)(a2 + 37)
            || (v12 = *(_QWORD *)(a2 + 144),
                _InterlockedIncrement((volatile signed __int32 *)(v12 + 20)) == *(_DWORD *)(v12 + 8)) )
          {
LABEL_26:
            ESM_AddEvent((PVOID)(a2 + 304));
            goto LABEL_15;
          }
        }
        goto LABEL_15;
    }
    v8 = Isoch_MapStage(a1);
    if ( v8 == 2 )
      goto LABEL_15;
    if ( v8 != 4 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 3, 3) != 3 )
        goto LABEL_39;
      goto LABEL_21;
    }
LABEL_27:
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 4, 3) == 3 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 328),
        -100000000LL);
    }
    else
    {
LABEL_39:
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 0, 1) == 1 )
      {
        a2 = *(_QWORD *)(a1 + 56);
        if ( !*(_BYTE *)(a2 + 37) )
          goto LABEL_26;
        v13 = *(_QWORD *)(a2 + 144);
        if ( _InterlockedIncrement((volatile signed __int32 *)(v13 + 20)) == *(_DWORD *)(v13 + 8) )
          goto LABEL_26;
      }
    }
LABEL_15:
    result = *(unsigned int *)(a1 + 108);
    if ( (_DWORD)result == 2 )
    {
      if ( *(_DWORD *)(a1 + 352) )
      {
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 3, 2);
        if ( (_DWORD)result == 2 )
          goto LABEL_34;
      }
    }
    else if ( (_DWORD)result == 4 )
    {
      if ( *(_DWORD *)(a1 + 356) )
      {
        result = TR_AttemptStateChange(a1, 4LL, 3LL);
        if ( (_DWORD)result == 4 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 328),
            0LL);
LABEL_34:
          ++v2;
          continue;
        }
      }
    }
    return result;
  }
}

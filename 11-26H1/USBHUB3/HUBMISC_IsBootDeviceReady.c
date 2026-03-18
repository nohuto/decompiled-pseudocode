/*
 * XREFs of HUBMISC_IsBootDeviceReady @ 0x140030A48
 * Callers:
 *     HUBBOOT_IsBootDeviceReady @ 0x140041850 (HUBBOOT_IsBootDeviceReady.c)
 * Callees:
 *     HUBHTX_GetPortStatusForBootDevice @ 0x140004DF4 (HUBHTX_GetPortStatusForBootDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice @ 0x1400313B0 (HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice.c)
 */

char __fastcall HUBMISC_IsBootDeviceReady(__int64 a1)
{
  __int64 v1; // rax
  char v2; // bl
  int v4; // edx
  volatile __int32 *v5; // r14
  int v6; // edx
  int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // rcx
  int v10; // r9d
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v12 = 0;
  v4 = *(_DWORD *)(v1 + 2368);
  if ( (v4 & 0x10) != 0 )
  {
    v2 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        v4,
        5,
        101,
        (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
    }
    goto LABEL_26;
  }
  v5 = (volatile __int32 *)(a1 + 2248);
  *(_DWORD *)(a1 + 2248) = 0;
  if ( (int)HUBHTX_GetPortStatusForBootDevice(a1, &v12) >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 1644) & 0x400) != 0 && (v12 & 0x10000) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v7 = 103;
      goto LABEL_29;
    }
    v8 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v8 + 1424) == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v9 = *(_QWORD *)(v8 + 1432);
      v7 = 104;
      goto LABEL_30;
    }
    if ( (v12 & 1) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 105;
LABEL_24:
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(v8 + 1432), v6, 5, v10, (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
      }
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 1464) & 0x800) == 0 || (v12 & 0x1E0) != 0xC0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v8 + 1336), 0xFFFFFFF7);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v7 = 108;
        goto LABEL_29;
      }
      if ( (*(_DWORD *)(v8 + 1336) & 8) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(v8 + 1336), 8u);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v7 = 106;
        goto LABEL_29;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 107;
        goto LABEL_24;
      }
    }
    v2 = 1;
LABEL_26:
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 1336LL), 0xFFFFFFF7);
    HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice(a1);
    return v2;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_31;
  v7 = 102;
LABEL_29:
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
LABEL_30:
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_(v9, v6, 5, v7, (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
LABEL_31:
  if ( _InterlockedExchange(v5, 1) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        v6,
        5,
        109,
        (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
    }
    return 1;
  }
  return v2;
}

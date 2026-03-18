/*
 * XREFs of HUBPDO_CompleteClientSerialRequestWithLastStatus @ 0x140014D18
 * Callers:
 *     HUBDSM_CompletingClientRequestOnFailureInConfigured @ 0x1400212B0 (HUBDSM_CompletingClientRequestOnFailureInConfigured.c)
 *     HUBDSM_CompletingClientUnconfigureRequestWithFailure @ 0x140021340 (HUBDSM_CompletingClientUnconfigureRequestWithFailure.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F6F4 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_CompleteClientSerialRequestWithLastStatus(__int64 a1)
{
  __int64 v1; // r14
  int v2; // ebp
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  unsigned __int16 *v6; // rsi
  unsigned __int16 v7; // ax
  __int64 v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+50h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 464);
  v2 = *(_DWORD *)(a1 + 1568);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  LOWORD(v11) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    &v11);
  if ( DWORD2(v12) == 2228227 )
  {
    v5 = (_QWORD *)*((_QWORD *)&v11 + 1);
    v4 = *(unsigned int *)(a1 + 1572);
    *(_DWORD *)(*((_QWORD *)&v11 + 1) + 4LL) = v4;
    v6 = (unsigned __int16 *)v5 + 1;
    if ( (byte_140070D49 & 4) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        v4,
        &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
        (const GUID *)(a1 + 1524),
        *(_QWORD *)(a1 + 24),
        *v6,
        v4);
    if ( *v6 == 1 || *v6 == 59 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x10u);
    v7 = *v6;
    if ( *v6 )
    {
      if ( v7 == 1 )
      {
        v5[5] = -1LL;
      }
      else if ( v7 == 59 )
      {
        v5[7] = -1LL;
      }
    }
    else
    {
      v5[4] = 0LL;
    }
  }
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 1568) = 0LL;
  if ( (byte_140070D49 & 4) != 0 )
  {
    LODWORD(v10) = v2;
    LODWORD(v9) = DWORD2(v12);
    McTemplateK0pqq_EtwWriteTransfer(
      v4,
      &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
      (const GUID *)(a1 + 1524),
      *(_QWORD *)(a1 + 24),
      v9,
      v10);
  }
  if ( (*(_DWORD *)(a1 + 1644) & 0x40) != 0 )
  {
    *(_OWORD *)(a1 + 1524) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFFFFBF);
  }
  if ( v2 >= 0 )
    v2 = -1073741823;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v1,
           (unsigned int)v2);
}

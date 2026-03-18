/*
 * XREFs of UsbDevice_EnableCompletion @ 0x140025600
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     Endpoint_Disable @ 0x14001DD5C (Endpoint_Disable.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     Controller_ReportFatalErrorEx @ 0x140021FAC (Controller_ReportFatalErrorEx.c)
 *     WPP_RECORDER_SF_dq @ 0x14002510C (WPP_RECORDER_SF_dq.c)
 *     Endpoint_SetLogIdentifier @ 0x140025A48 (Endpoint_SetLogIdentifier.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x140025ADC (XilDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_SetAddress @ 0x140025BE0 (UsbDevice_SetAddress.c)
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall UsbDevice_EnableCompletion(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v3; // rbx
  __int64 *v6; // r10
  __int64 v7; // r15
  __int64 v8; // rdi
  char v9; // al
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rdi
  char v16; // si
  __int64 v17; // rdx
  __int64 v18; // rbp
  unsigned int v19; // eax
  __int16 v20; // ax
  __int64 v21; // [rsp+28h] [rbp-80h]
  __int64 v22; // [rsp+30h] [rbp-78h]
  _OWORD v23[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v24; // [rsp+60h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 48);
  v6 = *(__int64 **)(v3 + 8);
  v7 = v6[11];
  v8 = v6[17];
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(v6[9], a2, 12, 15, (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids, *(_QWORD *)v3);
    }
    v16 = 1;
    LODWORD(v11) = *(_BYTE *)(v3 + 440) == 0 ? 0xC0000001 : 0;
    goto LABEL_13;
  }
  v9 = *(_BYTE *)(a1 + 60);
  if ( v9 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_D(v6[9], a2, 12, 19, (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids, v9);
    }
    if ( *(_BYTE *)(a1 + 60) != 9 )
      goto LABEL_34;
    memset(v23, 0, sizeof(v23));
    v24 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount > 0x33 )
      {
        LOWORD(v23[0]) = *(_WORD *)(WdfStructures + 408);
LABEL_33:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _OWORD *))(WdfFunctions_01033 + 2128))(
          WdfDriverGlobals,
          *(_QWORD *)(v3 + 432),
          v23);
        *(_DWORD *)(*((_QWORD *)&v23[0] + 1) + 32LL) |= 2u;
LABEL_34:
        if ( *(_BYTE *)(v3 + 440) )
        {
          Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4118, 0, 0LL, 0LL, 0LL);
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
        LODWORD(v11) = -1073741823;
        goto LABEL_13;
      }
      v20 = -1;
    }
    else
    {
      v20 = 40;
    }
    LOWORD(v23[0]) = v20;
    goto LABEL_33;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(
      v6[9],
      4u,
      0xCu,
      0x10u,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *(unsigned __int8 *)(a1 + 61),
      *(_QWORD *)v3);
  *(_BYTE *)(v3 + 142) = 1;
  *(_BYTE *)(v3 + 143) = *(_BYTE *)(a1 + 61);
  Endpoint_SetLogIdentifier(*(_QWORD *)(v3 + 184));
  v10 = XilDeviceSlot_SetDeviceContext(v8, v3, *(unsigned __int8 *)(v3 + 143));
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = *(_QWORD *)(v7 + 48);
    if ( v12 )
      v13 = v12 + 4LL * *(unsigned __int8 *)(v3 + 143);
    else
      v13 = 0LL;
    *(_QWORD *)(v3 + 168) = v13;
    LOBYTE(v13) = 1;
    result = UsbDevice_SetAddress(v3, v13);
    v15 = (int)result;
    if ( (int)result < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = result;
        LODWORD(v21) = *(unsigned __int8 *)(v3 + 143);
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          2u,
          0xCu,
          0x12u,
          (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
          v21,
          v22);
      }
      v18 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 144LL);
      memset((void *)(v3 + 464), 0, 0x60uLL);
      if ( *(_BYTE *)(v3 + 440) )
      {
        return Controller_ReportFatalErrorEx(*(_QWORD *)(v3 + 8), 2u, 4117, 0LL, v15, 0LL, 0LL, 0LL);
      }
      else
      {
        *(_QWORD *)(v3 + 512) = v3;
        *(_QWORD *)(v3 + 504) = UsbDevice_DisableCompletionReturnFailure;
        v19 = *(_DWORD *)(v3 + 500) & 0xFFFF2BFF;
        *(_QWORD *)(v3 + 536) = 0LL;
        *(_QWORD *)(v3 + 544) = 0LL;
        *(_DWORD *)(v3 + 500) = v19 | 0x2800;
        *(_BYTE *)(v3 + 503) = *(_BYTE *)(v3 + 143);
        *(_QWORD *)(v3 + 552) = 0LL;
        return Command_SendCommand(v18, v3 + 464);
      }
    }
    return result;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v22) = v10;
    LODWORD(v21) = *(unsigned __int8 *)(v3 + 143);
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xCu,
      0x11u,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      v21,
      v22);
  }
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD *)(v3 + 8),
    *(_QWORD *)v3,
    0,
    0x20000LL,
    "Enable Slot command returned a SlotId value that is already in use",
    (__int128 *)(a1 + 24),
    a3);
  Controller_ReportFatalErrorEx(*(_QWORD *)(v3 + 8), 2u, 4116, 0LL, v11, 0LL, 0LL, 0LL);
  v16 = 1;
LABEL_13:
  LOBYTE(a2) = 1;
  result = Endpoint_Disable(*(_QWORD *)(v3 + 184), a2);
  if ( v16 )
  {
    v17 = *(_QWORD *)(v3 + 432);
    *(_QWORD *)(v3 + 432) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             v17,
             (unsigned int)v11);
  }
  return result;
}

/*
 * XREFs of UsbDevice_SetAddressCompletion @ 0x140026300
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     UsbDevice_SetDeviceDisabled @ 0x14001DBB4 (UsbDevice_SetDeviceDisabled.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1400242C4 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     WPP_RECORDER_SF_dq @ 0x14002510C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqD @ 0x1400266F4 (WPP_RECORDER_SF_dqD.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x140039014 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     WPP_RECORDER_SF_dqdL @ 0x14004F190 (WPP_RECORDER_SF_dqdL.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

char __fastcall UsbDevice_SetAddressCompletion(__int64 a1, __int64 a2, __int128 *a3, int a4)
{
  __int64 v4; // rdi
  __int16 v7; // ax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned int v20; // eax
  int v21; // [rsp+50h] [rbp-58h] BYREF
  _OWORD v22[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v23; // [rsp+78h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 48);
  v21 = 0;
  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        4u,
        0xCu,
        0x18u,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        *(unsigned __int8 *)(v4 + 143),
        *(_QWORD *)v4);
    if ( (*(_DWORD *)(v4 + 500) & 0x200) == 0 )
    {
      v15 = *(_BYTE *)(v4 + 440) == 0 ? 0xC0000001 : 0;
      goto LABEL_14;
    }
    return UsbDevice_SetDeviceDisabled(v4, a2);
  }
  else
  {
    if ( *(_BYTE *)(a1 + 60) == 1 )
    {
      if ( (*(_DWORD *)(v4 + 500) & 0x200) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dq(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            4u,
            0xCu,
            0x1Au,
            (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
            *(unsigned __int8 *)(a1 + 61),
            *(_QWORD *)v4);
        goto LABEL_13;
      }
      if ( WdfClientVersionHigherThanFramework )
      {
        if ( (unsigned int)WdfStructureCount > 0x33 )
        {
          LOWORD(v22[0]) = *(_WORD *)(WdfStructures + 408);
LABEL_7:
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _OWORD *))(WdfFunctions_01033 + 2128))(
            WdfDriverGlobals,
            *(_QWORD *)(v4 + 432),
            v22);
          v8 = *((_QWORD *)&v22[0] + 1);
          v9 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 136LL);
          v10 = *(_QWORD *)(v9 + 88);
          v11 = v9 + 16;
          v12 = *(_QWORD *)(v10 + 8);
          if ( *(_BYTE *)(v11 + 64)
            && (*(_BYTE *)(v4 + 664) && *(_DWORD *)(v12 + 1008) == 2 || *(_DWORD *)(v12 + 1008) == 1) )
          {
            XilDeviceSlot_SendQuerySlotContextInfoRequest(v11, v4, &v21, 0LL);
            v14 = v21;
          }
          else
          {
            v13 = v4 + 624;
            if ( !*(_BYTE *)(v4 + 665) )
              v13 = v4 + 616;
            v14 = (unsigned __int8)*(_DWORD *)(XilCoreUsbDevice_GetDeviceContextBufferVA(v13) + 12);
          }
          *(_DWORD *)(v8 + 28) = v14;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), v14, 25);
LABEL_13:
          v15 = 0LL;
LABEL_14:
          v16 = *(_QWORD *)(v4 + 432);
          *(_QWORD *)(v4 + 432) = 0LL;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
                   WdfDriverGlobals,
                   v16,
                   v15);
        }
        v7 = -1;
      }
      else
      {
        v7 = 40;
      }
      LOWORD(v22[0]) = v7;
      goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqdL(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        *(unsigned __int8 *)(v4 + 143),
        (*(_DWORD *)(v4 + 500) >> 9) & 1,
        a4);
    if ( (*(_DWORD *)(v4 + 500) & 0x200) == 0 )
    {
      v15 = 3221225473LL;
      goto LABEL_14;
    }
    v18 = *(_QWORD *)(v4 + 8);
    v19 = *(_QWORD *)(v18 + 144);
    if ( *(_BYTE *)(v4 + 440) )
    {
      Controller_HwVerifierBreakIfEnabled(
        v18,
        *(_QWORD *)v4,
        0,
        0x40000LL,
        "Set Address Command with BSR=1 failed",
        (__int128 *)(a1 + 24),
        a3);
      return Controller_ReportFatalError(*(_QWORD *)(v4 + 8), 2, 4117, 0, 0LL, 0LL, 0LL);
    }
    else
    {
      memset((void *)(v4 + 464), 0, 0x60uLL);
      *(_QWORD *)(v4 + 512) = v4;
      *(_QWORD *)(v4 + 504) = UsbDevice_DisableCompletionReturnFailure;
      v20 = *(_DWORD *)(v4 + 500) & 0xFFFF2BFF;
      *(_QWORD *)(v4 + 536) = 0LL;
      *(_QWORD *)(v4 + 544) = 0LL;
      *(_DWORD *)(v4 + 500) = v20 | 0x2800;
      *(_BYTE *)(v4 + 503) = *(_BYTE *)(v4 + 143);
      *(_QWORD *)(v4 + 552) = 0LL;
      return Command_SendCommand(v19, v4 + 464);
    }
  }
}

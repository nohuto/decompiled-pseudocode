/*
 * XREFs of UsbDevice_UcxEvtReset @ 0x1400244A0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     Endpoint_Disable @ 0x14001DD5C (Endpoint_Disable.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1400242C4 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     WPP_RECORDER_SF_dqL @ 0x1400247EC (WPP_RECORDER_SF_dqL.c)
 *     WPP_RECORDER_SF_dq @ 0x14002510C (WPP_RECORDER_SF_dq.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x140039014 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_UcxEvtReset(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // esi
  int v12; // r8d
  int v13; // edx
  int v14; // edx
  int v15; // r9d
  __int64 v16; // rax
  __int64 *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // r8
  unsigned int v23; // ecx
  char v24; // dl
  __int64 (__fastcall *v25)(); // rax
  char v26; // [rsp+28h] [rbp-70h]
  unsigned int v27; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v28[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v29; // [rsp+68h] [rbp-30h]

  v27 = 0;
  v29 = 0LL;
  memset(v28, 0, sizeof(v28));
  if ( !WdfClientVersionHigherThanFramework )
  {
    v3 = 40;
LABEL_3:
    LOWORD(v28[0]) = v3;
    goto LABEL_4;
  }
  if ( (unsigned int)WdfStructureCount <= 0x33 )
  {
    v3 = -1;
    goto LABEL_3;
  }
  LOWORD(v28[0]) = *(_WORD *)(WdfStructures + 408);
LABEL_4:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v28);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v28[0] + 1) + 16LL),
         off_14006B128);
  v5 = v4;
  v6 = *(_QWORD **)(v4 + 8);
  v7 = v6[18];
  if ( !*(_BYTE *)(v4 + 142) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = *(unsigned __int8 *)(v4 + 143);
      v15 = 80;
      v16 = *(_QWORD *)v4;
      goto LABEL_16;
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  v8 = v6[17] + 16LL;
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 72) + 8LL);
  if ( *(_BYTE *)(v8 + 64) && (*(_BYTE *)(v5 + 664) && *(_DWORD *)(v9 + 1008) == 2 || *(_DWORD *)(v9 + 1008) == 1) )
  {
    XilDeviceSlot_SendQuerySlotContextInfoRequest(v8, v5, 0LL, &v27);
    v11 = v27;
  }
  else
  {
    v10 = v5 + 624;
    if ( !*(_BYTE *)(v5 + 665) )
      v10 = v5 + 616;
    v11 = *(_DWORD *)(XilCoreUsbDevice_GetDeviceContextBufferVA(v10) + 12) >> 27;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(unsigned __int8 *)(v5 + 143);
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL), v13, v12, 81);
  }
  if ( v11 < 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = *(unsigned __int8 *)(v5 + 143);
      v15 = 82;
      v6 = *(_QWORD **)(v5 + 8);
      v16 = *(_QWORD *)v5;
LABEL_16:
      v26 = v14;
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_dq(v6[9], v14, 12, v15, (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids, v26, v16);
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
               WdfDriverGlobals,
               a2,
               0LL);
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v5 + 8)) )
  {
    v18 = (__int64 *)(v5 + 192);
    v19 = 30LL;
    do
    {
      if ( *v18 )
        Endpoint_Disable(*v18, 0LL);
      ++v18;
      --v19;
    }
    while ( v19 );
    *(_DWORD *)(v5 + 160) = 3;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  v20 = *(_QWORD *)(v5 + 8);
  v21 = *(_DWORD *)(v5 + 500);
  *(_QWORD *)(v5 + 432) = a2;
  *(_BYTE *)(v5 + 440) = 1;
  v22 = (*(_QWORD *)(v20 + 736) >> 15) & 1LL;
  if ( ((*(_QWORD *)(v20 + 736) >> 15) & 1) != 0 )
    v23 = v21 & 0xFFFF03FF | 0x2800;
  else
    v23 = v21 & 0xFFFF03FF | 0x4400;
  v24 = *(_BYTE *)(v5 + 143);
  v25 = UsbDevice_OnResetDisableCompletion;
  if ( !v22 )
    v25 = UsbDevice_DeviceResetCompletion;
  *(_QWORD *)(v5 + 504) = v25;
  *(_QWORD *)(v5 + 512) = v5;
  *(_DWORD *)(v5 + 500) = v23;
  *(_BYTE *)(v5 + 503) = v24;
  *(_QWORD *)(v5 + 536) = 0LL;
  *(_QWORD *)(v5 + 544) = 0LL;
  *(_QWORD *)(v5 + 552) = 0LL;
  return Command_SendCommand(v7, v5 + 464);
}

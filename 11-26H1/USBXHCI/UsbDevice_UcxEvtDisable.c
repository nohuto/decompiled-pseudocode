/*
 * XREFs of UsbDevice_UcxEvtDisable @ 0x14001C480
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     UsbDevice_SetDeviceDisabled @ 0x14001DBB4 (UsbDevice_SetDeviceDisabled.c)
 *     Endpoint_Disable @ 0x14001DD5C (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dq @ 0x14002510C (WPP_RECORDER_SF_dq.c)
 *     RootHub_ClearPortResumeTime @ 0x14004A180 (RootHub_ClearPortResumeTime.c)
 *     RootHub_DisableLPMForSlot @ 0x14004A1D8 (RootHub_DisableLPMForSlot.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall UsbDevice_UcxEvtDisable(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rdi
  __int64 v7; // r10
  __int64 v8; // rbp
  char *v9; // rbx
  unsigned int v10; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  _OWORD v15[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+60h] [rbp-28h]

  memset(v15, 0, sizeof(v15));
  v16 = 0LL;
  if ( !WdfClientVersionHigherThanFramework )
  {
    v3 = 40;
LABEL_3:
    LOWORD(v15[0]) = v3;
    goto LABEL_4;
  }
  if ( (unsigned int)WdfStructureCount <= 0x33 )
  {
    v3 = -1;
    goto LABEL_3;
  }
  LOWORD(v15[0]) = *(_WORD *)(WdfStructures + 408);
LABEL_4:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v15);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(*((_QWORD *)&v15[0] + 1) + 16LL),
                   off_14006B128);
  v6 = v4;
  v7 = v4[1];
  v8 = *(_QWORD *)(v7 + 144);
  v9 = (char *)v4 + 143;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v7 + 72),
      v5,
      12,
      74,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *v9,
      *v4);
  }
  if ( *((_BYTE *)v6 + 142) )
  {
    if ( *((_BYTE *)v6 + 576) )
      RootHub_DisableLPMForSlot(*(_QWORD *)(v6[1] + 152LL), *((unsigned int *)v6 + 11), (unsigned __int8)*v9);
    if ( *((_BYTE *)v6 + 577) )
      RootHub_ClearPortResumeTime(*(_QWORD *)(v6[1] + 152LL), *((unsigned int *)v6 + 11));
    if ( Controller_IsControllerAccessible(v6[1]) )
    {
      v6[54] = a2;
      *((_BYTE *)v6 + 440) = 1;
      memset(v6 + 58, 0, 0x60uLL);
      v6[64] = v6;
      v6[63] = UsbDevice_DisableCompletionReturnSuccess;
      v10 = *((_DWORD *)v6 + 125) & 0xFFFF2BFF;
      v6[67] = 0LL;
      v6[68] = 0LL;
      *((_DWORD *)v6 + 125) = v10 | 0x2800;
      *((_BYTE *)v6 + 503) = *((_BYTE *)v6 + 143);
      v6[69] = 0LL;
      return Command_SendCommand(v8, (__int64)(v6 + 58));
    }
    UsbDevice_SetDeviceDisabled(v6);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(v6[1] + 72LL),
        v5,
        12,
        75,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        *v9,
        *v6);
    }
    LOBYTE(v5) = 1;
    Endpoint_Disable(v6[23], v5);
    v13 = v6 + 24;
    v14 = 30LL;
    do
    {
      if ( *v13 )
      {
        LOBYTE(v12) = 1;
        Endpoint_Disable(*v13, v12);
        *v13 = 0LL;
      }
      ++v13;
      --v14;
    }
    while ( v14 );
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           0LL);
}

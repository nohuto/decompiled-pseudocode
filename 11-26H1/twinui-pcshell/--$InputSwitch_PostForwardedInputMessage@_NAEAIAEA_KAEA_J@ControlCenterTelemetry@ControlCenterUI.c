/*
 * XREFs of ??$InputSwitch_PostForwardedInputMessage@_NAEAIAEA_KAEA_J@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_NAEAIAEA_KAEA_J@Z @ 0x18036A1AC
 * Callers:
 *     ?ForwardWindowMessage@CControlCenterExperienceManager@@UEAAJI_K_JPEAH@Z @ 0x18036C1F0 (-ForwardWindowMessage@CControlCenterExperienceManager@@UEAAJI_K_JPEAH@Z.c)
 * Callees:
 *     ?Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180019994 (-Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::InputSwitch_PostForwardedInputMessage<bool,unsigned int &,unsigned __int64 &,__int64 &>(
        char *a1,
        int *a2,
        int *a3,
        int *a4)
{
  const struct _tlgProvider_t *v8; // rax
  int v9; // r9d
  int v10; // r8d
  int v11; // edx
  char v13; // [rsp+38h] [rbp-29h] BYREF
  int v14; // [rsp+3Ch] [rbp-25h] BYREF
  int v15; // [rsp+40h] [rbp-21h] BYREF
  int v16; // [rsp+44h] [rbp-1Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+48h] [rbp-19h] BYREF
  char *v18; // [rsp+68h] [rbp+7h]
  __int64 v19; // [rsp+70h] [rbp+Fh]
  int *v20; // [rsp+78h] [rbp+17h]
  __int64 v21; // [rsp+80h] [rbp+1Fh]
  int *v22; // [rsp+88h] [rbp+27h]
  __int64 v23; // [rsp+90h] [rbp+2Fh]
  int *v24; // [rsp+98h] [rbp+37h]
  __int64 v25; // [rsp+A0h] [rbp+3Fh]

  v8 = ControlCenterLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v8 > 5u )
  {
    v9 = *a4;
    v10 = *a3;
    v11 = *a2;
    v13 = *a1;
    v24 = &v14;
    v22 = &v15;
    v20 = &v16;
    v18 = &v13;
    v14 = v9;
    v15 = v10;
    v16 = v11;
    v25 = 4LL;
    v23 = 4LL;
    v21 = 4LL;
    v19 = 1LL;
    LODWORD(v8) = tlgWriteTransfer_EventWriteTransfer((__int64)v8, byte_1807EDCB0, 0LL, 0LL, 6u, &v17);
  }
  return (int)v8;
}

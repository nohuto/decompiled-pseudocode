/*
 * XREFs of ?QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z @ 0x14008EA20
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x14008F734 (-SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z.c)
 * Callees:
 *     DxgkQueryConnectionChanges @ 0x140015450 (DxgkQueryConnectionChanges.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140049164 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall QueryConnectionChanges(
        struct _DEVICE_OBJECT *a1,
        struct _LUID a2,
        struct _GUID *a3,
        struct _GUID *a4)
{
  struct _GUID *v8; // r9
  DWORD ConnectionChanges; // edi
  struct _LUID v11; // [rsp+30h] [rbp-59h] BYREF
  struct _LUID v12; // [rsp+38h] [rbp-51h] BYREF
  __int64 v13; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-19h]
  __int64 v16; // [rsp+78h] [rbp-11h]
  struct _GUID *v17; // [rsp+80h] [rbp-9h]
  __int64 v18; // [rsp+88h] [rbp-1h]
  struct _LUID *v19; // [rsp+90h] [rbp+7h]
  __int64 v20; // [rsp+98h] [rbp+Fh]
  struct _LUID *v21; // [rsp+A0h] [rbp+17h]
  __int64 v22; // [rsp+A8h] [rbp+1Fh]

  if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 512LL) )
  {
    v17 = v8;
    v19 = &v11;
    v11 = a2;
    v15 = (__int64 *)&v12;
    v12 = (struct _LUID)2048LL;
    v20 = 8LL;
    v18 = 16LL;
    v16 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1401665B8, byte_1401444C9, a3, 0LL, 5u, v14);
  }
  ConnectionChanges = DxgkQueryConnectionChanges((__int64)a1, 0, 0, 0, 1, 0);
  if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 512LL) )
  {
    v11.LowPart = ConnectionChanges;
    v21 = &v11;
    v12 = a2;
    v19 = &v12;
    v13 = 2048LL;
    v15 = &v13;
    v22 = 4LL;
    v20 = 8LL;
    v17 = a4;
    v18 = 16LL;
    v16 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1401665B8, byte_14014452C, a3, 0LL, 6u, v14);
  }
  return ConnectionChanges;
}

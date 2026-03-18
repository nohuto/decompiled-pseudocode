/*
 * XREFs of ?MuxDeviceDeviceChangeNotification@DISPLAY_MUX_DEVICE@@CAJPEAX0@Z @ 0x14008D560
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140049164 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ?CleanupMuxStackRefs@DISPLAY_MUX_DEVICE@@AEAAXXZ @ 0x14008B444 (-CleanupMuxStackRefs@DISPLAY_MUX_DEVICE@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DISPLAY_MUX_DEVICE::MuxDeviceDeviceChangeNotification(
        char *NotificationStructure,
        DISPLAY_MUX_DEVICE *Context)
{
  _QWORD *v2; // rbx
  unsigned int v3; // esi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  DISPLAY_MUX_DEVICE *v9; // [rsp+38h] [rbp-19h] BYREF
  __int64 v10; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+17h]
  __int64 v13; // [rsp+70h] [rbp+1Fh]
  DISPLAY_MUX_DEVICE **v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh]
  _QWORD *v16; // [rsp+88h] [rbp+37h]
  __int64 v17; // [rsp+90h] [rbp+3Fh]

  v2 = NotificationStructure + 4;
  v3 = 0;
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v5 )
  {
LABEL_11:
    DISPLAY_MUX_DEVICE::CleanupMuxStackRefs(Context);
    goto LABEL_13;
  }
  v6 = *v2 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( *v2 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( v6 )
  {
    v7 = *v2 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
    if ( *v2 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 )
      v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
    if ( v7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1431;
      v3 = -1073741811;
      goto LABEL_13;
    }
    goto LABEL_11;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 1421;
LABEL_13:
  if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 512LL) )
  {
    v9 = Context;
    v14 = &v9;
    v10 = 2048LL;
    v12 = &v10;
    v16 = v2;
    v17 = 16LL;
    v15 = 8LL;
    v13 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1401665B8, byte_140144F71, 0LL, 0LL, 5u, &v11);
  }
  return v3;
}

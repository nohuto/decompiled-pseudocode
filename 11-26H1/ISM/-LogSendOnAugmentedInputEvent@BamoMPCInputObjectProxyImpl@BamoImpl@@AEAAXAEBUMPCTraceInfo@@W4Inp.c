/*
 * XREFs of ?LogSendOnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@AEAAXAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@56789@_JAEBUHitObjectMsg@56789@@Z @ 0x18011DBC4
 * Callers:
 *     ?OnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@56789@_JAEBUHitObjectMsg@56789@@Z @ 0x180075ED4 (-OnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4InputEvent.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::LogSendOnAugmentedInputEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // r10
  int *v8; // r11
  __int64 v9; // rax
  int v10; // ecx
  int v11; // [rsp+30h] [rbp-59h] BYREF
  int v12; // [rsp+34h] [rbp-55h] BYREF
  int v13; // [rsp+38h] [rbp-51h] BYREF
  int v14; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v15; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-39h] BYREF
  int *v17; // [rsp+70h] [rbp-19h]
  __int64 v18; // [rsp+78h] [rbp-11h]
  int *v19; // [rsp+80h] [rbp-9h]
  __int64 v20; // [rsp+88h] [rbp-1h]
  int *v21; // [rsp+90h] [rbp+7h]
  __int64 v22; // [rsp+98h] [rbp+Fh]
  int *v23; // [rsp+A0h] [rbp+17h]
  __int64 v24; // [rsp+A8h] [rbp+1Fh]
  __int64 *v25; // [rsp+B0h] [rbp+27h]
  __int64 v26; // [rsp+B8h] [rbp+2Fh]

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v15 = a5;
    v12 = *v8;
    v9 = *(_QWORD *)(v6 + 16);
    v11 = v5;
    v26 = 8LL;
    v24 = 4LL;
    v10 = *(_DWORD *)(v9 + 36);
    v14 = *(_DWORD *)(v6 + 24);
    v25 = &v15;
    v23 = &v11;
    v21 = &v12;
    v19 = &v13;
    v17 = &v14;
    v13 = v10;
    v22 = 4LL;
    v20 = 4LL;
    v18 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v7, byte_180218AA4, 0LL, 0LL, 7u, &v16);
  }
}

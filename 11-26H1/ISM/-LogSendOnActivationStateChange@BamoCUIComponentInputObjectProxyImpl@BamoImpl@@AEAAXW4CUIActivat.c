/*
 * XREFs of ?LogSendOnActivationStateChange@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@AEAAXW4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x180134D64
 * Callers:
 *     ?OnActivationStateChange@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@QEAAJW4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x180134FA0 (-OnActivationStateChange@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@QEAAJW4CUIActivationStat.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void BamoImpl::BamoCUIComponentInputObjectProxyImpl::LogSendOnActivationStateChange()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // r10
  int v3; // r11d
  __int64 v4; // rax
  int v5; // ecx
  int v6; // [rsp+30h] [rbp-39h] BYREF
  int v7; // [rsp+34h] [rbp-35h] BYREF
  int v8; // [rsp+38h] [rbp-31h] BYREF
  __int64 v9; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-19h] BYREF
  int *v11; // [rsp+70h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+Fh]
  int *v13; // [rsp+80h] [rbp+17h]
  __int64 v14; // [rsp+88h] [rbp+1Fh]
  int *v15; // [rsp+90h] [rbp+27h]
  __int64 v16; // [rsp+98h] [rbp+2Fh]
  __int64 *v17; // [rsp+A0h] [rbp+37h]
  __int64 v18; // [rsp+A8h] [rbp+3Fh]

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v4 = *(_QWORD *)(v1 + 16);
    v9 = v0;
    v6 = v3;
    v18 = 8LL;
    v5 = *(_DWORD *)(v4 + 36);
    v8 = *(_DWORD *)(v1 + 24);
    v17 = &v9;
    v15 = &v6;
    v13 = &v7;
    v11 = &v8;
    v7 = v5;
    v16 = 4LL;
    v14 = 4LL;
    v12 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v2, byte_18021FF48, 0LL, 0LL, 6u, &v10);
  }
}

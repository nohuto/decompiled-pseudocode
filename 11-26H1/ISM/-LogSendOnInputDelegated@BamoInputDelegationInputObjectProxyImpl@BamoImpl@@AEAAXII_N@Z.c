/*
 * XREFs of ?LogSendOnInputDelegated@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@AEAAXII_N@Z @ 0x18013623C
 * Callers:
 *     ?OnInputDelegated@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJII_N@Z @ 0x1801368CC (-OnInputDelegated@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJII_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall BamoImpl::BamoInputDelegationInputObjectProxyImpl::LogSendOnInputDelegated(
        BamoImpl::BamoInputDelegationInputObjectProxyImpl *this,
        int a2)
{
  __int64 v3; // rdx
  int v4; // r8d
  char v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rax
  int v9; // ecx
  char v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
  int v14; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-29h] BYREF
  int *v16; // [rsp+70h] [rbp-9h]
  __int64 v17; // [rsp+78h] [rbp-1h]
  int *v18; // [rsp+80h] [rbp+7h]
  __int64 v19; // [rsp+88h] [rbp+Fh]
  int *v20; // [rsp+90h] [rbp+17h]
  __int64 v21; // [rsp+98h] [rbp+1Fh]
  int *v22; // [rsp+A0h] [rbp+27h]
  __int64 v23; // [rsp+A8h] [rbp+2Fh]
  char *v24; // [rsp+B0h] [rbp+37h]
  __int64 v25; // [rsp+B8h] [rbp+3Fh]

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v8 = *(_QWORD *)(v7 + 16);
    v10 = v5;
    v11 = v4;
    v12 = a2;
    v9 = *(_DWORD *)(v8 + 36);
    v14 = *(_DWORD *)(v7 + 24);
    v24 = &v10;
    v22 = &v11;
    v20 = &v12;
    v18 = &v13;
    v16 = &v14;
    v13 = v9;
    v25 = v3;
    v23 = 4LL;
    v21 = 4LL;
    v19 = 4LL;
    v17 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v6, byte_180220128, 0LL, 0LL, 7u, &v15);
  }
}

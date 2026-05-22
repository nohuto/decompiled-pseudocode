/*
 * XREFs of ?LogSendOnGamepadInput@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@AEAAXG_N@Z @ 0x1801360EC
 * Callers:
 *     ?OnGamepadInput@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJG_N@Z @ 0x180136440 (-OnGamepadInput@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJG_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall BamoImpl::BamoInputDelegationInputObjectProxyImpl::LogSendOnGamepadInput(
        BamoImpl::BamoInputDelegationInputObjectProxyImpl *this)
{
  __int64 v1; // rdx
  char v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int16 v5; // r11
  __int64 v6; // rax
  int v7; // ecx
  char v8; // [rsp+30h] [rbp-29h] BYREF
  __int16 v9; // [rsp+32h] [rbp-27h] BYREF
  int v10; // [rsp+34h] [rbp-25h] BYREF
  int v11; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-19h] BYREF
  int *v13; // [rsp+60h] [rbp+7h]
  __int64 v14; // [rsp+68h] [rbp+Fh]
  int *v15; // [rsp+70h] [rbp+17h]
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  __int16 *v17; // [rsp+80h] [rbp+27h]
  __int64 v18; // [rsp+88h] [rbp+2Fh]
  char *v19; // [rsp+90h] [rbp+37h]
  __int64 v20; // [rsp+98h] [rbp+3Fh]

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v6 = *(_QWORD *)(v3 + 16);
    v8 = v2;
    v9 = v5;
    v20 = v1;
    v7 = *(_DWORD *)(v6 + 36);
    v11 = *(_DWORD *)(v3 + 24);
    v19 = &v8;
    v17 = &v9;
    v15 = &v10;
    v13 = &v11;
    v10 = v7;
    v18 = 2LL;
    v16 = 4LL;
    v14 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v4, byte_18022030B, 0LL, 0LL, 6u, &v12);
  }
}

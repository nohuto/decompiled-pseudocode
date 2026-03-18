/*
 * XREFs of ?VmBusSendHostMonitorPower@DXG_HOST_GLOBAL_VMBUS@@SAJPEAXU_LUID@@IE@Z @ 0x140084A20
 * Callers:
 *     _lambda_3e10a6c53a076eca3525754a494039ed_::operator() @ 0x140081630 (_lambda_3e10a6c53a076eca3525754a494039ed_--operator().c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140056D40 (-VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendHostMonitorPower(
        DXG_VMBUS_CHANNEL_BASE *a1,
        struct _LUID a2,
        int a3,
        char a4)
{
  int v4; // eax
  __int64 v5; // rdi
  unsigned __int8 v7[8]; // [rsp+50h] [rbp-30h] BYREF
  int v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+5Ch] [rbp-24h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  struct _LUID v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  BOOL v13; // [rsp+74h] [rbp-Ch]

  v9 = 2;
  v11 = a2;
  v12 = a3;
  v10 = 6LL;
  v13 = a4 != 0;
  *(_QWORD *)v7 = 0LL;
  v8 = 0;
  v4 = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(a1, v7, (struct DXGKVMB_COMMAND_BASE *)v7, 0x28u);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7196;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendAsyncMessage failed. 0x%I64x",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v5;
}

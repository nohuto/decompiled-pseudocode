/*
 * XREFs of ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x140084B04
 * Callers:
 *     ?VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXK@Z @ 0x140084C20 (-VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXK@Z.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1403C3748 (--1DXGDEVICE@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140056D40 (-VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSetGuestData(__int64 a1, char a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  DXG_VMBUS_CHANNEL_BASE *v5; // rcx
  __int64 v6; // rbx
  unsigned __int8 v7[16]; // [rsp+50h] [rbp+17h] BYREF
  __int64 v8; // [rsp+60h] [rbp+27h]
  __int64 v9; // [rsp+68h] [rbp+2Fh]
  __int128 v10; // [rsp+70h] [rbp+37h]

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    v5 = *(DXG_VMBUS_CHANNEL_BASE **)a1;
    v10 = 0LL;
    *(_OWORD *)v7 = 0LL;
    v7[12] = 2;
    *(_DWORD *)&v7[12] = *(_WORD *)&v7[12] & 0x1FF;
    v8 = 0LL;
    v9 = result;
    LODWORD(v10) = *a4;
    LODWORD(v8) = 2;
    DWORD2(v10) = a2 != 0;
    result = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(v5, v7, (struct DXGKVMB_COMMAND_BASE *)v7, 0x30u);
    if ( (int)result < 0 )
    {
      v6 = (int)result;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 7168;
      return DxgkLogInternalTriageEvent(
               0LL,
               0x40000,
               -1,
               (__int64)L"VmBusSendAsyncMessage failed. 0x%I64x",
               v6,
               0LL,
               0LL,
               0LL,
               0LL);
    }
  }
  return result;
}

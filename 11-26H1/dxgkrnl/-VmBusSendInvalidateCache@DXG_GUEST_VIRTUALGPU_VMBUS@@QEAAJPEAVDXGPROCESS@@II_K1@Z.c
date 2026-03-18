/*
 * XREFs of ?VmBusSendInvalidateCache@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@II_K1@Z @ 0x140230230
 * Callers:
 *     DxgkInvalidateCache @ 0x1401BBD70 (DxgkInvalidateCache.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendInvalidateCache(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  struct DXGKVMB_COMMAND_BASE *v10; // rbx
  int v11; // ebx
  struct DXGKVMB_COMMAND_BASE *v13[2]; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-138h]

  v14 = 0;
  *(_OWORD *)v13 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v13, this, 0x38u, 0LL, 0LL, 0LL);
  v10 = v13[0];
  if ( v13[0] )
  {
    *((_DWORD *)v10 + 2) = DXGPROCESS::GetHostProcess(a2);
    *((_QWORD *)v10 + 4) = a5;
    *((_BYTE *)v10 + 12) = 0;
    *((_DWORD *)v10 + 3) &= 0x1FFu;
    *((_QWORD *)v10 + 5) = a6;
    *(_QWORD *)v10 = 0LL;
    *((_QWORD *)v10 + 2) = 67LL;
    *((_DWORD *)v10 + 6) = a3;
    *((_DWORD *)v10 + 7) = a4;
    *((_QWORD *)v10 + 6) = 0LL;
    v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v13[1], v13[0], v14);
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 13479;
    }
  }
  else
  {
    v11 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v13);
  return (unsigned int)v11;
}

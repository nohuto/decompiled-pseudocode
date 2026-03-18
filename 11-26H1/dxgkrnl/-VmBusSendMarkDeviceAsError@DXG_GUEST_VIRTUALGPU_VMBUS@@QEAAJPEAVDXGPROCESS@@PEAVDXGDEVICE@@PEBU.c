/*
 * XREFs of ?VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x1402BEF68
 * Callers:
 *     ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1401C383C (-Reset@DXGDEVICE@@QEAAXE@Z.c)
 *     DxgkMarkDeviceAsError @ 0x1403A3140 (DxgkMarkDeviceAsError.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMarkDeviceAsError(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        const struct _D3DKMT_MARKDEVICEASERROR *a4)
{
  struct _D3DKMT_MARKDEVICEASERROR *v8; // rbx
  D3DKMT_HANDLE HostProcess; // eax
  int v10; // eax
  __int64 v11; // rdi
  PVOID P[2]; // [rsp+50h] [rbp-148h] BYREF
  unsigned int v14; // [rsp+60h] [rbp-138h]
  _BYTE v15[268]; // [rsp+64h] [rbp-134h] BYREF

  v14 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x20u, 0LL, 0LL, 0LL);
  v8 = (struct _D3DKMT_MARKDEVICEASERROR *)P[0];
  if ( P[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    LOBYTE(v8[1].Reason) = 0;
    v8[1].Reason &= 0x1FFu;
    v8[1].hDevice = HostProcess;
    *v8 = 0LL;
    v8[2] = (struct _D3DKMT_MARKDEVICEASERROR)29LL;
    v8[3] = *a4;
    v8[3].hDevice = *((_DWORD *)a3 + 118);
    v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            this,
            (unsigned __int8 *)P[1],
            (struct DXGKVMB_COMMAND_BASE *)P[0],
            v14);
    v11 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 9033;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendSyncMessageStatusReturn failed: 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( P[1] )
    {
      if ( P[1] != v15 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return (unsigned int)v11;
  }
  else
  {
    if ( P[1] && P[1] != v15 )
      ExFreePoolWithTag(P[1], 0x4D767844u);
    return 3221225495LL;
  }
}

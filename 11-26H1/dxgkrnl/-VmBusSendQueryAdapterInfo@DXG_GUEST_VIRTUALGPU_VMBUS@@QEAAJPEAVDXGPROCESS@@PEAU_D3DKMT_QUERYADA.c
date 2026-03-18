/*
 * XREFs of ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x14042FC54
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x14019C2FC (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1401D5DC4 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_QUERYADAPTERINFO *a3)
{
  UINT PrivateDriverDataSize; // r8d
  __int64 v8; // rdi
  int v9; // edi
  int HostProcess; // eax
  UINT v11; // eax
  int *v12; // r14
  unsigned __int64 v13; // rbp
  unsigned int v14[4]; // [rsp+50h] [rbp-168h] BYREF
  __int128 v15; // [rsp+60h] [rbp-158h] BYREF
  int v16; // [rsp+70h] [rbp-148h]

  PrivateDriverDataSize = a3->PrivateDriverDataSize;
  if ( PrivateDriverDataSize > 0x20000 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 8900;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PrivateDriverDataSize is invalid",
      8900LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v16 = 0;
  v14[0] = (PrivateDriverDataSize + 11) & 0xFFFFFFF8;
  v15 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v15, this, v14[0] + 32, 0LL, 0LL, 0LL);
  v8 = v15;
  if ( (_QWORD)v15 )
  {
    if ( a2 )
      HostProcess = DXGPROCESS::GetHostProcess(a2);
    else
      HostProcess = 0;
    *(_BYTE *)(v8 + 12) = 0;
    *(_DWORD *)(v8 + 12) &= 0x1FFu;
    *(_QWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = HostProcess;
    *(_QWORD *)(v8 + 16) = 2LL;
    v11 = a3->PrivateDriverDataSize;
    if ( v11 )
      memmove((void *)(v8 + 32), a3->pPrivateDriverData, v11);
    v12 = (int *)(v8 + 32);
    *(_DWORD *)(v8 + 24) = a3->Type;
    *(_DWORD *)(v8 + 28) = a3->PrivateDriverDataSize;
    v9 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v15, (void *)(v8 + 32), v14);
    if ( v9 < 0 )
      goto LABEL_17;
    v13 = v14[0];
    if ( v14[0] < a3->PrivateDriverDataSize )
      goto LABEL_12;
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) >= 0x27u )
    {
      if ( v13 < (unsigned __int64)a3->PrivateDriverDataSize + 4 )
      {
LABEL_12:
        v9 = -1073741811;
        goto LABEL_17;
      }
      v9 = *v12++;
      if ( v9 < 0 )
        goto LABEL_17;
    }
    memmove(a3->pPrivateDriverData, v12, a3->PrivateDriverDataSize);
    goto LABEL_17;
  }
  v9 = -1073741801;
LABEL_17:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v15);
  return (unsigned int)v9;
}

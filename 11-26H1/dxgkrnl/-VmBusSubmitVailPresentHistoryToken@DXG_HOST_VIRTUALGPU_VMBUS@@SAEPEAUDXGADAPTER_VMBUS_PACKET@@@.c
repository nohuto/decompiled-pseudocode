/*
 * XREFs of ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140234070
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001D25C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z @ 0x140041DE0 (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14005F730 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_VAILPRES.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1400A2AE4 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1402F44F4 (-IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1403358AC (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1403CBC54 (-QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEA.c)
 *     ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1403F64D4 (-IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitVailPresentHistoryToken(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  char v2; // bl
  __int64 v5; // rax
  __int64 v6; // rdi
  struct DXGPROCESS *Current; // r14
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // r13d
  _DWORD *RefCountedBuffer; // r14
  DXGVIRTUALMACHINE *v12; // r12
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // eax
  __int64 v16; // [rsp+28h] [rbp-49h]
  int v17; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v18; // [rsp+6Ch] [rbp-5h] BYREF
  _BYTE v19[24]; // [rsp+70h] [rbp-1h] BYREF
  __int64 v20; // [rsp+88h] [rbp+17h] BYREF
  int v21; // [rsp+90h] [rbp+1Fh]

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 155) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 6348;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Presentation is disabled", 6348LL, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v19, (struct _KTHREAD **)(v1 + 248));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 6352;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      6352LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_6:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
    return 0;
  }
  v17 = -1073741637;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) < 0x18u )
    goto LABEL_33;
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN>((__int64)a1);
  v6 = v5;
  if ( !v5 )
    goto LABEL_6;
  if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 1160 < *(unsigned int *)(v5 + 1152) )
    v17 = -1073741811;
  if ( *(_DWORD *)(v5 + 72) != 9 )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( v17 != -1073741637 )
    {
LABEL_33:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v17, 4u);
      v2 = 1;
      goto LABEL_34;
    }
    if ( !DXGVAILOBJECT::IsIFlipFeatureEnabled()
      || !CIFlipPresentHistoryToken::IsIFlipSupported((const struct _D3DKMT_PRESENTHISTORYTOKEN *)(v6 + 72))
      || (*((_DWORD *)Current + 102) & 0x104) != 0x104
      || !*(_DWORD *)(v6 + 68)
      || !*(_QWORD *)(v6 + 96) )
    {
      goto LABEL_31;
    }
    v9 = *((_QWORD *)a1 + 12);
    v10 = *(_DWORD *)(v6 + 96);
    RefCountedBuffer = 0LL;
    v18 = 0;
    v12 = *(DXGVIRTUALMACHINE **)(v9 + 592);
    *(_DWORD *)(v6 + 132) &= ~0x2000000u;
    *(_QWORD *)(v6 + 96) = 0LL;
    *(_QWORD *)(v6 + 136) = 0LL;
    *(_QWORD *)(v6 + 120) = 0LL;
    *(_QWORD *)(v6 + 144) = 0LL;
    *(_DWORD *)(v6 + 884) = 0;
    *(_OWORD *)(v6 + 168) = 0LL;
    v13 = *(_DWORD *)(v6 + 1152);
    if ( v13 )
    {
      RefCountedBuffer = (_DWORD *)CRefCountedBuffer::AllocateRefCountedBuffer(v13, v8, 64LL);
      if ( RefCountedBuffer )
      {
        v14 = *(_DWORD *)(v6 + 1152);
        *(_QWORD *)RefCountedBuffer = 0LL;
        RefCountedBuffer[2] = v14;
        RefCountedBuffer[3] = 1;
        memmove(RefCountedBuffer + 4, (const void *)(v6 + 1160), *(unsigned int *)(v6 + 1152));
      }
    }
    if ( *(_DWORD *)(v6 + 1152) && !RefCountedBuffer )
    {
LABEL_31:
      if ( v17 == -1073741637 )
        v17 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
                *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL),
                *(unsigned int *)(v6 + 24),
                *(_QWORD *)(v6 + 56),
                *(_QWORD *)(v6 + 32),
                *(_QWORD *)(v6 + 40),
                0LL,
                *(_QWORD *)(v6 + 48),
                *(_DWORD *)(v6 + 64),
                0,
                0LL,
                -1);
      goto LABEL_33;
    }
    v15 = DXGVIRTUALMACHINE::QuerySwapChainBindingStatusFromVm(
            v12,
            v10,
            (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v6 + 72),
            &v18);
    v17 = v15;
    if ( v15 >= 0 )
    {
      v17 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
              *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL),
              *(unsigned int *)(v6 + 24),
              *(_QWORD *)(v6 + 56),
              *(_QWORD *)(v6 + 32),
              *(_QWORD *)(v6 + 40),
              v6 + 72,
              *(_QWORD *)(v6 + 48),
              *(_DWORD *)(v6 + 64),
              *(_DWORD *)(v6 + 68),
              RefCountedBuffer,
              v18);
      if ( v17 >= 0 )
        goto LABEL_29;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6432;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"SubmitPresentHistoryTokenFromVm failed",
        v17,
        0LL,
        0LL,
        0LL,
        0LL);
      DxgkCancelSwapChainBinding((struct _D3DKMT_PRESENTHISTORYTOKEN *)(v6 + 72));
    }
    else
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 80), v15);
      v16 = *(_QWORD *)(v6 + 80);
      WdLogGlobalForLineNumber = 6414;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"QuerySwapChainBindingStatusFromVm failed. BindId = 0x%I64x, Status = 0x%I64x",
        v16,
        v17,
        0LL,
        0LL,
        0LL);
    }
    v17 = -1073741637;
LABEL_29:
    if ( RefCountedBuffer )
      CRefCountedBuffer::RefCountedBufferRelease(RefCountedBuffer);
    goto LABEL_31;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 6367;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Token of type D3DKMT_PM_FLIPMANAGER is unsupported for VAIL",
    6367LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v20 = 55580588LL;
  v21 = 0;
  RtlLogUnexpectedCodepath(&v20);
LABEL_34:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
  return v2;
}

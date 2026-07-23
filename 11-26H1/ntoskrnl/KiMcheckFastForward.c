/*
 * XREFs of KiMcheckFastForward @ 0x1405FFBC0
 * Callers:
 *     KiNmiInterruptStart @ 0x1407386C0 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x14073CC80 (KiMcheckAbort.c)
 * Callees:
 *     KiRspInIstStack @ 0x1403A8BB8 (KiRspInIstStack.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall KiMcheckFastForward(ULONG_PTR BugCheckParameter4, char a2)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // r9
  int v8; // ecx
  unsigned __int64 v9; // r8
  __int64 v10; // r8
  _MACHINE_CHECK_CONTEXT *McheckContext; // rdx
  unsigned __int64 GsBase; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax

  if ( (_BYTE)KiKernelCetEnabled )
    return;
  v4 = 0;
  if ( (*(_BYTE *)(BugCheckParameter4 + 368) & 1) == 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter4 + 384);
    if ( (unsigned int)KiRspInIstStack(3u, v5) )
    {
      v4 = 1;
      _InterlockedAdd((volatile signed __int32 *)&KsepShimDbLock.ApcStateFill[16], 1u);
    }
    if ( (unsigned int)KiRspInIstStack(2u, v5) )
    {
      v4 |= 2u;
      _InterlockedAdd((volatile signed __int32 *)&KsepShimDbLock.ApcStateFill[20], 1u);
    }
    v6 = *(_QWORD *)(BugCheckParameter4 + 360);
    if ( v6 >= (unsigned __int64)&KiMcheckExitMceTailMceBegin && v6 < (unsigned __int64)&KiMcheckExitMceTailMceEnd )
    {
      v4 |= 4u;
      _InterlockedAdd((volatile signed __int32 *)&KsepShimDbLock.ApcStateFill[24], 1u);
    }
    if ( v6 >= (unsigned __int64)&KiMcheckExitMceTailNmiBegin && v6 < (unsigned __int64)KiMcheckExitMceTailNmiEnd )
    {
      v4 |= 4u;
      _InterlockedAdd((volatile signed __int32 *)&KsepShimDbLock.ApcStateFill[24], 1u);
    }
    if ( KiKvaShadow )
    {
      if ( v6 >= (unsigned __int64)&KiKernelIstMceExitMceTailMceBegin
        && v6 < (unsigned __int64)&KiKernelIstMceExitMceTailMceEnd )
      {
        v4 |= 4u;
        _InterlockedAdd((volatile signed __int32 *)&KsepShimDbLock.ApcStateFill[28], 1u);
      }
      if ( KiKvaShadow
        && v6 >= (unsigned __int64)&KiKernelIstMceExitMceTailNmiBegin
        && v6 < (unsigned __int64)&KiKernelIstMceExitMceTailNmiEnd )
      {
        v4 |= 4u;
        _InterlockedAdd((volatile signed __int32 *)&KsepShimDbLock.ApcStateFill[28], 1u);
      }
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a2 || (v4 & 1) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)&KsepShimDbLock.ApcStateFill[40], 1u);
    if ( (v4 & 1) != 0 )
      _InterlockedAdd((volatile signed __int32 *)&KsepShimDbLock.WaitStatus, 1u);
    v8 = 1;
  }
  else
  {
    _InterlockedAdd((volatile signed __int32 *)&KsepShimDbLock.UserIdealProcessor, 1u);
    v8 = 0;
  }
  if ( KiKvaShadow )
  {
    v9 = CurrentPrcb[-1].PrcbPad141[473];
    if ( !a2 )
    {
      v10 = *(_QWORD *)(v9 + 44);
      goto LABEL_30;
    }
    v10 = *(_QWORD *)(v9 + 52);
  }
  else
  {
    v10 = 0LL;
    if ( !a2 )
    {
LABEL_30:
      if ( (v4 & 6) == 2 )
        KeBugCheckEx(
          0xFBu,
          v4,
          *(_QWORD *)(BugCheckParameter4 + 384),
          *(_QWORD *)(BugCheckParameter4 + 360),
          BugCheckParameter4);
      McheckContext = &CurrentPrcb->McheckContext[1];
      if ( v8 )
        goto LABEL_38;
      goto LABEL_37;
    }
  }
  if ( (v4 & 1) != 0 )
    KeBugCheckEx(
      0x111u,
      v4,
      *(_QWORD *)(BugCheckParameter4 + 384),
      *(_QWORD *)(BugCheckParameter4 + 360),
      BugCheckParameter4);
LABEL_37:
  McheckContext = CurrentPrcb->McheckContext;
LABEL_38:
  if ( (v4 & 4) != 0 )
  {
    _InterlockedAdd((_DWORD *)&KsepShimDbLock.WaitStatus + 1, 1u);
    GsBase = McheckContext->GsBase;
    if ( KiKvaShadow )
    {
      *(_QWORD *)(v10 + 16) = GsBase;
      *(_QWORD *)(v10 + 24) = McheckContext->Cr3;
      if ( (McheckContext->Cr3 & 3) != 0 && CurrentPrcb->CurrentThread->Process->AddressPolicy != 1 )
      {
        _InterlockedAdd((volatile signed __int32 *)&KsepShimDbLock.WaitBlockList, 1u);
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentPrcb->ShadowFlags, 0);
        v13 = __readcr4();
        if ( (v13 & 0x20080) != 0 )
        {
          __writecr4(v13 ^ 0x80);
          __writecr4(v13);
        }
        else
        {
          v14 = __readcr3();
          __writecr3(v14);
        }
      }
    }
    else
    {
      *(_QWORD *)(BugCheckParameter4 + 104) = GsBase;
    }
    *(_OWORD *)(BugCheckParameter4 + 360) = *(_OWORD *)&McheckContext->MachineFrame.Rip;
    *(_OWORD *)(BugCheckParameter4 + 376) = *(_OWORD *)&McheckContext->MachineFrame.EFlags;
    *(_QWORD *)(BugCheckParameter4 + 392) = *(_QWORD *)&McheckContext->MachineFrame.SegSs;
    *(_QWORD *)(BugCheckParameter4 + 48) = McheckContext->Rax;
    *(_QWORD *)(BugCheckParameter4 + 56) = McheckContext->Rcx;
    *(_QWORD *)(BugCheckParameter4 + 64) = McheckContext->Rdx;
    _InterlockedAdd((volatile signed __int32 *)&KsepShimDbLock.ApcStateFill[36], 1u);
    McheckContext->MachineFrame.SegCs = 0;
  }
  if ( !a2 )
  {
    _InterlockedAdd((volatile signed __int32 *)&KsepShimDbLock.ApcStateFill[32], 1u);
    *(_OWORD *)&McheckContext->MachineFrame.Rip = *(_OWORD *)(BugCheckParameter4 + 360);
    *(_OWORD *)&McheckContext->MachineFrame.EFlags = *(_OWORD *)(BugCheckParameter4 + 376);
    *(_QWORD *)&McheckContext->MachineFrame.SegSs = *(_QWORD *)(BugCheckParameter4 + 392);
    McheckContext->Rax = *(_QWORD *)(BugCheckParameter4 + 48);
    McheckContext->Rcx = *(_QWORD *)(BugCheckParameter4 + 56);
    McheckContext->Rdx = *(_QWORD *)(BugCheckParameter4 + 64);
    McheckContext->GsBase = *(_QWORD *)(BugCheckParameter4 + 104);
    if ( KiKvaShadow )
    {
      McheckContext->GsBase = *(_QWORD *)(v10 + 16);
      McheckContext->Cr3 = *(_QWORD *)(v10 + 24);
    }
  }
}

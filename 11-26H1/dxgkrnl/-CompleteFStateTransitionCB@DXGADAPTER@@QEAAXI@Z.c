/*
 * XREFs of ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x14006E734
 * Callers:
 *     DxgkCompleteFStateTransitionCB @ 0x140075110 (DxgkCompleteFStateTransitionCB.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x140033670 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x140080180 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::CompleteFStateTransitionCB(DXGADAPTER *this, unsigned int a2)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rcx

  if ( *((_QWORD *)this + 409) )
  {
    v3 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1640);
    v4 = *((_QWORD *)this + 408) + 520LL * v3;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&Dxgk_CompleteFStateTransitionCB);
    *(_BYTE *)(v4 + 359) = 0;
    PoFxCompleteIdleState(*((_QWORD *)this + 409), v3);
    v5 = *(_QWORD *)(v4 + 512);
    if ( v5 && !*(_DWORD *)(v4 + 344) )
      DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v5 + 136));
    if ( *(_DWORD *)(v4 + 208) == 7 )
      DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v4 + 4), *(_DWORD *)(v4 + 344), 0);
    if ( *((_QWORD *)this + 510)
      && (v3 == 1 || v3 == 4)
      && _InterlockedExchangeAdd((volatile signed __int32 *)this + 1008, 0xFFFFFFFF) != 1 )
    {
      KeSetEvent((PRKEVENT)((char *)this + 3976), 0, 0);
    }
  }
}

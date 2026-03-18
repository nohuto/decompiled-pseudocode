/*
 * XREFs of ?RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x140080390
 * Callers:
 *     ?ProcessFirstFrameTimer@DXGADAPTER@@QEAAXXZ @ 0x14006F3D0 (-ProcessFirstFrameTimer@DXGADAPTER@@QEAAXXZ.c)
 *     ?CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x14007FD64 (-CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 *     ?EnableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x14007FE7C (-EnableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     ?ForcePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z @ 0x14007FED8 (-ForcePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z.c)
 *     ?ForcePStateCeiling@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z @ 0x14007FF64 (-ForcePStateCeiling@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z.c)
 *     ?ForcePStateFloor@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z @ 0x14007FFF4 (-ForcePStateFloor@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z.c)
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x140080180 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::RequestPState(DXGPOWERSTATISTICSTRANSITIONENGINE *this, __int32 a2)
{
  __int64 v4; // r8

  if ( a2 != *((_DWORD *)this + 15) && !*((_BYTE *)this + 89) )
  {
    v4 = *(_QWORD *)this;
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(520LL * *((unsigned int *)this + 2) + *(_QWORD *)(*(_QWORD *)this + 3264LL) + 512)
                         + 244LL),
      a2);
    if ( !(unsigned __int8)_InterlockedExchange((volatile __int32 *)(v4 + 4684), 1) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24));
      *(_QWORD *)(v4 + 4488) = -1LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 4496), CriticalWorkQueue);
    }
    *((_DWORD *)this + 15) = a2;
  }
}

/*
 * XREFs of ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x140013E40
 * Callers:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140012E10 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x140013398 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?ComputeLatencyToleranceForMemoryComponents@DXGADAPTER@@QEAAXXZ @ 0x140013AAC (-ComputeLatencyToleranceForMemoryComponents@DXGADAPTER@@QEAAXXZ.c)
 *     ?ComputeLatencyTolerancesForEngineComponents@DXGADAPTER@@QEAAXXZ @ 0x140014068 (-ComputeLatencyTolerancesForEngineComponents@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x140014774 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1400755A0 (DxgkSetPowerComponentLatencyCB.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14041EB18 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x140013A28 (McTemplateK0pqx_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentLatencyCB(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // [rsp+20h] [rbp-18h]

  if ( *((_BYTE *)this + 3705) )
  {
    v5 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1640);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    {
      v8 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1640);
      McTemplateK0pqx_EtwWriteTransfer((__int64)this, &Dxgk_SetPowerComponentLatencyCB, a3, this, v8, a3);
    }
    v6 = 520LL * v5;
    v7 = *((_QWORD *)this + 408);
    if ( a3 != *(_QWORD *)(v6 + v7 + 368) )
    {
      *(_QWORD *)(v6 + v7 + 368) = a3;
      PoFxSetComponentLatency(*((_QWORD *)this + 409), v5, a3);
    }
  }
}

/*
 * XREFs of ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x14006F70C
 * Callers:
 *     DxgkSetPowerComponentResidencyCB @ 0x140075610 (DxgkSetPowerComponentResidencyCB.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14041EB18 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x140013A28 (McTemplateK0pqx_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentResidencyCB(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  int v6; // [rsp+20h] [rbp-18h]

  if ( *((_BYTE *)this + 3705) )
  {
    v5 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1640);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        v6 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1640);
        McTemplateK0pqx_EtwWriteTransfer((__int64)this, &Dxgk_SetPowerComponentResidencyCB, a3, this, v6, a3);
      }
    }
    *(_QWORD *)(520LL * v5 + *((_QWORD *)this + 408) + 376) = a3;
    PoFxSetComponentResidency(*((_QWORD *)this + 409), v5, a3);
  }
}

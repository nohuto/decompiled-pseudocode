/*
 * XREFs of ?ComputeLatencyToleranceForMemoryComponents@DXGADAPTER@@QEAAXXZ @ 0x140013AAC
 * Callers:
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x140013398 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x140013E40 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 */

void __fastcall DXGADAPTER::ComputeLatencyToleranceForMemoryComponents(DXGADAPTER *this)
{
  __int64 v2; // rax
  char *v3; // rsi
  char *v4; // rbx
  unsigned __int64 i; // rbp
  char *v6; // rdx

  v2 = 3648LL;
  v3 = (char *)this + 3768;
  v4 = (char *)*((_QWORD *)this + 471);
  if ( !*((_DWORD *)this + 855) )
    v2 = 3656LL;
  for ( i = *(_QWORD *)((char *)this + v2); ; DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)v6 - 105), i) )
  {
    v6 = v4;
    if ( v4 == v3 )
      break;
    v4 = *(char **)v4;
    if ( i == *((_QWORD *)v6 - 7) )
      break;
  }
}

/*
 * XREFs of ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1402BFC04
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x1402C12E8 (DxgkQueryStatisticsInternal.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::GetAdapterPerfDataCaps(DXGADAPTER *this, struct _D3DKMT_ADAPTER_PERFDATACAPS *a2)
{
  __int64 PhysicalAdapterIndex; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  if ( a2
    && (PhysicalAdapterIndex = a2->PhysicalAdapterIndex, (unsigned int)PhysicalAdapterIndex < *((_DWORD *)this + 74)) )
  {
    v3 = *((_QWORD *)this + 379);
    a2->MaxMemoryBandwidth = *(_QWORD *)(352 * PhysicalAdapterIndex + v3 + 184);
    a2->MaxPCIEBandwidth = *(_QWORD *)(352 * PhysicalAdapterIndex + v3 + 192);
    a2->MaxFanRPM = *(_DWORD *)(352 * PhysicalAdapterIndex + v3 + 200);
    a2->TemperatureMax = *(_DWORD *)(352 * PhysicalAdapterIndex + v3 + 204);
    a2->TemperatureWarning = *(_DWORD *)(352 * PhysicalAdapterIndex + v3 + 208);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 12117;
  }
  return result;
}

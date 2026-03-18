/*
 * XREFs of ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x140413DE0
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x1402C12E8 (DxgkQueryStatisticsInternal.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::GetGpuVersion(DXGADAPTER *this, struct _D3DKMT_GPUVERSION *a2)
{
  __int64 PhysicalAdapterIndex; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  __int128 v5; // xmm1
  __int64 result; // rax

  if ( a2
    && (PhysicalAdapterIndex = a2->PhysicalAdapterIndex, (unsigned int)PhysicalAdapterIndex < *((_DWORD *)this + 74)) )
  {
    v3 = 352 * PhysicalAdapterIndex;
    v4 = *((_QWORD *)this + 379);
    *(_OWORD *)a2->BiosVersion = *(_OWORD *)(v3 + v4 + 212);
    *(_OWORD *)&a2->BiosVersion[8] = *(_OWORD *)(v3 + v4 + 228);
    *(_OWORD *)a2->GpuArchitecture = *(_OWORD *)(v3 + v4 + 276);
    v5 = *(_OWORD *)(v3 + v4 + 292);
    result = 0LL;
    *(_OWORD *)&a2->GpuArchitecture[8] = v5;
  }
  else
  {
    WdLogSingleEntry1(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 12142;
  }
  return result;
}

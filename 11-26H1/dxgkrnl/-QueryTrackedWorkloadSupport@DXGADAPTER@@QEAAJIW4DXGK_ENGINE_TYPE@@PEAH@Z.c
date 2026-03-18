/*
 * XREFs of ?QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z @ 0x14019E1BC
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::QueryTrackedWorkloadSupport(
        DXGADAPTER *this,
        __int64 a2,
        enum DXGK_ENGINE_TYPE a3,
        int *a4)
{
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // r10d
  __int64 v10; // r9
  __int64 v11; // r11
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // r8

  *a4 = 0;
  NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
  if ( v7 < NumDifferentPhysicalAdapters )
  {
    v10 = *(_QWORD *)(v8 + 3032);
    v11 = 352LL * v7;
    v12 = *(_QWORD *)(v11 + v10 + 32);
    if ( v12 )
    {
      v13 = *(unsigned __int16 *)(v11 + v10);
      while ( v9 < v13 )
      {
        v14 = 74LL * v9;
        if ( *(_DWORD *)(v14 + v12) == a3 )
        {
          *a4 = (*(_DWORD *)(v14 + v12 + 68) >> 2) & 1;
          if ( (*(_BYTE *)(v14 + v12 + 68) & 4) == 0 )
            return 0LL;
          v12 = *(_QWORD *)(v11 + v10 + 32);
        }
        ++v9;
      }
    }
  }
  return 0LL;
}

/*
 * XREFs of ?QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z @ 0x1401952E8
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::QueryWDDM2_7Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_2_7_CAPS *a2)
{
  int v2; // r9d
  int v4; // edx

  v2 = 0;
  *(_DWORD *)a2 = 0;
  if ( *((_QWORD *)this + 396) )
  {
    LOBYTE(v2) = (**((_DWORD **)this + 381) & 0x18000) != 0;
    *(_DWORD *)a2 = v2;
    v4 = v2 | (*(_BYTE *)(*((_QWORD *)this + 396) + 1880LL) != 0 ? 2 : 0);
    *(_DWORD *)a2 = v4;
    *(_DWORD *)a2 = v4 | (*((_DWORD *)this + 754) >> 1) & 8;
  }
}

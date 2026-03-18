/*
 * XREFs of ?QueryWDDM2_9Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_9_CAPS@@@Z @ 0x140426818
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::QueryWDDM2_9Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_2_9_CAPS *a2)
{
  int v2; // r8d
  int v4; // r8d
  char v5; // cl

  v2 = 0;
  *(_DWORD *)a2 = 0;
  if ( *((_QWORD *)this + 396) )
  {
    v4 = (**((_DWORD **)this + 381) >> 15) & 3;
    *(_DWORD *)a2 = v4;
    v5 = -*(_BYTE *)(*((_QWORD *)this + 396) + 1880LL);
    *(_DWORD *)a2 = v4 | (v5 != 0 ? 4 : 0);
    v2 = v4 | (v5 != 0 ? 4 : 0);
  }
  *(_DWORD *)a2 = v2 | (*((_DWORD *)this + 854) != -1 ? 8 : 0);
}

/*
 * XREFs of ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x14004EEA0
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x14004EF98 (-SupportHWVSync@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGADAPTER::QueryWDDM1_2Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_1_2_CAPS *a2)
{
  UINT v4; // r8d
  UINT v5; // eax
  UINT v6; // ecx
  UINT v7; // edx
  UINT v8; // eax
  UINT v9; // ecx
  unsigned __int8 v10; // al
  int v11; // edx
  int v12; // ecx
  __int64 v13; // r10
  __int64 v14; // r9

  a2->PreemptionCaps.GraphicsPreemptionGranularity = *((_DWORD *)this + 742);
  a2->PreemptionCaps.ComputePreemptionGranularity = *((_DWORD *)this + 743);
  v4 = a2->Value ^ ((unsigned __int8)*(_DWORD *)&a2->0 ^ *((_BYTE *)this + 2976)) & 1;
  a2->Value = v4;
  v5 = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(2 * *((_BYTE *)this + 2977))) & 2;
  a2->Value = v5;
  v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(4 * *((_BYTE *)this + 2978))) & 4;
  a2->Value = v6;
  v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(2 * *((_DWORD *)this + 623))) & 8 | 0x10;
  a2->Value = v7;
  v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(*((_DWORD *)this + 623) >> 23)) & 0x20;
  a2->Value = v8;
  v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)this + 622) << 6)) & 0x40;
  a2->Value = v9;
  a2->Value = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(32 * *((_DWORD *)this + 618))) & 0x80;
  v10 = DXGADAPTER::SupportHWVSync(this);
  v12 = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(v10 << 8)) & 0x100;
  *(_DWORD *)(v13 + 8) = v12;
  *(_DWORD *)(v13 + 8) = v12 ^ ((unsigned __int16)(v11 ^ (v11 ^ (v10 << 8)) & 0x100) ^ (unsigned __int16)(*(unsigned __int8 *)(v14 + 2982) << 9)) & 0x200;
}

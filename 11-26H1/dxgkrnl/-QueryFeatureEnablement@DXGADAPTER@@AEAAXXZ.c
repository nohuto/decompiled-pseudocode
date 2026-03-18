/*
 * XREFs of ?QueryFeatureEnablement@DXGADAPTER@@AEAAXXZ @ 0x14019DE9C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?IsFeatureEnabled@DXGADAPTER@@QEAA?AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z @ 0x14019CD44 (-IsFeatureEnabled@DXGADAPTER@@QEAA-AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z.c)
 */

void __fastcall DXGADAPTER::QueryFeatureEnablement(DXGADAPTER *this)
{
  int v2; // ecx
  int v3; // eax
  _DWORD *v4; // rdx
  unsigned int *v5; // rdx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  int v8; // eax
  _DWORD *v9; // rdx
  unsigned int *v10; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v13; // eax
  _DWORD *v14; // rdx
  unsigned int *v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)((char *)this + 5074) = *DXGADAPTER::IsFeatureEnabled((__int64)this, &v18, 0);
  *(_DWORD *)((char *)this + 5078) = *DXGADAPTER::IsFeatureEnabled((__int64)this, &v18, 1u);
  *(_DWORD *)((char *)this + 5082) = *DXGADAPTER::IsFeatureEnabled((__int64)this, &v18, 4u);
  *(_DWORD *)((char *)this + 5086) = *DXGADAPTER::IsFeatureEnabled((__int64)this, &v18, 0x20u);
  *(_DWORD *)((char *)this + 5090) = *DXGADAPTER::IsFeatureEnabled((__int64)this, &v18, 0x25u);
  *(_DWORD *)((char *)this + 5094) = *DXGADAPTER::IsFeatureEnabled((__int64)this, &v18, 0x26u);
  *(_DWORD *)((char *)this + 5098) = *DXGADAPTER::IsFeatureEnabled((__int64)this, &v18, 0x28u);
  *(_DWORD *)((char *)this + 5102) = *DXGADAPTER::IsFeatureEnabled((__int64)this, &v18, 0x29u);
  v2 = *DXGADAPTER::IsFeatureEnabled((__int64)this, &v18, 0x2Au);
  v3 = *((unsigned __int16 *)this + 2538);
  *(_DWORD *)((char *)this + 5106) = v2;
  if ( (v3 & 0x10) != 0 )
  {
    v4 = (_DWORD *)*((_QWORD *)this + 381);
    if ( (*v4 & 0x20000) == 0 )
    {
      *v4 ^= (*v4 ^ (v3 << 17)) & 0x20000;
      v5 = (unsigned int *)*((_QWORD *)this + 381);
      v6 = *v5;
      if ( (*((_BYTE *)this + 5076) & 0x20) != 0 )
        v7 = v6 & 0xFFFE7FFF | 0x8000;
      else
        v7 = v6 & 0xFFFE7FFF | 0x10000;
      *v5 = v7;
    }
  }
  v8 = *((unsigned __int16 *)this + 2540);
  if ( (v8 & 0x10) != 0 )
  {
    v9 = (_DWORD *)*((_QWORD *)this + 381);
    if ( (*v9 & 0x100000) == 0 )
    {
      *v9 ^= (*v9 ^ (v8 << 20)) & 0x100000;
      v10 = (unsigned int *)*((_QWORD *)this + 381);
      v11 = *v10;
      if ( (*((_BYTE *)this + 5080) & 0x20) != 0 )
        v12 = v11 & 0xFFF3FFFF | 0x40000;
      else
        v12 = v11 & 0xFFF3FFFF | 0x80000;
      *v10 = v12;
    }
  }
  v13 = *((unsigned __int16 *)this + 2542);
  if ( (v13 & 0x10) != 0 )
  {
    v14 = (_DWORD *)*((_QWORD *)this + 381);
    if ( (*v14 & 0x8000000) == 0 )
    {
      *v14 ^= (*v14 ^ (v13 << 27)) & 0x8000000;
      v15 = (unsigned int *)*((_QWORD *)this + 381);
      v16 = *v15;
      if ( (*((_BYTE *)this + 5084) & 0x20) != 0 )
        v17 = v16 & 0xF9FFFFFF | 0x2000000;
      else
        v17 = v16 & 0xF9FFFFFF | 0x4000000;
      *v15 = v17;
    }
  }
}

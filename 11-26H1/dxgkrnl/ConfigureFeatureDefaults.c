/*
 * XREFs of ConfigureFeatureDefaults @ 0x140288E80
 * Callers:
 *     ConfigureFeature @ 0x140288C30 (ConfigureFeature.c)
 * Callees:
 *     Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14005D4C4 (Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall ConfigureFeatureDefaults(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v6; // cl
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  char v11; // cl
  char v12; // cl
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  __int16 v16; // cx
  unsigned int v17; // edx

  *(_DWORD *)a4 = 0;
  *(_WORD *)(a4 + 4) = 0;
  *(_WORD *)a4 = *(_WORD *)a3;
  LOWORD(v7) = *(_WORD *)(a3 + 2);
  *(_BYTE *)(a4 + 4) &= ~2u;
  *(_WORD *)(a4 + 2) = v7;
  v6 = *(_BYTE *)(a4 + 4) ^ (*(_BYTE *)(a4 + 4) ^ (*(_BYTE *)(a3 + 4) >> 1)) & 1;
  LOBYTE(v7) = 11;
  *(_BYTE *)(a4 + 4) = v6;
  if ( a2 <= 0x3000000B )
  {
    if ( a2 == 805306379 )
    {
LABEL_8:
      v7 = *(_DWORD *)(a1 + 936);
      if ( (v7 & 2) != 0 )
      {
        *(_WORD *)(a4 + 2) = 6;
        *(_BYTE *)(a4 + 4) = v6 & 0xFE;
      }
      return v7;
    }
    if ( a2 )
    {
      v8 = a2 - 46;
      if ( v8 )
      {
        v9 = v8 - 805306330;
        if ( !v9 )
        {
          LOWORD(v7) = (*(_DWORD *)(a1 + 936) & 2) != 0 ? 5 : 8;
          *(_WORD *)(a4 + 2) = v7;
          return v7;
        }
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 != 1 )
            return v7;
          goto LABEL_8;
        }
        v7 = *(_DWORD *)(a1 + 936);
        if ( (v7 & 2) != 0 )
          return v7;
        v11 = v6 & 0xFE;
LABEL_16:
        *(_BYTE *)(a4 + 4) = v11;
        return v7;
      }
      v12 = (unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() != 0;
      LOBYTE(v7) = *(_BYTE *)(a4 + 4) & 0xFE;
    }
    else
    {
      LOBYTE(v7) = dword_140168DF8 != 1;
      v12 = v6 & 0xFE;
    }
    v11 = v7 | v12;
    goto LABEL_16;
  }
  v13 = a2 - 805306380;
  if ( !v13 )
  {
    LOBYTE(v7) = ~(unsigned __int8)(*(_DWORD *)(a1 + 936) >> 1);
    goto LABEL_33;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v7 = *(_DWORD *)(a1 + 936) >> 1;
LABEL_33:
    LOBYTE(v7) = v6 & 0xFE | v7 & 1;
    *(_BYTE *)(a4 + 4) = v7;
    return v7;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v7 = *(_DWORD *)(a1 + 936);
    if ( (v7 & 2) != 0 )
    {
      *(_WORD *)a4 = 9;
      v16 = 10;
    }
    else
    {
      v16 = 5;
    }
LABEL_30:
    *(_WORD *)(a4 + 2) = v16;
    return v7;
  }
  v16 = 5;
  v17 = v15 - 1;
  if ( v17 )
  {
    if ( v17 != 1 )
      return v7;
  }
  else if ( (*(_DWORD *)(a1 + 936) & 2) == 0 )
  {
    *(_WORD *)(a4 + 2) = 5;
  }
  v7 = *(_DWORD *)(a1 + 936);
  if ( (v7 & 2) != 0 )
    goto LABEL_30;
  return v7;
}

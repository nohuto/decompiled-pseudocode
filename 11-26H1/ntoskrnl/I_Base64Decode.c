/*
 * XREFs of I_Base64Decode @ 0x1408A853C
 * Callers:
 *     I_MinCryptGetPlatformManifestBinaryIDAttribute @ 0x1408A8720 (I_MinCryptGetPlatformManifestBinaryIDAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall I_Base64Decode(_BYTE *a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  BOOL v6; // r11d
  _BYTE *v9; // r10
  int v10; // edx
  unsigned int v11; // r8d
  int v12; // r9d
  int v13; // ecx
  int v14; // ecx
  char v15; // cl
  unsigned int v16; // r8d
  int v17; // edx
  __int64 v18; // rcx

  v4 = 0;
  v5 = (unsigned __int64)&a1[a2];
  v6 = 0;
  v9 = a1;
  if ( (unsigned __int64)a1 >= v5 )
    goto LABEL_30;
  do
  {
    if ( !*v9 )
      break;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    while ( (unsigned __int64)v9 < v5 )
    {
      v13 = (char)*v9;
      if ( (unsigned int)(v13 - 65) <= 0x19 )
      {
        v14 = v13 - 65;
        goto LABEL_11;
      }
      if ( (unsigned int)(v13 - 97) <= 0x19 )
      {
        v14 = v13 - 71;
        goto LABEL_11;
      }
      if ( (unsigned int)(v13 - 48) <= 9 )
      {
        v14 = v13 + 4;
LABEL_11:
        ++v9;
        if ( v14 == -1 )
          goto LABEL_20;
        goto LABEL_18;
      }
      if ( v13 == 43 )
      {
        v14 = 62;
      }
      else
      {
        if ( v13 != 47 )
        {
          ++v9;
LABEL_20:
          --v12;
          goto LABEL_21;
        }
        v14 = 63;
      }
      ++v9;
LABEL_18:
      v10 = v14 | (v10 << 6);
      v11 += 6;
LABEL_21:
      if ( (unsigned int)++v12 >= 4 )
        break;
    }
    if ( !v6 )
      v6 = v4 + (v11 >> 3) > *a4;
    v15 = 24 - v11;
    v16 = v11 >> 3;
    v17 = v10 << v15;
    if ( v16 )
    {
      v18 = v16;
      v4 += v16;
      do
      {
        if ( !v6 )
          *a3++ = BYTE2(v17);
        v17 <<= 8;
        --v18;
      }
      while ( v18 );
    }
  }
  while ( (unsigned __int64)v9 < v5 );
LABEL_30:
  *a4 = v4;
  return v6 ? 0xC000000D : 0;
}

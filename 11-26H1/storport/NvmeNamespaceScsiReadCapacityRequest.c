/*
 * XREFs of NvmeNamespaceScsiReadCapacityRequest @ 0x1401182B4
 * Callers:
 *     NvmeNamespaceExecuteScsiSrb @ 0x140104C20 (NvmeNamespaceExecuteScsiSrb.c)
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x14010569C (NvmeNamespaceExecuteScsiSrbEx.c)
 * Callees:
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceScsiReadCapacityRequest(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  char v4; // bp
  unsigned int v5; // esi
  char v9; // r14
  char v10; // r10
  unsigned int v11; // r11d
  unsigned int i; // r9d
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rax
  _BYTE *v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // r15d
  int v22; // ebp
  int v23; // edx
  unsigned __int64 v24; // rcx
  char v25; // cl
  unsigned int v26; // r8d
  char v27; // al
  char v28; // cl
  char v29; // dl

  v4 = *(_BYTE *)(a3 + 2);
  v5 = 0;
  v9 = 0;
  if ( v4 == 40 )
  {
    v10 = 0;
    if ( !*(_DWORD *)(a3 + 20) )
    {
      v11 = *(_DWORD *)(a3 + 56);
      for ( i = 0; i < v11; ++i )
      {
        v13 = *(unsigned int *)(a3 + 4LL * i + 120);
        if ( (unsigned int)v13 >= 0x80 )
        {
          v14 = *(unsigned int *)(a3 + 16);
          if ( (unsigned int)v13 < (unsigned int)v14 )
          {
            v15 = (unsigned int)v13;
            v16 = *(_DWORD *)(v13 + a3) - 64;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                if ( v17 == 1 && v15 + 40 <= v14 )
                  break;
              }
              else if ( v15 + 56 <= v14 )
              {
                v9 = *(_BYTE *)(v15 + a3 + 10);
                v10 = 1;
              }
            }
            else if ( v15 + 40 <= v14 )
            {
              v9 = *(_BYTE *)(v15 + a3 + 10);
              break;
            }
            if ( v10 )
              break;
          }
        }
      }
    }
  }
  else
  {
    v9 = *(_BYTE *)(a3 + 10);
  }
  v18 = 64LL;
  if ( v4 != 40 )
    v18 = 24LL;
  v19 = *(_BYTE **)(v18 + a3);
  v20 = 60LL;
  if ( v4 != 40 )
    v20 = 16LL;
  v21 = *(_DWORD *)(v20 + a3);
  if ( !v19 || (v22 = 8, v21 < 8) || v9 == 16 && v21 < 0xC )
  {
    SetSrbSenseData(a3, 6, 5, 36, 0);
    return (unsigned int)-1073741811;
  }
  memset_0(v19, 0, *(unsigned int *)(v20 + a3));
  v23 = *(_DWORD *)(a1 + 64);
  v24 = **(_QWORD **)(a1 + 176) - 1LL;
  if ( v9 == 16 && *a4 == 0x9E )
  {
    if ( (a4[1] & 0x1F) != 0x10 )
    {
      SetSrbSenseData(a3, 6, 5, 32, 0);
      return (unsigned int)-1073741808;
    }
    v19[6] = BYTE1(v24);
    v19[5] = BYTE2(v24);
    v19[4] = BYTE3(v24);
    v19[3] = BYTE4(v24);
    v19[2] = BYTE5(v24);
    v19[1] = BYTE6(v24);
    *v19 = HIBYTE(v24);
    v19[10] = BYTE1(v23);
    v19[9] = BYTE2(v23);
    v19[8] = HIBYTE(v23);
    v19[7] = v24;
    v19[11] = v23;
    if ( v21 >= 0x10 )
    {
      v19[12] &= 0xF0u;
      v25 = v19[13] & 0xF0;
      v19[13] = v25;
      v26 = *(_DWORD *)(a1 + 68) / *(_DWORD *)(a1 + 64);
      if ( v26 > 1 )
      {
        do
        {
          v26 >>= 1;
          v27 = v25 ^ (v25 ^ (v25 + 1)) & 0xF;
          v25 = v27;
        }
        while ( v26 > 1 );
        v19[13] = v27;
      }
      v19[14] &= 0xC0u;
      v28 = v19[14] & 0x7F;
      v19[15] = 0;
      v29 = *(_BYTE *)(*(_QWORD *)(a1 + 176) + 24LL) << 7;
      v19[14] = v29 | v28;
      v19[14] = v29 | ((*(_BYTE *)(*(_QWORD *)(a1 + 176) + 33LL) & 7) != 1 ? 0 : 0x40);
    }
    v22 = v21 < 0x20 ? 16 : 32;
  }
  else
  {
    v19[6] = BYTE1(v23);
    v19[5] = BYTE2(v23);
    v19[4] = HIBYTE(v23);
    v19[7] = v23;
    if ( v24 < 0xFFFFFFFF )
    {
      v19[3] = v24;
      v19[2] = BYTE1(v24);
      *v19 = BYTE3(v24);
      v19[1] = BYTE2(v24);
    }
    else
    {
      *(_DWORD *)v19 = -1;
    }
  }
  if ( *(_BYTE *)(a3 + 2) == 40 )
    *(_DWORD *)(a3 + 60) = v22;
  else
    *(_DWORD *)(a3 + 16) = v22;
  *(_BYTE *)(a3 + 3) = 1;
  return v5;
}

/*
 * XREFs of sub_1401138CC @ 0x1401138CC
 * Callers:
 *     sub_1400FD098 @ 0x1400FD098 (sub_1400FD098.c)
 *     sub_1400FDA54 @ 0x1400FDA54 (sub_1400FDA54.c)
 * Callees:
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1401138CC(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // esi
  char v8; // r15
  char v9; // r11
  unsigned int v10; // ebx
  unsigned int v11; // r10d
  unsigned int *v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  _BYTE *v15; // rbx
  unsigned int v16; // r14d
  int v17; // ebp
  int v18; // edx
  unsigned __int64 v19; // rcx
  char v20; // cl
  unsigned int v21; // r8d
  char v22; // al
  char v23; // cl
  char v24; // dl

  v4 = 0;
  v8 = 0;
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    v9 = 0;
    if ( !*(_DWORD *)(a3 + 20) )
    {
      v10 = *(_DWORD *)(a3 + 56);
      v11 = 0;
      if ( v10 )
      {
        v12 = (unsigned int *)(a3 + 120);
        do
        {
          v13 = *v12;
          if ( (unsigned int)v13 >= 0x80 )
          {
            v14 = *(unsigned int *)(a3 + 16);
            if ( (unsigned int)v13 < (unsigned int)v14 )
            {
              if ( *(_DWORD *)(v13 + a3) == 64 )
              {
                if ( v13 + 40 <= v14 )
                {
                  v8 = *(_BYTE *)(v13 + a3 + 10);
                  break;
                }
              }
              else if ( *(_DWORD *)(v13 + a3) == 65 )
              {
                if ( v13 + 56 <= v14 )
                {
                  v8 = *(_BYTE *)(v13 + a3 + 10);
                  v9 = 1;
                }
              }
              else if ( *(_DWORD *)(v13 + a3) == 66 && v13 + 40 <= v14 )
              {
                break;
              }
              if ( v9 )
                break;
            }
          }
          ++v11;
          ++v12;
        }
        while ( v11 < v10 );
      }
    }
    v15 = *(_BYTE **)(a3 + 64);
    v16 = *(_DWORD *)(a3 + 60);
  }
  else
  {
    v8 = *(_BYTE *)(a3 + 10);
    v15 = *(_BYTE **)(a3 + 24);
    v16 = *(_DWORD *)(a3 + 16);
  }
  if ( !v15 || (v17 = 8, v16 < 8) || v8 == 16 && v16 < 0xC )
  {
    sub_140112680(a3, 6, 5, 36, 0);
    return (unsigned int)-1073741811;
  }
  memset_0(v15, 0, v16);
  v18 = *(_DWORD *)(a1 + 64);
  v19 = **(_QWORD **)(a1 + 176) - 1LL;
  if ( v8 == 16 && *a4 == 0x9E )
  {
    if ( (a4[1] & 0x1F) != 0x10 )
    {
      sub_140112680(a3, 6, 5, 32, 0);
      return (unsigned int)-1073741808;
    }
    v15[6] = BYTE1(v19);
    v15[5] = BYTE2(v19);
    v15[4] = BYTE3(v19);
    v15[3] = BYTE4(v19);
    v15[2] = BYTE5(v19);
    v15[1] = BYTE6(v19);
    *v15 = HIBYTE(v19);
    v15[10] = BYTE1(v18);
    v15[9] = BYTE2(v18);
    v15[8] = HIBYTE(v18);
    v15[7] = v19;
    v15[11] = v18;
    if ( v16 >= 0x10 )
    {
      v20 = v15[13] & 0xF0;
      v15[12] &= 0xF0u;
      v15[13] = v20;
      v21 = *(_DWORD *)(a1 + 68) / *(_DWORD *)(a1 + 64);
      if ( v21 > 1 )
      {
        do
        {
          v21 >>= 1;
          v22 = v20 ^ (v20 ^ (v20 + 1)) & 0xF;
          v20 = v22;
        }
        while ( v21 > 1 );
        v15[13] = v22;
      }
      v23 = v15[14] & 0xC0;
      v15[15] = 0;
      v15[14] = v23;
      v24 = *(_BYTE *)(*(_QWORD *)(a1 + 176) + 24LL) << 7;
      v15[14] = v24 | v23 & 0x7F;
      v15[14] = v24 | ((*(_BYTE *)(*(_QWORD *)(a1 + 176) + 33LL) & 7) != 1 ? 0 : 0x40);
    }
    v17 = v16 < 0x20 ? 16 : 32;
  }
  else
  {
    v15[6] = BYTE1(v18);
    v15[5] = BYTE2(v18);
    v15[4] = HIBYTE(v18);
    v15[7] = v18;
    if ( v19 < 0xFFFFFFFF )
    {
      v15[3] = v19;
      v15[2] = BYTE1(v19);
      *v15 = BYTE3(v19);
      v15[1] = BYTE2(v19);
    }
    else
    {
      *(_DWORD *)v15 = -1;
    }
  }
  if ( *(_BYTE *)(a3 + 2) == 40 )
    *(_DWORD *)(a3 + 60) = v17;
  else
    *(_DWORD *)(a3 + 16) = v17;
  *(_BYTE *)(a3 + 3) = 1;
  return v4;
}

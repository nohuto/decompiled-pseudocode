/*
 * XREFs of ScsiReadCapacityRequest @ 0x140001D40
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiReadCapacityRequest(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // r10
  unsigned __int8 v9; // di
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rax
  int v13; // ecx
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  int v17; // r9d
  __int64 v18; // r9
  unsigned int v19; // eax
  char v20; // al
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  char i; // dl
  unsigned __int64 v27; // [rsp+58h] [rbp+10h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = 60LL;
    v8 = *(_QWORD *)(a2 + 64);
    v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 24);
    v7 = 16LL;
    v9 = *(_BYTE *)(a2 + 7);
  }
  v10 = 0LL;
  v11 = a1 + 8LL * v9;
  v12 = *(_QWORD *)(v11 + 1672);
  v13 = *(_DWORD *)(v12 + 52);
  v14 = *(_QWORD *)(v12 + 56) - 1LL;
  v27 = v14;
  if ( !v12 || *(_BYTE *)(v12 + 66) || *(_WORD *)(v12 + 48) )
  {
    v14 = 0LL;
    v27 = 0LL;
  }
  v15 = *(_DWORD *)(a2 + v7);
  if ( v15 >= 8 && ((_DWORD)a4 != 16 || v15 >= 0xC) && v8 )
  {
    if ( (_DWORD)a4 != 16 || *a3 != 0x9E )
    {
      *(_BYTE *)(v8 + 6) = BYTE1(v13);
      *(_BYTE *)(v8 + 5) = BYTE2(v13);
      *(_BYTE *)(v8 + 4) = HIBYTE(v13);
      *(_BYTE *)(v8 + 7) = v13;
      if ( v14 >= 0xFFFFFFFF )
      {
        *(_DWORD *)v8 = -1;
      }
      else
      {
        *(_BYTE *)(v8 + 3) = v14;
        *(_BYTE *)(v8 + 2) = BYTE1(v14);
        *(_BYTE *)v8 = BYTE3(v14);
        *(_BYTE *)(v8 + 1) = BYTE2(v14);
      }
      *(_DWORD *)(a2 + v7) = 8;
      goto LABEL_14;
    }
    if ( (a3[1] & 0x1F) != 0x10 )
    {
      LOBYTE(a4) = 32;
      LOBYTE(v10) = 5;
      LOBYTE(v14) = 6;
      NVMeSetSenseData(a2, v14, v10, a4);
      LODWORD(v10) = -1056964601;
      return (unsigned int)v10;
    }
    v17 = 12;
    *(_BYTE *)(v8 + 6) = BYTE1(v27);
    *(_BYTE *)(v8 + 5) = BYTE2(v27);
    *(_BYTE *)(v8 + 4) = BYTE3(v27);
    *(_BYTE *)(v8 + 3) = BYTE4(v27);
    *(_BYTE *)(v8 + 2) = BYTE5(v27);
    *(_BYTE *)(v8 + 1) = BYTE6(v27);
    *(_BYTE *)v8 = HIBYTE(v27);
    *(_BYTE *)(v8 + 10) = BYTE1(v13);
    *(_BYTE *)(v8 + 9) = BYTE2(v13);
    *(_BYTE *)(v8 + 8) = HIBYTE(v13);
    *(_BYTE *)(v8 + 7) = v14;
    *(_BYTE *)(v8 + 11) = v13;
    if ( *(_DWORD *)(a2 + v7) < 0x10u )
    {
LABEL_44:
      *(_DWORD *)(a2 + v7) = v17;
LABEL_14:
      *(_BYTE *)(a2 + 3) = 1;
      return (unsigned int)v10;
    }
    *(_BYTE *)(v8 + 12) &= 0xF0u;
    v18 = *(_QWORD *)(v11 + 1672);
    v19 = *(_DWORD *)(v18 + 104);
    if ( !v19 && !*(_DWORD *)(a1 + 144) )
    {
      v20 = *(_BYTE *)(v8 + 13);
      if ( *(_DWORD *)(v18 + 52) == 512 )
        *(_BYTE *)(v8 + 13) = v20 & 0xF0 | 3;
      else
        *(_BYTE *)(v8 + 13) = v20 & 0xF0;
LABEL_42:
      *(_BYTE *)(v8 + 14) &= 0xC0u;
      v17 = 16;
      *(_BYTE *)(v8 + 15) = 0;
      *(_BYTE *)(v8 + 14) = *(_BYTE *)(*(_QWORD *)(a1 + 8LL * v9 + 1672) + 65LL) << 7;
      if ( *(_DWORD *)(a2 + v7) >= 0x20u )
        v17 = 32;
      goto LABEL_44;
    }
    v21 = *(_DWORD *)(a1 + 144);
    if ( v19 )
    {
      if ( v21 && v19 >= v21 )
        v19 = *(_DWORD *)(a1 + 144);
    }
    else
    {
      v19 = *(_DWORD *)(a1 + 144);
      if ( !v21 )
      {
        v24 = 1;
LABEL_35:
        v25 = v24 / *(_DWORD *)(v18 + 52);
        if ( v25 )
        {
          for ( i = 0; v25 > 1; ++i )
            v25 >>= 1;
          *(_BYTE *)(v8 + 13) ^= (i ^ *(_BYTE *)(v8 + 13)) & 0xF;
        }
        else
        {
          *(_BYTE *)(v8 + 13) &= 0xF0u;
        }
        goto LABEL_42;
      }
    }
    v22 = (v19 - 1) | ((v19 - 1) >> 1) | (((v19 - 1) | ((v19 - 1) >> 1)) >> 2);
    v23 = v22 | (v22 >> 4) | ((v22 | (v22 >> 4)) >> 8);
    v24 = (v23 | HIWORD(v23)) + 1;
    goto LABEL_35;
  }
  LOBYTE(a4) = 36;
  LOBYTE(v10) = 5;
  LOBYTE(v14) = 6;
  NVMeSetSenseData(a2, v14, v10, a4);
  return 3238002692LL;
}

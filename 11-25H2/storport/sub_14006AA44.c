/*
 * XREFs of sub_14006AA44 @ 0x14006AA44
 * Callers:
 *     sub_14017AB2C @ 0x14017AB2C (sub_14017AB2C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140069778 @ 0x140069778 (sub_140069778.c)
 *     sub_1400A85C4 @ 0x1400A85C4 (sub_1400A85C4.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_14006AA44(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 *v3; // rbp
  unsigned int v6; // ebx
  unsigned int v7; // r13d
  char v8; // al
  int v9; // eax
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  int v12; // eax
  void *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // rcx
  unsigned int v20; // ebp
  unsigned int v21; // r12d
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  void *v26; // rcx
  unsigned int i; // esi
  __int64 v28; // r14
  void *v29; // rcx
  unsigned int v31; // [rsp+70h] [rbp+8h]
  unsigned int v32; // [rsp+78h] [rbp+10h]

  v3 = (unsigned __int16 *)(a2 + 12);
  v6 = 0;
  v7 = 0;
  if ( *(_DWORD *)(a2 + 12) != 1 )
    goto LABEL_47;
  v8 = *(_BYTE *)(a2 + 5);
  if ( (v8 & 1) != 0 )
  {
    v31 = 3;
  }
  else if ( (v8 & 2) != 0 )
  {
    v31 = 7;
  }
  else
  {
    if ( (v8 & 4) == 0 )
      goto LABEL_47;
    v31 = 15;
  }
  v9 = *(unsigned __int16 *)(a2 + 22);
  v10 = *(unsigned __int16 *)(a2 + 8) << 10;
  v32 = v10;
  v11 = 28 * v9 + 12;
  if ( (unsigned int)(28 * v9) >= 0xFFFFFFF4 )
    goto LABEL_47;
  v12 = sub_140069778();
  v13 = *(void **)(a1 + 5624);
  if ( v12 )
  {
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0x72436152u);
      *(_QWORD *)(a1 + 5624) = 0LL;
    }
  }
  else if ( v13 )
  {
    goto LABEL_15;
  }
  v14 = sub_1400143E0(64LL, v11, 1917018450LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 5624) = v14;
  v13 = (void *)v14;
  if ( !v14 )
  {
LABEL_13:
    v6 = -1056964605;
LABEL_48:
    v26 = *(void **)(a1 + 5624);
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0x72436152u);
      *(_QWORD *)(a1 + 5624) = 0LL;
    }
    if ( *(_QWORD *)(a3 + 72) )
    {
      for ( i = 0; i < *(_DWORD *)(a3 + 56); ++i )
      {
        v28 = *(_QWORD *)(a3 + 72);
        v29 = *(void **)(v28 + 72LL * i + 48);
        if ( v29 )
        {
          ExFreePoolWithTag(v29, 0x72436152u);
          *(_QWORD *)(v28 + 72LL * i + 48) = 0LL;
        }
      }
      ExFreePoolWithTag(*(PVOID *)(a3 + 72), 0x72436152u);
      *(_QWORD *)(a3 + 72) = 0LL;
    }
    return v6;
  }
LABEL_15:
  memmove(v13, v3, v11);
  if ( *(_QWORD *)(a3 + 72) )
    goto LABEL_42;
  v15 = v3[4];
  *(_BYTE *)(a3 + 64) &= ~1u;
  *(_DWORD *)(a3 + 56) = v15;
  v16 = *(unsigned int *)(a3 + 56);
  *(_DWORD *)(a3 + 80) = 0;
  if ( (unsigned __int64)(72 * v16) > 0xFFFFFFFF )
    goto LABEL_47;
  v17 = sub_1400143E0(64LL, (unsigned int)(72 * v16), 1917018450LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a3 + 72) = v17;
  if ( !v17 )
    goto LABEL_13;
  v18 = 0;
  if ( !v3[5] )
    goto LABEL_47;
  do
  {
    v19 = 14LL * v18;
    if ( *(_DWORD *)&v3[v19 + 14] == 1 )
    {
      if ( *(_DWORD *)&v3[v19 + 12] == 1 )
      {
        sub_1400A85C4(
          a1,
          a3,
          -1056964602,
          (unsigned int)L"NVMe ICE interface has invalid 128-bit key size for XTS-AES.",
          3);
      }
      else if ( *(_DWORD *)&v3[v19 + 12] == 2 && v7 <= 0x10 )
      {
        v7 = 16;
      }
    }
    else if ( *(_DWORD *)&v3[v19 + 14] == 3 )
    {
      if ( (*(_DWORD *)&v3[v19 + 12] == 1 || *(_DWORD *)&v3[v19 + 12] == 2) && v7 <= 0x20 )
        v7 = 32;
    }
    else if ( *(_DWORD *)&v3[v19 + 14] == 4 && *(_DWORD *)&v3[v19 + 12] == 1 )
    {
      v7 = 64;
    }
    ++v18;
  }
  while ( v18 < v3[5] );
  if ( !v7 )
  {
LABEL_47:
    v6 = -1056964602;
    goto LABEL_48;
  }
  v20 = 0;
  if ( *(_DWORD *)(a3 + 56) )
  {
    v21 = v7 + 16;
    while ( 1 )
    {
      v22 = *(_QWORD *)(a3 + 72);
      v23 = 9LL * v20;
      *(_BYTE *)(v22 + 8 * v23 + 64) &= ~1u;
      *(_DWORD *)(v22 + 8 * v23) = v20;
      if ( v21 < 0x10 )
        goto LABEL_47;
      v24 = sub_1400143E0(64LL, v21, 1917018450LL, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(v22 + 72LL * v20 + 48) = v24;
      if ( !v24 )
      {
        v6 = -1056964605;
        goto LABEL_48;
      }
      if ( ++v20 >= *(_DWORD *)(a3 + 56) )
      {
        v10 = v32;
        break;
      }
    }
  }
  *(_DWORD *)(a3 + 60) = v7;
LABEL_42:
  v25 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 112) |= 0x10u;
  *(_QWORD *)(a1 + 6192) = a3;
  if ( v31 > *(_DWORD *)(v25 + 152) )
    *(_DWORD *)(v25 + 152) = v31;
  if ( *(_DWORD *)(a1 + 408) > v10 )
    *(_DWORD *)(a1 + 408) = v10;
  return v6;
}

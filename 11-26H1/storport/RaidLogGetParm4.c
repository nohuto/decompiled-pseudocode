/*
 * XREFs of RaidLogGetParm4 @ 0x1400160C0
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RaidLogGetParm4(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // r10d
  unsigned __int8 v3; // r11
  unsigned __int8 v4; // r15
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // di
  unsigned __int8 v7; // si
  int v8; // r12d
  char v9; // al
  int v10; // ebp
  unsigned int v11; // r9d
  int v12; // ebx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  unsigned __int64 v17; // r9
  int v18; // esi
  __int64 v19; // rdi
  unsigned __int8 *v21; // rcx
  int v22; // esi
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // r11
  unsigned int v30; // r8d
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // r11

  v1 = *(_QWORD *)(a1 + 168);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 255;
  v9 = *(_BYTE *)(v1 + 2);
  v10 = 0;
  if ( v9 == 40 )
  {
    v11 = *(_DWORD *)(v1 + 20);
    v12 = 40;
  }
  else
  {
    v11 = *(unsigned __int8 *)(v1 + 2);
    v12 = v11;
  }
  v13 = *(_QWORD *)(a1 + 168);
  if ( v9 != 40 )
    v13 = 0LL;
  if ( v11 )
  {
    if ( v11 != 23 )
    {
      if ( v11 != 36 )
      {
        if ( v11 != 37 )
          return (unsigned __int64)v11 << 24;
        if ( v9 != 40 )
          return (unsigned __int8)*(_DWORD *)(v1 + 64) | (unsigned __int64)((*(_DWORD *)(v1 + 8) | (((v12 << 8) | (unsigned int)*(unsigned __int8 *)(v1 + 4)) << 8)) << 8);
        v23 = *(_DWORD *)(v13 + 56);
        v24 = 0;
        if ( v23 )
        {
          while ( 1 )
          {
            v34 = *(unsigned int *)(v13 + 4LL * v24 + 120);
            if ( (unsigned int)v34 >= 0x80 )
            {
              v35 = *(unsigned int *)(v13 + 16);
              if ( (unsigned int)v34 <= (unsigned int)v35 )
              {
                v36 = v13 + v34;
                if ( *(_DWORD *)(v13 + v34) == 98 && v34 + 24 <= v35 )
                  break;
              }
            }
            if ( ++v24 >= v23 )
              return (unsigned __int8)v2 | (unsigned __int64)((v8 | ((v4 | 0x2500u) << 8)) << 8);
          }
          v4 = *(_BYTE *)(v36 + 8);
          v8 = *(_DWORD *)(v36 + 12);
          v2 = *(_DWORD *)(v36 + 16);
        }
        return (unsigned __int8)v2 | (unsigned __int64)((v8 | ((v4 | 0x2500u) << 8)) << 8);
      }
      if ( v9 != 40 )
        return *(unsigned __int8 *)(v1 + 4) | (unsigned __int64)((*(_DWORD *)(v1 + 64) | ((*(_DWORD *)(v1 + 8) | (v12 << 8)) << 8)) << 8);
      v25 = *(_DWORD *)(v13 + 56);
      v26 = 0;
      if ( v25 )
      {
        while ( 1 )
        {
          v27 = *(unsigned int *)(v13 + 4LL * v26 + 120);
          if ( (unsigned int)v27 >= 0x80 )
          {
            v28 = *(unsigned int *)(v13 + 16);
            if ( (unsigned int)v27 <= (unsigned int)v28 )
            {
              v29 = v13 + v27;
              if ( *(_DWORD *)(v13 + v27) == 97 && v27 + 24 <= v28 )
                break;
            }
          }
          if ( ++v26 >= v25 )
            return v5 | (unsigned __int64)(int)((v10 | ((v2 | 0x2400) << 8)) << 8);
        }
        v2 = *(_DWORD *)(v29 + 12);
        v10 = *(_DWORD *)(v29 + 16);
        v5 = *(_BYTE *)(v29 + 8);
      }
      return v5 | (unsigned __int64)(int)((v10 | ((v2 | 0x2400) << 8)) << 8);
    }
    if ( v9 != 40 )
      return *(unsigned __int8 *)(v1 + 9) | (unsigned __int64)(((v12 << 8) | *(unsigned __int8 *)(v1 + 4)) << 16);
    v30 = *(_DWORD *)(v13 + 56);
    if ( v30 )
    {
      while ( 1 )
      {
        v31 = *(unsigned int *)(v13 + 4LL * v2 + 120);
        if ( (unsigned int)v31 >= 0x80 )
        {
          v32 = *(unsigned int *)(v13 + 16);
          if ( (unsigned int)v31 <= (unsigned int)v32 )
          {
            v33 = v13 + v31;
            if ( *(_DWORD *)(v13 + v31) == 96 && v31 + 24 <= v32 )
              break;
          }
        }
        if ( ++v2 >= v30 )
          return v7 | ((v6 | 0x1700LL) << 16);
      }
      v6 = *(_BYTE *)(v33 + 8);
      v7 = *(_BYTE *)(v33 + 9);
    }
    return v7 | ((v6 | 0x1700LL) << 16);
  }
  if ( v9 != 40 )
    return *(unsigned __int8 *)(v1 + 8) | (unsigned __int64)(((((v12 << 8) | *(unsigned __int8 *)(v1 + 72)) << 8) | *(unsigned __int8 *)(v1 + 9)) << 8);
  if ( *(_BYTE *)(v13 + 2) != 40 )
    return (unsigned __int64)v3 << 16;
  if ( *(_DWORD *)(v13 + 20) )
    return (unsigned __int64)v3 << 16;
  v14 = *(_DWORD *)(v13 + 56);
  v15 = 0;
  if ( !v14 )
    return (unsigned __int64)v3 << 16;
  while ( 1 )
  {
    v16 = *(unsigned int *)(v13 + 4LL * v15 + 120);
    if ( (unsigned int)v16 < 0x80 )
      goto LABEL_14;
    v17 = *(unsigned int *)(v13 + 16);
    if ( (unsigned int)v16 >= (unsigned int)v17 )
      goto LABEL_14;
    v18 = *(_DWORD *)(v13 + v16);
    v19 = v13 + v16;
    if ( v18 == 64 )
    {
      if ( v16 + 40 <= v17 )
      {
        if ( !*(_BYTE *)(v19 + 10) )
          return (unsigned __int64)v3 << 16;
LABEL_20:
        v21 = (unsigned __int8 *)(v19 + 24);
        goto LABEL_21;
      }
      goto LABEL_14;
    }
    v22 = v18 - 65;
    if ( v22 )
      break;
    if ( v16 + 56 <= v17 )
    {
      if ( !*(_BYTE *)(v19 + 10) )
        return (unsigned __int64)v3 << 16;
      goto LABEL_20;
    }
LABEL_14:
    if ( ++v15 >= v14 )
      return (unsigned __int64)v3 << 16;
  }
  if ( v22 != 1 || v16 + 40 > v17 )
    goto LABEL_14;
  v21 = (unsigned __int8 *)(v19 + 32);
  if ( !*(_DWORD *)(v19 + 12) )
    v21 = 0LL;
LABEL_21:
  if ( v21 )
    v3 = *v21;
  return (unsigned __int64)v3 << 16;
}

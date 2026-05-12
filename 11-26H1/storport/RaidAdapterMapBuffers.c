/*
 * XREFs of RaidAdapterMapBuffers @ 0x140027920
 * Callers:
 *     StorUnitExecuteNvmeSrb @ 0x1400034B4 (StorUnitExecuteNvmeSrb.c)
 *     RaidUnitClaimIrp @ 0x140014BFC (RaidUnitClaimIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterMapBuffers(int *a1, __int64 a2)
{
  char v2; // r9
  __int64 v4; // rax
  __int64 v5; // rbx
  char v6; // r8
  __int64 v7; // r15
  _QWORD *v8; // rbp
  unsigned int v9; // edi
  int v10; // r11d
  int v11; // ecx
  int *v12; // rax
  int v13; // r11d
  __int64 v14; // rsi
  int v15; // r14d
  __int64 v16; // rdi
  char *v17; // rcx
  __int64 v18; // rdi
  char *v19; // rax
  __int64 v20; // rdi
  char v22; // al
  int v23; // eax
  unsigned int v24; // r12d
  unsigned int v25; // r14d
  __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  int v28; // r13d
  __int64 v29; // rax
  __int64 v30; // rdx
  char *v31; // rax
  int v32; // r13d
  unsigned int v33; // r8d
  unsigned int v34; // r9d
  __int64 v35; // rcx
  unsigned __int64 v36; // r11
  __int64 v37; // rsi
  char *v38; // rcx
  __int64 v39; // rsi
  char *v40; // r8
  unsigned int v41; // r11d
  unsigned int v42; // r9d
  __int64 v43; // rcx
  unsigned __int64 v44; // rdi
  __int64 v45; // [rsp+80h] [rbp+18h]

  v2 = 0;
  if ( !*(_QWORD *)(a2 + 8) )
    return 0LL;
  v4 = 96LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v6 = *(_BYTE *)(v5 + 2);
  if ( v6 != 40 )
    v4 = 48LL;
  v7 = 0LL;
  v8 = *(_QWORD **)(v4 + v5);
  if ( v6 != 40 )
  {
    v9 = *(unsigned __int8 *)(v5 + 2);
    v10 = *(_DWORD *)(v5 + 12);
    v45 = *(_QWORD *)(v5 + 24);
    if ( !v6 )
      v2 = *(_BYTE *)(v5 + 72);
    goto LABEL_7;
  }
  v9 = *(_DWORD *)(v5 + 20);
  v10 = *(_DWORD *)(v5 + 24);
  v45 = *(_QWORD *)(v5 + 64);
  if ( v9 )
    goto LABEL_7;
  v24 = *(_DWORD *)(v5 + 56);
  v25 = 0;
  if ( !v24 )
    goto LABEL_7;
  while ( 1 )
  {
    v26 = *(unsigned int *)(v5 + 4LL * v25 + 120);
    if ( (unsigned int)v26 < 0x80 )
      goto LABEL_40;
    v27 = *(unsigned int *)(v5 + 16);
    if ( (unsigned int)v26 >= (unsigned int)v27 )
      goto LABEL_40;
    v28 = *(_DWORD *)(v26 + v5);
    v29 = v26 + v5;
    if ( v28 == 64 )
    {
      if ( v26 + 40 <= v27 )
      {
        if ( !*(_BYTE *)(v29 + 10) )
          goto LABEL_7;
LABEL_52:
        v31 = (char *)(v29 + 24);
        goto LABEL_53;
      }
      goto LABEL_40;
    }
    v32 = v28 - 65;
    if ( v32 )
      break;
    if ( v26 + 56 <= v27 )
    {
      if ( !*(_BYTE *)(v29 + 10) )
        goto LABEL_7;
      goto LABEL_52;
    }
LABEL_40:
    if ( ++v25 >= v24 )
      goto LABEL_7;
  }
  if ( v32 != 1 || v26 + 40 > v27 )
    goto LABEL_40;
  if ( !*(_DWORD *)(v29 + 12) )
    goto LABEL_7;
  v31 = (char *)(v29 + 32);
LABEL_53:
  if ( v31 )
    v2 = *v31;
LABEL_7:
  if ( (v10 & 0xC0) == 0 || !v45 && !v8[13] )
    return 0LL;
  v11 = *a1;
  if ( *a1 == 1094997074 )
  {
    v12 = a1 + 94;
  }
  else
  {
    v12 = a1 + 42;
    if ( v11 != 1314275652 )
      v12 = 0LL;
  }
  if ( v9 <= 0x17 )
  {
    v13 = 8389124;
    if ( _bittest(&v13, v9) )
      goto LABEL_13;
  }
  if ( v12 )
  {
    v22 = *((_BYTE *)v12 + 97);
    switch ( v22 )
    {
      case 1:
        goto LABEL_27;
      case 3:
        goto LABEL_13;
      case 2:
LABEL_27:
        if ( v9 || ((v2 - 8) & 0x5D) != 0 )
        {
LABEL_13:
          v14 = v8[13];
          v15 = 32;
          v16 = v8[23];
          if ( *(_BYTE *)(a2 + 64) )
            v15 = 16;
          if ( (*(_BYTE *)(v14 + 10) & 5) != 0 )
            v17 = *(char **)(v14 + 24);
          else
            v17 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v14, 0, MmCached, 0LL, 0, v15 | 0x40000000u);
          if ( v17 )
          {
            if ( v16 )
              v18 = v16 - *(unsigned int *)(v14 + 44) - *(_QWORD *)(v14 + 32);
            else
              v18 = 0LL;
            v19 = &v17[v18];
            if ( *(_BYTE *)(v5 + 2) == 40 )
              *(_QWORD *)(v5 + 64) = v19;
            else
              *(_QWORD *)(v5 + 24) = v19;
            v20 = v8[17];
            if ( !v20 )
              return 0LL;
            v37 = v8[24];
            if ( (*(_BYTE *)(v20 + 10) & 5) != 0 )
              v38 = *(char **)(v20 + 24);
            else
              v38 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v20, 0, MmCached, 0LL, 0, v15 | 0x40000000u);
            if ( v38 )
            {
              if ( v37 )
                v39 = v37 - *(unsigned int *)(v20 + 44) - *(_QWORD *)(v20 + 32);
              else
                v39 = 0LL;
              v40 = &v38[v39];
              if ( *(_BYTE *)(v5 + 2) == 40 && (*(_BYTE *)(v5 + 24) & 0xC0) == 0xC0 )
              {
                v41 = *(_DWORD *)(v5 + 56);
                v42 = 0;
                if ( v41 )
                {
                  while ( 1 )
                  {
                    v43 = *(unsigned int *)(v5 + 4LL * v42 + 120);
                    if ( (unsigned int)v43 >= 0x80 )
                    {
                      v44 = *(unsigned int *)(v5 + 16);
                      if ( (unsigned int)v43 <= (unsigned int)v44 && *(_DWORD *)(v43 + v5) == 1 && v43 + 24 <= v44 )
                        break;
                    }
                    if ( ++v42 >= v41 )
                      goto LABEL_76;
                  }
                  v7 = v43 + v5;
                }
              }
LABEL_76:
              *(_QWORD *)(v7 + 16) = v40;
              return 0LL;
            }
          }
          return 3221225626LL;
        }
        break;
    }
  }
  if ( v11 == 1094997074 )
  {
    v23 = *((unsigned __int8 *)a1 + 4434);
  }
  else
  {
    if ( v11 != 1314275652 )
      return 0LL;
    v23 = ((unsigned int)a1[36] >> 12) & 1;
  }
  if ( !v23 )
    return 0LL;
  if ( v6 != 40 )
  {
    *(_QWORD *)(v5 + 24) = 0LL;
    return 0LL;
  }
  v30 = 0LL;
  if ( (*(_BYTE *)(v5 + 24) & 0xC0) == 0xC0 )
  {
    v33 = *(_DWORD *)(v5 + 56);
    v34 = 0;
    if ( v33 )
    {
      while ( 1 )
      {
        v35 = *(unsigned int *)(v5 + 4LL * v34 + 120);
        if ( (unsigned int)v35 >= 0x80 )
        {
          v36 = *(unsigned int *)(v5 + 16);
          if ( (unsigned int)v35 <= (unsigned int)v36 && *(_DWORD *)(v35 + v5) == 1 && v35 + 24 <= v36 )
            break;
        }
        if ( ++v34 >= v33 )
          goto LABEL_48;
      }
      v30 = v35 + v5;
    }
  }
LABEL_48:
  *(_QWORD *)(v5 + 64) = 0LL;
  if ( !v30 )
    return 0LL;
  *(_QWORD *)(v30 + 16) = 0LL;
  return 0LL;
}

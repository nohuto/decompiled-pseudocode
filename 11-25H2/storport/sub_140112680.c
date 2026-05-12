/*
 * XREFs of sub_140112680 @ 0x140112680
 * Callers:
 *     sub_1400F76DC @ 0x1400F76DC (sub_1400F76DC.c)
 *     sub_1400F844C @ 0x1400F844C (sub_1400F844C.c)
 *     sub_1400FD098 @ 0x1400FD098 (sub_1400FD098.c)
 *     sub_1400FDA54 @ 0x1400FDA54 (sub_1400FDA54.c)
 *     sub_14010362C @ 0x14010362C (sub_14010362C.c)
 *     sub_140103A50 @ 0x140103A50 (sub_140103A50.c)
 *     sub_140111E3C @ 0x140111E3C (sub_140111E3C.c)
 *     sub_140111FC4 @ 0x140111FC4 (sub_140111FC4.c)
 *     sub_14011206C @ 0x14011206C (sub_14011206C.c)
 *     sub_14011212C @ 0x14011212C (sub_14011212C.c)
 *     sub_1401121D4 @ 0x1401121D4 (sub_1401121D4.c)
 *     sub_140112294 @ 0x140112294 (sub_140112294.c)
 *     sub_1401128A8 @ 0x1401128A8 (sub_1401128A8.c)
 *     sub_140112A70 @ 0x140112A70 (sub_140112A70.c)
 *     sub_140112B64 @ 0x140112B64 (sub_140112B64.c)
 *     sub_140112BBC @ 0x140112BBC (sub_140112BBC.c)
 *     sub_140112C94 @ 0x140112C94 (sub_140112C94.c)
 *     sub_140112E48 @ 0x140112E48 (sub_140112E48.c)
 *     sub_140112EA4 @ 0x140112EA4 (sub_140112EA4.c)
 *     sub_140112F9C @ 0x140112F9C (sub_140112F9C.c)
 *     sub_1401130D0 @ 0x1401130D0 (sub_1401130D0.c)
 *     sub_140113264 @ 0x140113264 (sub_140113264.c)
 *     sub_1401133D8 @ 0x1401133D8 (sub_1401133D8.c)
 *     sub_1401135B8 @ 0x1401135B8 (sub_1401135B8.c)
 *     sub_1401138CC @ 0x1401138CC (sub_1401138CC.c)
 *     sub_140113BA0 @ 0x140113BA0 (sub_140113BA0.c)
 *     sub_140113D7C @ 0x140113D7C (sub_140113D7C.c)
 *     sub_140113EA8 @ 0x140113EA8 (sub_140113EA8.c)
 * Callees:
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

char __fastcall sub_140112680(__int64 a1, char a2, char a3, char a4, char a5)
{
  bool v6; // zf
  __int64 v7; // rax
  _DWORD *v8; // r11
  char v9; // r10
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  void *v16; // rsi
  char v17; // bl
  unsigned int v18; // ebp
  unsigned int v19; // r10d
  unsigned int *v20; // r9
  unsigned __int64 v21; // r8
  char v22; // bl
  unsigned __int8 v23; // bp
  unsigned int v24; // r11d
  unsigned int v25; // r10d
  unsigned int *v26; // r9
  unsigned __int64 v27; // r8
  unsigned int v28; // ebx
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF
  __int16 v31; // [rsp+30h] [rbp-18h]

  *(_BYTE *)(a1 + 3) = a2;
  v31 = 0;
  Src = 0LL;
  LOBYTE(Src) = -16;
  BYTE7(Src) = 10;
  v6 = *(_BYTE *)(a1 + 2) == 40;
  BYTE2(Src) = a3 & 0xF;
  LOBYTE(v7) = a5;
  BYTE12(Src) = a4;
  v8 = (_DWORD *)(a1 + 20);
  BYTE13(Src) = a5;
  if ( v6 )
  {
    v9 = 0;
    if ( !*v8 )
    {
      v10 = 0LL;
      if ( *(_DWORD *)(a1 + 56) )
      {
        while ( 1 )
        {
          v11 = *(unsigned int *)(a1 + 4 * v10 + 120);
          if ( (unsigned int)v11 >= 0x80 )
          {
            v12 = *(unsigned int *)(a1 + 16);
            if ( (unsigned int)v11 < (unsigned int)v12 )
              break;
          }
LABEL_11:
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 56) )
            goto LABEL_17;
        }
        v13 = (unsigned int)v11;
        v14 = *(_DWORD *)(v11 + a1) - 64;
        if ( !v14 )
          goto LABEL_9;
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
          {
LABEL_9:
            if ( v13 + 40 <= v12 )
            {
              *(_BYTE *)(v13 + a1 + 8) = 2;
              goto LABEL_17;
            }
          }
        }
        else if ( v13 + 56 <= v12 )
        {
          v9 = 1;
          *(_BYTE *)(v13 + a1 + 8) = 2;
        }
        if ( v9 )
          goto LABEL_17;
        goto LABEL_11;
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 4) = 2;
  }
LABEL_17:
  v16 = 0LL;
  if ( *(_BYTE *)(a1 + 2) != 40 )
  {
    v16 = *(void **)(a1 + 32);
    v23 = *(_BYTE *)(a1 + 11);
    goto LABEL_51;
  }
  v17 = 0;
  if ( !*v8 )
  {
    v18 = *(_DWORD *)(a1 + 56);
    v19 = 0;
    if ( v18 )
    {
      v20 = (unsigned int *)(a1 + 120);
      do
      {
        v7 = *v20;
        if ( (unsigned int)v7 >= 0x80 )
        {
          v21 = *(unsigned int *)(a1 + 16);
          if ( (unsigned int)v7 < (unsigned int)v21 )
          {
            if ( *(_DWORD *)(v7 + a1) == 64 )
            {
              if ( v7 + 40 <= v21 )
              {
                v16 = *(void **)(v7 + a1 + 16);
                break;
              }
            }
            else if ( *(_DWORD *)(v7 + a1) == 65 )
            {
              if ( v7 + 56 <= v21 )
              {
                v16 = *(void **)(v7 + a1 + 16);
                v17 = 1;
              }
            }
            else if ( *(_DWORD *)(v7 + a1) == 66 && v7 + 40 <= v21 )
            {
              v16 = *(void **)(v7 + a1 + 24);
              break;
            }
            if ( v17 )
              break;
          }
        }
        ++v19;
        ++v20;
      }
      while ( v19 < v18 );
    }
  }
  v22 = 0;
  v23 = 0;
  if ( !*v8 )
  {
    v24 = *(_DWORD *)(a1 + 56);
    v25 = 0;
    if ( v24 )
    {
      v26 = (unsigned int *)(a1 + 120);
      while ( 1 )
      {
        v7 = *v26;
        if ( (unsigned int)v7 >= 0x80 )
        {
          v27 = *(unsigned int *)(a1 + 16);
          if ( (unsigned int)v7 < (unsigned int)v27 )
            break;
        }
LABEL_45:
        ++v25;
        ++v26;
        if ( v25 >= v24 )
          goto LABEL_51;
      }
      switch ( *(_DWORD *)(v7 + a1) )
      {
        case '@':
          goto LABEL_43;
        case 'A':
          if ( v7 + 56 <= v27 )
          {
            v23 = *(_BYTE *)(v7 + a1 + 9);
            v22 = 1;
          }
          break;
        case 'B':
LABEL_43:
          if ( v7 + 40 <= v27 )
          {
            v23 = *(_BYTE *)(v7 + a1 + 9);
            goto LABEL_51;
          }
          break;
      }
      if ( v22 )
        goto LABEL_51;
      goto LABEL_45;
    }
  }
LABEL_51:
  if ( v16 && v23 )
  {
    v28 = v23;
    memset_0(v16, 0, v23);
    if ( v23 > 0x12u )
      v28 = 18;
    LOBYTE(v7) = (unsigned __int8)memmove(v16, &Src, v28);
    *(_BYTE *)(a1 + 3) |= 0x80u;
  }
  return v7;
}

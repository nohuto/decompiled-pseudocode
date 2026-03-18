/*
 * XREFs of ?bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z @ 0x1401D72E8
 * Callers:
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x1402662BC (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z.c)
 * Callees:
 *     ?pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z @ 0x1401D7460 (-pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall bSpComputeScan(
        struct _SPRITESTATE *a1,
        struct SPRITE *a2,
        int a3,
        int a4,
        struct _SPRITESCAN **a5,
        unsigned __int64 *a6)
{
  int v6; // ebp
  struct SPRITE *v7; // r11
  int v8; // r15d
  struct _SPRITESCAN **v10; // r12
  unsigned __int64 *v11; // r13
  struct _SPRITESCAN *v12; // r10
  unsigned __int64 v13; // rax
  struct _SPRITERANGE *v14; // rax
  struct _SPRITESCAN **v15; // rdx
  int v16; // esi
  struct SPRITE *v17; // rdi
  int v18; // ebx
  int v19; // ecx
  struct _SPRITESCAN *v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 result; // rax
  struct _SPRITERANGE *v23; // rcx
  struct _SPRITESCAN *v24; // [rsp+60h] [rbp+8h] BYREF
  struct SPRITE *v25; // [rsp+68h] [rbp+10h]

  v25 = a2;
  v6 = *((_DWORD *)a1 + 10);
  v7 = a2;
  v8 = *((_DWORD *)a1 + 12);
  v10 = a5;
  v11 = a6;
  v12 = *a5;
  v13 = *a6;
  v24 = v12;
  *(_DWORD *)v12 = a3;
  *((_DWORD *)v12 + 1) = a4;
  *((_QWORD *)v12 + 2) = v13;
  v14 = (struct _SPRITESCAN *)((char *)v12 + 24);
  v15 = (struct _SPRITESCAN **)(*((_QWORD *)a1 + 19) - 56LL);
  a5 = v15;
  while ( 1 )
  {
    v16 = 0;
    v17 = v7;
    v18 = v8;
    while ( v17 )
    {
      v19 = *((_DWORD *)v17 + 20);
      if ( v19 > v6 )
      {
        if ( v19 <= v18 )
          v18 = *((_DWORD *)v17 + 20);
      }
      else if ( *((_DWORD *)v17 + 22) > v6 )
      {
        ++v16;
        if ( v14 >= (struct _SPRITERANGE *)v15 )
        {
          v14 = pSpGrowRanges(a1, v14, &v24, (struct _SPRITERANGE **)&a5);
          if ( !v14 )
            return 0LL;
          v15 = a5;
        }
        *((_QWORD *)v14 + 1) = v17;
        v14 = (struct _SPRITERANGE *)((char *)v14 + 16);
        if ( *((_DWORD *)v17 + 22) <= v18 )
          v18 = *((_DWORD *)v17 + 22);
      }
      v17 = (struct SPRITE *)*((_QWORD *)v17 + 7);
    }
    if ( !v16 )
      break;
    v23 = v14;
    do
    {
      v23 = (struct _SPRITERANGE *)((char *)v23 - 16);
      *(_DWORD *)v23 = v6;
      *((_DWORD *)v23 + 1) = v18;
      --v16;
    }
    while ( v16 );
LABEL_13:
    v6 = v18;
    if ( v18 >= v8 )
    {
      v20 = v24;
      v21 = v14 - v24;
      *v10 = v14;
      *v11 = v21;
      result = 1LL;
      *((_QWORD *)v20 + 1) = v21;
      return result;
    }
    v7 = v25;
  }
  if ( v14 < (struct _SPRITERANGE *)v15 )
  {
LABEL_12:
    *((_QWORD *)v14 + 1) = 0LL;
    *(_DWORD *)v14 = v6;
    *((_DWORD *)v14 + 1) = v18;
    v14 = (struct _SPRITERANGE *)((char *)v14 + 16);
    goto LABEL_13;
  }
  v14 = pSpGrowRanges(a1, v14, &v24, (struct _SPRITERANGE **)&a5);
  if ( v14 )
  {
    v15 = a5;
    goto LABEL_12;
  }
  return 0LL;
}

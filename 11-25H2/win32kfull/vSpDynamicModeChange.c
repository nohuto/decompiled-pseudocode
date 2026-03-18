/*
 * XREFs of vSpDynamicModeChange @ 0x1400E0040
 * Callers:
 *     <none>
 * Callees:
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140013B48 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400DBA64 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1400DE2E0 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400E04FC (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpCorrectHdevReferences@@YAXPEAU_SPRITESTATE@@PEAUHDEV__@@@Z @ 0x1400E05CC (-vSpCorrectHdevReferences@@YAXPEAU_SPRITESTATE@@PEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1400E16A0 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x14020F548 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x14032C3A0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x14032C6DC (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x14032C81C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x14032CC30 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x14032CDA0 (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

void __fastcall vSpDynamicModeChange(HDEV a1, HDEV a2)
{
  HDEV v4; // rdx
  HDEV v5; // rax
  HDEV v6; // r15
  HDEV v7; // r14
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rdi
  struct _SPRITESTATE *v15; // rbx
  struct _SPRITESTATE *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  struct _METASPRITE *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  struct SPRITE *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  HDEV v26; // rdi
  __int64 i; // rsi
  HDEV v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // rsi
  struct _METASPRITE *v33; // rax
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  _BYTE Src[720]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v42[160]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE v43[528]; // [rsp+390h] [rbp+290h] BYREF
  HDEV v44; // [rsp+5B0h] [rbp+4B0h] BYREF
  HDEV v45; // [rsp+5B8h] [rbp+4B8h] BYREF
  struct _SPRITESTATE *v46; // [rsp+5C0h] [rbp+4C0h] BYREF
  struct _SPRITESTATE *v47; // [rsp+5C8h] [rbp+4C8h] BYREF

  XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v42);
  XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v43);
  v45 = a1;
  v44 = v4;
  v5 = v4;
  if ( ((_DWORD)a1[10] & 0x20000) == 0 )
  {
    vSpRemoveAllSpriteOverlapPresents(a1);
    v5 = v44;
  }
  if ( ((_DWORD)v5[10] & 0x20000) == 0 )
  {
    vSpRemoveAllSpriteOverlapPresents(v5);
    v5 = v44;
  }
  v6 = v45 + 20;
  v7 = v5 + 20;
  memmove(Src, v45 + 20, 0x548uLL);
  memmove(v6, v7, 0x548uLL);
  memmove(v7, Src, 0x548uLL);
  v8 = *((_DWORD *)v6 + 294);
  v6[294] = v7[294];
  *((_DWORD *)v7 + 294) = v8;
  RtlInitializeBitMap((PRTL_BITMAP)v6 + 42, (PULONG)v6 + 172, 0x40u);
  RtlInitializeBitMap((PRTL_BITMAP)v7 + 42, (PULONG)v7 + 172, 0x40u);
  vSpCorrectHdevReferences((struct _SPRITESTATE *)v6, a1);
  vSpCorrectHdevReferences((struct _SPRITESTATE *)v7, a2);
  MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v47, (struct PDEVOBJ *)&v45);
  MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v46, (struct PDEVOBJ *)&v44);
  v9 = *((_QWORD *)v6 + 141);
  *((_QWORD *)v6 + 141) = 0LL;
  *((_QWORD *)v6 + 140) = 0LL;
  *((_DWORD *)v6 + 273) = 0;
  if ( v9 )
  {
    do
    {
      v17 = *(_QWORD *)(v9 + 24);
      vSpDeleteSprite((struct SPRITE *)v9);
      v9 = v17;
    }
    while ( v17 );
  }
  v10 = *((_QWORD *)v7 + 141);
  *((_QWORD *)v7 + 141) = 0LL;
  *((_QWORD *)v7 + 140) = 0LL;
  *((_DWORD *)v7 + 273) = 0;
  if ( v10 )
  {
    do
    {
      v18 = *(_QWORD *)(v10 + 24);
      vSpDeleteSprite((struct SPRITE *)v10);
      v10 = v18;
    }
    while ( v18 );
  }
  if ( ((_DWORD)v45[10] & 0x20000) != 0 )
  {
    if ( ((_DWORD)v44[10] & 0x20000) != 0 )
    {
      v11 = *((_QWORD *)v6 + 9);
      if ( v11 )
      {
        do
        {
          v19 = *(_QWORD *)(v11 + 8);
          v20 = pSpTransferMetaSprite(a2, a1, (struct _METASPRITE *)v11);
          if ( v20 )
            *((_DWORD *)v20 + 4) |= 2u;
          v11 = v19;
        }
        while ( v19 );
      }
      v12 = *((_QWORD *)v7 + 9);
      if ( v12 )
      {
        do
        {
          v13 = *(_DWORD *)(v12 + 16);
          v14 = *(_QWORD *)(v12 + 8);
          if ( (v13 & 2) != 0 )
            *(_DWORD *)(v12 + 16) = v13 & 0xFFFFFFFD;
          else
            pSpTransferMetaSprite(a1, a2, (struct _METASPRITE *)v12);
          v12 = v14;
        }
        while ( v14 );
      }
      goto LABEL_60;
    }
  }
  else if ( ((_DWORD)v44[10] & 0x20000) == 0 )
  {
    v21 = *((_QWORD *)v6 + 1);
    if ( v21 )
    {
      do
      {
        v22 = *(_QWORD *)(v21 + 24);
        v23 = pSpTransferSprite(a2, (struct SPRITE *)v21);
        if ( v23 )
          *(_DWORD *)v23 |= 2u;
        v21 = v22;
      }
      while ( v22 );
    }
    v24 = *((_QWORD *)v7 + 1);
    if ( v24 )
    {
      do
      {
        v25 = *(_QWORD *)(v24 + 24);
        if ( (*(_DWORD *)v24 & 2) != 0 )
          *(_DWORD *)v24 &= ~2u;
        else
          pSpTransferSprite(a1, (struct SPRITE *)v24);
        v24 = v25;
      }
      while ( v25 );
    }
    goto LABEL_60;
  }
  v26 = a1;
  if ( ((_DWORD)v45[10] & 0x20000) == 0 )
  {
    v26 = a2;
    a2 = a1;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v26 + 35); i = (unsigned int)(i + 1) )
  {
    v28 = (HDEV)*((_QWORD *)v26 + 18);
    if ( *((HDEV *)v28 + i) == v26 )
    {
      *((_QWORD *)v28 + i) = a2;
      v29 = *((_QWORD *)v26 + 19);
      if ( v29 )
      {
        do
        {
          v30 = *(_QWORD *)(v29 + 8);
          pSpMoveSpriteFromMeta(v28, v26, (struct _METASPRITE *)v29, i);
          v29 = v30;
        }
        while ( v30 );
      }
      goto LABEL_13;
    }
  }
  v31 = *((_QWORD *)a2 + 11);
  if ( v31 )
  {
    do
    {
      v32 = *(_QWORD *)(v31 + 24);
      v33 = pSpConvertSpriteToMeta(v26, a2, (struct SPRITE *)v31);
      if ( v33 )
        *((_DWORD *)v33 + 4) |= 2u;
      v31 = v32;
    }
    while ( v32 );
  }
  v34 = *((_QWORD *)v26 + 19);
  if ( v34 )
  {
    do
    {
      v35 = *(_DWORD *)(v34 + 16);
      v36 = *(_QWORD *)(v34 + 8);
      if ( (v35 & 2) != 0 )
        *(_DWORD *)(v34 + 16) = v35 & 0xFFFFFFFD;
      else
        pSpConvertSpriteFromMeta(a2, v26, (struct _METASPRITE *)v34);
      v34 = v36;
    }
    while ( v36 );
  }
LABEL_60:
  if ( ((_DWORD)v45[10] & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)&v45);
  if ( ((_DWORD)v44[10] & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)&v44);
LABEL_13:
  v15 = v46;
  if ( v46 )
  {
    if ( *((_DWORD *)v46 + 15) )
    {
      v37 = 0LL;
      do
      {
        v38 = *(_QWORD *)(*((_QWORD *)v15 + 8) + 8 * v37);
        if ( *(_DWORD *)(v38 + 168) && (*(_DWORD *)(v38 + 40) & 0x20000) == 0 )
          vSpDirectDriverAccess((struct _SPRITESTATE *)(v38 + 80), 0LL);
        v37 = (unsigned int)(v37 + 1);
      }
      while ( (unsigned int)v37 < *((_DWORD *)v15 + 15) );
    }
    else if ( *((_DWORD *)v46 + 22) && (*(_DWORD *)(*(_QWORD *)v46 + 40LL) & 0x20000) == 0 )
    {
      vSpDirectDriverAccess(v46, 0LL);
    }
  }
  v16 = v47;
  if ( v47 )
  {
    if ( *((_DWORD *)v47 + 15) )
    {
      v39 = 0LL;
      do
      {
        v40 = *(_QWORD *)(*((_QWORD *)v16 + 8) + 8 * v39);
        if ( *(_DWORD *)(v40 + 168) && (*(_DWORD *)(v40 + 40) & 0x20000) == 0 )
          vSpDirectDriverAccess((struct _SPRITESTATE *)(v40 + 80), 0LL);
        v39 = (unsigned int)(v39 + 1);
      }
      while ( (unsigned int)v39 < *((_DWORD *)v16 + 15) );
    }
    else if ( *((_DWORD *)v47 + 22) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v47 + 40LL) & 0x20000) == 0 )
        vSpDirectDriverAccess(v47, 0LL);
    }
  }
}

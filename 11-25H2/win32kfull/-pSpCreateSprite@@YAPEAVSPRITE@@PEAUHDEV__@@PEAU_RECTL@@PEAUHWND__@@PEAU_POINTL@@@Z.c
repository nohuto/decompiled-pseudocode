/*
 * XREFs of ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1400E07BC
 * Callers:
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1400E064C (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140174944 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x14020F548 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x14032C3A0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x14032C81C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x14032CC30 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400DB7DC (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400DB8E8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z @ 0x1400DF78C (-vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1400E099C (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 */

struct SPRITE *__fastcall pSpCreateSprite(HDEV a1, struct _RECTL *a2, HWND a3, struct _RECTL *a4)
{
  _DWORD *v4; // rbx
  Gre::Base *v8; // rcx
  HDEV v9; // rdi
  _DWORD *v10; // rax
  __int64 v11; // rdx
  struct _RECTL *v12; // rax
  LONG top; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  _BYTE v17[16]; // [rsp+20h] [rbp-E8h] BYREF
  struct _SPRITESTATE *v18[24]; // [rsp+30h] [rbp-D8h] BYREF
  HDEV v19; // [rsp+110h] [rbp+8h] BYREF

  v4 = 0LL;
  v19 = a1;
  if ( ((_DWORD)a1[10] & 1) != 0 )
  {
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v17, (struct PDEVOBJ *)&v19);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v18, (struct PDEVOBJ *)&v19);
    Gre::Base::Globals(v8);
    v9 = v19 + 20;
    v10 = (_DWORD *)Win32AllocPoolZInit(272LL, 544240455LL);
    v4 = v10;
    if ( v10 )
    {
      if ( a2 )
      {
        v10[44] = a2->right - a2->left;
        v10[45] = a2->bottom - a2->top;
        v12 = a4;
        if ( !a4 )
          v12 = a2;
        v4[28] = v12->left;
        if ( a4 )
          top = a4->top;
        else
          top = a2->top;
      }
      else
      {
        v10[44] = 0;
        v10[45] = 0;
        v10[28] = 0x80000000;
        top = 0x80000000;
      }
      v4[29] = top;
      *v4 = 0;
      *((_QWORD *)v4 + 2) = v9;
      v4[1] = 4;
      v4[21] = 0x80000000;
      v4[20] = 0x80000000;
      v4[23] = 0x80000000;
      v4[22] = 0x80000000;
      v14 = *((_QWORD *)v9 + 141);
      if ( *((_QWORD *)v9 + 1) == v14 )
      {
        *((_QWORD *)v4 + 3) = v14;
        if ( v14 )
          *(_QWORD *)(v14 + 32) = v4;
        else
          *((_QWORD *)v9 + 2) = v4;
        *((_QWORD *)v9 + 1) = v4;
      }
      else if ( v14 )
      {
        *(_QWORD *)(*(_QWORD *)(v14 + 32) + 24LL) = v4;
        *((_QWORD *)v4 + 4) = *(_QWORD *)(v14 + 32);
        *((_QWORD *)v4 + 3) = v14;
        *(_QWORD *)(v14 + 32) = v4;
      }
      else
      {
        *((_QWORD *)v4 + 4) = *((_QWORD *)v9 + 2);
        *(_QWORD *)(*((_QWORD *)v9 + 2) + 24LL) = v4;
        *((_QWORD *)v9 + 2) = v4;
      }
      vSpRenumberZOrder((struct _SPRITESTATE *)v9);
      v15 = *((_QWORD *)v9 + 3);
      *((_QWORD *)v9 + 3) = v4;
      *((_QWORD *)v4 + 5) = v15;
      if ( v15 )
        *(_QWORD *)(v15 + 48) = v4;
      *((_QWORD *)v4 + 9) = a3;
      vSpOrderInY((struct SPRITE *)v4);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v18, v11);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v17);
  }
  return (struct SPRITE *)v4;
}

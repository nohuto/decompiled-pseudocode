/*
 * XREFs of ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x140185834
 * Callers:
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x14009BA38 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x14018532C (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140186F80 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x140314F7C (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x140315410 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x140315814 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z @ 0x1401863A0 (-vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x140186E6C (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 */

struct SPRITE *__fastcall pSpCreateSprite(HDEV a1, struct _POINTL *a2, HWND a3, struct _POINTL *a4)
{
  _DWORD *v4; // rbx
  Gre::Base *v8; // rcx
  HDEV v9; // rdi
  _DWORD *v10; // rax
  LONG y; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  _BYTE v15[16]; // [rsp+20h] [rbp-E8h] BYREF
  struct _SPRITESTATE *v16[24]; // [rsp+30h] [rbp-D8h] BYREF
  HDEV v17; // [rsp+110h] [rbp+8h] BYREF

  v4 = 0LL;
  v17 = a1;
  if ( ((_DWORD)a1[10] & 1) != 0 )
  {
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v15, (struct PDEVOBJ *)&v17);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v16, (struct PDEVOBJ *)&v17);
    Gre::Base::Globals(v8);
    v9 = v17 + 20;
    v10 = (_DWORD *)Win32AllocPoolZInit(272LL, 544240455LL);
    v4 = v10;
    if ( v10 )
    {
      if ( a2 )
      {
        v10[44] = a2[1].x - a2->x;
        v10[45] = a2[1].y - a2->y;
        if ( !a4 )
          a4 = a2;
        v10[28] = a4->x;
        y = a4->y;
      }
      else
      {
        *((_QWORD *)v10 + 22) = 0LL;
        v10[28] = 0x80000000;
        y = 0x80000000;
      }
      v4[29] = y;
      *v4 = 0;
      *((_QWORD *)v4 + 2) = v9;
      v4[1] = 4;
      v4[21] = 0x80000000;
      v4[20] = 0x80000000;
      v4[23] = 0x80000000;
      v4[22] = 0x80000000;
      v12 = *((_QWORD *)v9 + 141);
      if ( *((_QWORD *)v9 + 1) == v12 )
      {
        *((_QWORD *)v4 + 3) = v12;
        if ( v12 )
          *(_QWORD *)(v12 + 32) = v4;
        else
          *((_QWORD *)v9 + 2) = v4;
        *((_QWORD *)v9 + 1) = v4;
      }
      else if ( v12 )
      {
        *(_QWORD *)(*(_QWORD *)(v12 + 32) + 24LL) = v4;
        *((_QWORD *)v4 + 4) = *(_QWORD *)(v12 + 32);
        *((_QWORD *)v4 + 3) = v12;
        *(_QWORD *)(v12 + 32) = v4;
      }
      else
      {
        *((_QWORD *)v4 + 4) = *((_QWORD *)v9 + 2);
        *(_QWORD *)(*((_QWORD *)v9 + 2) + 24LL) = v4;
        *((_QWORD *)v9 + 2) = v4;
      }
      vSpRenumberZOrder((struct _SPRITESTATE *)v9);
      v13 = *((_QWORD *)v9 + 3);
      *((_QWORD *)v9 + 3) = v4;
      *((_QWORD *)v4 + 5) = v13;
      if ( v13 )
        *(_QWORD *)(v13 + 48) = v4;
      *((_QWORD *)v4 + 9) = a3;
      vSpOrderInY((struct SPRITE *)v4);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v16);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v15);
  }
  return (struct SPRITE *)v4;
}

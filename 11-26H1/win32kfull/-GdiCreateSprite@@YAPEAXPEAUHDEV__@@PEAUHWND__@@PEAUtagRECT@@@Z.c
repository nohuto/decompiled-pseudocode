/*
 * XREFs of ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x14018532C
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1400A34B8 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreTransferDwmStateToSpriteState @ 0x14028A2CC (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x14009BDF8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x140185834 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 */

struct SPRITE *__fastcall GdiCreateSprite(HDEV a1, HWND a2, struct _RECTL *a3)
{
  struct SPRITE *v6; // rbx
  __int64 v7; // r8
  HDEV v8; // rbp
  int v9; // ecx
  struct SPRITE *v11; // rdi
  unsigned int i; // esi
  __int64 v13; // rcx
  struct _POINTL *v14; // r9
  HDEV v15; // rcx
  struct SPRITE *Sprite; // rax
  int v17; // eax
  _BYTE v18[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  HDEV v20; // [rsp+78h] [rbp+20h] BYREF

  v20 = a1;
  v6 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v18, (struct PDEVOBJ *)&v20);
  v8 = v20;
  v9 = *((_DWORD *)v20 + 35);
  if ( v9 )
  {
    v11 = (struct SPRITE *)PALLOCNOZ(8 * v9 + 32, 1836086087LL, v7);
    if ( v11 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= *((_DWORD *)v8 + 35) )
        {
          *(_QWORD *)v11 = a2;
          v17 = *((_DWORD *)v8 + 35);
          *((_DWORD *)v11 + 4) = 0;
          v6 = v11;
          *((_DWORD *)v11 + 5) = v17;
          *((_QWORD *)v11 + 1) = *((_QWORD *)v8 + 19);
          *((_QWORD *)v8 + 19) = v11;
          goto LABEL_3;
        }
        v13 = *((_QWORD *)v8 + 18);
        v14 = 0LL;
        v19 = 0LL;
        v15 = *(HDEV *)(v13 + 8LL * i);
        if ( a3 )
        {
          v14 = (struct _POINTL *)&v19;
          LODWORD(v19) = a3->left - *((_DWORD *)v15 + 644);
          HIDWORD(v19) = a3->top - *((_DWORD *)v15 + 645);
        }
        Sprite = pSpCreateSprite(v15, a3, a2, v14);
        if ( !Sprite )
          break;
        *((_QWORD *)v11 + i + 3) = Sprite;
        *((_QWORD *)Sprite + 1) = v11;
      }
      while ( i )
        vSpDeleteSprite(*((struct SPRITE **)v11 + --i + 3));
      Win32FreePool(v11);
    }
  }
  else
  {
    v6 = pSpCreateSprite(a1, a3, a2, 0LL);
  }
LABEL_3:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v18);
  return v6;
}

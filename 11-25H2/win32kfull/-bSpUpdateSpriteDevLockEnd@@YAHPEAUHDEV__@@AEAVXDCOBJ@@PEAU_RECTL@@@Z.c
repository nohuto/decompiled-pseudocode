/*
 * XREFs of ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1400DED60
 * Callers:
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x14008C6BC (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1400DD258 (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DEF38 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x14021AD7C (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 */

__int64 __fastcall bSpUpdateSpriteDevLockEnd(HDEV a1, struct XDCOBJ *a2, struct _RECTL *a3)
{
  unsigned int updated; // edi
  __int64 v7; // rcx
  int v8; // r10d
  HWND v9; // rdx
  __int64 i; // rbx
  int v12; // r9d
  int v13; // r10d
  struct _METASPRITE *MetaSprite; // r15
  __int64 v15; // rbx
  _BYTE v16[128]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[128]; // [rsp+D0h] [rbp-30h] BYREF
  struct _POINTL v18; // [rsp+180h] [rbp+80h] BYREF
  struct tagSIZE v19; // [rsp+198h] [rbp+98h] BYREF

  updated = 0;
  if ( _bittest((const signed __int32 *)a1 + 10, 0xAu) )
    return 0LL;
  v7 = *(_QWORD *)a2;
  v18 = 0LL;
  v8 = *((_DWORD *)a1 + 35);
  v9 = *(HWND *)(v7 + 472);
  v19 = *(struct tagSIZE *)(v7 + 512);
  if ( v8 )
  {
    MetaSprite = pSpGetMetaSprite((const struct _SPRITESTATE *)(a1 + 20), v9, 0LL, 0);
    if ( MetaSprite )
    {
      v15 = 0LL;
      updated = v12 + 1;
      if ( v13 )
      {
        do
        {
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v17, 0LL);
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v16, a2);
          updated &= bSpUpdateSprite(
                       *((struct SPRITE **)MetaSprite + v15 + 3),
                       (struct OPTAPIDCOBJ *)v17,
                       0LL,
                       &v19,
                       (struct OPTAPIDCOBJ *)v16,
                       &v18,
                       0,
                       0LL,
                       0x40200000u,
                       a3);
          OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v16);
          OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v17);
          v15 = (unsigned int)(v15 + 1);
        }
        while ( (unsigned int)v15 < *((_DWORD *)a1 + 35) );
      }
    }
  }
  else
  {
    i = 0LL;
    if ( v9 )
    {
      for ( i = *((_QWORD *)a1 + 11);
            i && (*(HWND *)(i + 72) != v9 || _bittest((const signed __int32 *)i, 0xAu));
            i = *(_QWORD *)(i + 24) )
      {
        ;
      }
    }
    if ( i )
    {
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v16, 0LL);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v17, a2);
      updated = bSpUpdateSprite(
                  (struct SPRITE *)i,
                  (struct OPTAPIDCOBJ *)v16,
                  0LL,
                  &v19,
                  (struct OPTAPIDCOBJ *)v17,
                  &v18,
                  0,
                  0LL,
                  0x40200000u,
                  a3);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v17);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v16);
    }
  }
  return updated;
}

/*
 * XREFs of ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x140169CC4
 * Callers:
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x140072F20 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140015900 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x14016A02C (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x140255B38 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 */

__int64 __fastcall bSpUpdateSpriteDevLockEnd(HDEV a1, struct XDCOBJ *a2, struct _RECTL *a3)
{
  unsigned int updated; // edi
  __int64 v7; // rcx
  int v8; // r10d
  HWND v9; // rdx
  __int64 v10; // rbx
  int v12; // r9d
  int v13; // r10d
  struct _METASPRITE *MetaSprite; // r15
  __int64 v15; // rsi
  _QWORD v16[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[48]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v18[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v19[48]; // [rsp+100h] [rbp+0h] BYREF
  struct _POINTL v20; // [rsp+160h] [rbp+60h] BYREF
  struct tagSIZE v21; // [rsp+178h] [rbp+78h] BYREF

  updated = 0;
  if ( _bittest((const signed __int32 *)a1 + 10, 0xAu) )
    return 0LL;
  v7 = *(_QWORD *)a2;
  v8 = *((_DWORD *)a1 + 35);
  v20 = 0LL;
  v9 = *(HWND *)(v7 + 472);
  v21 = *(struct tagSIZE *)(v7 + 512);
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
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v16, 0LL);
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v18, a2);
          updated &= bSpUpdateSprite(
                       *((struct SPRITE **)MetaSprite + v15 + 3),
                       (struct OPTAPIDCOBJ *)v16,
                       0LL,
                       &v21,
                       (struct OPTAPIDCOBJ *)v18,
                       &v20,
                       0,
                       0LL,
                       0x40200000u,
                       a3);
          OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v18);
          OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v16);
          v15 = (unsigned int)(v15 + 1);
        }
        while ( (unsigned int)v15 < *((_DWORD *)a1 + 35) );
      }
    }
  }
  else if ( v9 )
  {
    v10 = *((_QWORD *)a1 + 11);
    if ( v10 )
    {
      do
      {
        if ( *(HWND *)(v10 + 72) == v9 && !_bittest((const signed __int32 *)v10, 0xAu) )
          break;
        v10 = *(_QWORD *)(v10 + 24);
      }
      while ( v10 );
      if ( v10 )
      {
        OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v18, 0LL);
        OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v16, a2);
        updated = bSpUpdateSprite(
                    (struct SPRITE *)v10,
                    (struct OPTAPIDCOBJ *)v18,
                    0LL,
                    &v21,
                    (struct OPTAPIDCOBJ *)v16,
                    &v20,
                    0,
                    0LL,
                    0x40200000u,
                    a3);
        v16[0] &= -(__int64)(v17[40] != 0);
        PopThreadGuardedObject(v17);
        DCOBJ::~DCOBJ((DCOBJ *)v16);
        v18[0] &= -(__int64)(v19[40] != 0);
        PopThreadGuardedObject(v19);
        DCOBJ::~DCOBJ((DCOBJ *)v18);
      }
    }
  }
  return updated;
}

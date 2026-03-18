/*
 * XREFs of ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x14009CE1C
 * Callers:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14009CB84 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x14009BDF8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x14009C768 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400A4644 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x140255B38 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 */

__int64 __fastcall GdiDeleteSprite(HDEV a1, HWND a2, _QWORD *a3)
{
  HDEV v6; // rbp
  unsigned int v7; // ebx
  const struct _SPRITESTATE *v8; // rcx
  struct SPRITE *Sprite; // rax
  struct SPRITE *v10; // rbp
  __int64 v12; // rdi
  int v13; // esi
  struct _METASPRITE *MetaSprite; // rdi
  int v15; // r9d
  unsigned int v16; // r10d
  int v17; // esi
  unsigned int v18; // r15d
  __int64 v19; // r14
  int v20; // eax
  _DWORD *v21; // rcx
  unsigned int v22; // r14d
  __int64 v23; // rcx
  __int64 i; // rax
  int v25; // eax
  HDEV v26; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+28h] [rbp-50h]
  _BYTE v28[72]; // [rsp+30h] [rbp-48h] BYREF
  int v30; // [rsp+98h] [rbp+20h]

  v26 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v28, (struct PDEVOBJ *)&v26);
  v6 = v26;
  v7 = 0;
  v8 = (const struct _SPRITESTATE *)(v26 + 20);
  if ( *((_DWORD *)v26 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v8, a2, a3, 0);
    if ( !MetaSprite )
      goto LABEL_3;
    v17 = v15 + 1;
    v18 = 0;
    v30 = v15 + 1;
    if ( !v16 )
      goto LABEL_20;
    do
    {
      v27 = *((_QWORD *)MetaSprite + v18 + 3);
      v19 = *(_QWORD *)(v27 + 128);
      if ( v19 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v19 - 24)) )
      {
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v19 + 248));
        if ( *(_DWORD *)(v19 + 300) )
        {
          v20 = *(_DWORD *)(v19 + 92);
          if ( (v20 & 2) == 0 )
          {
            *(_QWORD *)(v19 + 472) = a1;
            v21 = (_DWORD *)v27;
            *(_DWORD *)(v19 + 92) = v20 | 2;
            *(_QWORD *)(v19 + 480) = a2;
            *(_QWORD *)(v19 + 488) = a3;
            *(_DWORD *)(v19 + 496) = v17;
            *v21 |= 0x400u;
            *((_DWORD *)MetaSprite + 4) |= 0x400u;
          }
          v30 = 0;
        }
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v19 + 248));
      }
      v16 = *((_DWORD *)v6 + 35);
      v18 += v17;
    }
    while ( v18 < v16 );
    if ( v30 )
    {
LABEL_20:
      v22 = 0;
      if ( v16 )
      {
        do
        {
          vSpDeleteSprite(*((struct SPRITE **)MetaSprite + v22 + 3));
          v22 += v17;
        }
        while ( v22 < *((_DWORD *)v6 + 35) );
      }
      v23 = *((_QWORD *)v6 + 19);
      if ( (struct _METASPRITE *)v23 == MetaSprite )
      {
        *((_QWORD *)v6 + 19) = *((_QWORD *)MetaSprite + 1);
      }
      else
      {
        for ( i = *(_QWORD *)(v23 + 8); (struct _METASPRITE *)i != MetaSprite; i = *(_QWORD *)(i + 8) )
          v23 = i;
        *(_QWORD *)(v23 + 8) = *((_QWORD *)MetaSprite + 1);
      }
      Win32FreePool(MetaSprite);
    }
  }
  else
  {
    Sprite = pSpGetSprite(v8, a2, a3);
    v10 = Sprite;
    if ( !Sprite )
    {
LABEL_3:
      v7 = -2143354870;
      goto LABEL_4;
    }
    v12 = *((_QWORD *)Sprite + 16);
    v13 = 1;
    if ( !v12 || !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v12 - 24)) )
      goto LABEL_6;
    W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v12 + 248));
    if ( *(_DWORD *)(v12 + 300) )
    {
      v25 = *(_DWORD *)(v12 + 92);
      if ( (v25 & 2) == 0 )
      {
        *(_QWORD *)(v12 + 472) = a1;
        *(_DWORD *)(v12 + 92) = v25 | 2;
        *(_QWORD *)(v12 + 480) = a2;
        *(_QWORD *)(v12 + 488) = a3;
        *(_DWORD *)(v12 + 496) = 1;
        *(_DWORD *)v10 |= 0x400u;
      }
      v13 = 0;
    }
    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v12 + 248));
    if ( v13 )
LABEL_6:
      vSpDeleteSprite(v10);
  }
LABEL_4:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v28);
  return v7;
}

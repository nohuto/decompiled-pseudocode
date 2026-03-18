/*
 * XREFs of ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x140075588
 * Callers:
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073700 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     GreTransferDwmStateToSpriteState @ 0x14028A2CC (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400725E4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E588 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x14009C768 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6CE8 (--$GreReleaseSemaphoreExclusive@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB3D8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x14016A02C (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x140255B38 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GdiUpdateSprite(
        Gre::Base *a1,
        HWND a2,
        void *a3,
        struct OPTAPIDCOBJ *a4,
        struct _POINTL *a5,
        struct tagSIZE *a6,
        struct OPTAPIDCOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12)
{
  unsigned int updated; // edi
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  struct Gre::Base::SESSION_GLOBALS *v16; // rbx
  struct _RECTL *v17; // r12
  Gre::Base *v18; // r14
  const struct _SPRITESTATE *v19; // rcx
  struct SPRITE *Sprite; // rcx
  struct _METASPRITE *MetaSprite; // rax
  int v23; // r9d
  int v24; // r10d
  __int64 v25; // rsi
  struct _METASPRITE *v26; // rbx
  struct _POINTL *v27; // r8
  __int64 v28; // rax
  int v29; // [rsp+50h] [rbp-71h]
  Gre::Base *v31; // [rsp+60h] [rbp-61h] BYREF
  struct _POINTL v32; // [rsp+68h] [rbp-59h] BYREF
  struct _BLENDFUNCTION *v33; // [rsp+70h] [rbp-51h]
  struct _POINTL *v34; // [rsp+78h] [rbp-49h]
  struct OPTAPIDCOBJ *v35; // [rsp+80h] [rbp-41h]
  struct tagSIZE *v36; // [rsp+88h] [rbp-39h]
  struct OPTAPIDCOBJ *v37; // [rsp+90h] [rbp-31h]
  struct Gre::Base::SESSION_GLOBALS *v38; // [rsp+98h] [rbp-29h]
  _BYTE v39[8]; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-19h] BYREF

  updated = 0;
  v36 = a6;
  v35 = a7;
  v34 = a8;
  v33 = a10;
  v37 = a4;
  v32 = 0LL;
  v29 = 0;
  v15 = Gre::Base::Globals(a1);
  v16 = v15;
  v38 = v15;
  if ( (a11 & 0x200000) == 0 )
  {
    GreAcquireSemaphoreShared<1,>(v15);
    GreAcquireSemaphore<2,>(v16);
    v29 = 1;
  }
  if ( a12 )
    v40 = (__int128)*a12;
  v31 = a1;
  v17 = (struct _RECTL *)&v40;
  if ( !a12 )
    v17 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v39, (struct PDEVOBJ *)&v31);
  PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v31);
  v18 = v31;
  v19 = (Gre::Base *)((char *)v31 + 80);
  if ( *((_DWORD *)v31 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v19, a2, a3, 0);
    if ( MetaSprite )
    {
      v25 = 0LL;
      updated = v23 + 1;
      if ( v24 )
      {
        v26 = MetaSprite;
        do
        {
          v27 = 0LL;
          v28 = *(_QWORD *)(*((_QWORD *)v18 + 18) + 8 * v25);
          if ( a5 )
          {
            v27 = &v32;
            v32.x = a5->x - *(_DWORD *)(v28 + 2576);
            v32.y = a5->y - *(_DWORD *)(v28 + 2580);
          }
          updated &= bSpUpdateSprite(*((struct SPRITE **)v26 + v25 + 3), v37, v27, v36, v35, v34, a9, v33, a11, v17);
          v25 = (unsigned int)(v25 + 1);
        }
        while ( (unsigned int)v25 < *((_DWORD *)v18 + 35) );
        v16 = v38;
      }
    }
  }
  else
  {
    Sprite = pSpGetSprite(v19, a2, a3);
    if ( Sprite )
      updated = bSpUpdateSprite(Sprite, v37, a5, v36, v35, v34, a9, v33, a11, v17);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v39);
  if ( v29 )
  {
    GreReleaseSemaphoreExclusive<2,>(v16);
    GreReleaseSemaphoreShared<1,>(v16);
  }
  return updated;
}

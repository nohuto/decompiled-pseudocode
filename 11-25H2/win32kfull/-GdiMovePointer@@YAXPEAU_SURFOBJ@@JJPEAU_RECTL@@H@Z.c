/*
 * XREFs of ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14008DF34
 * Callers:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x14008D568 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     GreMovePointer @ 0x14008E890 (GreMovePointer.c)
 *     EngpMovePointer @ 0x14008F2A8 (EngpMovePointer.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140174944 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B040 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008CA58 (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008D78C (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008E720 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140094B50 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140095C98 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400DB7DC (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400DB8E8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1400DC060 (-vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1400DC0E4 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400DC1D8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1400DF610 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1400DF7B0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140174C0C (--$GreReleaseSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1402160B0 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1402317E8 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x14026F344 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ??$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14026F428 (--$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBA.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x14032CDF0 (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall GdiMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, int a5)
{
  HDEV hdev; // rax
  struct _SURFOBJ *v8; // r14
  HDEV v9; // rdi
  __int64 v10; // rax
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 i; // rax
  struct SPRITE *v17; // r8
  struct Gre::Base::SESSION_GLOBALS *v18; // rax
  int v19; // esi
  __int64 *v20; // r14
  __int64 v21; // rbx
  __int64 j; // rbx
  __int64 v23; // r13
  struct _RECTL *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // ecx
  HSEMAPHORE v31; // rbx
  struct _GRETHREAD *v32; // rax
  __int128 v34; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D0h]
  struct _RECTL v36; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  HSEMAPHORE v38[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v39[240]; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v40; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL *v41; // [rsp+178h] [rbp+78h] BYREF

  v41 = a4;
  hdev = a1->hdev;
  v40 = 0LL;
  v41 = (struct _RECTL *)hdev;
  v8 = a1;
  v9 = hdev + 20;
  v10 = *((_QWORD *)hdev + 150);
  if ( v10 )
  {
    if ( *((_QWORD *)v9 + 141) != v10 )
    {
      v11 = Gre::Base::Globals((Gre::Base *)a1);
      SEMOBJ<6>::SEMOBJ<6>(&v37, v11);
      a1 = (struct _SURFOBJ *)0xFFFFF78000000004LL;
      v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)(v12 - *((_DWORD *)v9 + 274)) >= *((_DWORD *)v9 + 275) )
      {
        SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v39, (struct PDEVOBJ *)&v41);
        v13 = *((_QWORD *)v9 + 141);
        v14 = *((_QWORD *)v9 + 140);
        v15 = v13;
        for ( i = *(_QWORD *)(v13 + 24); i != v14; i = *(_QWORD *)(i + 24) )
          v15 = i;
        if ( *(_DWORD *)(v15 + 80) == *(_DWORD *)(v14 + 80) && *(_DWORD *)(v15 + 84) == *(_DWORD *)(v14 + 84) )
        {
          while ( v13 != v14 )
          {
            if ( (*(_DWORD *)v13 & 0x20) != 0 )
            {
              bSpUpdatePosition((struct SPRITE *)v13, 0LL, 0, 0);
              break;
            }
            v13 = *(_QWORD *)(v13 + 24);
          }
        }
        else
        {
          bSpUpdatePosition(*((struct SPRITE **)v9 + 141), 0LL, 0, 0);
          v17 = (struct SPRITE *)*((_QWORD *)v9 + 140);
          *((_QWORD *)v9 + 141) = *(_QWORD *)(v13 + 24);
          vSpZorderSprite(v8->hdev, (struct SPRITE *)v13, v17);
          *((_QWORD *)v9 + 140) = v13;
        }
        *((_DWORD *)v9 + 274) = v12;
        SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v39);
      }
      if ( v37 )
        GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v37);
    }
    v18 = Gre::Base::Globals((Gre::Base *)a1);
    v19 = a5;
    v20 = (__int64 *)v18;
    if ( !a5 )
      v19 = (unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<6,Gre::Base::SESSION_GLOBALS>(v18) != 0;
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v41) )
    {
      v21 = *v20 + 1040;
      EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"Sprite", v21);
      GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
        (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedStarveExclusiveInternal,
        v21);
    }
    else
    {
      GreAcquireSemaphore<6,>(v20);
    }
    if ( !v19 )
      GreIncNonRBLockCount(*v20 + 1040);
    SEMOBJ<8>::SEMOBJ<8>(v38, &v41);
    v34 = 0LL;
    v35 = 0LL;
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v39, (struct PDEVOBJ *)&v41);
    if ( a2 == -1 )
    {
      v40.x = 0x7FFFFFFF;
      v40.y = 0x7FFFFFFF;
      for ( j = *((_QWORD *)v9 + 141); j; j = *(_QWORD *)(j + 24) )
      {
        if ( !v19 )
        {
          SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v9 + 30));
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v34, (struct _SPRITESTATE *)v9, (struct _RECTL *)(j + 80));
          SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(j + 248));
          *((_QWORD *)v9 + 168) = j;
        }
        if ( (_QWORD)v34 || v19 )
        {
          bSpUpdatePosition((struct SPRITE *)j, &v40, 0, 0);
          if ( v19 )
            continue;
        }
        *((_QWORD *)v9 + 168) = 0LL;
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(j + 248));
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v34);
        SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(v9 + 30));
      }
    }
    else
    {
      v40.x = a2 - *((_DWORD *)v9 + 270);
      v40.y = a3 - *((_DWORD *)v9 + 271);
      v23 = *((_QWORD *)v9 + 140);
      if ( !v19 )
      {
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v9 + 30));
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v34, (struct _SPRITESTATE *)v9, (struct _RECTL *)(v23 + 80));
        SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v23 + 248));
        *((_QWORD *)v9 + 168) = v23;
      }
      bSpUpdatePosition((struct SPRITE *)v23, &v40, 0, 0);
      if ( !v19 )
      {
        *((_QWORD *)v9 + 168) = 0LL;
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v23 + 248));
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v34);
        SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(v9 + 30));
      }
      v36 = *(struct _RECTL *)(v23 + 80);
      if ( !v19 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v34, (struct _SPRITESTATE *)v9, &v36);
      if ( !(_QWORD)v34 && !v19 || (vSpRedrawSprite((struct SPRITE *)v23), !v19) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v34);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v39);
    if ( !v19 )
      GreDecNonRBLockCount(*v20 + 1040);
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v41) )
      GreReleaseSemaphoreShared<6,>(v20);
    else
      GreReleaseSemaphoreExclusive<6,>(v20);
    v24 = v41;
    if ( (v41[132].left & 0x80u) != 0 )
    {
      v25 = *(_QWORD *)&v41[159].left;
      v26 = 0LL;
      v27 = v25 + 24;
      v28 = -v25;
      v29 = v27 & -(__int64)(v28 != 0);
      if ( v29 )
      {
        v30 = *(_DWORD *)((v27 & -(__int64)(v28 != 0)) + 0x58);
        if ( (v30 & 0x80004000) != 0 && (v30 & 0x200) == 0 )
        {
          v26 = v29 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v29 - 24 + 48));
          v24 = v41;
        }
      }
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v41,
        (struct _SURFOBJ *)((*(_QWORD *)&v24[159].left + 24LL) & -(__int64)(*(_QWORD *)&v24[159].left != 0LL)),
        0LL,
        1u);
      if ( v26 )
        GreUnlockDisplayDevice(*(_QWORD *)(v26 + 48));
    }
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v34);
    v31 = v38[0];
    if ( v38[0] )
    {
      EtwTraceGreLockReleaseSemaphore(L"DevLock", v38[0]);
      v32 = GreGetCurrentThreadCrossSessionCheck();
      if ( v32 )
      {
        if ( (*((_BYTE *)v32 + 16))-- == 1 )
          *(_QWORD *)v32 &= ~0x100uLL;
        if ( !*(_QWORD *)v32 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v31);
    }
  }
}

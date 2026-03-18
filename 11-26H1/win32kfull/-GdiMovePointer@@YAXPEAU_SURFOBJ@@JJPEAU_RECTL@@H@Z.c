/*
 * XREFs of ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14028DA20
 * Callers:
 *     EngpMovePointer @ 0x14001AD74 (EngpMovePointer.c)
 *     ?vMovePointer@@YAXAEAVPDEVOBJ@@HHJ@Z @ 0x14001C0F4 (-vMovePointer@@YAXAEAVPDEVOBJ@@HHJ@Z.c)
 *     GreMovePointer @ 0x14006B170 (GreMovePointer.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140186F80 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001BDBC (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C868 (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001DA44 (-vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140072EE8 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14009FB50 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400BC8B8 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x140169738 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x140186134 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1401863C4 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401A7B8C (--$GreReleaseSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401D0544 (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14026E8E4 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x140296C88 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ??$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140296F68 (--$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBA.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1403159BC (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall GdiMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, int a5)
{
  HDEV hdev; // rdi
  struct _SURFOBJ *v8; // r14
  __int64 v9; // rax
  HDEV v10; // rdi
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 i; // rax
  struct SPRITE *v17; // r8
  struct Gre::Base::SESSION_GLOBALS *v18; // rax
  int v19; // esi
  __int64 *v20; // r14
  __int64 v21; // rbx
  __int64 j; // rbx
  __int64 v23; // r13
  HDEV v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  int v27; // edx
  HSEMAPHORE v28; // rbx
  struct _GRETHREAD *v29; // rax
  struct _POINTL v31; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v32; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h]
  struct _RECTL v34; // [rsp+40h] [rbp-C0h] BYREF
  struct _SPRITESTATE *v35[30]; // [rsp+50h] [rbp-B0h] BYREF
  HDEV v36; // [rsp+150h] [rbp+50h] BYREF
  struct _RECTL *v37; // [rsp+168h] [rbp+68h] BYREF

  v37 = a4;
  hdev = a1->hdev;
  v31 = 0LL;
  v36 = hdev;
  v8 = a1;
  if ( hdev )
  {
    v9 = *((_QWORD *)hdev + 150);
    v10 = hdev + 20;
    if ( v9 )
    {
      if ( *((_QWORD *)v10 + 141) != v9 )
      {
        v11 = Gre::Base::Globals((Gre::Base *)a1);
        SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v37, v11);
        a1 = (struct _SURFOBJ *)0xFFFFF78000000004LL;
        v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( (unsigned int)(v12 - *((_DWORD *)v10 + 274)) >= *((_DWORD *)v10 + 275) )
        {
          SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v35, (struct PDEVOBJ *)&v36);
          v13 = *((_QWORD *)v10 + 141);
          v14 = *((_QWORD *)v10 + 140);
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
            bSpUpdatePosition(*((struct SPRITE **)v10 + 141), 0LL, 0, 0);
            v17 = (struct SPRITE *)*((_QWORD *)v10 + 140);
            *((_QWORD *)v10 + 141) = *(_QWORD *)(v13 + 24);
            vSpZorderSprite(v8->hdev, (struct SPRITE *)v13, v17);
            *((_QWORD *)v10 + 140) = v13;
          }
          *((_DWORD *)v10 + 274) = v12;
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v35);
        }
        if ( v37 )
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            (__int64)v37);
      }
      v18 = Gre::Base::Globals((Gre::Base *)a1);
      v19 = a5;
      v20 = (__int64 *)v18;
      if ( !a5 )
        v19 = (unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<6,Gre::Base::SESSION_GLOBALS>(v18) != 0;
      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v36) )
      {
        v21 = *v20;
        EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"Sprite", *v20 + 1040);
        GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
          (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedStarveExclusiveInternal,
          v21 + 1040);
      }
      else
      {
        GreAcquireSemaphore<6,>(v20);
      }
      if ( !v19 )
        GreIncNonRBLockCount(*v20 + 1040);
      SEMOBJ<8>::SEMOBJ<8>((HSEMAPHORE *)&v37, (__int64)&v36);
      v32 = 0LL;
      v33 = 0LL;
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v35, (struct PDEVOBJ *)&v36);
      if ( a2 == -1 )
      {
        v31.x = 0x7FFFFFFF;
        v31.y = 0x7FFFFFFF;
        for ( j = *((_QWORD *)v10 + 141); j; j = *(_QWORD *)(j + 24) )
        {
          if ( !v19 )
          {
            SPRITERANGELOCK::vLockExclusive((HSEMAPHORE *)v10 + 15);
            PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v32, (struct _SPRITESTATE *)v10, (struct _RECTL *)(j + 80));
            SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(j + 248));
            *((_QWORD *)v10 + 168) = j;
          }
          if ( (_QWORD)v32 || v19 )
          {
            bSpUpdatePosition((struct SPRITE *)j, &v31, 0, 0);
            if ( v19 )
              continue;
          }
          *((_QWORD *)v10 + 168) = 0LL;
          SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(j + 248));
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v32);
          SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(v10 + 30));
        }
      }
      else
      {
        v31.x = a2 - *((_DWORD *)v10 + 270);
        v31.y = a3 - *((_DWORD *)v10 + 271);
        v23 = *((_QWORD *)v10 + 140);
        if ( !v19 )
        {
          SPRITERANGELOCK::vLockExclusive((HSEMAPHORE *)v10 + 15);
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v32, (struct _SPRITESTATE *)v10, (struct _RECTL *)(v23 + 80));
          SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v23 + 248));
          *((_QWORD *)v10 + 168) = v23;
        }
        bSpUpdatePosition((struct SPRITE *)v23, &v31, 0, 0);
        if ( !v19 )
        {
          *((_QWORD *)v10 + 168) = 0LL;
          SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v23 + 248));
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v32);
          SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(v10 + 30));
        }
        v34 = *(struct _RECTL *)(v23 + 80);
        if ( !v19 )
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v32, (struct _SPRITESTATE *)v10, &v34);
        if ( !(_QWORD)v32 && !v19 || (vSpRedrawSprite((struct SPRITE *)v23), !v19) )
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v32);
      }
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v35);
      if ( !v19 )
        GreDecNonRBLockCount(*v20 + 1040);
      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v36) )
        GreReleaseSemaphoreShared<6,>(v20);
      else
        GreReleaseSemaphoreExclusive<6,>(v20);
      v24 = v36;
      if ( (*((_DWORD *)v36 + 528) & 0x80u) != 0 )
      {
        v25 = 0LL;
        v26 = (*((_QWORD *)v36 + 318) + 24LL) & -(__int64)(*((_QWORD *)v36 + 318) != 0LL);
        if ( v26 )
        {
          v27 = *(_DWORD *)(((*((_QWORD *)v36 + 318) + 24LL) & -(__int64)(*((_QWORD *)v36 + 318) != 0LL)) + 0x58);
          if ( ((v27 & 0x4000) != 0 || v27 < 0) && (v27 & 0x200) == 0 )
          {
            v25 = v26 - 24;
            GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(((*((_QWORD *)v36 + 318) + 24LL) & -(__int64)(*((_QWORD *)v36 + 318) != 0LL))
                                                     + 0x18));
            v24 = v36;
          }
        }
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v36,
          (struct _SURFOBJ *)((*((_QWORD *)v24 + 318) + 24LL) & -(__int64)(*((_QWORD *)v24 + 318) != 0LL)),
          0LL,
          1u);
        if ( v25 )
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v25 + 48));
      }
      PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v32);
      v28 = (HSEMAPHORE)v37;
      if ( v37 )
      {
        EtwTraceGreLockReleaseSemaphore(L"DevLock", v37);
        v29 = GreGetCurrentThreadCrossSessionCheck();
        if ( v29 )
        {
          if ( (*((_BYTE *)v29 + 16))-- == 1 )
            *(_QWORD *)v29 &= ~0x100uLL;
          if ( !*(_QWORD *)v29 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v28);
      }
    }
  }
}

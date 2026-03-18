/*
 * XREFs of ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1400DCE5C
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1400DB37C (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400DCB5C (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x14032BE1C (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x14032DCD4 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x14032DF68 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     vSpUnTearDownSprites @ 0x140330570 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401DCFCC (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x1402662BC (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140267460 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DxDdEnumLockedSurfaceRect@@YAPEAXPEAUHDEV__@@PEAXPEAU_RECTL@@@Z @ 0x140325728 (-DxDdEnumLockedSurfaceRect@@YAPEAXPEAUHDEV__@@PEAXPEAU_RECTL@@@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1403262EC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x140329A38 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x140329AEC (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall vSpComputeUnlockedRegion(HDEV *a1)
{
  HDEV v1; // rbx
  struct Gre::Base::SESSION_GLOBALS *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  HDEV v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // r12
  __int64 v8; // r15
  int v9; // r14d
  void *i; // rdx
  void *v11; // rsi
  Gre::Base *v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // rax
  __int64 j; // rsi
  __int64 k; // rbx
  HSEMAPHORE v16; // rbx
  __int64 GlobalLockName; // rax
  struct _GRETHREAD *v18; // rax
  bool v19; // zf
  REGION *v20; // [rsp+20h] [rbp-60h] BYREF
  __int64 v21; // [rsp+28h] [rbp-58h] BYREF
  HDEV v22; // [rsp+30h] [rbp-50h] BYREF
  HSEMAPHORE v23; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-40h] BYREF
  struct _RECTL v25; // [rsp+50h] [rbp-30h] BYREF
  struct _RECTL v26; // [rsp+60h] [rbp-20h] BYREF

  v1 = *a1;
  v25 = 0LL;
  v24[0] = v1;
  v3 = Gre::Base::Globals((Gre::Base *)a1);
  v6 = a1[130];
  v7 = v3;
  if ( v6 )
  {
    v22 = a1[130];
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
    a1[130] = 0LL;
  }
  v8 = *(_QWORD *)(W32GetSessionState(v6, v4, v5) + 96);
  if ( *(_QWORD *)(v8 + 4824) || a1[131] || *((_DWORD *)v1 + 658) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
    if ( v20 )
    {
      v9 = 0;
      *(_QWORD *)&v25.left = 0LL;
      *(_QWORD *)&v25.right = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)v24);
      RGNOBJ::vSet((RGNOBJ *)&v20, &v25);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v22);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
      if ( !v22 || !v21 )
        goto LABEL_36;
      v26 = 0LL;
      GreLockDisplayDevice(v1);
      for ( i = 0LL; ; i = v11 )
      {
        v11 = DxDdEnumLockedSurfaceRect(v1, i, &v26);
        if ( !v11 )
          break;
        RGNOBJ::vSet((RGNOBJ *)&v22, &v26);
        RGNOBJ::bCopy((RGNOBJ *)&v21, (struct RGNOBJ *)&v20);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v20, (struct RGNOBJ *)&v21, (struct RGNOBJ *)&v22, 4u) )
          v9 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v20);
      }
      GreUnlockDisplayDevice(v1);
      v13 = Gre::Base::Globals(v12);
      SEMOBJ<33>::SEMOBJ<33>(&v23, v13);
      for ( j = *(_QWORD *)(v8 + 4824); j; j = *(_QWORD *)(j + 8) )
      {
        for ( k = *(_QWORD *)(j + 24); k; k = *(_QWORD *)(k + 160) )
        {
          UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v24, (struct EWNDOBJ *)k, (struct _SPRITESTATE *)a1);
          if ( (*(_DWORD *)(k + 184) & 0x1000000) != 0 )
          {
            RGNOBJ::bCopy((RGNOBJ *)&v21, (struct RGNOBJ *)&v20);
            if ( RGNOBJ::bMerge((RGNOBJ *)&v20, (struct RGNOBJ *)&v21, (struct RGNOBJ *)(k + 56), 4u) )
              v9 = 1;
            else
              RGNOBJ::vSet((RGNOBJ *)&v20);
          }
          UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v24);
        }
      }
      if ( a1[131] )
      {
        v24[0] = a1[131];
        RGNOBJ::bCopy((RGNOBJ *)&v21, (struct RGNOBJ *)&v20);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v20, (struct RGNOBJ *)&v21, (struct RGNOBJ *)v24, 8u) )
          v9 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v20);
      }
      v16 = v23;
      if ( v23 )
      {
        GlobalLockName = GrepGetGlobalLockName(33LL);
        EtwTraceGreLockReleaseSemaphore(GlobalLockName, v16);
        v18 = GreGetCurrentThreadCrossSessionCheck();
        if ( v18 )
        {
          v19 = (*(_QWORD *)v18 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
          *(_QWORD *)v18 &= ~0x200000000uLL;
          if ( v19 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v16);
      }
      if ( v9 == 1 )
      {
        REGION::vStamp(v20);
        a1[130] = (HDEV)v20;
      }
      else
      {
LABEL_36:
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v22);
    }
  }
  *((_DWORD *)a1 + 29) = 0;
  vSpComputeSpriteRanges(a1);
  ++*((_DWORD *)v7 + 1060);
}

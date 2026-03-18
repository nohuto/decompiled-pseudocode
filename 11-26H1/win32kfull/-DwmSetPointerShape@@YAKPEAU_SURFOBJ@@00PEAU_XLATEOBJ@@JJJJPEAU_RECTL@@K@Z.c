/*
 * XREFs of ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1400A1B40
 * Callers:
 *     EngSetPointerShape @ 0x1400A0BB0 (EngSetPointerShape.c)
 * Callees:
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x14001C97C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x14009CA18 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14009CB84 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1400A1FFC (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1400A211C (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1400A34B8 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x140166834 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 */

__int64 __fastcall DwmSetPointerShape(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct tagRECT *a9,
        unsigned int a10)
{
  HDEV hdev; // rbx
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  struct Gre::Base::SESSION_GLOBALS *v15; // rsi
  unsigned int v16; // r12d
  char v17; // r14
  unsigned int v18; // edi
  unsigned int v19; // r15d
  HSEMAPHORE v20; // rax
  struct _RECTL *v21; // r9
  struct tagRECT *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  HSPRITE v25; // rdx
  HSPRITE v26; // rbx
  HSPRITE NeighborSprite; // r15
  Gre::Base *v28; // rcx
  struct Gre::Base::SESSION_GLOBALS *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  struct DWMSPRITE *v32; // rdi
  struct W32_PUSH_LOCK *v33; // rbx
  Gre::Base *v34; // rcx
  struct Gre::Base::SESSION_GLOBALS *v35; // rax
  HSPRITE v36; // rbx
  struct _RECTL *v37; // r15
  HSPRITE v38; // rdi
  struct _XLATEOBJ *v39; // r9
  HSEMAPHORE v41; // rdi
  _QWORD *v42; // rbx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  void *SpriteInternal; // rax
  __int64 v48; // rcx
  HSPRITE v49; // rbx
  _OWORD v50[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v51; // [rsp+88h] [rbp-11h]
  HSEMAPHORE v52; // [rsp+E8h] [rbp+4Fh]
  struct _XLATEOBJ *v55; // [rsp+100h] [rbp+67h] BYREF

  v55 = a4;
  hdev = a1->hdev;
  v14 = Gre::Base::Globals((Gre::Base *)a1);
  v15 = v14;
  v16 = 2;
  if ( *(_DWORD *)(*((_QWORD *)v14 + 28) + 100LL) )
  {
    if ( a2 || a3 )
    {
      memset(v50, 0, sizeof(v50));
      PushThreadGuardedObject(
        v50,
        v50,
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
      v17 = a10;
      v18 = ((a10 >> 8) & 0xF) + 1;
      v51 = 0LL;
      if ( (unsigned __int8)(a10 >> 12) )
        v19 = 0x3E8u / (unsigned __int8)(a10 >> 12);
      else
        v19 = 0;
      v20 = (HSEMAPHORE)(*(_QWORD *)v15 + 520LL);
      LODWORD(v55) = 0x1000000;
      v52 = v20;
      GreAcquireSemaphoreInternal(v20);
      GrepAcquireLockValidate<7>();
      v22 = a9;
      while ( *(_DWORD *)(*((_QWORD *)v15 + 28) + 160LL) < v18 )
      {
        if ( a7 == -1 && a8 == -1 || (v46 = 1, (v17 & 0x40) != 0) )
          v46 = 0;
        SpriteInternal = GreCreateSpriteInternal(a1->hdev, 0LL, v22, 0LL, 0x9900u, 1, v46, 0, 0, 0, 0, 0LL);
        if ( !SpriteInternal )
          break;
        v48 = *((_QWORD *)v15 + 28);
        if ( !*(_QWORD *)(v48 + 136) )
          *(_QWORD *)(v48 + 136) = SpriteInternal;
        *(_QWORD *)(*((_QWORD *)v15 + 28) + 144LL) = SpriteInternal;
        ++*(_DWORD *)(*((_QWORD *)v15 + 28) + 160LL);
      }
      v16 = 2;
      while ( 1 )
      {
        v23 = *((_QWORD *)v15 + 28);
        if ( *(_DWORD *)(v23 + 160) <= v18 )
          break;
        v49 = *(HSPRITE *)(v23 + 144);
        *(_QWORD *)(*((_QWORD *)v15 + 28) + 144LL) = hspGetNeighborSprite(v49, 1, 0);
        GreDeleteSpriteInternal((Gre::Base *)a1->hdev, 0LL, v49, 1);
        --*(_DWORD *)(*((_QWORD *)v15 + 28) + 160LL);
      }
      *(_DWORD *)(v23 + 168) = v19;
      v24 = *((_QWORD *)v15 + 28);
      v25 = *(HSPRITE *)(v24 + 136);
      if ( v25 )
      {
        v26 = *(HSPRITE *)(v24 + 144);
        if ( v26 != v25 )
        {
          do
          {
            NeighborSprite = hspGetNeighborSprite(v26, 1, 0);
            v29 = Gre::Base::Globals(v28);
            if ( v26
              && (LOBYTE(v30) = 15, v31 = HmgShareLock(v29, v26, v30, 0LL), (v32 = (struct DWMSPRITE *)v31) != 0LL) )
            {
              v33 = (struct W32_PUSH_LOCK *)(v31 + 88);
              if ( v31 != -88 )
                GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v31 + 88));
              vSpDwmUpdateSpriteVisibility(v32, 0);
              if ( v33 )
                GreReleasePushLockExclusive(v33);
              v26 = NeighborSprite;
              v35 = Gre::Base::Globals(v34);
              DEC_SHARE_REF_CNT(v35, v32);
            }
            else
            {
              v26 = NeighborSprite;
            }
            v24 = *((_QWORD *)v15 + 28);
          }
          while ( NeighborSprite != *(HSPRITE *)(v24 + 136) );
        }
        v36 = *(HSPRITE *)(v24 + 144);
        v37 = (struct _RECTL *)a9;
        while ( 1 )
        {
          if ( !v36 )
          {
            v16 = 2;
            goto LABEL_24;
          }
          v38 = hspGetNeighborSprite(v36, 1, 0);
          if ( !bSpDwmUpdateCursor(
                  v36,
                  a2,
                  a3,
                  v39,
                  v37,
                  (struct _BLENDFUNCTION *)((unsigned __int64)&v55 & -(__int64)((v17 & 0x40) != 0))) )
            break;
          v36 = v38;
        }
        v16 = 0;
LABEL_24:
        *(_DWORD *)(*((_QWORD *)v15 + 28) + 152LL) = a5 - v37->left;
        *(_DWORD *)(*((_QWORD *)v15 + 28) + 156LL) = a6 - v37->top;
      }
      if ( v52 )
        GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v52);
      DwmMovePointer(a1, a7, a8, v21, (v17 & 0x60) != 0 ? 4 : 0);
      if ( v51 )
        _InterlockedAdd16((volatile signed __int16 *)(v51 + 12), 0xFFFFu);
      v51 = 0LL;
      PopThreadGuardedObject(v50);
    }
    else
    {
      v41 = (HSEMAPHORE)(*(_QWORD *)v14 + 520LL);
      GreAcquireSemaphoreInternal(v41);
      GrepAcquireLockValidate<7>();
      v42 = hdev + 880;
      v43 = *v42;
      if ( *(_QWORD **)(*v42 + 8LL) != v42 || (v44 = (_QWORD *)v42[1], (_QWORD *)*v44 != v42) )
        __fastfail(3u);
      *v44 = v43;
      *(_QWORD *)(v43 + 8) = v44;
      v42[1] = v42;
      *v42 = v42;
      v45 = *((_QWORD *)v15 + 28);
      if ( *(_QWORD *)(v45 + 104) == v45 + 104 && *(_QWORD *)(v45 + 120) == v45 + 120 )
        vSpDwmDestroyCursorSprites((Gre::Base *)a1->hdev);
      if ( v41 )
        GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v41);
    }
  }
  return v16;
}

/*
 * XREFs of ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x14008D9F8
 * Callers:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x14008D568 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     GreMovePointer @ 0x14008E890 (GreMovePointer.c)
 *     EngpMovePointer @ 0x14008F2A8 (EngpMovePointer.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140173B30 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14001B08C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     GreUpdateSprite @ 0x14007BD8C (GreUpdateSprite.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x14008FB6C (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x140091F8C (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1400920E4 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400986E8 (-GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1401742B8 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 */

void __fastcall DwmMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, char a5)
{
  int v5; // esi
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  HDEV hdev; // rbx
  struct Gre::Base::SESSION_GLOBALS *v10; // rdi
  __int64 v11; // rax
  HSEMAPHORE v12; // r15
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 **v15; // rdx
  __int64 v16; // rcx
  __int64 **v17; // rdx
  __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  void *v21; // rdi
  HDEV v22; // rbx
  Gre::Base *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 **v26; // rdx
  __int64 v27; // rcx
  __int64 **v28; // rdx
  __int64 v29; // rbx
  HSPRITE v30; // rbx
  HSPRITE NeighborSprite; // rax
  HSPRITE v32; // r14
  HSPRITE v33; // r14
  HDEV v34; // rcx
  int v35; // [rsp+78h] [rbp-90h]
  _BYTE v36[32]; // [rsp+88h] [rbp-80h] BYREF
  struct DWMSPRITE *v37; // [rsp+A8h] [rbp-60h]
  _BYTE v38[32]; // [rsp+B0h] [rbp-58h] BYREF
  struct DWMSPRITE *v39; // [rsp+D0h] [rbp-38h]
  _BYTE v40[32]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v41; // [rsp+F8h] [rbp-10h]
  _BYTE v42[128]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v43[176]; // [rsp+188h] [rbp+80h] BYREF
  struct tagPOINT v44; // [rsp+248h] [rbp+140h] BYREF
  int v45; // [rsp+258h] [rbp+150h]
  struct _RECTL *v46; // [rsp+260h] [rbp+158h] BYREF

  v46 = a4;
  v45 = a3;
  v5 = a3;
  v8 = Gre::Base::Globals((Gre::Base *)a1);
  hdev = a1->hdev;
  v10 = v8;
  v11 = *((_QWORD *)v8 + 17);
  if ( *(_DWORD *)(v11 + 100) && *(_QWORD *)(v11 + 136) )
  {
    v12 = (HSEMAPHORE)(*(_QWORD *)v10 + 520LL);
    GreAcquireSemaphoreInternal(v12);
    GrepAcquireLockValidate<7>();
    if ( *(_QWORD *)(*((_QWORD *)v10 + 17) + 144LL) != *(_QWORD *)(*((_QWORD *)v10 + 17) + 136LL) )
    {
      v18 = *((_QWORD *)v10 + 17);
      v19 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)(v19 - *(_DWORD *)(v18 + 164)) >= *(_DWORD *)(v18 + 168) )
      {
        DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v38, *(HSPRITE *)(v18 + 136));
        NeighborSprite = hspGetNeighborSprite(*(HSPRITE *)(*((_QWORD *)v10 + 17) + 136LL), 0, 0);
        DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v40, NeighborSprite);
        if ( v39 && v41 )
        {
          if ( *(_DWORD *)(v41 + 56) == *((_DWORD *)v39 + 14) && *(_DWORD *)(v41 + 60) == *((_DWORD *)v39 + 15) )
          {
            v33 = *(HSPRITE *)(*((_QWORD *)v10 + 17) + 144LL);
            while ( v33 != *(HSPRITE *)(*((_QWORD *)v10 + 17) + 136LL) )
            {
              DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v36, v33);
              if ( v37 && (*((_DWORD *)v37 + 35) & 1) != 0 )
              {
                vSpDwmUpdateSpriteVisibility(v37, 0);
                goto LABEL_38;
              }
              v33 = hspGetNeighborSprite(v33, 1, 0);
              DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v36);
            }
          }
          else
          {
            v32 = *(HSPRITE *)(*((_QWORD *)v10 + 17) + 144LL);
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v36, v32);
            if ( v37 )
              vSpDwmUpdateSpriteVisibility(v37, 0);
            *(_QWORD *)(*((_QWORD *)v10 + 17) + 144LL) = hspGetNeighborSprite(v32, 1, 0);
            vSpDwmZorderSprite(v32, *(HSPRITE *)(*((_QWORD *)v10 + 17) + 136LL));
            *(_QWORD *)(*((_QWORD *)v10 + 17) + 136LL) = v32;
LABEL_38:
            DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v36);
          }
          *(_DWORD *)(*((_QWORD *)v10 + 17) + 164LL) = v19;
        }
        DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v40);
        DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v38);
      }
      v5 = v45;
    }
    v13 = (__int64 *)(hdev + 880);
    v14 = *((_QWORD *)hdev + 440);
    if ( a2 == -1 )
    {
      if ( *(__int64 **)(v14 + 8) != v13
        || (v26 = (__int64 **)*((_QWORD *)hdev + 441), *v26 != v13)
        || (*v26 = (__int64 *)v14,
            *(_QWORD *)(v14 + 8) = v26,
            v27 = *((_QWORD *)v10 + 17) + 104LL,
            v28 = *(__int64 ***)(*((_QWORD *)v10 + 17) + 112LL),
            *v28 != (__int64 *)v27) )
      {
LABEL_8:
        __fastfail(3u);
      }
      *v13 = v27;
      *((_QWORD *)hdev + 441) = v28;
      *v28 = v13;
      *(_QWORD *)(v27 + 8) = v13;
      v29 = *((_QWORD *)v10 + 17);
      if ( *(_QWORD *)(v29 + 120) == v29 + 120 )
      {
        v30 = *(HSPRITE *)(v29 + 144);
        while ( v30 )
        {
          DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v38, v30);
          if ( v39 )
            vSpDwmUpdateSpriteVisibility(v39, 0);
          v30 = hspGetNeighborSprite(v30, 1, 0);
          DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v38);
        }
      }
    }
    else
    {
      if ( *(__int64 **)(v14 + 8) != v13 )
        goto LABEL_8;
      v15 = (__int64 **)*((_QWORD *)hdev + 441);
      if ( *v15 != v13 )
        goto LABEL_8;
      *v15 = (__int64 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = *((_QWORD *)v10 + 17) + 120LL;
      v17 = *(__int64 ***)(*((_QWORD *)v10 + 17) + 128LL);
      if ( *v17 != (__int64 *)v16 )
        goto LABEL_8;
      *v13 = v16;
      *((_QWORD *)hdev + 441) = v17;
      *v17 = v13;
      *(_QWORD *)(v16 + 8) = v13;
      v20 = *((_QWORD *)v10 + 17);
      v44.x = a2 + *((_DWORD *)hdev + 644) - *(_DWORD *)(v20 + 152);
      v44.y = v5 + *((_DWORD *)hdev + 645) - *(_DWORD *)(v20 + 156);
      v21 = *(void **)(v20 + 136);
      DrvPixelSpaceToUniformSpacePoint(&v44, &v44.y);
      v22 = a1->hdev;
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v43, 0LL);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v42, 0LL);
      GrepUpdateSprite(
        v22,
        0LL,
        v21,
        (struct OPTAPIDCOBJ *)v43,
        &v44,
        0LL,
        (struct OPTAPIDCOBJ *)v42,
        0LL,
        0,
        0LL,
        0x40200000u,
        0LL,
        0LL,
        1,
        0,
        0);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v42);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v43);
      Gre::Base::Globals(v23);
      if ( v21 )
      {
        LOBYTE(v24) = 15;
        v25 = HmgShareLockCheck(v21, v24);
        if ( v25 )
        {
          if ( (a5 & 4) != 0 )
          {
            v34 = a1->hdev;
            LODWORD(v46) = 0x1000000;
            GreUpdateSprite(
              v34,
              0LL,
              v21,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              0,
              (struct _BLENDFUNCTION *)&v46,
              0x21200002u,
              0LL,
              0LL,
              1,
              v35,
              0);
          }
          if ( v25 != -88 )
            GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v25 + 88));
          vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v25, 1);
          if ( v25 != -88 )
            GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v25 + 88));
          DEC_SHARE_REF_CNT(v25);
        }
      }
    }
    if ( v12 )
      GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v12);
  }
}

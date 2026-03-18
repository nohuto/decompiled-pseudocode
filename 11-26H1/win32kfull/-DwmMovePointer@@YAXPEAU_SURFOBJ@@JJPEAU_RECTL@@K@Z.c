/*
 * XREFs of ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x14001C97C
 * Callers:
 *     EngpMovePointer @ 0x14001AD74 (EngpMovePointer.c)
 *     ?vMovePointer@@YAXAEAVPDEVOBJ@@HHJ@Z @ 0x14001C0F4 (-vMovePointer@@YAXAEAVPDEVOBJ@@HHJ@Z.c)
 *     GreMovePointer @ 0x14006B170 (GreMovePointer.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1400A1B40 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073568 (-GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1400A1FFC (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x140166834 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1401C82A8 (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 */

void __fastcall DwmMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, char a5)
{
  int v5; // esi
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  HDEV hdev; // rbx
  struct Gre::Base::SESSION_GLOBALS *v10; // rdi
  __int64 v11; // rax
  HSEMAPHORE v12; // r15
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 **v16; // rdx
  __int64 v17; // rax
  __int64 **v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r14
  Gre::Base *v21; // rcx
  struct Gre::Base::SESSION_GLOBALS *v22; // rax
  __int64 **v23; // rdx
  __int64 v24; // rax
  __int64 **v25; // rdx
  __int64 v26; // rbx
  HSPRITE v27; // rbx
  Gre::Base *v28; // rcx
  struct Gre::Base::SESSION_GLOBALS *v29; // rax
  __int64 v30; // r8
  struct DWMSPRITE *v31; // rax
  __int64 v32; // rsi
  Gre::Base *v33; // rcx
  struct Gre::Base::SESSION_GLOBALS *v34; // rax
  __int64 v35; // r8
  HSPRITE NeighborSprite; // rsi
  Gre::Base *v37; // rcx
  struct Gre::Base::SESSION_GLOBALS *v38; // rax
  __int64 v39; // r8
  __int64 v40; // rcx
  HSPRITE v41; // rsi
  Gre::Base *v42; // rcx
  struct Gre::Base::SESSION_GLOBALS *v43; // rax
  __int64 v44; // r8
  struct DWMSPRITE *v45; // rax
  HDEV v46; // rbx
  HSPRITE v47; // rsi
  Gre::Base *v48; // rcx
  struct Gre::Base::SESSION_GLOBALS *v49; // rax
  __int64 v50; // r8
  struct DWMSPRITE *v51; // rcx
  __int64 v52; // rdx
  void *v53; // rsi
  HDEV v54; // rbx
  Gre::Base *v55; // rcx
  struct Gre::Base::SESSION_GLOBALS *v56; // rax
  __int64 v57; // r8
  __int64 v58; // rdi
  __int128 v59; // [rsp+88h] [rbp-80h] BYREF
  __int128 v60; // [rsp+98h] [rbp-70h]
  struct DWMSPRITE *v61; // [rsp+A8h] [rbp-60h]
  __int128 v62; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v63; // [rsp+C0h] [rbp-48h]
  __int64 v64; // [rsp+D0h] [rbp-38h]
  _OWORD v65[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v66; // [rsp+F8h] [rbp-10h]
  _QWORD v67[8]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v68[40]; // [rsp+148h] [rbp+40h] BYREF
  char v69; // [rsp+170h] [rbp+68h]
  _QWORD v70[8]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v71[40]; // [rsp+1B8h] [rbp+B0h] BYREF
  char v72; // [rsp+1E0h] [rbp+D8h]
  struct tagPOINT v73; // [rsp+228h] [rbp+120h] BYREF
  int v74; // [rsp+238h] [rbp+130h]
  struct _RECTL *v75; // [rsp+240h] [rbp+138h] BYREF

  v75 = a4;
  v74 = a3;
  v5 = a3;
  v8 = Gre::Base::Globals((Gre::Base *)a1);
  hdev = a1->hdev;
  v10 = v8;
  v11 = *((_QWORD *)v8 + 28);
  if ( !*(_DWORD *)(v11 + 100) || !*(_QWORD *)(v11 + 136) )
    return;
  v12 = (HSEMAPHORE)(*(_QWORD *)v10 + 520LL);
  v75 = (struct _RECTL *)v12;
  GreAcquireSemaphoreInternal(v12);
  GrepAcquireLockValidate<7>();
  if ( *(_QWORD *)(*((_QWORD *)v10 + 28) + 144LL) != *(_QWORD *)(*((_QWORD *)v10 + 28) + 136LL) )
  {
    v19 = *((_QWORD *)v10 + 28);
    v20 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( (unsigned int)(v20 - *(_DWORD *)(v19 + 164)) >= *(_DWORD *)(v19 + 168) )
    {
      v32 = *(_QWORD *)(v19 + 136);
      v62 = 0LL;
      v63 = 0LL;
      PushThreadGuardedObject(
        &v62,
        &v62,
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
      v64 = 0LL;
      v34 = Gre::Base::Globals(v33);
      if ( v32 )
      {
        LOBYTE(v35) = 15;
        v64 = HmgLock(v34, v32, v35, 0LL);
      }
      NeighborSprite = hspGetNeighborSprite(*(HSPRITE *)(*((_QWORD *)v10 + 28) + 136LL), 0, 0);
      memset(v65, 0, sizeof(v65));
      PushThreadGuardedObject(
        v65,
        v65,
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
      v66 = 0LL;
      v38 = Gre::Base::Globals(v37);
      if ( NeighborSprite )
      {
        LOBYTE(v39) = 15;
        v40 = HmgLock(v38, NeighborSprite, v39, 0LL);
        v66 = v40;
      }
      else
      {
        v40 = v66;
      }
      if ( v64 )
      {
        if ( !v40 )
        {
LABEL_50:
          v66 = 0LL;
          PopThreadGuardedObject(v65);
          if ( v64 )
            _InterlockedAdd16((volatile signed __int16 *)(v64 + 12), 0xFFFFu);
          v64 = 0LL;
          PopThreadGuardedObject(&v62);
          v5 = v74;
          goto LABEL_4;
        }
        if ( *(_DWORD *)(v40 + 56) == *(_DWORD *)(v64 + 56) && *(_DWORD *)(v40 + 60) == *(_DWORD *)(v64 + 60) )
        {
          v47 = *(HSPRITE *)(*((_QWORD *)v10 + 28) + 144LL);
          while ( v47 != *(HSPRITE *)(*((_QWORD *)v10 + 28) + 136LL) )
          {
            v59 = 0LL;
            v60 = 0LL;
            PushThreadGuardedObject(
              &v59,
              &v59,
              UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
            v61 = 0LL;
            v49 = Gre::Base::Globals(v48);
            if ( v47 )
            {
              LOBYTE(v50) = 15;
              v51 = (struct DWMSPRITE *)HmgLock(v49, v47, v50, 0LL);
              v61 = v51;
            }
            else
            {
              v51 = v61;
            }
            if ( v51 && (*((_DWORD *)v51 + 34) & 1) != 0 )
            {
              vSpDwmUpdateSpriteVisibility(v51, 0);
              goto LABEL_44;
            }
            v47 = hspGetNeighborSprite(v47, 1, 0);
            if ( v61 )
              _InterlockedAdd16((volatile signed __int16 *)v61 + 6, 0xFFFFu);
            v61 = 0LL;
            PopThreadGuardedObject(&v59);
          }
        }
        else
        {
          v41 = *(HSPRITE *)(*((_QWORD *)v10 + 28) + 144LL);
          v59 = 0LL;
          v60 = 0LL;
          PushThreadGuardedObject(
            &v59,
            &v59,
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
          v61 = 0LL;
          v43 = Gre::Base::Globals(v42);
          if ( v41 )
          {
            LOBYTE(v44) = 15;
            v45 = (struct DWMSPRITE *)HmgLock(v43, v41, v44, 0LL);
            v61 = v45;
          }
          else
          {
            v45 = v61;
          }
          if ( v45 )
            vSpDwmUpdateSpriteVisibility(v45, 0);
          *(_QWORD *)(*((_QWORD *)v10 + 28) + 144LL) = hspGetNeighborSprite(v41, 1, 0);
          vSpDwmZorderSprite(v41, *(HSPRITE *)(*((_QWORD *)v10 + 28) + 136LL));
          *(_QWORD *)(*((_QWORD *)v10 + 28) + 136LL) = v41;
LABEL_44:
          if ( v61 )
            _InterlockedAdd16((volatile signed __int16 *)v61 + 6, 0xFFFFu);
          v61 = 0LL;
          PopThreadGuardedObject(&v59);
        }
        *(_DWORD *)(*((_QWORD *)v10 + 28) + 164LL) = v20;
        v40 = v66;
      }
      if ( v40 )
        _InterlockedAdd16((volatile signed __int16 *)(v40 + 12), 0xFFFFu);
      goto LABEL_50;
    }
  }
LABEL_4:
  v13 = (__int64 *)(hdev + 880);
  v14 = *((_QWORD *)hdev + 440);
  v15 = *(__int64 **)(v14 + 8);
  if ( a2 == -1 )
  {
    if ( v15 != v13
      || (v23 = (__int64 **)*((_QWORD *)hdev + 441), *v23 != v13)
      || (*v23 = (__int64 *)v14,
          *(_QWORD *)(v14 + 8) = v23,
          v24 = *((_QWORD *)v10 + 28) + 104LL,
          v25 = *(__int64 ***)(*((_QWORD *)v10 + 28) + 112LL),
          *v25 != (__int64 *)v24) )
    {
LABEL_8:
      __fastfail(3u);
    }
    *v13 = v24;
    *((_QWORD *)hdev + 441) = v25;
    *v25 = v13;
    *(_QWORD *)(v24 + 8) = v13;
    v26 = *((_QWORD *)v10 + 28);
    if ( *(_QWORD *)(v26 + 120) == v26 + 120 )
    {
      v27 = *(HSPRITE *)(v26 + 144);
      if ( v27 )
      {
        do
        {
          v62 = 0LL;
          v63 = 0LL;
          PushThreadGuardedObject(
            &v62,
            &v62,
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
          v64 = 0LL;
          v29 = Gre::Base::Globals(v28);
          LOBYTE(v30) = 15;
          v31 = (struct DWMSPRITE *)HmgLock(v29, v27, v30, 0LL);
          v64 = (__int64)v31;
          if ( v31 )
            vSpDwmUpdateSpriteVisibility(v31, 0);
          v27 = hspGetNeighborSprite(v27, 1, 0);
          if ( v64 )
            _InterlockedAdd16((volatile signed __int16 *)(v64 + 12), 0xFFFFu);
          v64 = 0LL;
          PopThreadGuardedObject(&v62);
        }
        while ( v27 );
        v12 = (HSEMAPHORE)v75;
      }
    }
  }
  else
  {
    if ( v15 != v13 )
      goto LABEL_8;
    v16 = (__int64 **)*((_QWORD *)hdev + 441);
    if ( *v16 != v13 )
      goto LABEL_8;
    *v16 = (__int64 *)v14;
    *(_QWORD *)(v14 + 8) = v16;
    v17 = *((_QWORD *)v10 + 28) + 120LL;
    v18 = *(__int64 ***)(*((_QWORD *)v10 + 28) + 128LL);
    if ( *v18 != (__int64 *)v17 )
      goto LABEL_8;
    *((_QWORD *)hdev + 441) = v18;
    *v13 = v17;
    *v18 = v13;
    *(_QWORD *)(v17 + 8) = v13;
    v52 = *((_QWORD *)v10 + 28);
    v73.x = a2 + *((_DWORD *)hdev + 644) - *(_DWORD *)(v52 + 152);
    v73.y = v5 + *((_DWORD *)hdev + 645) - *(_DWORD *)(v52 + 156);
    v53 = *(void **)(v52 + 136);
    DrvPixelSpaceToUniformSpacePoint(&v73, &v73.y);
    v54 = a1->hdev;
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v70, 0LL);
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v67, 0LL);
    GrepUpdateSprite(
      v54,
      0LL,
      v53,
      (struct OPTAPIDCOBJ *)v70,
      &v73,
      0LL,
      (struct OPTAPIDCOBJ *)v67,
      0LL,
      0,
      0LL,
      0x40200000u,
      0LL,
      0LL,
      1,
      0,
      0);
    v67[0] &= -(__int64)(v69 != 0);
    PopThreadGuardedObject(v68);
    DCOBJ::~DCOBJ((DCOBJ *)v67);
    v70[0] &= -(__int64)(v72 != 0);
    PopThreadGuardedObject(v71);
    DCOBJ::~DCOBJ((DCOBJ *)v70);
    v56 = Gre::Base::Globals(v55);
    if ( v53 )
    {
      LOBYTE(v57) = 15;
      v58 = HmgShareLock(v56, v53, v57, 0LL);
      if ( v58 )
      {
        if ( (a5 & 4) != 0 )
        {
          v46 = a1->hdev;
          LODWORD(v75) = 0x1000000;
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v67, 0LL);
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v70, 0LL);
          GrepUpdateSprite(
            v46,
            0LL,
            v53,
            (struct OPTAPIDCOBJ *)v67,
            0LL,
            0LL,
            (struct OPTAPIDCOBJ *)v70,
            0LL,
            0,
            (struct _BLENDFUNCTION *)&v75,
            0x21200002u,
            0LL,
            0LL,
            1,
            0,
            0);
          v70[0] &= -(__int64)(v72 != 0);
          PopThreadGuardedObject(v71);
          DCOBJ::~DCOBJ((DCOBJ *)v70);
          v67[0] &= -(__int64)(v69 != 0);
          PopThreadGuardedObject(v68);
          DCOBJ::~DCOBJ((DCOBJ *)v67);
        }
        if ( v58 != -88 )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v58 + 88));
        vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v58, 1);
        if ( v58 != -88 )
          GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v58 + 88));
        v22 = Gre::Base::Globals(v21);
        DEC_SHARE_REF_CNT(v22, v58);
      }
    }
  }
  if ( v12 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v12);
}

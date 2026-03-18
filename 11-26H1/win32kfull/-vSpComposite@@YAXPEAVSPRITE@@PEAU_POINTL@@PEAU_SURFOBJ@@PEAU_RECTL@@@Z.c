/*
 * XREFs of ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140167254
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140166D28 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x140167F90 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1401863C4 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x14031489C (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1403175F8 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     OffTransparentBlt @ 0x14006088C (OffTransparentBlt.c)
 *     OffAlphaBlend @ 0x140067298 (OffAlphaBlend.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x140167DD8 (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1401683A8 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffBitBlt @ 0x1401BB830 (OffBitBlt.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x14023ECD4 (-vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x140247A58 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x140248BE4 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphore@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z @ 0x1403129D0 (--$GreAcquireSemaphore@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z @ 0x140312A20 (--$GreReleaseSemaphoreExclusive@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x140313D80 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1403159F4 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x140315CAC (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x140316B68 (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vSpComposite(struct SPRITE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct Gre::Base::SESSION_GLOBALS *v7; // r15
  int v8; // ecx
  struct REGION *v9; // rbx
  struct REGION *v10; // r8
  int v11; // edx
  struct REGION *v12; // rsi
  struct _SPRITESTATE *v13; // rcx
  int v14; // eax
  __int64 *v15; // r9
  int v16; // r8d
  int v17; // ecx
  __int64 v18; // r14
  unsigned int v19; // edx
  __int64 v20; // rdi
  Gre::Base *v21; // rbx
  __int64 v22; // rsi
  struct _XLATEOBJ *v23; // r15
  __int64 v24; // rdi
  int v25; // eax
  struct _SURFOBJ *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  int v29; // eax
  PVOID *v30; // rbx
  int v31; // eax
  struct _SURFOBJ *v32; // rdx
  LONG v33; // ecx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  int v37; // esi
  __int64 v38; // r14
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  BOOL (__stdcall *v44)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdi
  PVOID *v51; // rbx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  BOOL (__stdcall *v58)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  struct _SURFOBJ *v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // r8
  struct _RECTL v66; // xmm6
  unsigned int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rdi
  int v70; // eax
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  __int64 v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  BOOL (__stdcall *v79)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  unsigned int v84; // edx
  struct _SURFOBJ *v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // rdx
  __int64 v91; // r8
  struct REGION *v92; // [rsp+78h] [rbp-90h] BYREF
  struct _POINTL v93; // [rsp+80h] [rbp-88h] BYREF
  struct _RECTL *v94; // [rsp+88h] [rbp-80h]
  unsigned __int8 *v95; // [rsp+90h] [rbp-78h] BYREF
  struct _CLIPOBJ *v96; // [rsp+98h] [rbp-70h]
  struct _POINTL *v97; // [rsp+A0h] [rbp-68h]
  struct _XLATEOBJ *v98; // [rsp+A8h] [rbp-60h] BYREF
  struct REGION *v99; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v100; // [rsp+B8h] [rbp-50h]
  Gre::Base *v101; // [rsp+C0h] [rbp-48h] BYREF
  Gre::Base *v102; // [rsp+C8h] [rbp-40h] BYREF
  Gre::Base *v103; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v104[2]; // [rsp+D8h] [rbp-30h] BYREF
  struct REGION *v105; // [rsp+E8h] [rbp-20h]
  __int64 v106[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v107; // [rsp+100h] [rbp-8h]
  struct _RECTL v108; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v109[4]; // [rsp+128h] [rbp+20h] BYREF
  int v110; // [rsp+12Ch] [rbp+24h]
  int v111; // [rsp+130h] [rbp+28h]
  int v112; // [rsp+134h] [rbp+2Ch]
  int v113; // [rsp+138h] [rbp+30h]
  __int64 v114; // [rsp+160h] [rbp+58h]
  __int64 v115; // [rsp+178h] [rbp+70h]
  int v116; // [rsp+180h] [rbp+78h]
  int v117; // [rsp+1A8h] [rbp+A0h]
  __int64 v118; // [rsp+1B8h] [rbp+B0h]
  int v119; // [rsp+1C0h] [rbp+B8h]

  v94 = a4;
  v97 = a2;
  v115 = 0LL;
  v117 = 1;
  v7 = Gre::Base::Globals(a1);
  v116 = 0;
  v118 = 0LL;
  v114 = 0LL;
  v119 = 0;
  if ( !(unsigned int)bIgnoreMirrorUpdate(a1) )
  {
    v8 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x400) != 0 || (v8 & 0xC0) == 0x40 || (v8 & 0x21) != 0x20 )
      goto LABEL_156;
    v96 = 0LL;
    v9 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
    v105 = v9;
    v99 = 0LL;
    if ( *((_QWORD *)a1 + 23) && v9 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v92);
      if ( v92
        && (v98 = (struct _XLATEOBJ *)*((_QWORD *)a1 + 23),
            v95 = (unsigned __int8 *)v9,
            RGNOBJ::bMerge((RGNOBJ *)&v92, (struct RGNOBJ *)&v98, (struct RGNOBJ *)&v95, 8u)) )
      {
        if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v92) == 1 )
        {
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v92);
          goto LABEL_23;
        }
        v10 = v92;
        v99 = v92;
      }
      else
      {
        v10 = v99;
      }
      if ( v10 )
      {
        v96 = (struct _CLIPOBJ *)v109;
        v11 = 0;
        goto LABEL_20;
      }
    }
    if ( (*(_DWORD *)a1 & 0x40) == 0 )
      goto LABEL_18;
    if ( !v9 )
      goto LABEL_156;
    if ( *((_QWORD *)a1 + 23) )
    {
LABEL_18:
      v12 = (struct REGION *)*((_QWORD *)a1 + 23);
      if ( !v12 )
        goto LABEL_24;
      v13 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
      v96 = (struct _CLIPOBJ *)v109;
      v14 = bConcurrent(v13);
      v10 = v12;
      v11 = v14;
LABEL_20:
      ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v109, v11, v10, (struct ERECTL *)a4, 0);
      if ( v110 >= v112 || v111 >= v113 )
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v99);
        if ( v9 )
          goto LABEL_23;
LABEL_156:
        ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v109);
        return;
      }
LABEL_24:
      v15 = (__int64 *)*((_QWORD *)a1 + 2);
      v16 = *(_DWORD *)a1;
      v17 = *((_DWORD *)a1 + 1);
      v18 = *((_QWORD *)a1 + 18);
      if ( (*(_DWORD *)a1 & 8) != 0 )
        v17 = 4;
      v100 = (__int64 *)*((_QWORD *)a1 + 2);
      v19 = v17 & 0xEFFFFFFF;
      if ( (v16 & 0x100) == 0 )
        v19 = v17;
      v93.x = a4->left + *((_DWORD *)a1 + 24) - *((_DWORD *)a1 + 28);
      v93.y = a4->top + *((_DWORD *)a1 + 25) - *((_DWORD *)a1 + 29);
      v20 = v15[4];
      v21 = (Gre::Base *)*((_QWORD *)v7 + 484);
      v22 = *((_QWORD *)v7 + 485);
      v23 = 0LL;
      LODWORD(v92) = v19;
      v24 = *(_QWORD *)(v20 + 104);
      v104[0] = 0LL;
      v25 = *((_DWORD *)v15 + 27);
      v98 = 0LL;
      if ( *((_DWORD *)a1 + 38) != v25 || *((_DWORD *)a1 + 39) != *((_DWORD *)v15 + 28) || (v16 & 0x40) != 0 )
      {
        if ( !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v98, 0LL, 0, v18, v24, (__int64)v21, v21, 0, 0, 0, 0) )
          goto LABEL_153;
        v23 = v98;
        v19 = (unsigned int)v92;
        v15 = v100;
      }
      switch ( v19 )
      {
        case 2u:
          v63 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( v63 && SURFREFVIEW::bMap((SURFREFVIEW *)v104, v63) )
          {
            v108.right = v93.x + v94->right - v94->left;
            v108.bottom = v93.y + v94->bottom - v94->top;
            v108.left = v93.x;
            v108.top = v93.y;
            *(_OWORD *)v106 = 0LL;
            v103 = 0LL;
            v107 = 0LL;
            v102 = 0LL;
            v101 = 0LL;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 (Gre::Base *)&v103,
                                 0LL,
                                 0,
                                 v18,
                                 v22,
                                 (__int64)v21,
                                 v21,
                                 0,
                                 0,
                                 0,
                                 0)
              && (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 (Gre::Base *)&v102,
                                 0LL,
                                 0,
                                 v24,
                                 v22,
                                 (__int64)v21,
                                 v21,
                                 0,
                                 0,
                                 0,
                                 0)
              && (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 (Gre::Base *)&v101,
                                 0LL,
                                 0,
                                 v22,
                                 v24,
                                 (__int64)v21,
                                 v21,
                                 0,
                                 0,
                                 0,
                                 0) )
            {
              v66 = 0LL;
              LODWORD(v106[0]) = *((_DWORD *)a1 + 50);
              v106[1] = (__int64)v103;
              *(_QWORD *)&v107 = v102;
              *((_QWORD *)&v107 + 1) = v101;
              v67 = *((_DWORD *)a1 + 56) & 0xEFFFFFFF;
              LODWORD(v92) = 0;
              v95 = 0LL;
              if ( v67 == 3 && !*((_BYTE *)a1 + 231) && (*(_DWORD *)a1 & 0x40) != 0 )
              {
                GreAcquireSemaphore<21,_SPRITESTATE *>(v100);
                vSpUpdatePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v108, &v95);
                v66 = v108;
                LODWORD(v92) = 1;
              }
              v68 = *((_QWORD *)a1 + 16);
              v69 = 0LL;
              if ( v68 )
              {
                v70 = *(_DWORD *)(v68 + 88);
                if ( ((v70 & 0x4000) != 0 || v70 < 0) && (v70 & 0x200) == 0 )
                {
                  v69 = v68 - 24;
                  GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v68 + 24));
                }
              }
              p_pvScan0 = 0LL;
              if ( a3 )
              {
                hsurf = (int)a3[1].hsurf;
                if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
                {
                  p_pvScan0 = &a3[-1].pvScan0;
                  GreAcquireSemaphore<8,PDEVOBJ>((__int64)a3->hdev);
                }
              }
              v73 = *((_QWORD *)a1 + 16);
              if ( a3->iType == 1
                && (unsigned int)bAllowShareAccess(a3)
                && GreGetCurrentThread(v74)
                && *((_QWORD *)GreGetCurrentThread(v75) + 34)
                && (*((_DWORD *)GreGetCurrentThread(v76) + 85) || *((_DWORD *)GreGetCurrentThread(v77) + 86))
                && (v78 = *((_QWORD *)GreGetCurrentThread(v77) + 34), (*(_DWORD *)(v78 + 20) & 0x10000) != 0) )
              {
                v79 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*((_QWORD *)GreGetCurrentThread(v78) + 34) + 120LL);
              }
              else if ( a3->iType == 1
                     && (unsigned int)bAllowShareAccess(a3)
                     && GreGetCurrentThread(v80)
                     && *((_QWORD *)GreGetCurrentThread(v81) + 34)
                     && (*((_DWORD *)GreGetCurrentThread(v82) + 85) || *((_DWORD *)GreGetCurrentThread(v83) + 86))
                     || ((__int64)a3[1].hsurf & 0x10000) == 0 )
              {
                v79 = EngAlphaBlend;
              }
              else
              {
                v79 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)a3->hdev + 170);
              }
              OffAlphaBlend(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, __int64))v79,
                (LONG *)v97,
                (__int64)a3,
                (int *)a1 + 34,
                v73,
                v96,
                (__int64)v23,
                (__int128 *)&v94->left,
                (__int128 *)&v108.left,
                (__int64)v106);
              if ( p_pvScan0 )
                GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
              if ( v69 )
                GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v69 + 48));
              if ( (_DWORD)v92 )
              {
                v84 = *((_DWORD *)a1 + 51);
                v85 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
                v108 = v66;
                vSpDeletePerPixelAlphaFromColorKey(v85, v84, &v108, v95);
                GreReleaseSemaphoreExclusive<21,_SPRITESTATE *>(v100);
              }
            }
            EXLATEOBJ::vAltUnlock(&v101, v64, v65);
            EXLATEOBJ::vAltUnlock(&v102, v86, v87);
            EXLATEOBJ::vAltUnlock(&v103, v88, v89);
          }
          goto LABEL_153;
        case 4u:
          v26 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( v26 && SURFREFVIEW::bMap((SURFREFVIEW *)v104, v26) )
          {
            v27 = *((_QWORD *)a1 + 16);
            v28 = 0LL;
            if ( v27 )
            {
              v29 = *(_DWORD *)(v27 + 88);
              if ( ((v29 & 0x4000) != 0 || v29 < 0) && (v29 & 0x200) == 0 )
              {
                v28 = v27 - 24;
                GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v27 + 24));
              }
            }
            v30 = 0LL;
            if ( a3 )
            {
              v31 = (int)a3[1].hsurf;
              if ( ((v31 & 0x4000) != 0 || v31 < 0) && (v31 & 0x200) == 0 )
              {
                v30 = &a3[-1].pvScan0;
                GreAcquireSemaphore<8,PDEVOBJ>((__int64)a3->hdev);
              }
            }
            INVOKEOFFCOPYBITS(v97, a3, (struct _POINTL *)a1 + 17, *((struct _SURFOBJ **)a1 + 16), v96, v23, v94, &v93);
            goto LABEL_79;
          }
LABEL_153:
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v99);
          if ( v105 )
            vSpAddAndCompactDirtyRegion(a1, v105);
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v104);
          EXLATEOBJ::vAltUnlock((Gre::Base **)&v98, v90, v91);
          goto LABEL_156;
        case 1u:
          v32 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( !v32 || !SURFREFVIEW::bMap((SURFREFVIEW *)v104, v32) )
            goto LABEL_153;
          v28 = 0LL;
          v108.left = v93.x;
          v33 = v93.x + v94->right - v94->left;
          v108.top = v93.y;
          v108.right = v33;
          v108.bottom = v93.y + v94->bottom - v94->top;
          v34 = *((_QWORD *)a1 + 16);
          if ( v34 )
          {
            v35 = *(_DWORD *)(v34 + 88);
            if ( ((v35 & 0x4000) != 0 || v35 < 0) && (v35 & 0x200) == 0 )
            {
              v28 = v34 - 24;
              GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v34 + 24));
            }
          }
          v30 = 0LL;
          if ( a3 )
          {
            v36 = (int)a3[1].hsurf;
            if ( ((v36 & 0x4000) != 0 || v36 < 0) && (v36 & 0x200) == 0 )
            {
              v30 = &a3[-1].pvScan0;
              GreAcquireSemaphore<8,PDEVOBJ>((__int64)a3->hdev);
            }
          }
          v37 = *((_DWORD *)a1 + 51);
          v38 = *((_QWORD *)a1 + 16);
          if ( a3->iType != 1 )
            goto LABEL_75;
          if ( (unsigned int)bAllowShareAccess(a3)
            && GreGetCurrentThread(v39)
            && *((_QWORD *)GreGetCurrentThread(v40) + 34)
            && (*((_DWORD *)GreGetCurrentThread(v41) + 85) || *((_DWORD *)GreGetCurrentThread(v42) + 86)) )
          {
            v43 = *((_QWORD *)GreGetCurrentThread(v42) + 34);
            if ( (*(_DWORD *)(v43 + 20) & 0x8000) != 0 )
            {
              v44 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)GreGetCurrentThread(v43) + 34) + 112LL);
LABEL_78:
              OffTransparentBlt(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, int, int))v44,
                (int *)v97,
                (__int64)a3,
                (int *)a1 + 34,
                v38,
                v96,
                (__int64)v23,
                (__int128 *)&v94->left,
                (__int128 *)&v108.left,
                v37,
                0);
LABEL_79:
              if ( v30 )
                GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v30[6]);
              if ( !v28 )
                goto LABEL_153;
              v49 = *(_QWORD *)(v28 + 48);
              goto LABEL_109;
            }
          }
          if ( a3->iType != 1
            || !(unsigned int)bAllowShareAccess(a3)
            || !GreGetCurrentThread(v45)
            || !*((_QWORD *)GreGetCurrentThread(v46) + 34)
            || !*((_DWORD *)GreGetCurrentThread(v47) + 85) && !*((_DWORD *)GreGetCurrentThread(v48) + 86) )
          {
LABEL_75:
            if ( ((__int64)a3[1].hsurf & 0x8000) != 0 )
            {
              v44 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)a3->hdev + 169);
              goto LABEL_78;
            }
          }
          v44 = EngTransparentBlt;
          goto LABEL_78;
        case 0x1000000u:
          vSpDrawCursor(a1, v97, a3, v94, &v93);
          goto LABEL_153;
      }
      v50 = *v15;
      v51 = 0LL;
      if ( a3 )
      {
        v52 = (int)a3[1].hsurf;
        if ( ((v52 & 0x4000) != 0 || v52 < 0) && (v52 & 0x200) == 0 )
        {
          v51 = &a3[-1].pvScan0;
          GreAcquireSemaphore<8,PDEVOBJ>((__int64)a3->hdev);
        }
      }
      v95 = 0LL;
      if ( a3->iType == 1 )
      {
        if ( (unsigned int)bAllowShareAccess(a3)
          && GreGetCurrentThread(v53)
          && *((_QWORD *)GreGetCurrentThread(v54) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v55) + 85) || *((_DWORD *)GreGetCurrentThread(v56) + 86)) )
        {
          v57 = *((_QWORD *)GreGetCurrentThread(v56) + 34);
          if ( (*(_DWORD *)(v57 + 20) & 1) != 0 )
          {
            v58 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread(v57) + 34) + 72LL);
            goto LABEL_107;
          }
        }
        if ( a3->iType == 1
          && (unsigned int)bAllowShareAccess(a3)
          && GreGetCurrentThread(v59)
          && *((_QWORD *)GreGetCurrentThread(v60) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v61) + 85) || *((_DWORD *)GreGetCurrentThread(v62) + 86)) )
        {
          goto LABEL_106;
        }
      }
      if ( ((__int64)a3[1].hsurf & 1) == 0 )
LABEL_106:
        v58 = EngBitBlt;
      else
        v58 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
LABEL_107:
      OffBitBlt(
        (_DWORD)v58,
        (_DWORD)v97,
        (_DWORD)a3,
        0,
        0LL,
        0LL,
        0LL,
        0LL,
        (__int64)v94,
        0LL,
        0LL,
        v50 + 1560,
        (__int64)&v95,
        23130);
      if ( v51 )
      {
        v49 = (__int64)v51[6];
LABEL_109:
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v49);
        goto LABEL_153;
      }
      goto LABEL_153;
    }
LABEL_23:
    vSpAddAndCompactDirtyRegion(a1, v9);
    goto LABEL_156;
  }
}

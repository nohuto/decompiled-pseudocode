/*
 * XREFs of ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140009538
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140007408 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1400078A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1400DF7B0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x14032BCD8 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14032EA5C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x140008FB0 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14000934C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x14000A0F4 (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     ??0ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x14000AB70 (--0ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     OffAlphaBlend @ 0x14000F3F4 (OffAlphaBlend.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     OffBitBlt @ 0x1401853F4 (OffBitBlt.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1402056C8 (-vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x14020D430 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x14020F51C (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     OffTransparentBlt @ 0x140217948 (OffTransparentBlt.c)
 *     ??$GreAcquireSemaphore@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z @ 0x1403298FC (--$GreAcquireSemaphore@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z @ 0x1403299A4 (--$GreReleaseSemaphoreExclusive@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x14032ACB0 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x14032CE3C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x14032D0F0 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x14032DFBC (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
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
  __int64 v21; // rbx
  __int64 v22; // rsi
  struct _XLATEOBJ *v23; // r15
  __int64 v24; // rdi
  int v25; // eax
  struct _SURFOBJ *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdi
  int v29; // ecx
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  struct _SURFOBJ *v32; // rdx
  __int64 v33; // rax
  LONG v34; // ecx
  LONG v35; // ecx
  int v36; // ecx
  int v37; // eax
  int v38; // esi
  __int64 v39; // r14
  BOOL (__stdcall *v40)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  PVOID v41; // rcx
  __int64 v42; // rdi
  PVOID *v43; // rbx
  int v44; // eax
  __int64 v45; // rdi
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _SURFOBJ *v47; // rdx
  int v48; // eax
  struct _RECTL v49; // xmm6
  __int64 v50; // rax
  __int64 v51; // rdi
  int v52; // ecx
  PVOID *v53; // rbx
  int v54; // eax
  __int64 v55; // rsi
  BOOL (__stdcall *v56)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  unsigned int v57; // edx
  struct _SURFOBJ *v58; // rcx
  struct REGION *v59; // [rsp+78h] [rbp-90h] BYREF
  struct _POINTL v60; // [rsp+80h] [rbp-88h] BYREF
  struct _RECTL *v61; // [rsp+88h] [rbp-80h]
  struct _CLIPOBJ *v62; // [rsp+90h] [rbp-78h]
  struct _POINTL *v63; // [rsp+98h] [rbp-70h]
  __int64 v64; // [rsp+A0h] [rbp-68h] BYREF
  struct _XLATEOBJ *v65; // [rsp+A8h] [rbp-60h] BYREF
  struct REGION *v66; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int8 *v67; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v68; // [rsp+C0h] [rbp-48h]
  __int64 v69; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v71[2]; // [rsp+D8h] [rbp-30h] BYREF
  struct REGION *v72; // [rsp+E8h] [rbp-20h]
  __int64 v73[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v74; // [rsp+100h] [rbp-8h]
  struct _RECTL v75; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v76[4]; // [rsp+128h] [rbp+20h] BYREF
  int v77; // [rsp+12Ch] [rbp+24h]
  int v78; // [rsp+130h] [rbp+28h]
  int v79; // [rsp+134h] [rbp+2Ch]
  int v80; // [rsp+138h] [rbp+30h]
  char v81[96]; // [rsp+160h] [rbp+58h] BYREF
  int v82; // [rsp+1C0h] [rbp+B8h]

  v61 = a4;
  v63 = a2;
  v7 = Gre::Base::Globals(a1);
  ECLIPOBJTMPIFNEEDED::ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v76);
  if ( !(unsigned int)bIgnoreMirrorUpdate(a1) )
  {
    v8 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x400) != 0 || (v8 & 0xC0) == 0x40 || (v8 & 0x21) != 0x20 )
      goto LABEL_151;
    v62 = 0LL;
    v9 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
    v72 = v9;
    v66 = 0LL;
    if ( *((_QWORD *)a1 + 23) && v9 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v59);
      if ( v59
        && (v65 = (struct _XLATEOBJ *)*((_QWORD *)a1 + 23),
            v67 = (unsigned __int8 *)v9,
            RGNOBJ::bMerge((RGNOBJ *)&v59, (struct RGNOBJ *)&v65, (struct RGNOBJ *)&v67, 8u)) )
      {
        if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v59) == 1 )
        {
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v59);
          goto LABEL_25;
        }
        v10 = v59;
        v66 = v59;
      }
      else
      {
        v10 = v66;
      }
      if ( v10 )
      {
        v62 = (struct _CLIPOBJ *)v76;
        v11 = 0;
        goto LABEL_22;
      }
    }
    if ( (*(_DWORD *)a1 & 0x40) == 0 )
      goto LABEL_20;
    if ( !v9 )
      goto LABEL_151;
    if ( *((_QWORD *)a1 + 23) )
    {
LABEL_20:
      v12 = (struct REGION *)*((_QWORD *)a1 + 23);
      if ( !v12 )
      {
LABEL_26:
        v15 = (__int64 *)*((_QWORD *)a1 + 2);
        v16 = *(_DWORD *)a1;
        v17 = *((_DWORD *)a1 + 1);
        v18 = *((_QWORD *)a1 + 18);
        if ( (*(_DWORD *)a1 & 8) != 0 )
          v17 = 4;
        v68 = (__int64 *)*((_QWORD *)a1 + 2);
        v19 = v17 & 0xEFFFFFFF;
        if ( (v16 & 0x100) == 0 )
          v19 = v17;
        v60.x = a4->left + *((_DWORD *)a1 + 24) - *((_DWORD *)a1 + 28);
        v60.y = a4->top + *((_DWORD *)a1 + 25) - *((_DWORD *)a1 + 29);
        v20 = v15[4];
        v21 = *((_QWORD *)v7 + 471);
        v22 = *((_QWORD *)v7 + 472);
        v23 = 0LL;
        LODWORD(v59) = v19;
        v24 = *(_QWORD *)(v20 + 104);
        v71[0] = 0LL;
        v25 = *((_DWORD *)v15 + 27);
        v65 = 0LL;
        if ( *((_DWORD *)a1 + 38) != v25 || *((_DWORD *)a1 + 39) != *((_DWORD *)v15 + 28) || (v16 & 0x40) != 0 )
        {
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v65, 0LL, 0LL, v18, v24, v21, v21, 0, 0, 0, 0) )
            goto LABEL_148;
          v23 = v65;
          v19 = (unsigned int)v59;
          v15 = v68;
        }
        if ( v19 != 2 )
        {
          switch ( v19 )
          {
            case 4u:
              v26 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
              if ( !v26 || !SURFREFVIEW::bMap((SURFREFVIEW *)v71, v26) )
                goto LABEL_148;
              v27 = *((_QWORD *)a1 + 16);
              v28 = 0LL;
              if ( v27 )
              {
                v29 = *(_DWORD *)(v27 + 88);
                if ( (v29 & 0x80004000) != 0 && (v29 & 0x200) == 0 )
                {
                  v28 = v27 - 24;
                  GreLockDisplayDevice(*(_QWORD *)(v27 - 24 + 48));
                }
              }
              p_pvScan0 = 0LL;
              if ( a3 )
              {
                hsurf = (int)a3[1].hsurf;
                if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
                {
                  p_pvScan0 = &a3[-1].pvScan0;
                  GreLockDisplayDevice(a3->hdev);
                }
              }
              INVOKEOFFCOPYBITS(v63, a3, (struct _POINTL *)a1 + 17, *((struct _SURFOBJ **)a1 + 16), v62, v23, v61, &v60);
              goto LABEL_77;
            case 1u:
              v32 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
              if ( !v32 || !SURFREFVIEW::bMap((SURFREFVIEW *)v71, v32) )
                goto LABEL_148;
              v28 = 0LL;
              v33 = *((_QWORD *)a1 + 16);
              v34 = v60.x + v61->right - v61->left;
              v75.left = v60.x;
              v75.right = v34;
              v35 = v60.y + v61->bottom - v61->top;
              v75.top = v60.y;
              v75.bottom = v35;
              if ( v33 )
              {
                v36 = *(_DWORD *)(v33 + 88);
                if ( (v36 & 0x80004000) != 0 && (v36 & 0x200) == 0 )
                {
                  v28 = v33 - 24;
                  GreLockDisplayDevice(*(_QWORD *)(v33 - 24 + 48));
                }
              }
              p_pvScan0 = 0LL;
              if ( a3 )
              {
                v37 = (int)a3[1].hsurf;
                if ( (v37 & 0x80004000) != 0 && (v37 & 0x200) == 0 )
                {
                  p_pvScan0 = &a3[-1].pvScan0;
                  GreLockDisplayDevice(a3->hdev);
                }
              }
              v38 = *((_DWORD *)a1 + 51);
              v39 = *((_QWORD *)a1 + 16);
              if ( a3->iType != 1 )
                goto LABEL_73;
              if ( bAllowShareAccess(a3)
                && GreGetCurrentThread()
                && *((_QWORD *)GreGetCurrentThread() + 34)
                && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
                && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 0x8000) != 0 )
              {
                v40 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)GreGetCurrentThread() + 34) + 112LL);
LABEL_76:
                OffTransparentBlt(
                  (int)v40,
                  (int)v63,
                  (int)a3,
                  (_DWORD)a1 + 136,
                  v39,
                  v62,
                  (__int64)v23,
                  (__int64)v61,
                  (__int64)&v75,
                  v38,
                  0);
LABEL_77:
                if ( p_pvScan0 )
                  GreUnlockDisplayDevice(p_pvScan0[6]);
                if ( !v28 )
                  goto LABEL_148;
                v41 = *(PVOID *)(v28 + 48);
                goto LABEL_106;
              }
              if ( a3->iType != 1
                || !bAllowShareAccess(a3)
                || !GreGetCurrentThread()
                || !*((_QWORD *)GreGetCurrentThread() + 34)
                || !*((_DWORD *)GreGetCurrentThread() + 87) && !*((_DWORD *)GreGetCurrentThread() + 88) )
              {
LABEL_73:
                if ( ((__int64)a3[1].hsurf & 0x8000) != 0 )
                {
                  v40 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)a3->hdev + 169);
                  goto LABEL_76;
                }
              }
              v40 = EngTransparentBlt;
              goto LABEL_76;
            case 0x1000000u:
              vSpDrawCursor(a1, v63, a3, v61, &v60);
              goto LABEL_148;
          }
          v42 = *v15;
          v43 = 0LL;
          if ( a3 )
          {
            v44 = (int)a3[1].hsurf;
            if ( (v44 & 0x80004000) != 0 && (v44 & 0x200) == 0 )
            {
              v43 = &a3[-1].pvScan0;
              GreLockDisplayDevice(a3->hdev);
            }
          }
          v64 = 0LL;
          v45 = v42 + 1560;
          if ( a3->iType == 1 )
          {
            if ( bAllowShareAccess(a3)
              && GreGetCurrentThread()
              && *((_QWORD *)GreGetCurrentThread() + 34)
              && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
              && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 1) != 0 )
            {
              v46 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread() + 34) + 72LL);
              goto LABEL_104;
            }
            if ( a3->iType == 1
              && bAllowShareAccess(a3)
              && GreGetCurrentThread()
              && *((_QWORD *)GreGetCurrentThread() + 34)
              && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88)) )
            {
              goto LABEL_103;
            }
          }
          if ( ((__int64)a3[1].hsurf & 1) == 0 )
LABEL_103:
            v46 = EngBitBlt;
          else
            v46 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
LABEL_104:
          OffBitBlt(
            (_DWORD)v46,
            (_DWORD)v63,
            (_DWORD)a3,
            0,
            0LL,
            0LL,
            0LL,
            0LL,
            (__int64)v61,
            0LL,
            0LL,
            v45,
            (__int64)&v64,
            23130);
          if ( v43 )
          {
            v41 = v43[6];
LABEL_106:
            GreUnlockDisplayDevice(v41);
          }
LABEL_148:
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v66);
          if ( v72 )
            vSpAddAndCompactDirtyRegion(a1, v72);
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v71);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v65);
          goto LABEL_151;
        }
        v47 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        if ( !v47 || !SURFREFVIEW::bMap((SURFREFVIEW *)v71, v47) )
          goto LABEL_148;
        v75.right = v60.x + v61->right - v61->left;
        v75.bottom = v60.y + v61->bottom - v61->top;
        v75.left = v60.x;
        v75.top = v60.y;
        *(_OWORD *)v73 = 0LL;
        v64 = 0LL;
        v74 = 0LL;
        v70 = 0LL;
        v69 = 0LL;
        if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v64, 0LL, 0LL, v18, v22, v21, v21, 0, 0, 0, 0)
          || !(unsigned int)EXLATEOBJ::bInitXlateObj(&v70, 0LL, 0LL, v24, v22, v21, v21, 0, 0, 0, 0)
          || !(unsigned int)EXLATEOBJ::bInitXlateObj(&v69, 0LL, 0LL, v22, v24, v21, v21, 0, 0, 0, 0) )
        {
LABEL_147:
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v69);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v70);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v64);
          goto LABEL_148;
        }
        v48 = *((_DWORD *)a1 + 50);
        v49 = 0LL;
        LODWORD(v59) = 0;
        v67 = 0LL;
        LODWORD(v73[0]) = v48;
        v73[1] = v64;
        *(_QWORD *)&v74 = v70;
        *((_QWORD *)&v74 + 1) = v69;
        if ( (*((_DWORD *)a1 + 56) & 0xEFFFFFFF) == 3 && !*((_BYTE *)a1 + 231) && (*(_DWORD *)a1 & 0x40) != 0 )
        {
          GreAcquireSemaphore<21,_SPRITESTATE *>(v68);
          vSpUpdatePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v75, &v67);
          v49 = v75;
          LODWORD(v59) = 1;
        }
        v50 = *((_QWORD *)a1 + 16);
        v51 = 0LL;
        if ( v50 )
        {
          v52 = *(_DWORD *)(v50 + 88);
          if ( (v52 & 0x80004000) != 0 && (v52 & 0x200) == 0 )
          {
            v51 = v50 - 24;
            GreLockDisplayDevice(*(_QWORD *)(v50 - 24 + 48));
          }
        }
        v53 = 0LL;
        if ( a3 )
        {
          v54 = (int)a3[1].hsurf;
          if ( (v54 & 0x80004000) != 0 && (v54 & 0x200) == 0 )
          {
            v53 = &a3[-1].pvScan0;
            GreLockDisplayDevice(a3->hdev);
          }
        }
        v55 = *((_QWORD *)a1 + 16);
        if ( a3->iType != 1 )
          goto LABEL_138;
        if ( bAllowShareAccess(a3)
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
          && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 0x10000) != 0 )
        {
          v56 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*((_QWORD *)GreGetCurrentThread() + 34) + 120LL);
LABEL_141:
          OffAlphaBlend(
            (int)v56,
            (int)v63,
            (int)a3,
            (_DWORD)a1 + 136,
            v55,
            v62,
            (__int64)v23,
            (__int64)v61,
            (__int64)&v75,
            (__int64)v73);
          if ( v53 )
            GreUnlockDisplayDevice(v53[6]);
          if ( v51 )
            GreUnlockDisplayDevice(*(_QWORD *)(v51 + 48));
          if ( (_DWORD)v59 )
          {
            v57 = *((_DWORD *)a1 + 51);
            v58 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
            v75 = v49;
            vSpDeletePerPixelAlphaFromColorKey(v58, v57, &v75, v67);
            GreReleaseSemaphoreExclusive<21,_SPRITESTATE *>(v68);
          }
          goto LABEL_147;
        }
        if ( a3->iType != 1
          || !bAllowShareAccess(a3)
          || !GreGetCurrentThread()
          || !*((_QWORD *)GreGetCurrentThread() + 34)
          || !*((_DWORD *)GreGetCurrentThread() + 87) && !*((_DWORD *)GreGetCurrentThread() + 88) )
        {
LABEL_138:
          if ( ((__int64)a3[1].hsurf & 0x10000) != 0 )
          {
            v56 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)a3->hdev + 170);
            goto LABEL_141;
          }
        }
        v56 = EngAlphaBlend;
        goto LABEL_141;
      }
      v13 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
      v62 = (struct _CLIPOBJ *)v76;
      v14 = bConcurrent(v13);
      v10 = v12;
      v11 = v14;
LABEL_22:
      ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v76, v11, v10, (struct ERECTL *)a4, 0);
      if ( v77 >= v79 || v78 >= v80 )
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v66);
        if ( v9 )
          goto LABEL_25;
LABEL_151:
        ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v76);
        return;
      }
      goto LABEL_26;
    }
LABEL_25:
    vSpAddAndCompactDirtyRegion(a1, v9);
    goto LABEL_151;
  }
  if ( v82 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v81);
}

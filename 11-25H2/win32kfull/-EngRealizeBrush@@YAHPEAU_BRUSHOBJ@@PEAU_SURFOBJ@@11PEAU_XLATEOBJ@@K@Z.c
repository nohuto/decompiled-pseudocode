/*
 * XREFs of ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1400FE4C0
 * Callers:
 *     <none>
 * Callees:
 *     EngHTBlt @ 0x14006F20C (EngHTBlt.c)
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1400FEE48 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$09P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FEE80 (--$GreReleaseSemaphoreCommon@$09P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1400FEEE8 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1400FEFA4 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     EngStretchBlt @ 0x140132EF0 (EngStretchBlt.c)
 *     ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401ACA64 (--$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall EngRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  __int64 p_sizlBitmap; // rbx
  __int64 v7; // r13
  unsigned __int64 v8; // r15
  __int64 p_iBitmapFormat; // rax
  __int64 v10; // rdi
  unsigned __int16 *v11; // r14
  unsigned int v12; // esi
  __int64 p_hdev; // rax
  __int64 v14; // rbx
  Gre::Base *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rax
  unsigned __int64 v17; // rcx
  LONG v18; // esi
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  unsigned int v21; // r12d
  unsigned __int64 v22; // rcx
  unsigned int v23; // ecx
  unsigned int v24; // r15d
  __int64 v25; // r14
  LONG v26; // eax
  LONG y; // r15d
  unsigned int v28; // eax
  Gre::Base *v29; // rcx
  struct _BRUSHOBJ *v30; // r12
  struct Gre::Base::SESSION_GLOBALS *v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  SURFOBJ *v34; // rcx
  LONG v35; // eax
  struct Gre::Base::SESSION_GLOBALS *v36; // rax
  unsigned __int64 v37; // r13
  Gre::Base *v38; // rcx
  struct Gre::Base::SESSION_GLOBALS *v39; // rax
  struct Gre::Base::SESSION_GLOBALS *v41; // rax
  int v42; // eax
  int v43; // ebx
  LONG v44; // esi
  void *v45; // r8
  Gre::Base *v46; // rcx
  struct Gre::Base::SESSION_GLOBALS *v47; // rax
  unsigned __int64 v48; // rcx
  SURFOBJ *v49; // rcx
  LONG v50; // eax
  struct Gre::Base::SESSION_GLOBALS *v51; // rax
  int v52; // r14d
  unsigned __int64 v53; // rdx
  __int64 v54; // rcx
  ULONG iSolidColor; // eax
  int v56; // ecx
  struct XLATE *v57; // r8
  __int64 v58; // rax
  __int64 v59; // rdx
  SURFOBJ *v60; // rcx
  XLATEOBJ *v61; // r15
  __int64 v62; // r12
  SURFOBJ *v63; // rcx
  LONG right; // eax
  LONG v65; // ecx
  __int64 v66; // rax
  int v67; // [rsp+60h] [rbp-A0h]
  Gre::Base *v68; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v69; // [rsp+70h] [rbp-90h]
  int v70; // [rsp+74h] [rbp-8Ch]
  XLATEOBJ *pxlo; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v72; // [rsp+80h] [rbp-80h] BYREF
  POINTL pptlHTOrg; // [rsp+88h] [rbp-78h] BYREF
  __int64 v74; // [rsp+90h] [rbp-70h]
  int v75; // [rsp+98h] [rbp-68h]
  int v76; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-60h] BYREF
  char v78; // [rsp+A8h] [rbp-58h]
  int v79; // [rsp+ACh] [rbp-54h]
  POINTL pptlSrc; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v81; // [rsp+B8h] [rbp-48h] BYREF
  char v82; // [rsp+C0h] [rbp-40h]
  int v83; // [rsp+C4h] [rbp-3Ch]
  __int64 v84; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v85; // [rsp+D0h] [rbp-30h]
  __int128 v86; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v87; // [rsp+E8h] [rbp-18h]
  __int64 v88; // [rsp+F8h] [rbp-8h] BYREF
  int v89; // [rsp+100h] [rbp+0h]
  __int64 *v90; // [rsp+108h] [rbp+8h]
  unsigned __int64 v91; // [rsp+110h] [rbp+10h]
  RECTL prclDest; // [rsp+120h] [rbp+20h] BYREF
  RECTL prclSrc; // [rsp+130h] [rbp+30h] BYREF

  p_sizlBitmap = (__int64)&a3->sizlBitmap;
  pxlo = a5;
  v72 = a1;
  v7 = (__int64)a3;
  v8 = (unsigned __int64)&a4[-1].pvScan0 & -(__int64)(a4 != 0LL);
  v75 = 0;
  v91 = v8;
  p_iBitmapFormat = (__int64)&a2->iBitmapFormat;
  v85 = 0LL;
  v70 = 0;
  if ( !a2 )
    p_iBitmapFormat = 96LL;
  pptlSrc = 0LL;
  v67 = 0;
  LODWORD(v10) = 0;
  v11 = 0LL;
  prclDest = 0LL;
  v12 = *(_DWORD *)p_iBitmapFormat;
  if ( !a3 )
    p_sizlBitmap = 56LL;
  v69 = *(_DWORD *)p_iBitmapFormat;
  p_hdev = (__int64)&a2->hdev;
  if ( !a2 )
    p_hdev = 48LL;
  v14 = *(_QWORD *)p_sizlBitmap;
  v90 = (__int64 *)p_hdev;
  v86 = 0LL;
  v84 = *(_QWORD *)p_hdev;
  v87 = 0LL;
  pptlHTOrg = (POINTL)v14;
  v68 = Gre::Base::Globals((Gre::Base *)0x30);
  v76 = 1;
  v16 = Gre::Base::Globals(v15);
  GreAcquireSemaphore<10,>(v16);
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v84) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v84, 0LL) )
    v11 = (unsigned __int16 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v84);
  v17 = v12 - 1;
  if ( v12 == 1 )
  {
    if ( (((_DWORD)v14 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v14 == 24 )
    {
      v19 = 1LL;
      v18 = (v14 + 63) & 0xFFFFFFE0;
    }
    else
    {
      v18 = 32;
      v19 = 1LL;
      if ( !v11 )
        goto LABEL_72;
      v17 = v11[4];
      switch ( (_DWORD)v17 )
      {
        case 0xA:
          v18 = 160;
          break;
        case 0xC:
          v18 = 96;
          break;
        case 0xE:
          v18 = 224;
          break;
        default:
          goto LABEL_72;
      }
      v67 = 1;
    }
LABEL_72:
    if ( v18 < (int)v14 )
      goto LABEL_44;
    goto LABEL_15;
  }
  v17 = v12 - 2;
  if ( v12 == 2 )
  {
    if ( (_DWORD)v14 == 8 )
    {
      v18 = 8;
      v19 = 4LL;
      goto LABEL_15;
    }
    v19 = 4LL;
    v18 = (v14 + 15) & 0xFFFFFFF8;
    goto LABEL_72;
  }
  v17 = v12 - 3;
  if ( v12 == 3 )
  {
    v19 = 8LL;
    v18 = (v14 + 7) & 0xFFFFFFFC;
    goto LABEL_72;
  }
  v17 = v12 - 4;
  if ( v12 == 4 )
  {
    v19 = 16LL;
    v18 = (v14 + 7) & 0xFFFFFFFC;
    goto LABEL_72;
  }
  if ( v12 == 5 )
  {
    v19 = 24LL;
    v18 = (v14 + 7) & 0xFFFFFFFC;
    goto LABEL_72;
  }
  v18 = v14;
  v19 = 32LL;
LABEL_15:
  v20 = v19 * (unsigned int)v18;
  if ( v20 > 0xFFFFFFFF )
    goto LABEL_44;
  v21 = (unsigned int)v20 >> 3;
  v22 = v21 * (unsigned __int64)(unsigned int)pptlHTOrg.y;
  v81 = v22;
  if ( v22 > 0xFFFFFFFF )
    goto LABEL_45;
  v23 = v22 + 80;
  if ( v23 < 0x50 )
    goto LABEL_45;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 56);
    v85 = v10;
    if ( (((_DWORD)v10 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v10 == 24 )
      v52 = (v10 + 63) & 0xFFFFFFE0;
    else
      v52 = 32;
    v70 = v52;
    if ( v52 < (int)v10 )
      goto LABEL_45;
    v53 = (unsigned int)(v52 >> 3) * (unsigned __int64)HIDWORD(v85);
    v75 = v52 >> 3;
    if ( v53 > 0xFFFFFFFF || (unsigned int)v53 + v23 < v23 )
      goto LABEL_45;
    v23 += v53;
  }
  v24 = v23 + 76;
  if ( v23 >= 0xFFFFFFB4 )
    goto LABEL_45;
  if ( *((_QWORD *)v68 + 4) )
  {
    v25 = _InterlockedExchange64((volatile __int64 *)v68 + 4, 0LL);
    if ( v25 )
    {
      if ( v24 > v23 && *(_DWORD *)(v25 + 4) >= v24 )
        goto LABEL_26;
      Win32FreePool((void *)v25);
    }
  }
  v25 = PALLOCMEM(v24, 1919051079LL);
  if ( !v25 )
  {
LABEL_45:
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v76);
    return 0LL;
  }
LABEL_26:
  v72[1].pvRbrush = (PVOID)v25;
  v26 = v14;
  *(_DWORD *)(v25 + 4) = v24;
  if ( v67 )
    v26 = v18;
  y = pptlHTOrg.y;
  *(_DWORD *)(v25 + 20) = v26;
  *(_QWORD *)(v25 + 32) = v25 + 76;
  v28 = v69;
  *(_DWORD *)(v25 + 72) = v69;
  *(_DWORD *)(v25 + 28) = v21;
  *(_DWORD *)(v25 + 16) = v18;
  *(_DWORD *)(v25 + 24) = y;
  *(_QWORD *)&v87 = 0LL;
  v77 = 0LL;
  v78 = 0;
  v79 = 0;
  *(_QWORD *)&v86 = __PAIR64__(v18, v28);
  DWORD2(v86) = y;
  DWORD2(v87) = 1;
  SURFMEM::bCreateDIB(
    (SURFMEM *)&v77,
    (struct _DEVBITMAPINFO *)&v86,
    *(void **)(v25 + 32),
    0LL,
    0,
    0LL,
    0LL,
    0,
    1,
    0,
    0);
  if ( v77 )
  {
    v30 = v72;
    prclDest.right = v14;
    prclDest.bottom = y;
    LODWORD(v74) = v72[2].iSolidColor;
    LODWORD(v68) = *(&v72[2].iSolidColor + 1);
    v31 = Gre::Base::Globals(v29);
    GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
      GreReleaseSemaphoreExclusiveInternal,
      *(_QWORD *)v31 + 1352LL);
    if ( v69 == 1 )
    {
      if ( a6 < 0xC )
        goto LABEL_32;
      v32 = (unsigned int)v74;
      v33 = (unsigned int)v68;
      if ( (_DWORD)v74 != (_DWORD)v68 )
        goto LABEL_92;
    }
    else
    {
      v32 = (unsigned int)v74;
      v33 = (unsigned int)v68;
    }
    if ( v69 == 2
      && (v72[3].iSolidColor & 5) != 0
      && ((_DWORD)v32 != (_DWORD)v33 || !_bittest((const signed __int32 *)&v72[5], 0x11u)) )
    {
LABEL_92:
      v89 = 0;
      v88 = 0LL;
      v54 = *v90;
      pptlHTOrg = 0LL;
      prclSrc = prclDest;
      *(_QWORD *)(v77 + 48) = v54;
      v68 = 0LL;
      v74 = 0LL;
      if ( a6 >= 6 )
      {
        LOBYTE(v33) = 0;
        if ( !_bittest((const signed __int32 *)&v30[5], 0x11u) )
          goto LABEL_105;
      }
      else
      {
        LOBYTE(v33) = 1;
      }
      iSolidColor = v30[3].iSolidColor;
      if ( (iSolidColor & 4) != 0 || (iSolidColor & 1) != 0 )
      {
        v56 = *(&v30[2].iSolidColor + 1);
        if ( (_BYTE)v33 )
        {
          HIDWORD(v72) = v30[1].iSolidColor;
          LODWORD(v72) = v56;
        }
        else
        {
          LODWORD(v72) = v30[2].iSolidColor;
          HIDWORD(v72) = v56;
        }
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v88, 1u, 2u, (const unsigned int *)&v72, 0, 0, 0, 0x400u, 1)
          && (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (Gre::Base *)&v68,
                             *(_QWORD *)&v30[2].flColorType,
                             v30[3].iSolidColor,
                             v88,
                             *((_QWORD *)v30[3].pvRbrush + 16),
                             *(_QWORD *)&v30[4].iSolidColor,
                             *(_QWORD *)&v30[4].iSolidColor,
                             v30[2].iSolidColor,
                             *(&v30[2].iSolidColor + 1),
                             0xFFFFFF,
                             0) )
        {
          v57 = v68;
          v58 = v7 + 104;
          pxlo = (XLATEOBJ *)v68;
          if ( !v7 )
            v58 = 128LL;
          v74 = *(_QWORD *)v58;
          *(_QWORD *)v58 = 0LL;
          goto LABEL_106;
        }
      }
LABEL_105:
      v57 = (struct XLATE *)pxlo;
LABEL_106:
      if ( v69 == 1 && v67 )
      {
        v59 = v7;
        prclDest.right = v18;
        if ( !v7 )
          v59 = 24LL;
        if ( v77 )
          v60 = (SURFOBJ *)(v77 + 24);
        else
          v60 = 0LL;
        EngHTBlt(v60, (SURFOBJ *)v59, 0LL, 0LL, v57, 0LL, (__int64 *)&pptlHTOrg, &prclDest, &prclSrc.left, 0LL, 64, 0LL);
      }
      else if ( prclDest.left != v18 )
      {
        v61 = pxlo;
        v62 = v7;
        if ( !v7 )
          v62 = 24LL;
        do
        {
          v63 = (SURFOBJ *)(v77 + 24);
          if ( !v77 )
            v63 = 0LL;
          EngStretchBlt(v63, (SURFOBJ *)v62, 0LL, 0LL, v61, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 4u);
          right = prclDest.right;
          prclDest.left = prclDest.right;
          v65 = v14 + prclDest.right;
          if ( (int)v14 + prclDest.right > v18 )
            v65 = v18;
          prclDest.right = v65;
        }
        while ( right != v18 );
      }
      if ( v74 )
      {
        v66 = v7 + 104;
        v33 = 128LL;
        if ( !v7 )
          v66 = 128LL;
        *(_QWORD *)v66 = v74;
      }
      EXLATEOBJ::vAltUnlock(&v68, v33, (__int64)v57);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v88);
LABEL_40:
      v36 = Gre::Base::Globals((Gre::Base *)v32);
      GreAcquireSemaphore<10,>(v36);
      v37 = v91;
      if ( !v91 )
      {
        *(_QWORD *)(v25 + 56) = 0LL;
LABEL_42:
        SURFMEM::~SURFMEM((SURFMEM *)&v77);
        v39 = Gre::Base::Globals(v38);
        GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
          GreReleaseSemaphoreExclusiveInternal,
          *(_QWORD *)v39 + 1352LL);
        return 1LL;
      }
      v42 = v75;
      v43 = v70;
      v44 = HIDWORD(v85);
      *(_QWORD *)(v25 + 56) = v25 + (unsigned int)v81 + 76LL;
      *(_DWORD *)(v25 + 64) = v42;
      *(_DWORD *)(v25 + 40) = v43;
      *(_DWORD *)(v25 + 44) = v10;
      *(_DWORD *)(v25 + 48) = v44;
      LODWORD(v86) = 1;
      *(_QWORD *)((char *)&v86 + 4) = __PAIR64__(v44, v43);
      *(_QWORD *)&v87 = 0LL;
      DWORD2(v87) = 1;
      v45 = *(void **)(v25 + 56);
      v81 = 0LL;
      v82 = 0;
      v83 = 0;
      SURFMEM::bCreateDIB((SURFMEM *)&v81, (struct _DEVBITMAPINFO *)&v86, v45, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( v81 )
      {
        pptlSrc = 0LL;
        *(_QWORD *)&prclDest.left = 0LL;
        prclDest.right = v10;
        prclDest.bottom = v44;
        v47 = Gre::Base::Globals(v46);
        GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
          GreReleaseSemaphoreExclusiveInternal,
          *(_QWORD *)v47 + 1352LL);
        if ( prclDest.left != v43 )
        {
          do
          {
            v49 = (SURFOBJ *)(v81 + 24);
            if ( !v81 )
              v49 = 0LL;
            EngCopyBits(v49, (SURFOBJ *)(v37 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
            v50 = prclDest.right;
            prclDest.left = prclDest.right;
            v48 = (unsigned int)(v10 + prclDest.right);
            if ( (int)v48 > v43 )
              v48 = (unsigned int)v43;
            prclDest.right = v48;
          }
          while ( v50 != v43 );
        }
        v51 = Gre::Base::Globals((Gre::Base *)v48);
        GreAcquireSemaphore<10,>(v51);
        SURFMEM::~SURFMEM((SURFMEM *)&v81);
        goto LABEL_42;
      }
      SURFMEM::~SURFMEM((SURFMEM *)&v81);
      SURFMEM::~SURFMEM((SURFMEM *)&v77);
      goto LABEL_45;
    }
LABEL_32:
    if ( prclDest.left != v18 )
    {
      if ( !v7 )
        v7 = 24LL;
      do
      {
        if ( v77 )
          v34 = (SURFOBJ *)(v77 + 24);
        else
          v34 = 0LL;
        EngCopyBits(v34, (SURFOBJ *)v7, 0LL, pxlo, &prclDest, &pptlSrc);
        v35 = prclDest.right;
        prclDest.left = prclDest.right;
        v32 = (unsigned int)(v14 + prclDest.right);
        if ( (int)v32 > v18 )
          v32 = (unsigned int)v18;
        prclDest.right = v32;
      }
      while ( v35 != v18 );
    }
    goto LABEL_40;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v77);
LABEL_44:
  v41 = Gre::Base::Globals((Gre::Base *)v17);
  GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, *(_QWORD *)v41 + 1352LL);
  return 0LL;
}

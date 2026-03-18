/*
 * XREFs of ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x140180DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 *     EngStretchBlt @ 0x1400E65F0 (EngStretchBlt.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x14018087C (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     EngHTBlt @ 0x14018174C (EngHTBlt.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1401829CC (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140182AB8 (--$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x140182B90 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140182BBC (--$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ?ulSizeSet@RBRUSH@@QEAAKKH@Z @ 0x14030A98C (-ulSizeSet@RBRUSH@@QEAAKKH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall EngRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  __int64 v6; // r13
  __int64 p_sizlBitmap; // rbx
  unsigned __int64 v8; // r15
  __int64 p_iBitmapFormat; // rax
  __int64 v10; // rdi
  int v11; // r12d
  unsigned __int16 *v12; // r14
  unsigned int v13; // esi
  __int64 p_hdev; // rax
  Gre::Base *v15; // rbx
  Gre::Base *v16; // rcx
  struct Gre::Base::SESSION_GLOBALS *v17; // rax
  unsigned __int64 v18; // rcx
  LONG v19; // esi
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned int v22; // ecx
  unsigned int v23; // r15d
  __int64 v24; // r14
  LONG v25; // r15d
  LONG v26; // eax
  unsigned int v27; // eax
  Gre::Base *v28; // rcx
  struct _BRUSHOBJ *v29; // r15
  struct Gre::Base::SESSION_GLOBALS *v30; // rax
  unsigned __int64 x; // rcx
  __int64 v32; // rdx
  SURFOBJ *v33; // rcx
  LONG v34; // eax
  struct Gre::Base::SESSION_GLOBALS *v35; // rax
  unsigned __int64 v36; // rsi
  Gre::Base *v37; // rcx
  struct Gre::Base::SESSION_GLOBALS *v38; // rax
  struct Gre::Base::SESSION_GLOBALS *v40; // rax
  int v41; // eax
  LONG v42; // ebx
  void *v43; // r8
  Gre::Base *v44; // rcx
  struct Gre::Base::SESSION_GLOBALS *v45; // rax
  unsigned __int64 v46; // rcx
  SURFOBJ *v47; // rcx
  LONG v48; // eax
  struct Gre::Base::SESSION_GLOBALS *v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  ULONG iSolidColor; // eax
  int v53; // ecx
  XLATEOBJ *v54; // r8
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  bool v58; // zf
  __int64 v59; // r15
  XLATEOBJ *v60; // r13
  SURFOBJ *v61; // rcx
  LONG right; // eax
  LONG v63; // ecx
  __int64 v64; // rax
  int v65; // [rsp+60h] [rbp-A0h]
  struct _BRUSHOBJ *v66; // [rsp+68h] [rbp-98h] BYREF
  POINTL pptlHTOrg; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v68; // [rsp+78h] [rbp-88h]
  XLATEOBJ *pxlo; // [rsp+80h] [rbp-80h]
  XLATEOBJ *v70; // [rsp+88h] [rbp-78h] BYREF
  int v71; // [rsp+90h] [rbp-70h] BYREF
  __int64 v72; // [rsp+98h] [rbp-68h] BYREF
  char v73; // [rsp+A0h] [rbp-60h]
  int v74; // [rsp+A4h] [rbp-5Ch]
  POINTL pptlSrc; // [rsp+A8h] [rbp-58h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v76; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v77; // [rsp+B8h] [rbp-48h] BYREF
  char v78; // [rsp+C0h] [rbp-40h]
  int v79; // [rsp+C4h] [rbp-3Ch]
  __int64 v80; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v81; // [rsp+D0h] [rbp-30h]
  __int128 v82; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v83; // [rsp+E8h] [rbp-18h]
  __int64 v84; // [rsp+F8h] [rbp-8h]
  __int64 v85; // [rsp+100h] [rbp+0h] BYREF
  int v86; // [rsp+108h] [rbp+8h]
  __int64 *v87; // [rsp+110h] [rbp+10h]
  struct _SURFOBJ *v88; // [rsp+118h] [rbp+18h]
  unsigned __int64 v89; // [rsp+120h] [rbp+20h]
  RECTL prclDest; // [rsp+130h] [rbp+30h] BYREF
  RECTL prclSrc; // [rsp+140h] [rbp+40h] BYREF

  v6 = (__int64)a3;
  pxlo = a5;
  v66 = a1;
  v88 = a3;
  p_sizlBitmap = (__int64)&a3->sizlBitmap;
  v8 = (unsigned __int64)&a4[-1].pvScan0 & -(__int64)(a4 != 0LL);
  LODWORD(v84) = 0;
  v89 = v8;
  p_iBitmapFormat = (__int64)&a2->iBitmapFormat;
  v81 = 0LL;
  pptlSrc = 0LL;
  if ( !a2 )
    p_iBitmapFormat = 96LL;
  v65 = 0;
  LODWORD(v10) = 0;
  v11 = 0;
  v12 = 0LL;
  prclDest = 0LL;
  v13 = *(_DWORD *)p_iBitmapFormat;
  if ( !a3 )
    p_sizlBitmap = 56LL;
  v68 = *(_DWORD *)p_iBitmapFormat;
  p_hdev = (__int64)&a2->hdev;
  if ( !a2 )
    p_hdev = 48LL;
  v15 = *(Gre::Base **)p_sizlBitmap;
  v87 = (__int64 *)p_hdev;
  v82 = 0LL;
  v80 = *(_QWORD *)p_hdev;
  v83 = 0LL;
  v70 = (XLATEOBJ *)v15;
  v76 = Gre::Base::Globals((Gre::Base *)0x30);
  v71 = 1;
  v17 = Gre::Base::Globals(v16);
  GreAcquireSemaphore<10,>(v17);
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v80) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v80, 0LL) )
    v12 = (unsigned __int16 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v80);
  v18 = v13 - 1;
  if ( v13 == 1 )
  {
    if ( (((_DWORD)v15 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v15 == 24 )
    {
      v20 = 1LL;
      v19 = ((_DWORD)v15 + 63) & 0xFFFFFFE0;
    }
    else
    {
      v19 = 32;
      v20 = 1LL;
      if ( !v12 )
        goto LABEL_73;
      v18 = v12[4];
      switch ( (_DWORD)v18 )
      {
        case 0xA:
          v19 = 160;
          break;
        case 0xC:
          v19 = 96;
          break;
        case 0xE:
          v19 = 224;
          break;
        default:
          goto LABEL_73;
      }
      v65 = 1;
    }
LABEL_73:
    if ( v19 < (int)v15 )
      goto LABEL_42;
    goto LABEL_15;
  }
  v18 = v13 - 2;
  if ( v13 == 2 )
  {
    if ( (_DWORD)v15 == 8 )
    {
      v19 = 8;
      v20 = 4LL;
      goto LABEL_15;
    }
    v20 = 4LL;
    v19 = ((_DWORD)v15 + 15) & 0xFFFFFFF8;
    goto LABEL_73;
  }
  v18 = v13 - 3;
  if ( v13 == 3 )
  {
    v20 = 8LL;
    v19 = ((_DWORD)v15 + 7) & 0xFFFFFFFC;
    goto LABEL_73;
  }
  v18 = v13 - 4;
  if ( v13 == 4 )
  {
    v20 = 16LL;
    v19 = ((_DWORD)v15 + 7) & 0xFFFFFFFC;
    goto LABEL_73;
  }
  if ( v13 == 5 )
  {
    v20 = 24LL;
    v19 = ((_DWORD)v15 + 7) & 0xFFFFFFFC;
    goto LABEL_73;
  }
  v19 = (int)v15;
  v20 = 32LL;
LABEL_15:
  v18 = v20 * (unsigned int)v19;
  if ( v18 > 0xFFFFFFFF )
    goto LABEL_42;
  pptlHTOrg = (POINTL)((unsigned int)v18 >> 3);
  v21 = HIDWORD(v70) * *(_QWORD *)&pptlHTOrg;
  v77 = v21;
  if ( v21 > 0xFFFFFFFF )
    goto LABEL_43;
  v22 = v21 + 80;
  if ( v22 < 0x50 )
    goto LABEL_43;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 56);
    v81 = v10;
    if ( (((_DWORD)v10 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v10 == 24 )
      v11 = (v10 + 63) & 0xFFFFFFE0;
    else
      v11 = 32;
    if ( v11 < (int)v10 )
      goto LABEL_43;
    v84 = (unsigned int)(v11 >> 3);
    v50 = HIDWORD(v81) * v84;
    if ( v50 > 0xFFFFFFFF || (unsigned int)v50 + v22 < v22 )
      goto LABEL_43;
    v22 += v50;
  }
  v23 = v22 + 76;
  if ( v22 >= 0xFFFFFFB4 )
    goto LABEL_43;
  if ( *((_QWORD *)v76 + 15) )
  {
    v24 = _InterlockedExchange64((volatile __int64 *)v76 + 15, 0LL);
    if ( v24 )
    {
      if ( v23 > v22 && *(_DWORD *)(v24 + 4) >= v23 )
        goto LABEL_24;
      Win32FreePool((void *)v24);
    }
  }
  v24 = PALLOCMEM(v23, 1919051079LL);
  if ( !v24 )
  {
LABEL_43:
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v71);
    return 0LL;
  }
LABEL_24:
  v66[1].pvRbrush = (PVOID)v24;
  RBRUSH::ulSizeSet((RBRUSH *)v24, v23, 0);
  v25 = HIDWORD(v70);
  *(_DWORD *)(v24 + 28) = pptlHTOrg.x;
  v26 = (int)v15;
  *(_DWORD *)(v24 + 16) = v19;
  if ( v65 )
    v26 = v19;
  *(_DWORD *)(v24 + 20) = v26;
  *(_DWORD *)(v24 + 24) = v25;
  *(_QWORD *)(v24 + 32) = v24 + 76;
  v27 = v68;
  *(_DWORD *)(v24 + 72) = v68;
  *(_QWORD *)&v83 = 0LL;
  v72 = 0LL;
  v73 = 0;
  v74 = 0;
  *(_QWORD *)&v82 = __PAIR64__(v19, v27);
  DWORD2(v82) = v25;
  DWORD2(v83) = 1;
  SURFMEM::bCreateDIB((SURFMEM *)&v72, (struct _DEVBITMAPINFO *)&v82, *(void **)(v24 + 32), 0LL, 0, 0LL, 0LL, 0, 1, 0);
  if ( v72 )
  {
    prclDest.bottom = v25;
    v29 = v66;
    prclDest.right = (int)v15;
    pptlHTOrg.x = v66[2].iSolidColor;
    LODWORD(v66) = *(&v66[2].iSolidColor + 1);
    v30 = Gre::Base::Globals(v28);
    GreReleaseSemaphoreExclusive<10,>(v30);
    if ( v68 == 1 )
    {
      if ( a6 < 0xC )
        goto LABEL_30;
      x = (unsigned int)pptlHTOrg.x;
      v32 = (unsigned int)v66;
      if ( pptlHTOrg.x != (_DWORD)v66 )
        goto LABEL_93;
    }
    else
    {
      x = (unsigned int)pptlHTOrg.x;
      v32 = (unsigned int)v66;
    }
    if ( v68 == 2
      && (v29[3].iSolidColor & 5) != 0
      && ((_DWORD)x != (_DWORD)v32 || !_bittest((const signed __int32 *)&v29[5], 0x11u)) )
    {
LABEL_93:
      v86 = 0;
      v85 = 0LL;
      v51 = *v87;
      pptlHTOrg = 0LL;
      prclSrc = prclDest;
      *(_QWORD *)(v72 + 48) = v51;
      v70 = 0LL;
      v76 = 0LL;
      if ( a6 >= 6 )
      {
        LOBYTE(v32) = 0;
        if ( !_bittest((const signed __int32 *)&v29[5], 0x11u) )
          goto LABEL_106;
      }
      else
      {
        LOBYTE(v32) = 1;
      }
      iSolidColor = v29[3].iSolidColor;
      if ( (iSolidColor & 4) != 0 || (iSolidColor & 1) != 0 )
      {
        v53 = *(&v29[2].iSolidColor + 1);
        if ( (_BYTE)v32 )
        {
          HIDWORD(v66) = v29[1].iSolidColor;
          LODWORD(v66) = v53;
        }
        else
        {
          LODWORD(v66) = v29[2].iSolidColor;
          HIDWORD(v66) = v53;
        }
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v85, 1u, 2u, (const unsigned int *)&v66, 0, 0, 0, 0x400u, 1)
          && (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (Gre::Base *)&v70,
                             *(void **)&v29[2].flColorType,
                             v29[3].iSolidColor,
                             v85,
                             *((_QWORD *)v29[3].pvRbrush + 16),
                             *(_QWORD *)&v29[4].iSolidColor,
                             *(Gre::Base **)&v29[4].iSolidColor,
                             v29[2].iSolidColor,
                             *(&v29[2].iSolidColor + 1),
                             0xFFFFFF,
                             0) )
        {
          v54 = v70;
          v55 = v6 + 104;
          pxlo = v70;
          if ( !v6 )
            v55 = 128LL;
          v76 = *(struct Gre::Base::SESSION_GLOBALS **)v55;
          *(_QWORD *)v55 = 0LL;
          goto LABEL_107;
        }
      }
LABEL_106:
      v54 = pxlo;
LABEL_107:
      if ( v68 == 1 && v65 )
      {
        v56 = v6;
        prclDest.right = v19;
        if ( !v6 )
          v56 = 24LL;
        if ( v72 )
          v57 = v72 + 24;
        else
          v57 = 0LL;
        EngHTBlt(v57, v56, 0LL, 0LL, v54, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 64, 0LL);
      }
      else if ( prclDest.left != v19 )
      {
        v58 = v6 == 0;
        v59 = v6;
        v60 = pxlo;
        if ( v58 )
          v59 = 24LL;
        do
        {
          v61 = (SURFOBJ *)(v72 + 24);
          if ( !v72 )
            v61 = 0LL;
          EngStretchBlt(v61, (SURFOBJ *)v59, 0LL, 0LL, v60, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 4u);
          right = prclDest.right;
          prclDest.left = prclDest.right;
          v63 = (_DWORD)v15 + prclDest.right;
          if ( (int)v15 + prclDest.right > v19 )
            v63 = v19;
          prclDest.right = v63;
        }
        while ( right != v19 );
        v6 = (__int64)v88;
      }
      if ( v76 )
      {
        v64 = v6 + 104;
        v32 = 128LL;
        if ( !v6 )
          v64 = 128LL;
        *(_QWORD *)v64 = v76;
      }
      EXLATEOBJ::vAltUnlock((Gre::Base **)&v70, v32, (__int64)v54);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v85);
LABEL_38:
      v35 = Gre::Base::Globals((Gre::Base *)x);
      GreAcquireSemaphore<10,>(v35);
      v36 = v89;
      if ( !v89 )
      {
        *(_QWORD *)(v24 + 56) = 0LL;
LABEL_40:
        SURFMEM::~SURFMEM((SURFMEM *)&v72);
        v38 = Gre::Base::Globals(v37);
        GreReleaseSemaphoreExclusive<10,>(v38);
        return 1LL;
      }
      v41 = v84;
      v42 = HIDWORD(v81);
      *(_QWORD *)(v24 + 56) = v24 + (unsigned int)v77 + 76LL;
      *(_DWORD *)(v24 + 64) = v41;
      *(_DWORD *)(v24 + 40) = v11;
      *(_DWORD *)(v24 + 44) = v10;
      *(_DWORD *)(v24 + 48) = v42;
      LODWORD(v82) = 1;
      *(_QWORD *)((char *)&v82 + 4) = __PAIR64__(v42, v11);
      *(_QWORD *)&v83 = 0LL;
      DWORD2(v83) = 1;
      v43 = *(void **)(v24 + 56);
      v77 = 0LL;
      v78 = 0;
      v79 = 0;
      SURFMEM::bCreateDIB((SURFMEM *)&v77, (struct _DEVBITMAPINFO *)&v82, v43, 0LL, 0, 0LL, 0LL, 0, 1, 0);
      if ( v77 )
      {
        pptlSrc = 0LL;
        *(_QWORD *)&prclDest.left = 0LL;
        prclDest.right = v10;
        prclDest.bottom = v42;
        v45 = Gre::Base::Globals(v44);
        GreReleaseSemaphoreExclusive<10,>(v45);
        if ( prclDest.left != v11 )
        {
          do
          {
            v47 = (SURFOBJ *)(v77 + 24);
            if ( !v77 )
              v47 = 0LL;
            EngCopyBits(v47, (SURFOBJ *)(v36 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
            v48 = prclDest.right;
            prclDest.left = prclDest.right;
            v46 = (unsigned int)(v10 + prclDest.right);
            if ( (int)v46 > v11 )
              v46 = (unsigned int)v11;
            prclDest.right = v46;
          }
          while ( v48 != v11 );
        }
        v49 = Gre::Base::Globals((Gre::Base *)v46);
        GreAcquireSemaphore<10,>(v49);
        SURFMEM::~SURFMEM((SURFMEM *)&v77);
        goto LABEL_40;
      }
      SURFMEM::~SURFMEM((SURFMEM *)&v77);
      SURFMEM::~SURFMEM((SURFMEM *)&v72);
      goto LABEL_43;
    }
LABEL_30:
    if ( prclDest.left != v19 )
    {
      if ( !v6 )
        v6 = 24LL;
      do
      {
        if ( v72 )
          v33 = (SURFOBJ *)(v72 + 24);
        else
          v33 = 0LL;
        EngCopyBits(v33, (SURFOBJ *)v6, 0LL, pxlo, &prclDest, &pptlSrc);
        v34 = prclDest.right;
        prclDest.left = prclDest.right;
        x = (unsigned int)((_DWORD)v15 + prclDest.right);
        if ( (int)x > v19 )
          x = (unsigned int)v19;
        prclDest.right = x;
      }
      while ( v34 != v19 );
    }
    goto LABEL_38;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v72);
LABEL_42:
  v40 = Gre::Base::Globals((Gre::Base *)v18);
  GreReleaseSemaphoreExclusive<10,>(v40);
  return 0LL;
}

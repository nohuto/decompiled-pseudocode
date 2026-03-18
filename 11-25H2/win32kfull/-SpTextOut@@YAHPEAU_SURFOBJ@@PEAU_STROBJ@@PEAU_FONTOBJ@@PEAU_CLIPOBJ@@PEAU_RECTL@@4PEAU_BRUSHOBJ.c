/*
 * XREFs of ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400117E0
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14000934C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140011E3C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1400125A4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     EngTextOut @ 0x140012BD0 (EngTextOut.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SpTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        MIX mix)
{
  int v13; // esi
  RECTL *p_rclBkGround; // r9
  unsigned int v15; // r13d
  unsigned __int64 v16; // rdi
  FLONG flFontType; // ecx
  HDEV hdev; // rax
  ULONG cGlyphs; // ebx
  SURFOBJ *v20; // r15
  PVOID *p_pvScan0; // rbx
  BOOL (__stdcall *v22)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // r12
  PVOID *v23; // rdi
  int hsurf; // eax
  CLIPOBJ *v25; // rsi
  struct _POINTL v26; // rbx
  LONG y; // r13d
  int v28; // ecx
  LONG v29; // edx
  LONG x; // r8d
  int v31; // eax
  int v32; // r13d
  int v33; // ebx
  int v34; // r15d
  int v35; // r8d
  int v36; // ecx
  int v37; // eax
  int pwszOrg; // ecx
  __int64 v40; // rax
  ULONG v41; // r9d
  _DWORD *v42; // r10
  _DWORD *v43; // rcx
  ULONG v44; // ecx
  _DWORD *v45; // rax
  int v46; // edx
  __int64 v47; // rax
  ULONG v48; // r9d
  _DWORD *v49; // r10
  _DWORD *v50; // rdx
  ULONG v51; // edx
  _DWORD *v52; // rax
  int v53; // [rsp+60h] [rbp-A0h]
  RECTL *prclOpaque; // [rsp+68h] [rbp-98h] BYREF
  int v55; // [rsp+70h] [rbp-90h]
  CLIPOBJ *ppco; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL v57; // [rsp+80h] [rbp-80h] BYREF
  ULONG v58; // [rsp+88h] [rbp-78h]
  SURFOBJ *pso; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v60; // [rsp+98h] [rbp-68h]
  struct _POINTL v61; // [rsp+A0h] [rbp-60h] BYREF
  POINTL *pptlOrg; // [rsp+A8h] [rbp-58h]
  BRUSHOBJ *pboOpaque; // [rsp+B0h] [rbp-50h]
  BRUSHOBJ *pboFore; // [rsp+B8h] [rbp-48h]
  RECTL *prclExtra; // [rsp+C0h] [rbp-40h]
  FONTOBJ *pfo; // [rsp+C8h] [rbp-38h]
  struct _RECTL *v67; // [rsp+D0h] [rbp-30h]
  __int128 v68; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v69[912]; // [rsp+F0h] [rbp-10h] BYREF

  pso = a1;
  ppco = a4;
  pfo = a3;
  v53 = 0;
  prclExtra = a5;
  v13 = 0;
  p_rclBkGround = a6;
  v15 = 1;
  pboFore = a7;
  v16 = 0LL;
  pboOpaque = a8;
  pptlOrg = a9;
  flFontType = a3->flFontType;
  v67 = a6;
  v55 = 1;
  v57 = 0LL;
  v60 = 0LL;
  if ( (flFontType & 0x10000) != 0 )
  {
    hdev = a1->hdev;
    if ( (flFontType & 0x10000000) != 0 )
      v16 = ((unsigned __int64)(unsigned int)~*((_DWORD *)hdev + 528) >> 14) & 1;
    else
      v16 = ((_DWORD)hdev[452] & 0x1000000) == 0;
    v60 = v16;
  }
  cGlyphs = pstro[1].cGlyphs;
  v58 = cGlyphs;
  if ( !a6 )
    p_rclBkGround = &pstro->rclBkGround;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v69, a1, a4, p_rclBkGround);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v69, &pso, &v57, &ppco) )
  {
    do
    {
      v20 = pso;
      pstro[1].cGlyphs = cGlyphs;
      p_pvScan0 = &v20[-1].pvScan0;
      if ( (HIDWORD(v20[1].hsurf) & 1) == 0 && ((_DWORD)p_pvScan0[14] & 0x800) != 0 && *((_WORD *)p_pvScan0 + 50) == 3 )
      {
        v22 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))RedirTextOut;
      }
      else if ( v16 )
      {
        v22 = EngTextOut;
      }
      else
      {
        if ( v20->iType == 1 )
        {
          if ( bAllowShareAccess(v20)
            && GreGetCurrentThread()
            && *((_QWORD *)GreGetCurrentThread() + 34)
            && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
            && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 8) != 0 )
          {
            v22 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*((_QWORD *)GreGetCurrentThread() + 34) + 96LL);
            goto LABEL_14;
          }
          if ( v20->iType == 1
            && bAllowShareAccess(v20)
            && GreGetCurrentThread()
            && *((_QWORD *)GreGetCurrentThread() + 34)
            && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88)) )
          {
            goto LABEL_13;
          }
        }
        if ( ((__int64)v20[1].hsurf & 8) == 0 )
        {
LABEL_13:
          v22 = EngTextOut;
        }
        else
        {
          v13 |= 1u;
          v53 = v13;
          v22 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))*((_QWORD *)v20->hdev + 167);
        }
      }
LABEL_14:
      if ( (v13 & 1) != 0 )
      {
        v13 &= ~1u;
        v53 = v13;
      }
      v23 = 0LL;
      if ( v20
        && (hsurf = (int)v20[1].hsurf, (hsurf & 0x80004000) != 0)
        && (hsurf & 0x200) == 0
        && (v23 = &v20[-1].pvScan0, GreLockDisplayDevice(p_pvScan0[6]), *((_WORD *)p_pvScan0 + 50) == 1)
        && (v23 = &v20[-1].pvScan0,
            !EngUpdateDeviceSurface((SURFOBJ *)((unsigned __int64)v20 & -(__int64)(v20 != (SURFOBJ *)24)), &ppco)) )
      {
        if ( v20 != (SURFOBJ *)24 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
      }
      else
      {
        v25 = ppco;
        v26 = v57;
        y = v57.y;
        prclOpaque = v67;
        v68 = 0LL;
        if ( v67 )
        {
          v28 = v57.x + v67->left;
          prclOpaque = (RECTL *)&v68;
          LODWORD(v68) = v28;
          DWORD2(v68) = v57.x + v67->right;
          DWORD1(v68) = v57.y + v67->top;
          HIDWORD(v68) = v57.y + v67->bottom;
        }
        v29 = v57.y;
        x = v57.x;
        if ( v57.x || v57.y )
        {
          pstro->rclBkGround.left += v57.x;
          pstro->rclBkGround.right += x;
          pstro->rclBkGround.top += y;
          pstro->rclBkGround.bottom += y;
          pwszOrg = (int)pstro[4].pwszOrg;
          if ( (pwszOrg & 0x100) != 0 )
          {
            x *= 16;
            v29 = 16 * y;
          }
          v40 = *(_QWORD *)&pstro[1].rclBkGround.top;
          if ( (pwszOrg & 0x1400) != 0 )
          {
            v41 = pstro->cGlyphs;
            v42 = *(_DWORD **)&pstro[4].rclBkGround.top;
            if ( pstro->cGlyphs )
            {
              v43 = (_DWORD *)(v40 + 20);
              do
              {
                if ( *v42 == HIDWORD(pstro[4].pwszOrg) )
                {
                  *(v43 - 1) += x;
                  --v41;
                  *v43 += v29;
                }
                v43 += 6;
                ++v42;
              }
              while ( v41 );
            }
          }
          else if ( pstro->ulCharInc )
          {
            *(_DWORD *)(v40 + 16) += x;
            *(_DWORD *)(v40 + 20) += v29;
          }
          else
          {
            v44 = pstro->cGlyphs;
            if ( pstro->cGlyphs )
            {
              v45 = (_DWORD *)(v40 + 20);
              do
              {
                *(v45 - 1) += x;
                *v45 += v29;
                v45 += 6;
                --v44;
              }
              while ( v44 );
            }
          }
        }
        v61 = 0LL;
        if ( v25 && (v26.x || y) )
        {
          v25->rclBounds.left += v26.x;
          v25->rclBounds.right += v26.x;
          v25->rclBounds.top += y;
          v25->rclBounds.bottom += y;
          if ( v25->iDComplexity )
          {
            v61 = v26;
            RGNOBJ::bOffset((RGNOBJ *)&v25[2].rclBounds.top, &v61);
          }
        }
        if ( v22 == EngTextOut )
          v31 = EngTextOut(v20, pstro, pfo, v25, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
        else
          v31 = ((__int64 (__fastcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))v22)(
                  v20,
                  pstro,
                  pfo,
                  v25,
                  prclExtra,
                  prclOpaque,
                  pboFore,
                  pboOpaque,
                  pptlOrg,
                  mix);
        v32 = -y;
        v33 = -v26.x;
        v34 = v31;
        v35 = v33;
        v36 = v32;
        if ( v33 || v32 )
        {
          pstro->rclBkGround.left += v33;
          pstro->rclBkGround.right += v33;
          pstro->rclBkGround.top += v32;
          pstro->rclBkGround.bottom += v32;
          v46 = (int)pstro[4].pwszOrg;
          if ( (v46 & 0x100) != 0 )
          {
            v35 = 16 * v33;
            v36 = 16 * v32;
          }
          v47 = *(_QWORD *)&pstro[1].rclBkGround.top;
          if ( (v46 & 0x1400) != 0 )
          {
            v48 = pstro->cGlyphs;
            v49 = *(_DWORD **)&pstro[4].rclBkGround.top;
            if ( pstro->cGlyphs )
            {
              v50 = (_DWORD *)(v47 + 20);
              do
              {
                if ( *v49 == HIDWORD(pstro[4].pwszOrg) )
                {
                  *(v50 - 1) += v35;
                  --v48;
                  *v50 += v36;
                }
                v50 += 6;
                ++v49;
              }
              while ( v48 );
            }
          }
          else if ( pstro->ulCharInc )
          {
            *(_DWORD *)(v47 + 16) += v35;
            *(_DWORD *)(v47 + 20) += v36;
          }
          else
          {
            v51 = pstro->cGlyphs;
            if ( pstro->cGlyphs )
            {
              v52 = (_DWORD *)(v47 + 20);
              do
              {
                *(v52 - 1) += v35;
                *v52 += v36;
                v52 += 6;
                --v51;
              }
              while ( v51 );
            }
          }
        }
        prclOpaque = 0LL;
        if ( v25 && (v33 || v32) )
        {
          v25->rclBounds.left += v33;
          v25->rclBounds.right += v33;
          v25->rclBounds.top += v32;
          v25->rclBounds.bottom += v32;
          if ( v25->iDComplexity )
          {
            prclOpaque = (RECTL *)__PAIR64__(v32, v33);
            RGNOBJ::bOffset((RGNOBJ *)&v25[2].rclBounds.top, (const struct _POINTL *)&prclOpaque);
          }
        }
        v15 = v34 & v55;
        v55 &= v34;
        if ( v23 )
          GreUnlockDisplayDevice(v23[6]);
        v13 = v53;
      }
      v37 = ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v69, &pso, &v57, &ppco);
      v16 = v60;
      cGlyphs = v58;
    }
    while ( v37 );
  }
  return v15;
}

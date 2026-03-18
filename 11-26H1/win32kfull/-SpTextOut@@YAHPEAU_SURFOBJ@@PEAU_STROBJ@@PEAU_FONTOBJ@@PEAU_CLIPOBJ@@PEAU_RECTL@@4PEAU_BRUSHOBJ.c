/*
 * XREFs of ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400695B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SpTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  RECTL *p_rclBkGround; // r9
  unsigned int v13; // edi
  unsigned int v14; // esi
  BOOL v15; // r12d
  FLONG flFontType; // edx
  HDEV hdev; // rax
  ULONG cGlyphs; // ebx
  struct _SURFOBJ *v19; // r13
  PVOID *p_pvScan0; // rbx
  BOOL (__stdcall *v21)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rax
  PVOID *v22; // rdi
  int hsurf; // eax
  CLIPOBJ *v24; // rsi
  struct _POINTL v25; // rbx
  LONG y; // r15d
  int v27; // ecx
  LONG v28; // ecx
  LONG x; // edx
  LONG v30; // r15d
  int v31; // r13d
  LONG v32; // ebx
  int v33; // r8d
  int v34; // r9d
  int v35; // eax
  HDEV v37; // rax
  __int64 v38; // rcx
  int pwszOrg; // r8d
  __int64 v40; // rax
  ULONG v41; // r8d
  _DWORD *v42; // rax
  int v43; // ecx
  __int64 v44; // rax
  ULONG v45; // ecx
  _DWORD *v46; // rax
  ULONG v47; // r9d
  _DWORD *v48; // r10
  _DWORD *v49; // r8
  ULONG v50; // edx
  _DWORD *v51; // r10
  _DWORD *v52; // rcx
  BOOL (__stdcall *v53)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+6Ch] [rbp-94h]
  CLIPOBJ *ppco; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v57; // [rsp+78h] [rbp-88h] BYREF
  ULONG v58; // [rsp+80h] [rbp-80h]
  struct _SURFOBJ *v59; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v60; // [rsp+90h] [rbp-70h] BYREF
  struct _RECTL *v61; // [rsp+98h] [rbp-68h]
  struct _RECTL *v62; // [rsp+A0h] [rbp-60h]
  struct _POINTL *v63; // [rsp+A8h] [rbp-58h]
  struct _BRUSHOBJ *v64; // [rsp+B0h] [rbp-50h]
  struct _BRUSHOBJ *v65; // [rsp+B8h] [rbp-48h]
  struct _RECTL *v66; // [rsp+C0h] [rbp-40h]
  struct _FONTOBJ *v67; // [rsp+C8h] [rbp-38h]
  __int128 v68; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v69[912]; // [rsp+E0h] [rbp-20h] BYREF

  v59 = a1;
  v54 = 0;
  v66 = a5;
  p_rclBkGround = a6;
  v13 = 0;
  v65 = a7;
  v14 = 1;
  v15 = 0;
  v64 = a8;
  v63 = a9;
  flFontType = a3->flFontType;
  v67 = a3;
  v62 = a6;
  ppco = a4;
  v55 = 1;
  v57 = 0LL;
  if ( (flFontType & 0x10000) != 0 )
  {
    hdev = a1->hdev;
    if ( (flFontType & 0x10000000) != 0 )
      v15 = ((*((_DWORD *)hdev + 528) >> 14) & 1) == 0;
    else
      v15 = ((_DWORD)hdev[452] & 0x1000000) == 0;
  }
  cGlyphs = a2[1].cGlyphs;
  v58 = cGlyphs;
  if ( !a6 )
    p_rclBkGround = &a2->rclBkGround;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v69, a1, a4, p_rclBkGround);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v69, &v59, &v57, &ppco) )
  {
    while ( 1 )
    {
      v19 = v59;
      a2[1].cGlyphs = cGlyphs;
      p_pvScan0 = &v19[-1].pvScan0;
      if ( (HIDWORD(v19[1].hsurf) & 1) == 0 && ((_DWORD)p_pvScan0[14] & 0x800) != 0 && *((_WORD *)p_pvScan0 + 50) == 3 )
        break;
      if ( !v15 )
      {
        if ( v19->iType != 1 )
          goto LABEL_11;
        if ( (unsigned int)bAllowShareAccess(v19)
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 85) || *((_DWORD *)GreGetCurrentThread() + 86))
          && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 8) != 0 )
        {
          v21 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*((_QWORD *)GreGetCurrentThread() + 34) + 96LL);
          goto LABEL_13;
        }
        if ( v19->iType == 1
          && (unsigned int)bAllowShareAccess(v19)
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 85) || *((_DWORD *)GreGetCurrentThread() + 86)) )
        {
LABEL_12:
          v21 = EngTextOut;
        }
        else
        {
LABEL_11:
          if ( ((__int64)v19[1].hsurf & 8) == 0 )
            goto LABEL_12;
          v37 = v19->hdev;
          v13 |= 1u;
          v54 = v13;
          v21 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))*((_QWORD *)v37 + 167);
        }
LABEL_13:
        v53 = v21;
        goto LABEL_14;
      }
      v53 = EngTextOut;
LABEL_14:
      if ( (v13 & 1) != 0 )
        v54 = v13 & 0xFFFFFFFE;
      v22 = 0LL;
      if ( v19
        && ((hsurf = (int)v19[1].hsurf, (hsurf & 0x4000) != 0) || hsurf < 0)
        && (hsurf & 0x200) == 0
        && (GreAcquireSemaphore<8,PDEVOBJ>(v19->hdev), v22 = &v19[-1].pvScan0, v19 != (struct _SURFOBJ *)24)
        && *((_WORD *)p_pvScan0 + 50) == 1
        && !EngUpdateDeviceSurface(v19, &ppco) )
      {
        v38 = (__int64)p_pvScan0[6];
      }
      else
      {
        v24 = ppco;
        v25 = v57;
        y = v57.y;
        v61 = v62;
        v68 = 0LL;
        if ( v62 )
        {
          v27 = v57.x + v62->left;
          v61 = (struct _RECTL *)&v68;
          LODWORD(v68) = v27;
          DWORD2(v68) = v57.x + v62->right;
          DWORD1(v68) = v57.y + v62->top;
          HIDWORD(v68) = v57.y + v62->bottom;
        }
        v28 = v57.y;
        x = v57.x;
        if ( v57.x || v57.y )
        {
          a2->rclBkGround.left += v57.x;
          a2->rclBkGround.right += x;
          a2->rclBkGround.top += y;
          a2->rclBkGround.bottom += y;
          pwszOrg = (int)a2[4].pwszOrg;
          if ( (pwszOrg & 0x100) != 0 )
          {
            x *= 16;
            v28 = 16 * y;
          }
          v40 = *(_QWORD *)&a2[1].rclBkGround.top;
          if ( (pwszOrg & 0x1400) != 0 )
          {
            v47 = a2->cGlyphs;
            v48 = *(_DWORD **)&a2[4].rclBkGround.top;
            if ( a2->cGlyphs )
            {
              v49 = (_DWORD *)(v40 + 20);
              do
              {
                if ( *v48 == HIDWORD(a2[4].pwszOrg) )
                {
                  *(v49 - 1) += x;
                  --v47;
                  *v49 += v28;
                }
                v49 += 6;
                ++v48;
              }
              while ( v47 );
            }
          }
          else if ( a2->ulCharInc )
          {
            *(_DWORD *)(v40 + 16) += x;
            *(_DWORD *)(v40 + 20) += v28;
          }
          else
          {
            v41 = a2->cGlyphs;
            if ( a2->cGlyphs )
            {
              v42 = (_DWORD *)(v40 + 20);
              do
              {
                *(v42 - 1) += x;
                *v42 += v28;
                v42 += 6;
                --v41;
              }
              while ( v41 );
            }
          }
        }
        v60 = 0LL;
        if ( v24 && (v25.x || y) )
        {
          v24->rclBounds.left += v25.x;
          v24->rclBounds.right += v25.x;
          v24->rclBounds.top += y;
          v24->rclBounds.bottom += y;
          if ( v24->iDComplexity )
          {
            v60 = v25;
            RGNOBJ::bOffset((RGNOBJ *)&v24[2].rclBounds.top, &v60);
          }
        }
        v30 = -y;
        v31 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v53)(
                v19,
                a2,
                v67,
                v24,
                v66,
                v61,
                v65,
                v64,
                v63,
                a10);
        v32 = -v25.x;
        v33 = v30;
        v34 = v32;
        if ( v32 || v30 )
        {
          a2->rclBkGround.left += v32;
          a2->rclBkGround.right += v32;
          a2->rclBkGround.top += v30;
          a2->rclBkGround.bottom += v30;
          v43 = (int)a2[4].pwszOrg;
          if ( (v43 & 0x100) != 0 )
          {
            v34 = 16 * v32;
            v33 = 16 * v30;
          }
          v44 = *(_QWORD *)&a2[1].rclBkGround.top;
          if ( (v43 & 0x1400) != 0 )
          {
            v50 = a2->cGlyphs;
            v51 = *(_DWORD **)&a2[4].rclBkGround.top;
            if ( a2->cGlyphs )
            {
              v52 = (_DWORD *)(v44 + 20);
              do
              {
                if ( *v51 == HIDWORD(a2[4].pwszOrg) )
                {
                  *(v52 - 1) += v34;
                  --v50;
                  *v52 += v33;
                }
                v52 += 6;
                ++v51;
              }
              while ( v50 );
            }
          }
          else if ( a2->ulCharInc )
          {
            *(_DWORD *)(v44 + 16) += v34;
            *(_DWORD *)(v44 + 20) += v33;
          }
          else
          {
            v45 = a2->cGlyphs;
            if ( a2->cGlyphs )
            {
              v46 = (_DWORD *)(v44 + 20);
              do
              {
                *(v46 - 1) += v34;
                *v46 += v33;
                v46 += 6;
                --v45;
              }
              while ( v45 );
            }
          }
        }
        v53 = 0LL;
        if ( v24 && (v32 || v30) )
        {
          v24->rclBounds.left += v32;
          v24->rclBounds.right += v32;
          v24->rclBounds.top += v30;
          v24->rclBounds.bottom += v30;
          if ( v24->iDComplexity )
          {
            LODWORD(v53) = v32;
            HIDWORD(v53) = v30;
            RGNOBJ::bOffset((RGNOBJ *)&v24[2].rclBounds.top, (const struct _POINTL *)&v53);
          }
        }
        v14 = v31 & v55;
        v55 &= v31;
        if ( !v22 )
          goto LABEL_36;
        v38 = (__int64)v22[6];
      }
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v38);
LABEL_36:
      v35 = ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v69, &v59, &v57, &ppco);
      v13 = v54;
      cGlyphs = v58;
      if ( !v35 )
        return v14;
    }
    v21 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))RedirTextOut;
    goto LABEL_13;
  }
  return v14;
}

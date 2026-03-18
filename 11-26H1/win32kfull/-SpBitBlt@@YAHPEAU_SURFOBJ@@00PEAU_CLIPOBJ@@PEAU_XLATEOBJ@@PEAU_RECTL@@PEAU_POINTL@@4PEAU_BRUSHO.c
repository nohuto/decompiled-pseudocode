/*
 * XREFs of ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140068A30
 * Callers:
 *     ?SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1400689E0 (-SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffBitBlt @ 0x1401BB830 (OffBitBlt.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SpBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _SURFOBJ *v11; // rbx
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  HDEV v14; // rax
  int v15; // edi
  struct _SURFOBJ *v17; // r13
  PVOID *p_pvScan0; // r14
  int hsurf; // eax
  PVOID *v20; // rsi
  int v21; // eax
  CLIPOBJ *v22; // r15
  HDEV v23; // rax
  int v24; // r12d
  BOOL (__stdcall *v25)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  struct _POINTL v26; // rbx
  LONG v27; // r12d
  LONG x; // r13d
  LONG v29; // r12d
  LONG v30; // ebx
  CLIPOBJ *v31; // r15
  HDEV hdev; // rax
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rax
  struct _POINTL *v34; // r9
  struct _POINTL *v35; // r10
  struct _POINTL *v36; // r8
  LONG y; // r12d
  struct _POINTL *v38; // rdx
  struct _POINTL v39; // rbx
  int v40; // eax
  LONG v41; // r12d
  LONG v42; // ebx
  int v43; // r13d
  __int64 (__fastcall *v44)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r10
  CLIPOBJ *v45; // rbx
  __int64 *v46; // r15
  int v47; // edx
  int v48; // r8d
  __int64 *v49; // rdi
  HDEV v50; // rax
  BOOL (__stdcall *v51)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  int v52; // eax
  __int64 v53; // [rsp+30h] [rbp-D0h]
  HDEV v54; // [rsp+70h] [rbp-90h] BYREF
  int v55; // [rsp+78h] [rbp-88h]
  int v56; // [rsp+7Ch] [rbp-84h]
  struct _POINTL v57; // [rsp+80h] [rbp-80h] BYREF
  struct _SURFOBJ *v58; // [rsp+88h] [rbp-78h]
  CLIPOBJ *ppco; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v60; // [rsp+98h] [rbp-68h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL *v62; // [rsp+A8h] [rbp-58h]
  __int64 v63; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v66; // [rsp+C8h] [rbp-38h] BYREF
  struct _POINTL *v67; // [rsp+D0h] [rbp-30h]
  struct _XLATEOBJ *v68; // [rsp+D8h] [rbp-28h]
  struct _SURFOBJ *v69; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v70[2]; // [rsp+E8h] [rbp-18h] BYREF
  struct _POINTL *v71; // [rsp+F0h] [rbp-10h]
  struct _BRUSHOBJ *v72; // [rsp+F8h] [rbp-8h]
  struct _SURFOBJ *v73; // [rsp+100h] [rbp+0h]
  struct _POINTL *v74; // [rsp+108h] [rbp+8h]
  struct _POINTL *v75; // [rsp+110h] [rbp+10h]
  struct _RECTL v76; // [rsp+120h] [rbp+20h] BYREF
  struct _RECTL v77; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v78[4]; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v79[4]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v80[912]; // [rsp+160h] [rbp+60h] BYREF

  v11 = a2;
  v73 = a3;
  v58 = a2;
  ppco = a4;
  v12 = 1;
  v13 = 0;
  v56 = 1;
  v71 = a8;
  v67 = a10;
  v62 = a7;
  v69 = a1;
  v68 = a5;
  v72 = a9;
  v55 = 0;
  v60 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  if ( !a2 || (v14 = a2->hdev) == 0LL || a2 != *((struct _SURFOBJ **)v14 + 14) )
  {
    v76 = *a6;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v80, a1, a4, a6);
    v15 = 0;
    v61 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v80, &v69, &v60, &ppco) )
          return v12;
        v17 = v69;
        p_pvScan0 = 0LL;
        if ( v69 )
        {
          hsurf = (int)v69[1].hsurf;
          if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v69[-1].pvScan0;
            GreAcquireSemaphore<8,PDEVOBJ>(v69->hdev);
          }
        }
        v20 = 0LL;
        if ( v11 )
        {
          v21 = (int)v11[1].hsurf;
          if ( ((v21 & 0x4000) != 0 || v21 < 0) && (v21 & 0x200) == 0 )
          {
            v20 = &v11[-1].pvScan0;
            GreAcquireSemaphore<8,PDEVOBJ>(v11->hdev);
          }
        }
        if ( !p_pvScan0 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          break;
        if ( v20 )
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v20[6]);
LABEL_75:
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
      }
      if ( a11 == 52428 )
        break;
      if ( (unsigned __int8)a11 == a11 >> 8 )
      {
        v31 = ppco;
        if ( v17->iType == 1
          && (v54 = v17->hdev, PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v54))
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 85) || *((_DWORD *)GreGetCurrentThread() + 86))
          && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 1) != 0 )
        {
          v33 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread() + 34) + 72LL);
        }
        else if ( v17->iType == 1
               && (v54 = v17->hdev, PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v54))
               && GreGetCurrentThread()
               && *((_QWORD *)GreGetCurrentThread() + 34)
               && (*((_DWORD *)GreGetCurrentThread() + 85) || *((_DWORD *)GreGetCurrentThread() + 86))
               || ((__int64)v17[1].hsurf & 1) == 0 )
        {
          v33 = EngBitBlt;
        }
        else
        {
          hdev = v17->hdev;
          v55 = v13 | 1;
          v33 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)hdev + 164);
        }
        v34 = v62;
        v35 = v67;
        v36 = v62;
        y = v60.y;
        v38 = v67;
        v57 = 0LL;
        v39 = v60;
        v74 = v67;
        v54 = (HDEV)v33;
        v75 = v62;
        if ( v31 && (v60.x || v60.y) )
        {
          v31->rclBounds.left += v60.x;
          v31->rclBounds.right += v39.x;
          v31->rclBounds.top += y;
          v31->rclBounds.bottom += y;
          if ( v31->iDComplexity )
          {
            v57 = v39;
            RGNOBJ::bOffset((RGNOBJ *)&v31[2].rclBounds.top, &v57);
            v38 = v74;
            v36 = v75;
            v35 = v74;
            v34 = v75;
          }
        }
        v63 = 0LL;
        v79[0] = v39.x + v76.left;
        v79[2] = v39.x + v76.right;
        v79[1] = y + v76.top;
        v79[3] = y + v76.bottom;
        if ( v34 )
        {
          v36 = (struct _POINTL *)&v63;
          LODWORD(v63) = v15 + v34->x;
          HIDWORD(v63) = HIDWORD(v61) + v34->y;
        }
        v64 = 0LL;
        if ( v35 )
        {
          v38 = (struct _POINTL *)&v64;
          LODWORD(v64) = v39.x + v35->x;
          HIDWORD(v64) = y + v35->y;
        }
        v40 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, struct _XLATEOBJ *, _DWORD *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v54)(
                v17,
                v58,
                v73,
                v31,
                v68,
                v79,
                v36,
                v71,
                v72,
                v38,
                a11);
        v41 = -y;
        v54 = 0LL;
        v42 = -v39.x;
        v43 = v40;
        if ( v31 && (v42 || v41) )
        {
          v31->rclBounds.left += v42;
          v31->rclBounds.right += v42;
          v31->rclBounds.top += v41;
          v31->rclBounds.bottom += v41;
          if ( v31->iDComplexity )
          {
            LODWORD(v54) = v42;
            HIDWORD(v54) = v41;
            RGNOBJ::bOffset((RGNOBJ *)&v31[2].rclBounds.top, (const struct _POINTL *)&v54);
          }
        }
        v13 = v55;
        v12 = v43 & v56;
        v11 = v58;
        v56 &= v43;
        if ( (v55 & 1) == 0 )
          goto LABEL_37;
        v13 = v55 & 0xFFFFFFFE;
        goto LABEL_62;
      }
      v45 = ppco;
      v77 = v76;
      if ( !ppco )
        goto LABEL_82;
      if ( bIntersect(&ppco->rclBounds, &v76, &v77) )
      {
        v45 = ppco;
LABEL_82:
        v46 = 0LL;
        v47 = v77.left - v76.left;
        v48 = v77.top - v76.top;
        if ( v62 )
        {
          v46 = &v65;
          LODWORD(v65) = v47 + v62->x;
          HIDWORD(v65) = v48 + v62->y;
        }
        v49 = 0LL;
        if ( v71 )
        {
          v49 = &v66;
          LODWORD(v66) = v47 + v71->x;
          HIDWORD(v66) = v48 + v71->y;
        }
        if ( v17->iType == 1 )
        {
          if ( !(unsigned int)bAllowShareAccess(v17)
            || !GreGetCurrentThread()
            || !*((_QWORD *)GreGetCurrentThread() + 34)
            || !*((_DWORD *)GreGetCurrentThread() + 85) && !*((_DWORD *)GreGetCurrentThread() + 86)
            || (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 1) == 0 )
          {
            if ( v17->iType != 1
              || !(unsigned int)bAllowShareAccess(v17)
              || !GreGetCurrentThread()
              || !*((_QWORD *)GreGetCurrentThread() + 34)
              || !*((_DWORD *)GreGetCurrentThread() + 85) && !*((_DWORD *)GreGetCurrentThread() + 86) )
            {
              goto LABEL_87;
            }
            goto LABEL_148;
          }
          v51 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread() + 34) + 72LL);
        }
        else
        {
LABEL_87:
          if ( ((__int64)v17[1].hsurf & 1) != 0 )
          {
            v50 = v17->hdev;
            v13 |= 2u;
            v55 = v13;
            v51 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v50 + 164);
            goto LABEL_89;
          }
LABEL_148:
          v51 = EngBitBlt;
        }
LABEL_89:
        v53 = (__int64)v45;
        v11 = v58;
        v52 = OffBitBlt(
                (_DWORD)v51,
                (unsigned int)&v60,
                (_DWORD)v17,
                (unsigned int)&v61,
                (__int64)v58,
                (__int64)v73,
                v53,
                (__int64)v68,
                (__int64)&v77,
                (__int64)v46,
                (__int64)v49,
                (__int64)v72,
                (__int64)v67,
                a11);
        v15 = v61;
        v12 = v52 & v56;
        v56 &= v52;
        if ( (v13 & 2) == 0 )
          goto LABEL_37;
        v13 &= ~2u;
LABEL_62:
        v55 = v13;
        goto LABEL_37;
      }
LABEL_36:
      v11 = v58;
LABEL_37:
      if ( v20 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v20[6]);
      if ( p_pvScan0 )
        goto LABEL_75;
    }
    v22 = ppco;
    if ( ((__int64)v17[1].hsurf & 0x400) != 0 || !v11->hdev )
    {
      if ( v17->iType != 1
        || !(unsigned int)bAllowShareAccess(v17)
        || !GreGetCurrentThread()
        || !*((_QWORD *)GreGetCurrentThread() + 34)
        || !*((_DWORD *)GreGetCurrentThread() + 85) && !*((_DWORD *)GreGetCurrentThread() + 86)
        || (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 0x400) == 0 )
      {
        if ( (v17->iType != 1
           || !(unsigned int)bAllowShareAccess(v17)
           || !GreGetCurrentThread()
           || !*((_QWORD *)GreGetCurrentThread() + 34)
           || !*((_DWORD *)GreGetCurrentThread() + 85) && !*((_DWORD *)GreGetCurrentThread() + 86))
          && ((__int64)v17[1].hsurf & 0x400) != 0 )
        {
          v23 = v17->hdev;
          v24 = v13 | 8;
LABEL_22:
          v25 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v23 + 165);
          v55 = v24;
LABEL_23:
          v26 = v60;
          v27 = v60.y;
          v54 = (HDEV)v25;
          if ( v22 )
          {
            v57 = 0LL;
            if ( v60.x || v60.y )
            {
              v22->rclBounds.left += v60.x;
              v22->rclBounds.right += v26.x;
              v22->rclBounds.top += v27;
              v22->rclBounds.bottom += v27;
              if ( v22->iDComplexity )
              {
                v57 = v26;
                RGNOBJ::bOffset((RGNOBJ *)&v22[2].rclBounds.top, &v57);
              }
            }
          }
          v78[0] = v26.x + v76.left;
          v57.x = 0;
          v78[2] = v26.x + v76.right;
          v78[1] = v27 + v76.top;
          v78[3] = v27 + v76.bottom;
          v70[0] = v15 + v62->x;
          v70[1] = v62->y + HIDWORD(v61);
          if ( v54 )
            x = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, struct _XLATEOBJ *, _DWORD *, _DWORD *))v54)(
                  v17,
                  v58,
                  v22,
                  v68,
                  v78,
                  v70);
          else
            x = v57.x;
          if ( v22 )
          {
            v29 = -v27;
            v54 = 0LL;
            v30 = -v26.x;
            if ( v30 || v29 )
            {
              v22->rclBounds.left += v30;
              v22->rclBounds.right += v30;
              v22->rclBounds.top += v29;
              v22->rclBounds.bottom += v29;
              if ( v22->iDComplexity )
              {
                LODWORD(v54) = v30;
                HIDWORD(v54) = v29;
                RGNOBJ::bOffset((RGNOBJ *)&v22[2].rclBounds.top, (const struct _POINTL *)&v54);
              }
            }
          }
          v13 = v55;
          if ( (v55 & 8) != 0 )
          {
            v13 = v55 & 0xFFFFFFF7;
            v55 &= ~8u;
          }
          if ( (v13 & 4) != 0 )
          {
            v13 &= ~4u;
            v55 = v13;
          }
          v12 = x & v56;
          v56 &= x;
          goto LABEL_36;
        }
LABEL_72:
        v25 = EngCopyBits;
        goto LABEL_23;
      }
    }
    else
    {
      if ( v11->iType != 1 )
      {
LABEL_65:
        if ( ((__int64)v11[1].hsurf & 0x400) != 0 )
        {
          v23 = v11->hdev;
          v24 = v13 | 4;
          goto LABEL_22;
        }
        goto LABEL_72;
      }
      if ( !(unsigned int)bAllowShareAccess(v11)
        || !GreGetCurrentThread()
        || !*((_QWORD *)GreGetCurrentThread() + 34)
        || !*((_DWORD *)GreGetCurrentThread() + 85) && !*((_DWORD *)GreGetCurrentThread() + 86)
        || (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 0x400) == 0 )
      {
        if ( v11->iType == 1
          && (unsigned int)bAllowShareAccess(v11)
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 85) || *((_DWORD *)GreGetCurrentThread() + 86)) )
        {
          goto LABEL_72;
        }
        goto LABEL_65;
      }
    }
    v25 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)GreGetCurrentThread()
                                                                                                 + 34)
                                                                                               + 80LL);
    goto LABEL_23;
  }
  v44 = bSpBltScreenToScreen;
  if ( a1 != a2 )
    v44 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))bSpBltFromScreen;
  return (unsigned int)v44(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

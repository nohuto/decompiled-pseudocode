/*
 * XREFs of ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1400F8048
 * Callers:
 *     EngGradientFill @ 0x1400F77E0 (EngGradientFill.c)
 * Callees:
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1400F85D8 (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1400F9DE8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z @ 0x1400F9E4C (-bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall bRectangleMesh(
        struct SURFACE *a1,
        struct _XLATEOBJ *a2,
        struct _TRIVERTEX *a3,
        int a4,
        struct _GRADIENT_RECT *a5,
        unsigned int a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9)
{
  unsigned int v11; // r14d
  __int64 v12; // r15
  void (*v13)(struct SURFACE *, struct _GRADIENTRECTDATA *); // r12
  unsigned int UpperLeft; // edx
  unsigned int LowerRight; // ecx
  struct _TRIVERTEX *v17; // r8
  struct _TRIVERTEX *v18; // r9
  LONG x; // ecx
  LONG v20; // eax
  LONG v21; // edi
  int v22; // edi
  int v23; // esi
  __int64 v24; // r14
  __int64 v25; // rbx
  __int64 v26; // r11
  __int64 v27; // r10
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // r11
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // r10
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // r11
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned __int64 v48; // r10
  LONG y; // eax
  LONG v50; // ecx
  __int64 v51; // [rsp+28h] [rbp-160h] BYREF
  void (*v52)(struct SURFACE *, struct _GRADIENTRECTDATA *); // [rsp+30h] [rbp-158h] BYREF
  struct _TRIVERTEX *v53; // [rsp+38h] [rbp-150h]
  struct _GRADIENT_RECT *v54; // [rsp+40h] [rbp-148h]
  struct SURFACE *v55; // [rsp+48h] [rbp-140h]
  struct _TRIVERTEX *v56; // [rsp+50h] [rbp-138h]
  void (*v57)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+58h] [rbp-130h] BYREF
  __int128 v58; // [rsp+60h] [rbp-128h] BYREF
  LONG v59; // [rsp+70h] [rbp-118h]
  LONG v60; // [rsp+74h] [rbp-114h]
  LONG v61; // [rsp+78h] [rbp-110h]
  LONG v62; // [rsp+7Ch] [rbp-10Ch]
  unsigned __int64 v63; // [rsp+90h] [rbp-F8h]
  unsigned __int64 v64; // [rsp+98h] [rbp-F0h]
  unsigned __int64 v65; // [rsp+A0h] [rbp-E8h]
  unsigned __int64 v66; // [rsp+A8h] [rbp-E0h]
  __int128 v67; // [rsp+B0h] [rbp-D8h]
  __int128 v68; // [rsp+C0h] [rbp-C8h]
  __int128 v69; // [rsp+D0h] [rbp-B8h]
  __int128 v70; // [rsp+E0h] [rbp-A8h]
  __int64 v71; // [rsp+F0h] [rbp-98h]
  unsigned int v72; // [rsp+F8h] [rbp-90h]
  struct _XLATEOBJ *v73; // [rsp+100h] [rbp-88h]
  __int64 *v74; // [rsp+108h] [rbp-80h]
  struct _TRIVERTEX v75; // [rsp+120h] [rbp-68h] BYREF
  struct _TRIVERTEX v76; // [rsp+130h] [rbp-58h] BYREF

  v53 = a3;
  v55 = a1;
  v56 = a3;
  v54 = a5;
  v52 = 0LL;
  v11 = 1;
  memset_0(&v58, 0, 0xB8uLL);
  v51 = *((_QWORD *)a1 + 16);
  if ( v51 || (v51 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 1792LL)) != 0 )
  {
    bDetermineTriangleFillRoutine(a1, (struct XEPALOBJ *)&v51, &v57, &v52);
    v73 = a2;
    v74 = &v51;
    v71 = (__int64)*a9;
    v58 = (__int128)*a8;
    v12 = 0LL;
    v13 = v52;
    while ( (unsigned int)v12 < a6 )
    {
      UpperLeft = v54[v12].UpperLeft;
      LowerRight = v54[v12].LowerRight;
      if ( UpperLeft > a4 - 1 || LowerRight > a4 - 1 )
        return 0;
      v75 = v53[UpperLeft];
      v76 = v53[LowerRight];
      v17 = &v75;
      v18 = &v76;
      if ( a7 )
      {
        v18 = &v76;
        if ( v75.y > v76.y )
          v18 = &v75;
        v17 = &v75;
        if ( v75.y > v76.y )
          v17 = &v76;
        x = v17->x;
        v20 = v17->x;
        v21 = v18->x;
        if ( v17->x > v18->x )
        {
          v18->x = x;
          v17->x = v21;
          x = v21;
          v21 = v20;
        }
      }
      else
      {
        if ( v75.x > v76.x )
        {
          v17 = &v76;
          v18 = &v75;
        }
        y = v17->y;
        v50 = v18->y;
        if ( y > v50 )
        {
          v18->y = y;
          v17->y = v50;
        }
        x = v17->x;
        v21 = v18->x;
      }
      v59 = x;
      v60 = v17->y;
      v61 = v21;
      v62 = v18->y;
      v72 = a7;
      v22 = v21 - x;
      v23 = v62 - v60;
      if ( v22 > 0 && v23 > 0 )
      {
        v63 = (unsigned __int64)v17->Red << 40;
        v64 = (unsigned __int64)v17->Green << 40;
        v65 = (unsigned __int64)v17->Blue << 40;
        v66 = (unsigned __int64)v17->Alpha << 40;
        v24 = ((unsigned __int64)v18->Red << 40) - v63;
        v25 = ((unsigned __int64)v18->Green << 40) - v64;
        v26 = ((unsigned __int64)v18->Blue << 40) - v65;
        v27 = ((unsigned __int64)v18->Alpha << 40) - v66;
        v28 = 0LL;
        if ( a7 )
        {
          v69 = 0LL;
          v70 = 0LL;
          if ( v24 )
          {
            v29 = -v24;
            if ( v24 >= 0 )
              v29 = v24;
            v28 = (__int64)(v29 - ((unsigned __int64)v24 >> 63)) / v23;
            if ( v24 < 0 )
              v28 = ~v28;
          }
          *(_QWORD *)&v67 = v28;
          v30 = v25;
          v31 = 0LL;
          if ( v25 )
          {
            if ( v25 < 0 )
              v30 = -v25;
            v32 = (unsigned __int64)v25 >> 63;
            v31 = (v30 - (unsigned int)v32) / v23;
            if ( (_DWORD)v32 )
              v31 = ~v31;
          }
          *((_QWORD *)&v67 + 1) = v31;
          v33 = v26;
          v34 = 0LL;
          if ( v26 )
          {
            if ( v26 < 0 )
              v33 = -v26;
            v35 = (unsigned __int64)v26 >> 63;
            v34 = (v33 - (unsigned int)v35) / v23;
            if ( (_DWORD)v35 )
              v34 = ~v34;
          }
          *(_QWORD *)&v68 = v34;
          v36 = v27;
          v37 = 0LL;
          if ( v27 )
          {
            if ( v27 < 0 )
              v36 = -v27;
            v38 = (unsigned __int64)v27 >> 63;
            v37 = (v36 - (unsigned int)v38) / v23;
            if ( (_DWORD)v38 )
              v37 = ~v37;
          }
          *((_QWORD *)&v68 + 1) = v37;
        }
        else
        {
          v67 = 0LL;
          v68 = 0LL;
          if ( v24 )
          {
            v39 = -v24;
            if ( v24 >= 0 )
              v39 = v24;
            v28 = (__int64)(v39 - ((unsigned __int64)v24 >> 63)) / v22;
            if ( v24 < 0 )
              v28 = ~v28;
          }
          *(_QWORD *)&v69 = v28;
          v40 = v25;
          v41 = 0LL;
          if ( v25 )
          {
            if ( v25 < 0 )
              v40 = -v25;
            v42 = (unsigned __int64)v25 >> 63;
            v41 = (v40 - (unsigned int)v42) / v22;
            if ( (_DWORD)v42 )
              v41 = ~v41;
          }
          *((_QWORD *)&v69 + 1) = v41;
          v43 = v26;
          v44 = 0LL;
          if ( v26 )
          {
            if ( v26 < 0 )
              v43 = -v26;
            v45 = (unsigned __int64)v26 >> 63;
            v44 = (v43 - (unsigned int)v45) / v22;
            if ( (_DWORD)v45 )
              v44 = ~v44;
          }
          *(_QWORD *)&v70 = v44;
          v46 = v27;
          v47 = 0LL;
          if ( v27 )
          {
            if ( v27 < 0 )
              v46 = -v27;
            v48 = (unsigned __int64)v27 >> 63;
            v47 = (v46 - (unsigned int)v48) / v22;
            if ( (_DWORD)v48 )
              v47 = ~v47;
          }
          *((_QWORD *)&v70 + 1) = v47;
        }
        if ( (unsigned int)bCalcGradientRectOffsets((struct _GRADIENTRECTDATA *)&v58) )
        {
          if ( (unsigned int)bUMPDSecurityGateEx()
            && !v73
            && ((char *)v13 == (char *)vFillGRectDIB4 || (char *)v13 == (char *)vFillGRectDIB8) )
          {
            return 1LL;
          }
          ((void (__fastcall *)(struct SURFACE *, __int128 *))v13)(a1, &v58);
          v11 = 1;
        }
        else
        {
          v11 = 1;
        }
      }
      v12 = (unsigned int)(v12 + 1);
    }
  }
  return v11;
}

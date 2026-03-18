/*
 * XREFs of ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x140061AF0
 * Callers:
 *     EngGradientFill @ 0x140061280 (EngGradientFill.c)
 * Callees:
 *     ?bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z @ 0x140062070 (-bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x140062120 (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
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
  __int64 v12; // rcx
  __int64 v13; // r15
  void (*v14)(struct SURFACE *, struct _GRADIENTRECTDATA *); // r12
  unsigned int UpperLeft; // edx
  unsigned int LowerRight; // ecx
  struct _TRIVERTEX *v18; // r8
  struct _TRIVERTEX *v19; // r9
  LONG x; // edi
  LONG v21; // ecx
  LONG v22; // eax
  int v23; // edi
  int v24; // esi
  __int64 v25; // r14
  __int64 v26; // rbx
  __int64 v27; // r11
  __int64 v28; // r10
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // r11
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // r10
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // r11
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // r10
  LONG y; // eax
  LONG v52; // ecx
  void (*v53)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+28h] [rbp-160h] BYREF
  __int64 v54; // [rsp+30h] [rbp-158h] BYREF
  void (*v55)(struct SURFACE *, struct _GRADIENTRECTDATA *); // [rsp+38h] [rbp-150h] BYREF
  struct _TRIVERTEX v56; // [rsp+40h] [rbp-148h] BYREF
  struct _TRIVERTEX v57; // [rsp+50h] [rbp-138h] BYREF
  struct _TRIVERTEX *v58; // [rsp+60h] [rbp-128h]
  struct _GRADIENT_RECT *v59; // [rsp+68h] [rbp-120h]
  struct SURFACE *v60; // [rsp+70h] [rbp-118h]
  struct _TRIVERTEX *v61; // [rsp+78h] [rbp-110h]
  __int128 v62; // [rsp+80h] [rbp-108h] BYREF
  LONG v63; // [rsp+90h] [rbp-F8h]
  LONG v64; // [rsp+94h] [rbp-F4h]
  LONG v65; // [rsp+98h] [rbp-F0h]
  LONG v66; // [rsp+9Ch] [rbp-ECh]
  unsigned __int64 v67; // [rsp+B0h] [rbp-D8h]
  unsigned __int64 v68; // [rsp+B8h] [rbp-D0h]
  unsigned __int64 v69; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v70; // [rsp+C8h] [rbp-C0h]
  __int128 v71; // [rsp+D0h] [rbp-B8h]
  __int128 v72; // [rsp+E0h] [rbp-A8h]
  __int128 v73; // [rsp+F0h] [rbp-98h]
  __int128 v74; // [rsp+100h] [rbp-88h]
  __int64 v75; // [rsp+110h] [rbp-78h]
  unsigned int v76; // [rsp+118h] [rbp-70h]
  struct _XLATEOBJ *v77; // [rsp+120h] [rbp-68h]
  __int64 *v78; // [rsp+128h] [rbp-60h]

  v58 = a3;
  v60 = a1;
  v61 = a3;
  v59 = a5;
  v55 = 0LL;
  v11 = 1;
  memset_0(&v62, 0, 0xB8uLL);
  v12 = *((_QWORD *)a1 + 16);
  v54 = v12;
  if ( v12 )
    goto LABEL_2;
  v40 = *((_QWORD *)a1 + 6);
  if ( v40 )
  {
    v12 = *(_QWORD *)(v40 + 1792);
    v54 = v12;
  }
  if ( v12 )
  {
LABEL_2:
    bDetermineTriangleFillRoutine(a1, (struct XEPALOBJ *)&v54, &v53, &v55);
    v77 = a2;
    v78 = &v54;
    v75 = (__int64)*a9;
    v62 = (__int128)*a8;
    v13 = 0LL;
    v14 = v55;
    while ( 1 )
    {
      LODWORD(v53) = v13;
      if ( (unsigned int)v13 >= a6 )
        break;
      UpperLeft = v59[v13].UpperLeft;
      LowerRight = v59[v13].LowerRight;
      if ( UpperLeft > a4 - 1 || LowerRight > a4 - 1 )
        return 0;
      v56 = v58[UpperLeft];
      v57 = v58[LowerRight];
      v18 = &v56;
      v19 = &v57;
      if ( a7 )
      {
        v19 = &v57;
        if ( v56.y > v57.y )
          v19 = &v56;
        v18 = &v56;
        if ( v56.y > v57.y )
          v18 = &v57;
        x = v19->x;
        v21 = v18->x;
        v22 = v18->x;
        if ( v18->x > v19->x )
        {
          v19->x = v21;
          v18->x = x;
          v21 = x;
          x = v22;
        }
      }
      else
      {
        if ( v56.x > v57.x )
        {
          v18 = &v57;
          v19 = &v56;
        }
        y = v19->y;
        v52 = v18->y;
        if ( v52 > y )
        {
          v19->y = v52;
          v18->y = y;
        }
        v21 = v18->x;
        x = v19->x;
      }
      v63 = v21;
      v64 = v18->y;
      v65 = x;
      v66 = v19->y;
      v76 = a7;
      v23 = x - v21;
      v24 = v66 - v64;
      if ( v23 > 0 && v24 > 0 )
      {
        v67 = (unsigned __int64)v18->Red << 40;
        v68 = (unsigned __int64)v18->Green << 40;
        v69 = (unsigned __int64)v18->Blue << 40;
        v70 = (unsigned __int64)v18->Alpha << 40;
        v25 = ((unsigned __int64)v19->Red << 40) - v67;
        v26 = ((unsigned __int64)v19->Green << 40) - v68;
        v27 = ((unsigned __int64)v19->Blue << 40) - v69;
        v28 = ((unsigned __int64)v19->Alpha << 40) - v70;
        v29 = 0LL;
        if ( a7 )
        {
          v73 = 0LL;
          v74 = 0LL;
          if ( v25 )
          {
            v30 = -v25;
            if ( v25 >= 0 )
              v30 = v25;
            v29 = (__int64)(v30 - ((unsigned __int64)v25 >> 63)) / v24;
            if ( v25 < 0 )
              v29 = ~v29;
          }
          *(_QWORD *)&v71 = v29;
          v31 = v26;
          v32 = 0LL;
          if ( v26 )
          {
            if ( v26 < 0 )
              v31 = -v26;
            v33 = (unsigned __int64)v26 >> 63;
            v32 = (v31 - (unsigned int)v33) / v24;
            if ( (_DWORD)v33 )
              v32 = ~v32;
          }
          *((_QWORD *)&v71 + 1) = v32;
          v34 = v27;
          v35 = 0LL;
          if ( v27 )
          {
            if ( v27 < 0 )
              v34 = -v27;
            v36 = (unsigned __int64)v27 >> 63;
            v35 = (v34 - (unsigned int)v36) / v24;
            if ( (_DWORD)v36 )
              v35 = ~v35;
          }
          *(_QWORD *)&v72 = v35;
          v37 = v28;
          v38 = 0LL;
          if ( v28 )
          {
            if ( v28 < 0 )
              v37 = -v28;
            v39 = (unsigned __int64)v28 >> 63;
            v38 = (v37 - (unsigned int)v39) / v24;
            if ( (_DWORD)v39 )
              v38 = ~v38;
          }
          *((_QWORD *)&v72 + 1) = v38;
        }
        else
        {
          v71 = 0LL;
          v72 = 0LL;
          if ( v25 )
          {
            v41 = -v25;
            if ( v25 >= 0 )
              v41 = v25;
            v29 = (__int64)(v41 - ((unsigned __int64)v25 >> 63)) / v23;
            if ( v25 < 0 )
              v29 = ~v29;
          }
          *(_QWORD *)&v73 = v29;
          v42 = v26;
          v43 = 0LL;
          if ( v26 )
          {
            if ( v26 < 0 )
              v42 = -v26;
            v44 = (unsigned __int64)v26 >> 63;
            v43 = (v42 - (unsigned int)v44) / v23;
            if ( (_DWORD)v44 )
              v43 = ~v43;
          }
          *((_QWORD *)&v73 + 1) = v43;
          v45 = v27;
          v46 = 0LL;
          if ( v27 )
          {
            if ( v27 < 0 )
              v45 = -v27;
            v47 = (unsigned __int64)v27 >> 63;
            v46 = (v45 - (unsigned int)v47) / v23;
            if ( (_DWORD)v47 )
              v46 = ~v46;
          }
          *(_QWORD *)&v74 = v46;
          v48 = v28;
          v49 = 0LL;
          if ( v28 )
          {
            if ( v28 < 0 )
              v48 = -v28;
            v50 = (unsigned __int64)v28 >> 63;
            v49 = (v48 - (unsigned int)v50) / v23;
            if ( (_DWORD)v50 )
              v49 = ~v49;
          }
          *((_QWORD *)&v74 + 1) = v49;
        }
        if ( (unsigned int)bCalcGradientRectOffsets((struct _GRADIENTRECTDATA *)&v62) )
        {
          if ( !v77 && ((char *)v14 == (char *)vFillGRectDIB4 || (char *)v14 == (char *)vFillGRectDIB8) )
            return 1LL;
          ((void (__fastcall *)(struct SURFACE *, __int128 *))v14)(a1, &v62);
          v11 = 1;
        }
        else
        {
          v11 = 1;
        }
      }
      v13 = (unsigned int)(v13 + 1);
    }
  }
  return v11;
}

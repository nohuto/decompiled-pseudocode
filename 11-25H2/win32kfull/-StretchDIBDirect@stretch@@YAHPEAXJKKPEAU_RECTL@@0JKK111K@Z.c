/*
 * XREFs of ?StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1401356B8
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140133474 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x14022CD88 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ?vDirectStretch32@stretch@@YAXPEAU_STR_BLT@@@Z @ 0x1401100B0 (-vDirectStretch32@stretch@@YAXPEAU_STR_BLT@@@Z.c)
 *     vDirectStretch8 @ 0x1401948D0 (vDirectStretch8.c)
 *     ?vDirectStretch8Narrow@stretch@@YAXPEAU_STR_BLT@@@Z @ 0x140203030 (-vDirectStretch8Narrow@stretch@@YAXPEAU_STR_BLT@@@Z.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x14020E030 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vDirectStretch16@stretch@@YAXPEAU_STR_BLT@@@Z @ 0x14021D3B0 (-vDirectStretch16@stretch@@YAXPEAU_STR_BLT@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall stretch::StretchDIBDirect(
        stretch *this,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        LONG *a5,
        struct _RECTL *a6,
        void *a7,
        int a8,
        signed int a9,
        int *a10,
        struct _RECTL *a11,
        struct _RECTL *a12,
        struct _RECTL *a13)
{
  LONG v13; // r15d
  int v14; // r14d
  int v15; // r13d
  int v16; // esi
  int v17; // r11d
  int v18; // ebx
  int v19; // r8d
  int v20; // ecx
  __int64 v21; // r10
  unsigned __int64 v22; // kr00_8
  unsigned __int64 v23; // kr08_8
  LONG v24; // r11d
  LONG left; // esi
  LONG right; // r14d
  unsigned int v27; // r9d
  int v28; // r15d
  int v29; // r8d
  LONG v30; // r9d
  LONG v31; // eax
  LONG top; // ebx
  LONG bottom; // edi
  unsigned int v34; // edx
  int v35; // r9d
  int v36; // edx
  int v37; // ecx
  unsigned __int64 v39; // rax
  unsigned int v40; // r8d
  unsigned int v41; // r14d
  int v42; // r11d
  unsigned __int64 v43; // r15
  unsigned __int64 v44; // rax
  unsigned int v45; // edi
  unsigned __int64 v46; // [rsp+20h] [rbp-118h]
  LONG v47; // [rsp+28h] [rbp-110h]
  LONG v48; // [rsp+2Ch] [rbp-10Ch]
  unsigned __int64 v49; // [rsp+38h] [rbp-100h]
  LONG v51; // [rsp+48h] [rbp-F0h]
  LONG v52; // [rsp+4Ch] [rbp-ECh]
  int v53; // [rsp+50h] [rbp-E8h]
  int v54; // [rsp+58h] [rbp-E0h]
  unsigned __int64 v55; // [rsp+60h] [rbp-D8h]
  int v56; // [rsp+68h] [rbp-D0h]
  int v57; // [rsp+6Ch] [rbp-CCh]
  LONG v58; // [rsp+78h] [rbp-C0h]
  int v59; // [rsp+80h] [rbp-B8h]
  int v60; // [rsp+84h] [rbp-B4h]
  struct _RECTL *v61; // [rsp+90h] [rbp-A8h]
  char *v63; // [rsp+B0h] [rbp-88h] BYREF
  int v64; // [rsp+B8h] [rbp-80h]
  int v65; // [rsp+BCh] [rbp-7Ch]
  char *v66; // [rsp+C0h] [rbp-78h]
  int v67; // [rsp+C8h] [rbp-70h]
  LONG v68; // [rsp+CCh] [rbp-6Ch]
  LONG v69; // [rsp+D0h] [rbp-68h]
  int v70; // [rsp+D4h] [rbp-64h]
  int v71; // [rsp+D8h] [rbp-60h]
  int v72; // [rsp+DCh] [rbp-5Ch]
  int v73; // [rsp+E0h] [rbp-58h]
  int v74; // [rsp+E4h] [rbp-54h]
  int v75; // [rsp+E8h] [rbp-50h]
  int v76; // [rsp+ECh] [rbp-4Ch]
  __int128 v77; // [rsp+F0h] [rbp-48h] BYREF

  v60 = (int)a2;
  v61 = a12;
  v13 = a5[2];
  v47 = *a5;
  v14 = v13 - *a5;
  v58 = a5[3];
  v51 = a5[1];
  v15 = v58 - v51;
  v16 = a10[2];
  v54 = *a10;
  v17 = v16 - *a10;
  v56 = a10[3];
  v59 = a10[1];
  v18 = v56 - v59;
  v19 = *a10;
  v48 = v47;
  v20 = v59;
  v52 = v51;
  v21 = 0LL;
  v53 = 0;
  v57 = 0;
  v77 = 0LL;
  if ( v13 - v47 <= 0 || v15 <= 0 || v17 <= 0 || v18 <= 0 )
    return 1LL;
  if ( v14 <= 0x7FFF && v15 <= 0x7FFF && v17 <= 0x7FFF && v18 <= 0x7FFF )
  {
    if ( !a12 )
    {
      v61 = (struct _RECTL *)&v77;
      *((_QWORD *)&v77 + 1) = __PAIR64__(a4, a3);
      DWORD1(v77) = 0;
    }
    LODWORD(v55) = -1;
    HIDWORD(v55) = v17 - 1;
    v22 = v55 / (unsigned int)v14 + 1;
    LODWORD(v49) = -1;
    HIDWORD(v49) = v18 - 1;
    v23 = v49 / (unsigned int)v15 + 1;
    if ( v19 >= 0 && v16 <= a8 )
      goto LABEL_13;
    v53 = 1;
    v39 = __PAIR64__(v14, 0) / (unsigned int)v17;
    if ( v19 >= 0 )
    {
      v41 = v39;
    }
    else
    {
      v40 = -v19;
      if ( (int)(v17 - v40) <= 0 )
        return 1LL;
      v41 = v39;
      v46 = v39 * v40;
      v19 = 0;
      v48 = ((v46 + 0x7FFFFFFF) >> 32) + v47;
    }
    if ( v16 > a8 )
    {
      v42 = v17 - (v16 - a8);
      if ( v42 <= 0 )
        return 1LL;
      v43 = (__PAIR64__(HIDWORD(v39), v41) * (unsigned int)v42 + 0x7FFFFFFF) >> 32;
      v24 = v47;
      v13 = v47 + v43;
    }
    else
    {
LABEL_13:
      v24 = v47;
    }
    left = v61->left;
    if ( v48 >= v61->left )
      left = v48;
    right = v61->right;
    if ( v13 <= right )
      right = v13;
    if ( right <= left )
      return 1LL;
    v27 = left - v24;
    if ( v53 || v27 )
    {
      v29 = v54 + (((v22 >> 1) + v22 * v27) >> 32);
      v28 = (v22 >> 1) + v22 * v27;
    }
    else
    {
      v28 = (__int64)v22 >> 1;
      v29 = (HIDWORD(v22) >> 1) + v19;
    }
    if ( v59 >= 0 && v56 <= a9 )
      goto LABEL_24;
    v57 = 1;
    v44 = __PAIR64__(v58 - v51, 0) / (unsigned int)v18;
    if ( v59 >= 0 )
    {
      v45 = v44;
    }
    else
    {
      if ( v56 <= 0 )
        return 1LL;
      v45 = v44;
      v20 = 0;
      v52 = ((v44 * (unsigned int)-v59 + 0x7FFFFFFF) >> 32) + v51;
    }
    if ( v56 <= a9 )
    {
LABEL_24:
      v30 = v51;
      v31 = v58;
LABEL_25:
      top = v61->top;
      if ( v52 >= top )
        top = v52;
      bottom = v61->bottom;
      if ( v31 <= bottom )
        bottom = v31;
      if ( bottom > top )
      {
        v34 = top - v30;
        if ( v57 || v34 )
        {
          v35 = v49 / (unsigned int)v15 + 1;
          v37 = v59 + (((v23 >> 1) + v23 * v34) >> 32);
          v36 = (v23 >> 1) + v23 * v34;
        }
        else
        {
          v35 = v49 / (unsigned int)v15 + 1;
          v36 = (__int64)v23 >> 1;
          v37 = (HIDWORD(v23) >> 1) + v20;
        }
        v63 = (char *)a6 + v37 * (int)a7;
        v66 = (char *)this + top * v60;
        v64 = (int)a7;
        v65 = v29;
        v68 = left;
        v67 = v60;
        v69 = right;
        v70 = HIDWORD(v22) - top;
        v71 = HIDWORD(v22);
        v72 = v22;
        v73 = (v49 / (unsigned int)v15 + 1) >> 32;
        v74 = v35;
        v75 = v28;
        v76 = v36;
        if ( right - left < 7 )
          v21 = 8LL;
        funcs_140135A55[(unsigned int)a13 | (unsigned __int64)v21]((struct BLTINFO *)&v63);
        a11->left = left;
        a11->right = right;
        a11->top = top;
        a11->bottom = bottom;
      }
      return 1LL;
    }
    if ( a9 - v59 > 0 )
    {
      v30 = v51;
      v31 = v51 + ((__PAIR64__(HIDWORD(v44), v45) * (unsigned int)(a9 - v59) + 0x7FFFFFFF) >> 32);
      goto LABEL_25;
    }
    return 1LL;
  }
  return 0LL;
}

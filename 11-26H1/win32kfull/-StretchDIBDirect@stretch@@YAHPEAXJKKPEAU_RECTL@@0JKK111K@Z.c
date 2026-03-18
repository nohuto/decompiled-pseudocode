/*
 * XREFs of ?StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1400E8D14
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400E6B88 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x140266E6C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ?vDirectStretch32@stretch@@YAXPEAU_STR_BLT@@@Z @ 0x1401313F0 (-vDirectStretch32@stretch@@YAXPEAU_STR_BLT@@@Z.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x14016D630 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     vDirectStretch8 @ 0x1401C5B40 (vDirectStretch8.c)
 *     ?vDirectStretch8Narrow@stretch@@YAXPEAU_STR_BLT@@@Z @ 0x14023C3D0 (-vDirectStretch8Narrow@stretch@@YAXPEAU_STR_BLT@@@Z.c)
 *     ?vDirectStretch16@stretch@@YAXPEAU_STR_BLT@@@Z @ 0x140258170 (-vDirectStretch16@stretch@@YAXPEAU_STR_BLT@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
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
  LONG v14; // edi
  int v15; // esi
  LONG v16; // r12d
  int v17; // r8d
  int v18; // r11d
  int v19; // ebx
  LONG v20; // r14d
  int v21; // ecx
  __int64 v22; // r10
  unsigned __int64 v23; // kr00_8
  unsigned __int64 v24; // kr08_8
  LONG v25; // edx
  LONG left; // esi
  LONG right; // r14d
  unsigned int v28; // r9d
  int v29; // r8d
  int v30; // r11d
  LONG v31; // r9d
  LONG top; // ebx
  LONG bottom; // edi
  unsigned int v34; // edx
  int v35; // ecx
  int v36; // r9d
  int v37; // edx
  unsigned __int64 v39; // rax
  unsigned int v40; // r8d
  unsigned int v41; // esi
  int v42; // r11d
  unsigned __int64 v43; // rax
  unsigned int v44; // edi
  unsigned __int64 v45; // [rsp+20h] [rbp-118h]
  LONG v46; // [rsp+28h] [rbp-110h]
  LONG v47; // [rsp+2Ch] [rbp-10Ch]
  int v48; // [rsp+30h] [rbp-108h]
  int v49; // [rsp+34h] [rbp-104h]
  unsigned __int64 v50; // [rsp+38h] [rbp-100h]
  int v51; // [rsp+40h] [rbp-F8h]
  int v52; // [rsp+48h] [rbp-F0h]
  int v53; // [rsp+4Ch] [rbp-ECh]
  unsigned __int64 v54; // [rsp+60h] [rbp-D8h]
  int v55; // [rsp+68h] [rbp-D0h]
  int v56; // [rsp+6Ch] [rbp-CCh]
  LONG v57; // [rsp+78h] [rbp-C0h]
  int v58; // [rsp+80h] [rbp-B8h]
  struct _RECTL *v59; // [rsp+88h] [rbp-B0h]
  __int128 v60; // [rsp+90h] [rbp-A8h] BYREF
  struct _RECTL *v61; // [rsp+A0h] [rbp-98h]
  stretch *v62; // [rsp+A8h] [rbp-90h]
  struct _RECTL *v63; // [rsp+B0h] [rbp-88h]
  struct _RECTL *v64; // [rsp+B8h] [rbp-80h]
  char *v65; // [rsp+D0h] [rbp-68h] BYREF
  int v66; // [rsp+D8h] [rbp-60h]
  int v67; // [rsp+DCh] [rbp-5Ch]
  char *v68; // [rsp+E0h] [rbp-58h]
  int v69; // [rsp+E8h] [rbp-50h]
  LONG v70; // [rsp+ECh] [rbp-4Ch]
  LONG v71; // [rsp+F0h] [rbp-48h]
  int v72; // [rsp+F4h] [rbp-44h]
  int v73; // [rsp+F8h] [rbp-40h]
  int v74; // [rsp+FCh] [rbp-3Ch]
  int v75; // [rsp+100h] [rbp-38h]
  int v76; // [rsp+104h] [rbp-34h]
  int v77; // [rsp+108h] [rbp-30h]
  int v78; // [rsp+10Ch] [rbp-2Ch]

  v58 = (int)a2;
  v62 = this;
  v63 = a11;
  v64 = a11;
  v61 = a6;
  v59 = a12;
  v46 = *a5;
  v14 = a5[2];
  v15 = v14 - *a5;
  v47 = a5[1];
  v16 = a5[3];
  v53 = v16 - v47;
  v17 = *a10;
  v52 = *a10;
  v48 = a10[2];
  v18 = v48 - *a10;
  v56 = a10[1];
  v49 = a10[3];
  v19 = v49 - v56;
  v20 = *a5;
  v21 = v56;
  v57 = v47;
  v22 = 0LL;
  v51 = 0;
  v55 = 0;
  v60 = 0LL;
  if ( v15 <= 0 || v53 <= 0 || v18 <= 0 || v19 <= 0 )
    return 1LL;
  if ( v15 <= 0x7FFF && v53 <= 0x7FFF && v18 <= 0x7FFF && v19 <= 0x7FFF )
  {
    if ( !a12 )
    {
      v59 = (struct _RECTL *)&v60;
      *((_QWORD *)&v60 + 1) = __PAIR64__(a4, a3);
      DWORD1(v60) = 0;
    }
    LODWORD(v54) = -1;
    HIDWORD(v54) = v18 - 1;
    v23 = v54 / (unsigned int)v15 + 1;
    LODWORD(v50) = -1;
    HIDWORD(v50) = v19 - 1;
    v24 = v50 / (unsigned int)v53 + 1;
    if ( v17 < 0 || v48 > a8 )
    {
      v51 = 1;
      v39 = __PAIR64__(v15, 0) / (unsigned int)v18;
      if ( v17 >= 0 )
      {
        v41 = __PAIR64__(v15, 0) / (unsigned int)v18;
      }
      else
      {
        v40 = -v17;
        if ( (int)(v18 - v40) <= 0 )
          return 1LL;
        v41 = __PAIR64__(v15, 0) / (unsigned int)v18;
        v45 = v39 * v40;
        v17 = 0;
        v20 = v46 + ((v45 + 0x7FFFFFFF) >> 32);
      }
      if ( v48 > a8 )
      {
        v42 = a8 - v48 + v18;
        if ( v42 <= 0 )
          return 1LL;
        v25 = v46;
        v14 = v46 + ((__PAIR64__(HIDWORD(v39), v41) * (unsigned int)v42 + 0x7FFFFFFF) >> 32);
      }
      else
      {
        v25 = v46;
      }
    }
    else
    {
      v25 = v20;
    }
    left = v59->left;
    if ( v20 >= v59->left )
      left = v20;
    right = v59->right;
    if ( v14 <= right )
      right = v14;
    if ( right <= left )
      return 1LL;
    v28 = left - v25;
    if ( v51 || v28 )
    {
      v29 = v52 + (((v23 >> 1) + v23 * v28) >> 32);
      v30 = (v23 >> 1) + v23 * v28;
    }
    else
    {
      v29 = (HIDWORD(v23) >> 1) + v17;
      v30 = (__int64)v23 >> 1;
    }
    if ( v56 >= 0 && v49 <= a9 )
      goto LABEL_24;
    v55 = 1;
    v43 = __PAIR64__(v53, 0) / (unsigned int)v19;
    if ( v56 >= 0 )
    {
      v44 = v43;
    }
    else
    {
      if ( v49 <= 0 )
        return 1LL;
      v44 = v43;
      v21 = 0;
      v57 = v47 + ((v43 * (unsigned int)-v56 + 0x7FFFFFFF) >> 32);
    }
    if ( v49 <= a9 )
    {
LABEL_24:
      v31 = v47;
LABEL_25:
      top = v59->top;
      if ( v57 >= top )
        top = v57;
      bottom = v59->bottom;
      if ( v16 <= bottom )
        bottom = v16;
      if ( bottom > top )
      {
        v34 = top - v31;
        if ( v55 || v34 )
        {
          v36 = v50 / (unsigned int)v53 + 1;
          v35 = v56 + (((v24 >> 1) + v24 * v34) >> 32);
          v37 = (v24 >> 1) + v24 * v34;
        }
        else
        {
          v35 = (HIDWORD(v24) >> 1) + v21;
          v36 = v50 / (unsigned int)v53 + 1;
          v37 = (__int64)v24 >> 1;
        }
        v65 = (char *)v61 + v35 * (int)a7;
        v68 = (char *)v62 + top * v58;
        v66 = (int)a7;
        v67 = v29;
        v70 = left;
        v69 = v58;
        v71 = right;
        v72 = bottom - top;
        v73 = HIDWORD(v23);
        v74 = v23;
        v75 = (v50 / (unsigned int)v53 + 1) >> 32;
        v76 = v36;
        v77 = v30;
        v78 = v37;
        if ( right - left < 7 )
          v22 = 8LL;
        funcs_1400E90AE[(unsigned int)a13 | (unsigned __int64)v22]((struct BLTINFO *)&v65);
        v63->left = left;
        a11->right = right;
        a11->top = top;
        a11->bottom = bottom;
      }
      return 1LL;
    }
    if ( a9 - v56 > 0 )
    {
      v31 = v47;
      v16 = v47 + ((__PAIR64__(HIDWORD(v43), v44) * (unsigned int)(a9 - v56) + 0x7FFFFFFF) >> 32);
      goto LABEL_25;
    }
    return 1LL;
  }
  return 0LL;
}

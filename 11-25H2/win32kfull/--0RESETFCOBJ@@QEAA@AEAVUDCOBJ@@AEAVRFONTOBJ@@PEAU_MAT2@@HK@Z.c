/*
 * XREFs of ??0RESETFCOBJ@@QEAA@AEAVUDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1400AF918
 * Callers:
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400AEFB4 (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 * Callees:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1400BA178 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@QEAU_POINTL@@@Z @ 0x1400BAEEC (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1400BB6C4 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x140178EF8 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?vSetElementsLToFx@EXFORMOBJ@@QEAAXMMMM@Z @ 0x140178F6C (-vSetElementsLToFx@EXFORMOBJ@@QEAAXMMMM@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1401FCDC8 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

RESETFCOBJ *__fastcall RESETFCOBJ::RESETFCOBJ(
        RESETFCOBJ *this,
        struct UDCOBJ *a2,
        struct RFONTOBJ *a3,
        struct _MAT2 *a4,
        int a5,
        unsigned int a6)
{
  int v6; // eax
  struct UDCOBJ *v9; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rbx
  bool v16; // zf
  struct LFONT *v17; // rdi
  int v19; // r14d
  _QWORD *HDEV; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r14d
  int v25; // r14d
  __int64 v26; // rcx
  float eM11; // xmm4_4
  float eM22; // xmm3_4
  float eM12; // xmm1_4
  float eM21; // xmm2_4
  __int64 v31; // rax
  __int64 v32; // rcx
  struct tagLOGFONTW *v33; // rdx
  int NtoD_Win31; // eax
  FLOATL eYX; // edx
  FLOATL eYY; // r8d
  const struct MATRIX *v37; // [rsp+40h] [rbp-C0h] BYREF
  struct _POINTL v38; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v39; // [rsp+50h] [rbp-B0h] BYREF
  struct LFONT *v40; // [rsp+58h] [rbp-A8h]
  const struct MATRIX *v41; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v42; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v43[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v44[8]; // [rsp+80h] [rbp-80h] BYREF
  struct _FD_XFORM v45; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v46[4]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-58h]
  int v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v50; // [rsp+C8h] [rbp-38h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  int v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+100h] [rbp+0h]
  int v56; // [rsp+108h] [rbp+8h]

  v6 = 1;
  *((_QWORD *)this + 1) = a3;
  *(_DWORD *)this = 1;
  v9 = a2;
  if ( *(_DWORD *)&a4->eM11 != 0x10000
    || a4->eM22.value != 1
    || a4->eM22.fract
    || a4->eM12.value
    || a4->eM12.fract
    || a4->eM21.value
    || a4->eM21.fract )
  {
    v6 = 0;
  }
  *((_DWORD *)this + 1) = v6;
  v11 = *(_QWORD *)a2;
  LOBYTE(a2) = 10;
  v12 = HmgShareLock(*(_QWORD *)(*(_QWORD *)(v11 + 976) + 296LL), a2, a3, a4);
  v13 = v12 + 24;
  v14 = -v12;
  v15 = (_DWORD *)(v13 & -(__int64)(v14 != 0));
  v39 = v15;
  if ( !v15 )
  {
    v17 = 0LL;
    v40 = 0LL;
    goto LABEL_10;
  }
  v16 = (*(_BYTE *)((v13 & -(__int64)(v14 != 0)) + 4) & 1) == 0;
  v17 = (struct LFONT *)(v15 - 6);
  v40 = (struct LFONT *)(v15 - 6);
  if ( !v16 )
  {
    v19 = *v15;
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)(v15 - 6));
    v17 = 0LL;
    v40 = 0LL;
    HDEV = (_QWORD *)UserGetHDEV();
    if ( HDEV )
    {
      v24 = v19 - 4;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          if ( v25 != 1 )
          {
LABEL_26:
            v15 = (_DWORD *)(((unsigned __int64)v17 + 24) & -(__int64)(v17 != 0LL));
            v39 = v15;
            goto LABEL_10;
          }
          v26 = HDEV[181];
        }
        else
        {
          v26 = HDEV[180];
        }
      }
      else
      {
        v26 = HDEV[179];
      }
      if ( v26 )
      {
        LOBYTE(v21) = 10;
        v17 = (struct LFONT *)HmgShareLock(v26, v21, v22, v23);
        v40 = v17;
      }
      goto LABEL_26;
    }
  }
LABEL_10:
  if ( !v15 )
  {
    *(_DWORD *)this = 0;
    goto LABEL_14;
  }
  if ( (v15[65] || v15[66]) && a5 )
    *((_DWORD *)this + 1) = 0;
  if ( *((_DWORD *)this + 1) )
    goto LABEL_14;
  eM11 = (float)(int)a4->eM11;
  v41 = (const struct MATRIX *)v46;
  v48 = 32;
  *(float *)&v37 = eM11;
  v47 = 0LL;
  if ( eM11 != 0.0 )
  {
    LODWORD(v37) = LODWORD(eM11) & 0x807FFFFF | (LODWORD(eM11) - 0x8000000) & 0x7F800000;
    eM11 = *(float *)&v37;
  }
  eM22 = (float)(int)a4->eM22;
  *(float *)&v37 = eM22;
  if ( eM22 != 0.0 )
  {
    LODWORD(v37) = LODWORD(eM22) & 0x807FFFFF | (LODWORD(eM22) - 0x8000000) & 0x7F800000;
    eM22 = *(float *)&v37;
  }
  eM12 = (float)(int)a4->eM12;
  *(float *)&v37 = eM12;
  if ( eM12 != 0.0 )
  {
    LODWORD(v37) = LODWORD(eM12) & 0x807FFFFF | (LODWORD(eM12) - 0x8000000) & 0x7F800000;
    eM12 = *(float *)&v37;
  }
  eM21 = (float)(int)a4->eM21;
  *(float *)&v37 = eM21;
  if ( eM21 != 0.0 )
    LODWORD(eM21) = LODWORD(eM21) & 0x807FFFFF | (LODWORD(eM21) - 0x8000000) & 0x7F800000;
  v46[1] = LODWORD(eM12) ^ _xmm;
  v46[2] = LODWORD(eM21) ^ _xmm;
  *(float *)v46 = eM11;
  *(float *)&v46[3] = eM22;
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v41);
  v49 = 0LL;
  v51 = 0LL;
  v37 = (const struct MATRIX *)&v49;
  v52 = 8;
  v42 = &v53;
  v53 = 0LL;
  v55 = 0LL;
  v56 = 8;
  v50 = 0LL;
  v54 = 0LL;
  v45 = 0LL;
  if ( a5 )
  {
    v31 = *(_QWORD *)a3;
    v38 = 0LL;
    v32 = *(_QWORD *)v9;
    v43[0] = *(_QWORD *)(*(_QWORD *)(v31 + 120) + 32LL);
    DC::QuickInitXform(v32, v44, 516LL);
    v33 = (struct tagLOGFONTW *)(v15 + 63);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 976LL) + 208LL) == 1 )
      NtoD_Win31 = bGetNtoD_Win31(&v45, v33, (struct IFIOBJ *)v43, v9, 1u, &v38, 0);
    else
      NtoD_Win31 = bGetNtoD(&v45, v33, (struct IFIOBJ *)v43, v9, &v38);
    if ( !NtoD_Win31 )
      goto LABEL_55;
    eYX = v45.eYX;
    if ( LODWORD(v45.eYX) )
    {
      LODWORD(eYX) = LODWORD(v45.eYX) ^ 0x80000000;
      LODWORD(v45.eYX) ^= 0x80000000;
    }
    eYY = v45.eYY;
    if ( LODWORD(v45.eYY) )
    {
      LODWORD(eYY) = LODWORD(v45.eYY) ^ 0x80000000;
      LODWORD(v45.eYY) ^= 0x80000000;
    }
    if ( (*(_DWORD *)(v43[0] + 48LL) & 0x1000000) != 0 )
    {
      v45.eXX = eYY;
      v45.eXY = eYX;
      if ( eYX != 0.0 )
        LODWORD(v45.eXY) = LODWORD(eYX) ^ 0x80000000;
    }
    EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v37);
    EXFORMOBJ::vSetElementsLToFx((EXFORMOBJ *)&v37, v45.eXX, v45.eXY, v45.eYX, v45.eYY);
    EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v37, 8u);
  }
  else
  {
    RFONTOBJ::vSetNotionalToDevice(a3, (struct EXFORMOBJ *)&v37);
  }
  if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v42, v37, v41, 8u) )
  {
LABEL_55:
    *(_DWORD *)this = 0;
    LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v39);
    return this;
  }
  EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)&v42, &v45);
  *(_DWORD *)this = RFONTOBJ::bSetNewFDX(a3, v9, &v45, a6);
LABEL_14:
  if ( v17 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v17);
  return this;
}

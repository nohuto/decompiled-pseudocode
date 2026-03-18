/*
 * XREFs of ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x14010DA74
 * Callers:
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 * Callees:
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1400C2DD8 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KQEAU_POINTL@@AEAVIFIOBJ.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1400F5394 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x140107BA4 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?vSetElementsLToFx@EXFORMOBJ@@QEAAXMMMM@Z @ 0x140107C18 (-vSetElementsLToFx@EXFORMOBJ@@QEAAXMMMM@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x14010DE20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x14010FB74 (--1LFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

RESETFCOBJ *__fastcall RESETFCOBJ::RESETFCOBJ(
        RESETFCOBJ *this,
        struct DCOBJ *a2,
        struct RFONTOBJ *a3,
        struct _MAT2 *a4,
        int a5,
        unsigned int a6)
{
  int v6; // eax
  Gre::Base *v11; // rcx
  struct tagLOGFONTW *v12; // r14
  struct LFONT *v13; // rbx
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  float eM11; // xmm4_4
  float eM22; // xmm3_4
  float eM12; // xmm1_4
  float eM21; // xmm2_4
  __int64 v20; // rax
  PFEOBJ *v21; // rcx
  const struct MATRIX *v22; // [rsp+40h] [rbp-C0h] BYREF
  struct _POINTL v23; // [rsp+48h] [rbp-B8h] BYREF
  const struct MATRIX *v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  struct LFONT *v27; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  struct _FD_XFORM v29; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v30[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-30h]
  int v36; // [rsp+D8h] [rbp-28h]
  __int64 v37; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v38; // [rsp+E8h] [rbp-18h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  int v40; // [rsp+100h] [rbp+0h]

  v6 = 1;
  *((_QWORD *)this + 1) = a3;
  *(_DWORD *)this = 1;
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
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v26, *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 296LL), 0LL);
  if ( !v26 )
    goto LABEL_15;
  v12 = (struct tagLOGFONTW *)(v26 + 252);
  if ( (*(_DWORD *)(v26 + 260) || *(_DWORD *)(v26 + 264)) && a5 )
    *((_DWORD *)this + 1) = 0;
  if ( *((_DWORD *)this + 1) )
    goto LABEL_12;
  eM11 = (float)(int)a4->eM11;
  v24 = (const struct MATRIX *)v30;
  v32 = 32;
  *(float *)&v22 = eM11;
  v31 = 0LL;
  if ( eM11 != 0.0 )
  {
    LODWORD(v22) = LODWORD(eM11) & 0x807FFFFF | (LODWORD(eM11) - 0x8000000) & 0x7F800000;
    eM11 = *(float *)&v22;
  }
  eM22 = (float)(int)a4->eM22;
  *(float *)&v22 = eM22;
  if ( eM22 != 0.0 )
  {
    LODWORD(v22) = LODWORD(eM22) & 0x807FFFFF | (LODWORD(eM22) - 0x8000000) & 0x7F800000;
    eM22 = *(float *)&v22;
  }
  eM12 = (float)(int)a4->eM12;
  *(float *)&v22 = eM12;
  if ( eM12 != 0.0 )
  {
    LODWORD(v22) = LODWORD(eM12) & 0x807FFFFF | (LODWORD(eM12) - 0x8000000) & 0x7F800000;
    eM12 = *(float *)&v22;
  }
  eM21 = (float)(int)a4->eM21;
  *(float *)&v22 = eM21;
  if ( eM21 != 0.0 )
    LODWORD(eM21) = LODWORD(eM21) & 0x807FFFFF | (LODWORD(eM21) - 0x8000000) & 0x7F800000;
  v30[1] = LODWORD(eM12) ^ _xmm;
  v30[2] = LODWORD(eM21) ^ _xmm;
  *(float *)v30 = eM11;
  *(float *)&v30[3] = eM22;
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v24);
  v22 = (const struct MATRIX *)&v33;
  v33 = 0LL;
  v25 = &v37;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 8;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 8;
  v29 = 0LL;
  if ( a5 )
  {
    v20 = *(_QWORD *)a3;
    v23 = 0LL;
    v21 = *(PFEOBJ **)(v20 + 120);
    v28 = *((_QWORD *)v21 + 4);
    if ( !(unsigned int)PFEOBJ::bSetFontXform(v21, a2, v12, &v29, 1u, &v23, (struct IFIOBJ *)&v28, 0) )
    {
      *(_DWORD *)this = 0;
      LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v26);
      return this;
    }
    EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v22);
    EXFORMOBJ::vSetElementsLToFx((EXFORMOBJ *)&v22, v29.eXX, v29.eXY, v29.eYX, v29.eYY);
    EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v22, 8u);
  }
  else
  {
    RFONTOBJ::vSetNotionalToDevice(a3, (struct EXFORMOBJ *)&v22);
  }
  if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v25, v22, v24, 8u) )
  {
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)&v25, &v29);
    *(_DWORD *)this = RFONTOBJ::bSetNewFDX(a3, a2, &v29, a6);
  }
  else
  {
LABEL_15:
    *(_DWORD *)this = 0;
  }
LABEL_12:
  v13 = v27;
  if ( v27 )
  {
    v14 = Gre::Base::Globals(v11);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v14, v13);
  }
  return this;
}

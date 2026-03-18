/*
 * XREFs of ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@QEAU_POINTL@@@Z @ 0x1400C19DC
 * Callers:
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1400C2DD8 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KQEAU_POINTL@@AEAVIFIOBJ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400C40D8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ?vGetNtoW@@YAXPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@@Z @ 0x1400C1D08 (-vGetNtoW@@YAXPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoD(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct XDCOBJ *a4,
        struct _POINTL *const a5)
{
  unsigned int v5; // esi
  int v9; // ecx
  __int64 v10; // r8
  __m128 v11; // xmm0
  unsigned __int64 v12; // rax
  __int16 v14; // r14
  float v15; // xmm0_4
  __int16 v16; // r12
  bool v17; // cf
  bool v18; // zf
  float v19; // xmm0_4
  __int64 lfOrientation; // rcx
  int v21; // esi
  int v22; // ecx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  __int64 y; // rax
  __int64 x; // rax
  __int16 v28; // [rsp+20h] [rbp-61h]
  __int16 v29; // [rsp+24h] [rbp-5Dh]
  float *v30; // [rsp+28h] [rbp-59h] BYREF
  __m128 *v31; // [rsp+30h] [rbp-51h] BYREF
  __m128 v32; // [rsp+38h] [rbp-49h] BYREF
  int v33; // [rsp+58h] [rbp-29h]
  _OWORD v34[2]; // [rsp+60h] [rbp-21h] BYREF
  int v35; // [rsp+80h] [rbp-1h]

  v35 = 0;
  v33 = 0;
  v5 = 0;
  memset(v34, 0, sizeof(v34));
  memset(&v32, 0, 32);
  if ( a5->x )
  {
    v9 = *(_DWORD *)(*(_QWORD *)a3 + 48LL);
    if ( (v9 & 0x3000010) == 0 )
    {
      if ( (v9 & 0x200000) == 0 )
        goto LABEL_17;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x802) == 0x802 )
      {
        v23 = (int)lNormAngle((unsigned int)a2->lfOrientation) / 900;
      }
      else
      {
        DC::QuickInitXform(*(_QWORD *)a4, &v30, 516LL);
        HIBYTE(v14) = 0;
        HIBYTE(v16) = 0;
        LOBYTE(v14) = *v30 > 0.0;
        v15 = v30[1];
        v29 = *v30 < 0.0;
        LOBYTE(v16) = v15 > 0.0;
        v17 = v15 > 0.0;
        v18 = v15 == 0.0;
        v19 = v30[2];
        v28 = !v17 && !v18;
        lfOrientation = (unsigned int)a2->lfOrientation;
        LOBYTE(v5) = v19 > 0.0;
        v21 = (__PAIR64__(v5, LODWORD(v19)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) != 0 )
        {
          v21 = -v21;
          v22 = 3600 - lNormAngle(lfOrientation);
        }
        else
        {
          v22 = lNormAngle(lfOrientation);
        }
        v23 = (int)lNormAngle((v21 & 0xA8C) + ((v16 - v28) & 0x384) + ((v14 - v29) & 0x708u) + v22) / 900;
      }
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( !v24 )
        {
          x = a5->x;
          a1->eXX = 0.0;
          a1->eYY = 0.0;
          LODWORD(a1->eYX) = dword_140371940[x];
          LODWORD(a1->eXY) = dword_140371940[a5->y];
          return 1LL;
        }
        v25 = v24 - 1;
        if ( v25 )
        {
          if ( v25 == 1 )
          {
            y = a5->y;
            a1->eXX = 0.0;
            a1->eYY = 0.0;
            LODWORD(a1->eXY) = dword_140371968[y];
            LODWORD(a1->eYX) = dword_140371968[a5->x];
          }
          return 1LL;
        }
        v12 = a5->x;
        *(_QWORD *)&a1->eXY = 0LL;
        LODWORD(a1->eXX) = dword_140371940[v12];
        LODWORD(v12) = dword_140371968[a5->y];
      }
      else
      {
LABEL_17:
        v12 = a5->x;
        *(_QWORD *)&a1->eXY = 0LL;
        LODWORD(a1->eXX) = dword_140371968[v12];
        LODWORD(v12) = dword_140371940[a5->y];
      }
LABEL_7:
      LODWORD(a1->eYY) = v12;
      return 1LL;
    }
  }
  vGetNtoW((struct MATRIX *)v34, a2, a3, a4);
  v10 = *(_QWORD *)a4;
  v31 = &v32;
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 976) + 340LL) & 0x802) == 0x802 )
  {
    v11 = (__m128)v34[0];
    goto LABEL_6;
  }
  if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v31, (const struct MATRIX *)v34, (const struct MATRIX *)(v10 + 320), 0) )
  {
    v11 = _mm_mul_ps(v32, (__m128)_xmm);
LABEL_6:
    v32 = v11;
    LODWORD(a1->eXX) = v11.m128_i32[0];
    *(_QWORD *)&a1->eXY = *(unsigned __int64 *)((char *)v32.m128_u64 + 4);
    v12 = HIDWORD(v32.m128_u64[1]);
    goto LABEL_7;
  }
  return 0LL;
}

/*
 * XREFs of NtGdiArcInternal @ 0x1400E8410
 * Callers:
 *     <none>
 * Callees:
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x140079098 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140079978 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x140079C98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400A2118 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1400A81C8 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1400A8500 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1400A8AE8 (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1400E69F0 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ??0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1400E7B68 (--0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x14019E6FC (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x140310318 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiArcInternal(
        unsigned int a1,
        HDC a2,
        LONG a3,
        LONG a4,
        LONG a5,
        LONG a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  struct _POINTL *v11; // rcx
  unsigned int v12; // ebx
  struct _POINTL v13; // rdx
  int v14; // esi
  float v15; // xmm8_4
  int v16; // esi
  int v17; // r14d
  int v18; // ecx
  int v19; // r9d
  int v20; // r10d
  int v21; // r11d
  float v22; // xmm9_4
  float v23; // xmm6_4
  int v24; // r9d
  int v25; // r10d
  float v26; // xmm7_4
  __m128i v27; // xmm6
  __m128i v28; // xmm7
  float v29; // xmm1_4
  int v30; // eax
  unsigned int v31; // edi
  unsigned int v32; // eax
  ULONG v34; // ecx
  _QWORD *Current; // rax
  float v36; // [rsp+58h] [rbp-B0h] BYREF
  float v37; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v38; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v39; // [rsp+64h] [rbp-A4h] BYREF
  int v40; // [rsp+68h] [rbp-A0h] BYREF
  float v41; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v42; // [rsp+70h] [rbp-98h] BYREF
  struct _RECTFX v43; // [rsp+78h] [rbp-90h] BYREF
  __int64 v44; // [rsp+88h] [rbp-80h]
  __int64 v45; // [rsp+90h] [rbp-78h]
  __int16 v46; // [rsp+98h] [rbp-70h]
  struct _POINTL *v47[14]; // [rsp+A8h] [rbp-60h] BYREF
  struct _RECTL v48; // [rsp+118h] [rbp+10h] BYREF
  _DWORD v49[10]; // [rsp+128h] [rbp+20h] BYREF
  char v50; // [rsp+150h] [rbp+48h] BYREF
  int v51; // [rsp+168h] [rbp+60h]
  int v52; // [rsp+16Ch] [rbp+64h]
  int v53; // [rsp+170h] [rbp+68h]
  int v54; // [rsp+174h] [rbp+6Ch]
  int *v55[10]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v56[64]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v57[560]; // [rsp+208h] [rbp+100h] BYREF

  v48.right = a5;
  v48.bottom = a6;
  v48.left = a3;
  v48.top = a4;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v47, a2);
  v11 = v47[0];
  v12 = 0;
  if ( !v47[0] || (v47[0][4].y & 0x10000) != 0 )
  {
    v34 = 6;
  }
  else
  {
    if ( a1 <= 3 )
    {
      v13 = v47[0][122];
      v14 = *(_DWORD *)(*(_QWORD *)&v13 + 152LL);
      if ( (v14 & 0x1000) != 0 )
      {
        GreDCSelectBrush(v47[0], *(_QWORD *)(*(_QWORD *)&v13 + 160LL));
        v11 = v47[0];
      }
      if ( (v14 & 0x2000) != 0 )
        GreDCSelectPen(v11, *(_QWORD *)(*(_QWORD *)&v11[122] + 168LL));
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v55, (DC **)v47, a1 == 1);
      if ( v55[1] )
      {
        DC::QuickInitXform(v47[0], &v43, 516LL);
        EBOX::EBOX((EBOX *)v49, (struct XDCOBJ *)v47, &v48, (struct _LINEATTRS *)&v47[0][26], 1);
        if ( v49[1] )
          goto LABEL_30;
        if ( v49[0] )
        {
          EPATHOBJ::vUnlock((EPATHOBJ *)v55);
          PATH_CORE::~PATH_CORE((PATH_CORE *)v57);
          CAutoTGO::vUnguard((CAutoTGO *)v56);
          v12 = 1;
          goto LABEL_31;
        }
        LODWORD(v15) = efHalfDiff(v52, -v54);
        v16 = 0;
        v42 = 0;
        v17 = 0;
        v40 = 0;
        LODWORD(v22) = efHalfDiff(v51, -v53);
        v39 = 0;
        v38 = 0;
        if ( v18 == v21 || v20 == v19 )
        {
          v27 = (__m128i)FP_0_0;
          v39 = FP_0_0;
          v28 = (__m128i)FP_0_0;
          v38 = FP_0_0;
        }
        else
        {
          v23 = COERCE_FLOAT(efHalfDiff(v21, v18));
          v26 = COERCE_FLOAT(efHalfDiff(v25, v24));
          vArctan(
            COERCE_UNSIGNED_INT((float)((float)a7 - v22) / v23),
            COERCE_UNSIGNED_INT((float)((float)a8 - v15) / v26),
            &v39,
            &v42);
          v37 = (float)((float)a10 - v15) / v26;
          v36 = (float)((float)a9 - v22) / v23;
          vArctan(LODWORD(v36), LODWORD(v37), &v38, &v40);
          v27 = (__m128i)v39;
          v28 = (__m128i)v38;
          v16 = v42;
          v17 = v40;
        }
        v29 = *(float *)v28.m128i_i32 - *(float *)v27.m128i_i32;
        if ( (float)(*(float *)v28.m128i_i32 - *(float *)v27.m128i_i32) < 0.0 )
          LODWORD(v29) ^= _xmm;
        if ( (float)(v29 - FP_3_0) >= 0.0 || v29 == 0.0 )
        {
          vCosSin((unsigned int)_mm_cvtsi128_si32(v27), (float *)&v40, &v41);
          vCosSin((unsigned int)_mm_cvtsi128_si32(v28), &v36, &v37);
        }
        else
        {
          vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v27), &v40, &v41);
          vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v28), &v36, &v37);
        }
        if ( v16 != v17 || (v30 = 0, *(float *)v28.m128i_i32 <= *(float *)v27.m128i_i32) )
          v30 = 1;
        if ( !(unsigned int)bPartialArc(
                              (unsigned int)(a1 == 1) + 1,
                              (__int64)v55,
                              (__int64)v49,
                              (__int64)&v40,
                              v16,
                              (__int64)&v39,
                              (__int64)&v36,
                              v17,
                              (__int64)&v38,
                              v30) )
          goto LABEL_30;
        switch ( a1 )
        {
          case 1u:
            *(_DWORD *)(*(_QWORD *)&v47[0][122] + 152LL) |= 0x100u;
            *(_DWORD *)(*(_QWORD *)&v47[0][122] + 152LL) &= ~0x200u;
            Current = (_QWORD *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)v55);
            *(_QWORD *)(*(_QWORD *)&v47[0][122] + 8LL) = *Current;
            break;
          case 2u:
            if ( !EPATHOBJ::bCloseFigure((EPATHOBJ *)v55) )
              goto LABEL_33;
            break;
          case 3u:
            v44 = 1LL;
            v46 = 0;
            *(_QWORD *)&v43.xRight = &v50;
            v45 = 0LL;
            if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(v55, 0LL, &v43.xRight, 1LL)
              || !EPATHOBJ::bCloseFigure((EPATHOBJ *)v55) )
            {
              goto LABEL_30;
            }
            break;
        }
        if ( (v47[0][31].x & 1) == 0 )
        {
          if ( a1 && (v31 = a1 - 1) != 0 )
          {
            if ( v31 - 1 > 1 )
            {
LABEL_30:
              EPATHOBJ::vUnlock((EPATHOBJ *)v55);
              PATH_CORE::~PATH_CORE((PATH_CORE *)v57);
              CAutoTGO::vUnguard((CAutoTGO *)v56);
LABEL_31:
              APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v47);
              return v12;
            }
            v32 = EPATHOBJ_bStrokeAndOrFill(v55, v47, (LINEATTRS *)&v47[0][26], (XFORMOBJ *)&v43, 3u);
          }
          else
          {
            v32 = EPATHOBJ_bStrokeAndOrFill(v55, v47, (LINEATTRS *)&v47[0][26], (XFORMOBJ *)&v43, 1u);
          }
          v12 = v32;
          goto LABEL_30;
        }
        v12 = 1;
      }
      else
      {
        EngSetLastError(8u);
      }
LABEL_33:
      PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v55);
      goto LABEL_31;
    }
    v34 = 87;
  }
  EngSetLastError(v34);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v47);
  return 0LL;
}

/*
 * XREFs of ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVUDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x140178BBC
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x140261548 (-bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400A6340 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vSetElementsLToFx@EXFORMOBJ@@QEAAXMMMM@Z @ 0x140178F6C (-vSetElementsLToFx@EXFORMOBJ@@QEAAXMMMM@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoWScales(
        struct EPOINTFL *a1,
        struct UDCOBJ *a2,
        struct _FD_XFORM *a3,
        struct PFEOBJ *a4,
        int *a5)
{
  float eYX; // xmm3_4
  float eXY; // xmm2_4
  float eXX; // xmm1_4
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  int v13; // edx
  unsigned __int64 v14; // rax
  _OWORD *v15; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // [rsp+30h] [rbp-31h] BYREF
  float v22; // [rsp+34h] [rbp-2Dh]
  float v23; // [rsp+38h] [rbp-29h] BYREF
  float v24; // [rsp+3Ch] [rbp-25h]
  _OWORD *v25; // [rsp+40h] [rbp-21h] BYREF
  __int64 v26; // [rsp+48h] [rbp-19h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-11h]
  _OWORD v28[2]; // [rsp+58h] [rbp-9h] BYREF
  int v29; // [rsp+78h] [rbp+17h]

  eYX = a3->eYX;
  eXY = a3->eXY;
  eXX = a3->eXX;
  memset(v28, 0, sizeof(v28));
  v29 = 0;
  v25 = v28;
  EXFORMOBJ::vSetElementsLToFx((EXFORMOBJ *)&v25, eXX, eXY, eYX, a3->eYY);
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v25);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v25, 8u);
  v11 = *(_QWORD *)(*(_QWORD *)a4 + 32LL);
  v12 = *(_QWORD *)(v11 + 120);
  v27 = v12;
  v13 = v12;
  if ( !(_DWORD)v12 )
  {
    v13 = HIDWORD(v12) == 0;
    LODWORD(v27) = v13;
    v12 = v27;
  }
  v14 = HIDWORD(v12);
  v21 = (float)v13;
  v22 = (float)(int)v14;
  if ( (*(_DWORD *)(v11 + 48) & 0x80000) != 0 )
  {
    v24 = (float)v13;
    v23 = (float)-(int)v14;
  }
  else
  {
    v23 = (float)(int)v14;
    v24 = (float)-v13;
  }
  v15 = v25;
  if ( (v25[2] & 2) == 0 )
  {
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v25, (const struct VECTORFL *)&v21, (struct VECTORFL *)&v21, 1uLL) )
      return 0LL;
    v15 = v25;
  }
  if ( (v15[2] & 2) == 0 )
  {
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v25, (const struct VECTORFL *)&v23, (struct VECTORFL *)&v23, 1uLL) )
      return 0LL;
    v15 = v25;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    *a5 = (*((_DWORD *)v15 + 8) >> 1) & 1;
LABEL_13:
    EFLOAT::eqLength(a1, &v26, &v21);
    EFLOAT::eqLength((char *)a1 + 4, &v26, &v23);
    return 1LL;
  }
  DC::QuickInitXform(*(_QWORD *)a2, &v26, 1026LL);
  v17 = v26;
  if ( v26 )
  {
    *a5 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1
      && (EFLOAT::bIsZero((EFLOAT *)(*(_QWORD *)a2 + 452LL)) || EFLOAT::bIsZero((EFLOAT *)(v18 + 456)))
      && (*(_DWORD *)(v11 + 48) & 4) == 0 )
    {
      v19 = v21 * *(float *)v17;
      v22 = v22 * *(float *)v17;
      v21 = v19;
      v20 = *(float *)(v17 + 12);
      v22 = v22 * 16.0;
      v24 = (float)(v24 * v20) * 16.0;
      v21 = v19 * 16.0;
      v23 = (float)(v20 * v23) * 16.0;
      goto LABEL_13;
    }
    if ( (*(_DWORD *)(v17 + 32) & 2) == 0 )
    {
      if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v26, (const struct VECTORFL *)&v21, (struct VECTORFL *)&v21, 1uLL) )
        return 0LL;
      v17 = v26;
    }
    if ( (*(_DWORD *)(v17 + 32) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)&v26, (const struct VECTORFL *)&v23, (struct VECTORFL *)&v23, 1uLL) )
    {
      goto LABEL_13;
    }
  }
  return 0LL;
}

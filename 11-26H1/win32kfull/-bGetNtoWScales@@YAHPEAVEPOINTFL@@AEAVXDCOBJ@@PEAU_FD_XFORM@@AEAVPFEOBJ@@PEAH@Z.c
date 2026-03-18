/*
 * XREFs of ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x14010787C
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 * Callees:
 *     ?vSetElementsLToFx@EXFORMOBJ@@QEAAXMMMM@Z @ 0x140107C18 (-vSetElementsLToFx@EXFORMOBJ@@QEAAXMMMM@Z.c)
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1401086F4 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoWScales(struct EPOINTFL *a1, DC **a2, struct _FD_XFORM *a3, struct PFEOBJ *a4, int *a5)
{
  float eYX; // xmm3_4
  float eXY; // xmm2_4
  float eXX; // xmm1_4
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  int v13; // edx
  unsigned __int64 v14; // rax
  _OWORD *v15; // rax
  __int64 v17; // r8
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // [rsp+30h] [rbp-31h] BYREF
  float v21; // [rsp+34h] [rbp-2Dh]
  float v22; // [rsp+38h] [rbp-29h] BYREF
  float v23; // [rsp+3Ch] [rbp-25h]
  _OWORD *v24; // [rsp+40h] [rbp-21h] BYREF
  __int64 v25; // [rsp+48h] [rbp-19h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-11h]
  _OWORD v27[2]; // [rsp+58h] [rbp-9h] BYREF
  int v28; // [rsp+78h] [rbp+17h]

  eYX = a3->eYX;
  eXY = a3->eXY;
  eXX = a3->eXX;
  memset(v27, 0, sizeof(v27));
  v28 = 0;
  v24 = v27;
  EXFORMOBJ::vSetElementsLToFx((EXFORMOBJ *)&v24, eXX, eXY, eYX, a3->eYY);
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v24);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v24, 8u);
  v11 = *(_QWORD *)(*(_QWORD *)a4 + 32LL);
  v12 = *(_QWORD *)(v11 + 120);
  v26 = v12;
  v13 = v12;
  if ( !(_DWORD)v12 )
  {
    v13 = HIDWORD(v12) == 0;
    LODWORD(v26) = v13;
    v12 = v26;
  }
  v14 = HIDWORD(v12);
  v20 = (float)v13;
  v21 = (float)(int)v14;
  if ( (*(_DWORD *)(v11 + 48) & 0x80000) != 0 )
  {
    v23 = (float)v13;
    v22 = (float)-(int)v14;
  }
  else
  {
    v22 = (float)(int)v14;
    v23 = (float)-v13;
  }
  v15 = v24;
  if ( (v24[2] & 2) == 0 )
  {
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v24, (const struct VECTORFL *)&v20, (struct VECTORFL *)&v20, 1uLL) )
      return 0LL;
    v15 = v24;
  }
  if ( (v15[2] & 2) == 0 )
  {
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v24, (const struct VECTORFL *)&v22, (struct VECTORFL *)&v22, 1uLL) )
      return 0LL;
    v15 = v24;
  }
  if ( (*(_DWORD *)(*((_QWORD *)*a2 + 122) + 340LL) & 0x802) == 0x802 )
  {
    *a5 = (*((_DWORD *)v15 + 8) >> 1) & 1;
LABEL_13:
    EFLOAT::eqLength(a1, &v25, &v20);
    EFLOAT::eqLength((char *)a1 + 4, &v25, &v22);
    return 1LL;
  }
  DC::QuickInitXform(*a2, &v25, 1026LL);
  v17 = v25;
  if ( v25 )
  {
    *a5 = 0;
    if ( *(_DWORD *)(*((_QWORD *)*a2 + 122) + 208LL) == 1
      && !(unsigned int)DC::bUseMetaPtoD(*a2)
      && (*(_DWORD *)(v11 + 48) & 4) == 0 )
    {
      v18 = v20 * *(float *)v17;
      v21 = v21 * *(float *)v17;
      v20 = v18;
      v19 = *(float *)(v17 + 12);
      v21 = v21 * 16.0;
      v23 = (float)(v23 * v19) * 16.0;
      v20 = v18 * 16.0;
      v22 = (float)(v19 * v22) * 16.0;
      goto LABEL_13;
    }
    if ( (*(_DWORD *)(v17 + 32) & 2) == 0 )
    {
      if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v25, (const struct VECTORFL *)&v20, (struct VECTORFL *)&v20, 1uLL) )
        return 0LL;
      v17 = v25;
    }
    if ( (*(_DWORD *)(v17 + 32) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)&v25, (const struct VECTORFL *)&v22, (struct VECTORFL *)&v22, 1uLL) )
    {
      goto LABEL_13;
    }
  }
  return 0LL;
}

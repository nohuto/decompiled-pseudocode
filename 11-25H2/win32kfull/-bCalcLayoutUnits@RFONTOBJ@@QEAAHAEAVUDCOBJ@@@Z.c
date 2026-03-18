/*
 * XREFs of ?bCalcLayoutUnits@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z @ 0x1401C48B4
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x140261548 (-bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400A6340 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1401C8BB4 (-vAbs@EFLOAT@@QEAAXXZ.c)
 */

__int64 __fastcall RFONTOBJ::bCalcLayoutUnits(RFONTOBJ *this, struct UDCOBJ *a2)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  char v12; // [rsp+68h] [rbp+28h] BYREF
  _DWORD *v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  DC::QuickInitXform(*(_QWORD *)a2, &v11, 516LL);
  v4 = *(float *)v11;
  v5 = *(float *)(v11 + 12);
  if ( *(float *)v11 < 0.0 )
    LODWORD(v4) ^= _xmm;
  if ( v5 < 0.0 )
    LODWORD(v5) ^= _xmm;
  if ( (*(_BYTE *)(v11 + 32) & 1) != 0 && v4 == v5 )
  {
    *(float *)(*(_QWORD *)this + 400LL) = v4;
    *(float *)(*(_QWORD *)this + 420LL) = v4;
    *(float *)(*(_QWORD *)this + 404LL) = 1.0 / v4;
    *(float *)(*(_QWORD *)this + 424LL) = 1.0 / v4;
    *(_DWORD *)(*(_QWORD *)this + 688LL) = *(_DWORD *)(*(_QWORD *)this + 404LL);
    *(_DWORD *)(*(_QWORD *)this + 692LL) = *(_DWORD *)(*(_QWORD *)this + 424LL);
    return 1LL;
  }
  v7 = *(_QWORD *)a2;
  v14 = 0LL;
  DC::QuickInitXform(v7, &v13, 1026LL);
  if ( v13 )
  {
    EXFORMOBJ::bXform(
      (EXFORMOBJ *)&v13,
      (const struct VECTORFL *)(*(_QWORD *)this + 392LL),
      (struct VECTORFL *)&v14,
      1uLL);
    EFLOAT::eqLength(*(_QWORD *)this + 404LL, &v12, &v14);
    v8 = *(_QWORD *)this;
    *(float *)(v8 + 404) = *(float *)(*(_QWORD *)this + 404LL) * 0.0625;
    *(float *)(v8 + 400) = 1.0 / *(float *)(v8 + 404);
    EXFORMOBJ::bXform(
      (EXFORMOBJ *)&v13,
      (const struct VECTORFL *)(*(_QWORD *)this + 412LL),
      (struct VECTORFL *)&v14,
      1uLL);
    EFLOAT::eqLength(*(_QWORD *)this + 424LL, &v12, &v14);
    v9 = *(_QWORD *)this;
    *(float *)(v9 + 424) = *(float *)(*(_QWORD *)this + 424LL) * 0.0625;
    *(float *)(v9 + 420) = 1.0 / *(float *)(v9 + 424);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1
      && (EFLOAT::bIsZero((EFLOAT *)(*(_QWORD *)a2 + 452LL)) || EFLOAT::bIsZero((EFLOAT *)(v10 + 456)))
      && (*(_DWORD *)(*(_QWORD *)this + 724LL) & 4) == 0 )
    {
      *(_DWORD *)(*(_QWORD *)this + 688LL) = *v13;
      *(_DWORD *)(*(_QWORD *)this + 692LL) = v13[3];
      EFLOAT::vAbs((EFLOAT *)(*(_QWORD *)this + 688LL));
      EFLOAT::vAbs((EFLOAT *)(*(_QWORD *)this + 692LL));
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)this + 688LL) = *(_DWORD *)(*(_QWORD *)this + 404LL);
      *(_DWORD *)(*(_QWORD *)this + 692LL) = *(_DWORD *)(*(_QWORD *)this + 424LL);
    }
    return 1LL;
  }
  return 0LL;
}

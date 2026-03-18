/*
 * XREFs of ?bCalcLayoutUnits@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1401072C0
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 * Callees:
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1401086F4 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1401F48EC (-vAbs@EFLOAT@@QEAAXXZ.c)
 */

__int64 __fastcall RFONTOBJ::bCalcLayoutUnits(RFONTOBJ *this, DC **a2)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  DC *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  char v11; // [rsp+68h] [rbp+28h] BYREF
  _DWORD *v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  DC::QuickInitXform(*a2, &v10, 516LL);
  v4 = *(float *)v10;
  v5 = *(float *)(v10 + 12);
  if ( *(float *)v10 < 0.0 )
    LODWORD(v4) ^= _xmm;
  if ( v5 < 0.0 )
    LODWORD(v5) ^= _xmm;
  if ( (*(_BYTE *)(v10 + 32) & 1) != 0 && v4 == v5 )
  {
    *(float *)(*(_QWORD *)this + 400LL) = v4;
    *(float *)(*(_QWORD *)this + 420LL) = v4;
    *(float *)(*(_QWORD *)this + 404LL) = 1.0 / v4;
    *(float *)(*(_QWORD *)this + 424LL) = 1.0 / v4;
    *(_DWORD *)(*(_QWORD *)this + 688LL) = *(_DWORD *)(*(_QWORD *)this + 404LL);
    *(_DWORD *)(*(_QWORD *)this + 692LL) = *(_DWORD *)(*(_QWORD *)this + 424LL);
    return 1LL;
  }
  v7 = *a2;
  v13 = 0LL;
  DC::QuickInitXform(v7, &v12, 1026LL);
  if ( v12 )
  {
    EXFORMOBJ::bXform(
      (EXFORMOBJ *)&v12,
      (const struct VECTORFL *)(*(_QWORD *)this + 392LL),
      (struct VECTORFL *)&v13,
      1uLL);
    EFLOAT::eqLength(*(_QWORD *)this + 404LL, &v11, &v13);
    v8 = *(_QWORD *)this;
    *(float *)(v8 + 404) = *(float *)(*(_QWORD *)this + 404LL) * 0.0625;
    *(float *)(v8 + 400) = 1.0 / *(float *)(v8 + 404);
    EXFORMOBJ::bXform(
      (EXFORMOBJ *)&v12,
      (const struct VECTORFL *)(*(_QWORD *)this + 412LL),
      (struct VECTORFL *)&v13,
      1uLL);
    EFLOAT::eqLength(*(_QWORD *)this + 424LL, &v11, &v13);
    v9 = *(_QWORD *)this;
    *(float *)(v9 + 424) = *(float *)(*(_QWORD *)this + 424LL) * 0.0625;
    *(float *)(v9 + 420) = 1.0 / *(float *)(v9 + 424);
    if ( *(_DWORD *)(*((_QWORD *)*a2 + 122) + 208LL) != 1
      || (unsigned int)DC::bUseMetaPtoD(*a2)
      || (*(_DWORD *)(*(_QWORD *)this + 724LL) & 4) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)this + 688LL) = *(_DWORD *)(*(_QWORD *)this + 404LL);
      *(_DWORD *)(*(_QWORD *)this + 692LL) = *(_DWORD *)(*(_QWORD *)this + 424LL);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)this + 688LL) = *v12;
      *(_DWORD *)(*(_QWORD *)this + 692LL) = v12[3];
      EFLOAT::vAbs((EFLOAT *)(*(_QWORD *)this + 688LL));
      EFLOAT::vAbs((EFLOAT *)(*(_QWORD *)this + 692LL));
    }
    return 1LL;
  }
  return 0LL;
}

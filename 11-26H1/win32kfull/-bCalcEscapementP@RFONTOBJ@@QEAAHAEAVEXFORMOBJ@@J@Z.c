/*
 * XREFs of ?bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x14024F6A0
 * Callers:
 *     ?bCalcEscapement@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x14024F678 (-bCalcEscapement@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140108968 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall RFONTOBJ::bCalcEscapementP(RFONTOBJ *this, struct EXFORMOBJ *a2, int a3)
{
  __int64 v5; // r8
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v9; // r8
  _BYTE v10[16]; // [rsp+30h] [rbp-10h] BYREF
  float v11; // [rsp+50h] [rbp+10h] BYREF
  float v12; // [rsp+68h] [rbp+28h] BYREF

  v5 = *(_QWORD *)this;
  v6 = *(_DWORD *)(*(_QWORD *)this + 388LL);
  if ( v6 < 0xE10 && (a3 == v6 || a3 == v6 + 1800 || a3 == v6 - 1800) )
  {
    *(_DWORD *)(v5 + 428) = a3;
    *(_QWORD *)(*(_QWORD *)this + 432LL) = *(_QWORD *)(*(_QWORD *)this + 392LL);
    *(_DWORD *)(*(_QWORD *)this + 440LL) = *(_DWORD *)(*(_QWORD *)this + 400LL);
    *(_DWORD *)(*(_QWORD *)this + 444LL) = *(_DWORD *)(*(_QWORD *)this + 404LL);
    v7 = *(_QWORD *)this;
    *(_QWORD *)(v7 + 448) = 1065353216LL;
    if ( a3 != *(_DWORD *)(v7 + 388) )
    {
      *(_DWORD *)(v7 + 432) ^= _xmm;
      *(_DWORD *)(v7 + 436) ^= _xmm;
      *(_DWORD *)(v7 + 448) = -1082130432;
    }
    return 1LL;
  }
  *(_DWORD *)(v5 + 428) = -1;
  if ( EXFORMOBJ::bComputeUnits(
         a2,
         a3,
         (struct POINTFL *)(*(_QWORD *)this + 432LL),
         (struct EFLOAT *)(*(_QWORD *)this + 440LL),
         (struct EFLOAT *)(*(_QWORD *)this + 444LL)) )
  {
    v9 = *(_QWORD *)this;
    v11 = 0.0;
    v12 = 0.0;
    EFLOAT::eqCross(&v12, v10, v9 + 412, v9 + 392);
    if ( !EFLOAT::bIsZero((EFLOAT *)&v12) )
    {
      EFLOAT::eqCross(&v11, v10, *(_QWORD *)this + 412LL, *(_QWORD *)this + 432LL);
      *(float *)(*(_QWORD *)this + 448LL) = v11 / v12;
      EFLOAT::eqCross(&v11, v10, *(_QWORD *)this + 432LL, *(_QWORD *)this + 392LL);
      *(float *)(*(_QWORD *)this + 452LL) = v11 / v12;
      *(_DWORD *)(*(_QWORD *)this + 428LL) = a3;
      return 1LL;
    }
  }
  return 0LL;
}

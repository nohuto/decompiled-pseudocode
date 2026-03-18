/*
 * XREFs of ?fxFastY@EXFORMOBJ@@QEBAJJ@Z @ 0x14011667C
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14011683C (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EXFORMOBJ::fxFastY(EXFORMOBJ *this, int a2)
{
  int v2; // r8d
  __m128i v3; // xmm0
  int v4; // r9d
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = 0;
  v3 = (__m128i)COERCE_UNSIGNED_INT((float)a2);
  *(float *)v3.m128i_i32 = *(float *)v3.m128i_i32 * *(float *)(*(_QWORD *)this + 12LL);
  v4 = _mm_cvtsi128_si32(v3);
  v5 = (unsigned __int8)(v4 >> 23);
  if ( v5 <= 0x9E )
  {
    v6 = v4 & 0x7FFFFF | 0x800000LL;
    if ( v5 < 0x76 )
      v7 = v6 >> (118 - (unsigned __int8)v5);
    else
      v7 = v6 << ((unsigned __int8)v5 - 118);
    v2 = (unsigned __int64)(v7 + 0x80000000LL) >> 32;
    if ( v4 < 0 )
      v2 = -v2;
  }
  return (unsigned int)(v2 + *(_DWORD *)(*(_QWORD *)this + 28LL));
}

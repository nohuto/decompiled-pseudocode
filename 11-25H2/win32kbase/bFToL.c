/*
 * XREFs of bFToL @ 0x1400910A4
 * Callers:
 *     bCvtPts1 @ 0x140042D44 (bCvtPts1.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x14008F4E0 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?bInverse@EXFORMOBJ@@QEAA_NAEBUMATRIX@@@Z @ 0x14008FDF0 (-bInverse@EXFORMOBJ@@QEAA_NAEBUMATRIX@@@Z.c)
 *     ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x140092140 (-vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z.c)
 *     ?bMultiply@EXFORMOBJ@@QEAA_NAEBUMATRIX@@0K@Z @ 0x140092270 (-bMultiply@EXFORMOBJ@@QEAA_NAEBUMATRIX@@0K@Z.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1400926F8 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     bCvtVts @ 0x140092F90 (bCvtVts.c)
 *     bCvtPts @ 0x14009A62C (bCvtPts.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall bFToL(double a1, int *a2, unsigned int a3)
{
  int v3; // r11d
  unsigned int v5; // r10d
  signed int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // ecx

  v3 = _mm_cvtsi128_si32(*(__m128i *)&a1);
  v5 = 1;
  v6 = (unsigned __int8)(v3 >> 23) + ((a3 >> 1) & 4 | 0xFFFFFF8A);
  if ( v6 > 40 )
  {
    return 0;
  }
  else
  {
    v7 = v3 & 0x7FFFFF | 0x800000LL;
    if ( v6 < 0 )
      v8 = v7 >> -(char)v6;
    else
      v8 = v7 << v6;
    v9 = v8 + 0x80000000LL;
    if ( (a3 & 1) != 0 )
      v9 = v8;
    v10 = v9 >> 32;
    v11 = -(int)v10;
    if ( v3 >= 0 )
      v11 = v10;
    *a2 = v11;
  }
  return v5;
}

/*
 * XREFs of ?GrepScaleValues@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x14019E730
 * Callers:
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140209018 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     NtGdiScaleValues @ 0x14033A4D0 (NtGdiScaleValues.c)
 * Callees:
 *     bFToL @ 0x1400A4410 (bFToL.c)
 */

__int64 __fastcall GrepScaleValues(struct XDCOBJ *a1, int *a2, unsigned int a3)
{
  int v6; // r9d
  double v8; // xmm0_8
  __int64 i; // rbx

  v6 = *(_DWORD *)(*(_QWORD *)a1 + 520LL);
  if ( (v6 & 1) != 0 && (v6 & 2) == 0 )
  {
    for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
    {
      *(_QWORD *)&v8 = COERCE_UNSIGNED_INT((float)a2[i]);
      *(float *)&v8 = *(float *)&v8 * *(float *)(*(_QWORD *)a1 + 524LL);
      if ( !(unsigned int)bFToL(v8, &a2[i], 6u) )
        return 0LL;
    }
  }
  return 1LL;
}

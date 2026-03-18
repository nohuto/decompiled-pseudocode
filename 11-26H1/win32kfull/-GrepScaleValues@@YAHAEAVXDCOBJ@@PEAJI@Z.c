/*
 * XREFs of ?GrepScaleValues@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1401114C4
 * Callers:
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x14023DAF4 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     NtGdiScaleValues @ 0x14032BA80 (NtGdiScaleValues.c)
 * Callees:
 *     bFToL @ 0x140111E60 (bFToL.c)
 */

__int64 __fastcall GrepScaleValues(struct XDCOBJ *a1, int *a2, unsigned int a3)
{
  int v5; // r9d
  int v7; // r11d
  __int64 i; // r11

  v5 = *(_DWORD *)(*(_QWORD *)a1 + 520LL);
  if ( (v5 & 1) != 0 && (v5 & 2) == 0 )
  {
    for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(v7 + 1) )
    {
      if ( !(unsigned int)bFToL(a1, &a2[i], 6LL) )
        return 0LL;
    }
  }
  return 1LL;
}

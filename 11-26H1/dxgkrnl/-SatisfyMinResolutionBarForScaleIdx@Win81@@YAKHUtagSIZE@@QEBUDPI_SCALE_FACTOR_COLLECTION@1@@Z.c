/*
 * XREFs of ?SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1401E4C44
 * Callers:
 *     ?AdjustScaleFactorForOverride@Win81@@YAKKHUtagSIZE@@PEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1401E4318 (-AdjustScaleFactorForOverride@Win81@@YAKKHUtagSIZE@@PEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z.c)
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1401E489C (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ??PWin81@@YA_NAEBUtagSIZE@@0@Z @ 0x1401E4268 (--PWin81@@YA_NAEBUtagSIZE@@0@Z.c)
 */

__int64 __fastcall Win81::SatisfyMinResolutionBarForScaleIdx(
        Win81 *this,
        __int64 a2,
        struct tagSIZE a3,
        const struct Win81::DPI_SCALE_FACTOR_COLLECTION *const a4)
{
  int v4; // eax
  _DWORD *v5; // r10
  int v6; // r8d
  unsigned int v7; // r11d
  unsigned int v8; // ebx
  __int64 i; // r9
  unsigned int v10; // ecx
  __int64 v11; // r9
  struct tagSIZE v13; // [rsp+38h] [rbp+10h]
  struct tagSIZE v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = a3;
  v4 = a2;
  if ( (int)a2 >= SHIDWORD(a2) )
    LODWORD(a2) = HIDWORD(a2);
  else
    v4 = HIDWORD(a2);
  v5 = dword_140108E50;
  if ( (int)this >= 0 )
  {
    if ( (int)this <= 4 )
    {
      v6 = (int)this;
      if ( (int)this <= 0 )
        return (unsigned int)v5[v6];
    }
    else
    {
      LODWORD(this) = 4;
    }
    v7 = 100 * v4;
    v8 = 100 * a2;
    for ( i = (unsigned int)this; i > 0; i = v11 - 1 )
    {
      v10 = v5[i];
      v13.cx = v7 / v10;
      v13.cy = v8 / v10;
      v14 = v13;
      if ( Win81::operator>=(&v14, dword_1400AC438) )
        break;
      --v6;
    }
  }
  else
  {
    v6 = 0;
  }
  return (unsigned int)v5[v6];
}

/*
 * XREFs of _lambda_f7629139d0209e148fddfe9121e39862_::operator() @ 0x14026A094
 * Callers:
 *     _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x14026A494 (_BmlBuildVirtualRefreshRateListFromTargetModeSet.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x140045C54 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

char __fastcall lambda_f7629139d0209e148fddfe9121e39862_::operator()(
        unsigned __int64 **a1,
        const struct _D3DDDI_RATIONAL *a2)
{
  _QWORD **v3; // rdi
  unsigned __int64 i; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // r9
  const struct _D3DDDI_RATIONAL *v8; // rdx
  unsigned __int64 *v9; // rax

  v3 = a1 + 1;
  for ( i = 0LL; ; ++i )
  {
    v6 = 8 * i;
    v7 = **a1;
    if ( i >= v7 )
      break;
    v3 = a1 + 1;
    v8 = (const struct _D3DDDI_RATIONAL *)(v6 + *a1[1]);
    if ( v8->Numerator * (unsigned __int64)a2->Denominator < a2->Numerator * (unsigned __int64)v8->Denominator )
      break;
    LOBYTE(v9) = DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(a2, v8, 0);
    if ( (_BYTE)v9 )
      return (char)v9;
  }
  memmove((void *)(v6 + **v3 + 8), (const void *)(v6 + **v3), 8 * (v7 - i));
  *(struct _D3DDDI_RATIONAL *)(v6 + **v3) = *a2;
  v9 = *a1;
  ++**a1;
  return (char)v9;
}

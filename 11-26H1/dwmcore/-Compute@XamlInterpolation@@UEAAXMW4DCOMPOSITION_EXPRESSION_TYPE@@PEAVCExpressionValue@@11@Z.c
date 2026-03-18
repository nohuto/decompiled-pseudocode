/*
 * XREFs of ?Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004F7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlInterpolation::Compute(
        _DWORD *a1,
        float a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        CExpressionValue *a6)
{
  double (*v9)(void); // rax
  double v10; // xmm6_8

  v9 = *(double (**)(void))(*(_QWORD *)a1 + 40LL);
  if ( a1[6] )
  {
    if ( a1[6] == 1 )
    {
      v10 = 1.0 - v9();
    }
    else if ( a2 < 0.5 )
    {
      v10 = v9() * 0.5;
    }
    else
    {
      v10 = (1.0 - v9()) * 0.5 + 0.5;
    }
  }
  else
  {
    v10 = v9();
  }
  return KeyframeInterpolation::Interpolate((__int64)a1, v10, a3, a4, a5, a6);
}

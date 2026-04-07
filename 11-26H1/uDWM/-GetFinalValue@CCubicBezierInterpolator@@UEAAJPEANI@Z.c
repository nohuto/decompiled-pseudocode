/*
 * XREFs of ?GetFinalValue@CCubicBezierInterpolator@@UEAAJPEANI@Z @ 0x1800A9880
 * Callers:
 *     ?InterpolateValue@CCubicBezierInterpolator@@UEAAJNPEANI@Z @ 0x1800A9B10 (-InterpolateValue@CCubicBezierInterpolator@@UEAAJNPEANI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCubicBezierInterpolator::GetFinalValue(CCubicBezierInterpolator *this, double *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rdx

  result = 2147500037LL;
  if ( *((_QWORD *)this + 3) )
  {
    if ( a3 )
    {
      v6 = 0LL;
      v7 = a3;
      do
      {
        a2[v6] = *(double *)(v6 * 8 + *((_QWORD *)this + 3));
        ++v6;
        --v7;
      }
      while ( v7 );
    }
    return 0LL;
  }
  return result;
}

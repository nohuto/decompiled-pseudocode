/*
 * XREFs of ?SetFloatProperty@CScalarMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023F5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScalarMarshaler::SetFloatProperty(__int64 a1, int a2, float a3, char *a4)
{
  __int64 result; // rax
  char v5; // cl

  result = 0LL;
  if ( a2 )
    return 3221225485LL;
  if ( *(float *)(a1 + 56) == a3 )
  {
    v5 = 0;
  }
  else
  {
    *(float *)(a1 + 56) = a3;
    v5 = 1;
  }
  *a4 = v5;
  return result;
}

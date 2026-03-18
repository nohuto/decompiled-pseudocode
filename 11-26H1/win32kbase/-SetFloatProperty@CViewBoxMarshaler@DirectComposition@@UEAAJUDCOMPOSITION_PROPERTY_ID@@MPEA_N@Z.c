/*
 * XREFs of ?SetFloatProperty@CViewBoxMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023E480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CViewBoxMarshaler::SetFloatProperty(__int64 a1, int a2, float a3, _BYTE *a4)
{
  __int64 result; // rax
  int v5; // edx

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 3;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 3221225485LL;
    *(_DWORD *)(a1 + 16) |= 0x200u;
    *(float *)(a1 + 76) = a3;
  }
  else
  {
    *(_DWORD *)(a1 + 16) |= 0x100u;
    *(float *)(a1 + 72) = a3;
  }
  *a4 = 1;
  return result;
}

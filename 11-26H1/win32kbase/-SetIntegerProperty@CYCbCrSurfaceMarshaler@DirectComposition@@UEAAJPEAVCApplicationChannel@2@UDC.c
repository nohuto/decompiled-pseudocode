/*
 * XREFs of ?SetIntegerProperty@CYCbCrSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14023FBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CYCbCrSurfaceMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char *a5)
{
  __int64 result; // rax
  char v6; // dl

  result = 0LL;
  if ( a3 != 2 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 72) == a4 )
  {
    v6 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 72) = a4;
    v6 = 1;
  }
  *a5 = v6;
  return result;
}

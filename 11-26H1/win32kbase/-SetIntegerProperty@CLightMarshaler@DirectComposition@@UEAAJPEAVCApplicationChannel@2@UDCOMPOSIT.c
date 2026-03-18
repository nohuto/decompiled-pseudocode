/*
 * XREFs of ?SetIntegerProperty@CLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1402371E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLightMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 )
    return 3221225485LL;
  if ( *(_BYTE *)(a1 + 56) != (a4 != 0) )
  {
    *(_DWORD *)(a1 + 16) |= 0x40u;
    *(_BYTE *)(a1 + 56) = a4 != 0;
    *a5 = 1;
  }
  return result;
}

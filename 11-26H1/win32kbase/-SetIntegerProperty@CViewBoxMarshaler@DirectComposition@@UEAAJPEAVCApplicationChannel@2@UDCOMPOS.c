/*
 * XREFs of ?SetIntegerProperty@CViewBoxMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14023E4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CViewBoxMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // edx

  v5 = 0;
  *a5 = 0;
  if ( a3 == 2 )
  {
    if ( *(_DWORD *)(a1 + 80) != a4 )
    {
      *(_DWORD *)(a1 + 16) |= 0x400u;
      *(_DWORD *)(a1 + 80) = a4;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}

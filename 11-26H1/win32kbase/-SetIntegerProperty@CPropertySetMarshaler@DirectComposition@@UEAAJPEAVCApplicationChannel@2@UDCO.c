/*
 * XREFs of ?SetIntegerProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140241E90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401C4AE0 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 != 4 )
    return DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(a1, a2, a3, a4, a5);
  if ( *(_DWORD *)(a1 + 104) != a4 )
  {
    *(_DWORD *)(a1 + 16) |= 0x200u;
    *(_DWORD *)(a1 + 104) = a4;
    *a5 = 1;
  }
  return result;
}

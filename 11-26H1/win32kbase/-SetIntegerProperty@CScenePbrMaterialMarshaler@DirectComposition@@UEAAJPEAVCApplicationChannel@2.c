/*
 * XREFs of ?SetIntegerProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140237450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScenePbrMaterialMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  unsigned int v5; // edx
  int v6; // r8d

  v5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    if ( v6 == 3 )
    {
      if ( *(_BYTE *)(a1 + 84) != (a4 != 0) )
      {
        *(_DWORD *)(a1 + 16) |= 0x400u;
        *(_BYTE *)(a1 + 84) = a4 != 0;
        *a5 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else if ( *(_DWORD *)(a1 + 60) != a4 )
  {
    *(_DWORD *)(a1 + 16) |= 0x80u;
    *(_DWORD *)(a1 + 60) = a4;
    *a5 = 1;
  }
  return v5;
}

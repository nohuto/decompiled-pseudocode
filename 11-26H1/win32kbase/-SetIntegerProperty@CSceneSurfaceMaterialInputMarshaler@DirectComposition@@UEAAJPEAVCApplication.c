/*
 * XREFs of ?SetIntegerProperty@CSceneSurfaceMaterialInputMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1402477A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSceneSurfaceMaterialInputMarshaler::SetIntegerProperty(
        _DWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  int v5; // r8d

  *a5 = 0;
  if ( a3 )
  {
    v5 = a3 - 2;
    if ( v5 )
    {
      if ( v5 != 1 )
        return 3221225485LL;
      a1[4] |= 0x200u;
      a1[22] = a4;
    }
    else
    {
      a1[4] |= 0x100u;
      a1[21] = a4;
    }
  }
  else
  {
    a1[4] |= 0x40u;
    a1[20] = a4;
  }
  *a5 = 1;
  return 0LL;
}

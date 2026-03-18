/*
 * XREFs of ?SetIntegerProperty@CSnapshotMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14023FEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSnapshotMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d

  v5 = 0;
  *a5 = 0;
  v6 = a3 - 1;
  if ( !v6 )
  {
    if ( a4 )
    {
      if ( *(_DWORD *)(a1 + 64) != a4 )
      {
        *(_DWORD *)(a1 + 64) = a4;
        goto LABEL_13;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      if ( *(_BYTE *)(a1 + 72) != (a4 != 0) )
      {
        *(_BYTE *)(a1 + 72) = a4 != 0;
LABEL_13:
        *a5 = 1;
        return v5;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)(a1 + 68) != a4 )
  {
    *(_DWORD *)(a1 + 68) = a4;
    goto LABEL_13;
  }
  return v5;
}

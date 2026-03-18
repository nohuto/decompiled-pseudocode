/*
 * XREFs of ?SetIntegerProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401A4E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSpriteShapeMarshaler::SetIntegerProperty(
        _DWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // eax

  v5 = 0;
  *a5 = 0;
  v6 = a3 - 4;
  if ( !v6 )
  {
    v10 = a4 != 0;
    if ( a1[33] == v10 )
      return v5;
    a1[4] |= 0x8000u;
    a1[33] = v10;
LABEL_18:
    *a5 = 1;
    return v5;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( a1[29] == a4 )
      return v5;
    a1[29] = a4;
LABEL_9:
    a1[4] |= 0x400u;
    goto LABEL_18;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a1[30] == a4 )
      return v5;
    a1[30] = a4;
    goto LABEL_9;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a1[31] == a4 )
      return v5;
    a1[31] = a4;
    goto LABEL_9;
  }
  if ( v9 == 1 )
  {
    if ( a1[32] == a4 )
      return v5;
    a1[32] = a4;
    goto LABEL_9;
  }
  return (unsigned int)-1073741811;
}

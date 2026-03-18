/*
 * XREFs of ?SetBufferProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14019CAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualSurfaceMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  int v8; // r8d

  v6 = 0;
  *a6 = 0;
  v7 = a3 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 && a4 && a5 == 8 )
      {
        if ( *(_QWORD *)(a1 + 80) != *a4 )
        {
          *(_QWORD *)(a1 + 80) = *a4;
          if ( !*(_BYTE *)(a1 + 96) )
          {
            *a6 = 1;
            *(_DWORD *)(a1 + 16) |= 0x200u;
          }
        }
        return v6;
      }
      return (unsigned int)-1073741811;
    }
    if ( !a4 || a5 != 8 )
      return (unsigned int)-1073741811;
    if ( *(_QWORD *)(a1 + 72) != *a4 )
    {
      *(_QWORD *)(a1 + 72) = *a4;
      if ( !*(_BYTE *)(a1 + 96) )
      {
        *a6 = 1;
        *(_DWORD *)(a1 + 16) |= 0x100u;
      }
    }
  }
  else
  {
    if ( !a4 || a5 != 8 )
      return (unsigned int)-1073741811;
    if ( *(_QWORD *)(a1 + 64) != *a4 )
    {
      *(_QWORD *)(a1 + 64) = *a4;
      if ( !*(_BYTE *)(a1 + 96) )
      {
        *a6 = 1;
        *(_DWORD *)(a1 + 16) |= 0x80u;
      }
    }
  }
  return v6;
}

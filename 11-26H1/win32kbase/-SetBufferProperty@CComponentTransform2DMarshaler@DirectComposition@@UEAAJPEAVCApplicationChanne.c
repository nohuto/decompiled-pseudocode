/*
 * XREFs of ?SetBufferProperty@CComponentTransform2DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14019B500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CComponentTransform2DMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // r10d
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d

  v6 = 0;
  *a6 = 0;
  if ( a3 == 6 && a5 == 24 )
  {
    v7 = *(_QWORD *)(a1 + 108) - *(_QWORD *)a4;
    if ( !v7 )
    {
      v7 = *(_QWORD *)(a1 + 116) - *(_QWORD *)(a4 + 8);
      if ( !v7 )
        v7 = *(_QWORD *)(a1 + 124) - *(_QWORD *)(a4 + 16);
    }
    if ( v7 )
    {
      *(_OWORD *)(a1 + 108) = *(_OWORD *)a4;
      *(_QWORD *)(a1 + 124) = *(_QWORD *)(a4 + 16);
    }
    *a6 = 1;
    *(_DWORD *)(a1 + 16) &= ~0x2000u;
  }
  else
  {
    if ( a5 != 8 )
      return (unsigned int)-1073741811;
    v8 = a3 - 1;
    if ( !v8 )
    {
      *(_DWORD *)(a1 + 72) = *(_DWORD *)a4;
      *(_DWORD *)(a1 + 76) = *(_DWORD *)(a4 + 4);
      *a6 = 1;
      *(_DWORD *)(a1 + 16) &= ~0x200u;
      return v6;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      *(_DWORD *)(a1 + 80) = *(_DWORD *)a4;
      *(_DWORD *)(a1 + 84) = *(_DWORD *)(a4 + 4);
      *a6 = 1;
      *(_DWORD *)(a1 + 16) &= ~0x100u;
      return v6;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      *(_DWORD *)(a1 + 88) = *(_DWORD *)a4;
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a4 + 4);
      *a6 = 1;
      *(_DWORD *)(a1 + 16) &= ~0x400u;
      return v6;
    }
    if ( v10 != 2 )
      return (unsigned int)-1073741811;
    *(_DWORD *)(a1 + 100) = *(_DWORD *)a4;
    *(_DWORD *)(a1 + 104) = *(_DWORD *)(a4 + 4);
    *a6 = 1;
    *(_DWORD *)(a1 + 16) &= ~0x1000u;
  }
  return v6;
}

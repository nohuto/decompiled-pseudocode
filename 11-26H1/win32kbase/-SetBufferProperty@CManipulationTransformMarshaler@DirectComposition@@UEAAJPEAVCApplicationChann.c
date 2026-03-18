/*
 * XREFs of ?SetBufferProperty@CManipulationTransformMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023D860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationTransformMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // r10d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d

  v6 = 0;
  if ( a5 != 12 )
    return (unsigned int)-1073741811;
  v7 = a3 - 1;
  if ( !v7 )
  {
    *(_QWORD *)(a1 + 72) = *(_QWORD *)a4;
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a4 + 8);
    *a6 = 1;
    *(_DWORD *)(a1 + 16) &= ~0x100u;
    return v6;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    *(_QWORD *)(a1 + 84) = *(_QWORD *)a4;
    *(_DWORD *)(a1 + 92) = *(_DWORD *)(a4 + 8);
    goto LABEL_10;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *(_QWORD *)(a1 + 96) = *(_QWORD *)a4;
    *(_DWORD *)(a1 + 104) = *(_DWORD *)(a4 + 8);
    goto LABEL_10;
  }
  if ( v9 == 1 )
  {
    *(_QWORD *)(a1 + 108) = *(_QWORD *)a4;
    *(_DWORD *)(a1 + 116) = *(_DWORD *)(a4 + 8);
LABEL_10:
    *a6 = 1;
    *(_DWORD *)(a1 + 16) &= ~0x100u;
    return v6;
  }
  return (unsigned int)-1073741811;
}

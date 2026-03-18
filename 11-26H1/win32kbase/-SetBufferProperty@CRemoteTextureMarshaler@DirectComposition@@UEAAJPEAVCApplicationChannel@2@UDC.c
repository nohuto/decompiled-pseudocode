/*
 * XREFs of ?SetBufferProperty@CRemoteTextureMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140236150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemoteTextureMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // edx
  int v7; // eax

  v6 = 0;
  *a6 = 0;
  if ( a3 == 1 && a4 && a5 == 12 )
  {
    *(_QWORD *)(a1 + 64) = *(_QWORD *)a4;
    v7 = *(_DWORD *)(a4 + 8);
    *(_DWORD *)(a1 + 16) |= 0x80u;
    *(_DWORD *)(a1 + 72) = v7;
    *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}

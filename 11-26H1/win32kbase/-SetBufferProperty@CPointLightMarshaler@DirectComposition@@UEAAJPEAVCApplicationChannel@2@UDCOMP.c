/*
 * XREFs of ?SetBufferProperty@CPointLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPointLightMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // edx
  int v7; // eax
  __int128 v8; // xmm0

  v6 = 0;
  *a6 = 0;
  if ( a3 == 4 )
  {
    if ( a4 && a5 == 16 )
    {
      v8 = *a4;
      *(_DWORD *)(a1 + 16) |= 0x100u;
      *(_OWORD *)(a1 + 120) = v8;
      goto LABEL_9;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 10 || !a4 || a5 != 12 )
    return (unsigned int)-1073741811;
  *(_QWORD *)(a1 + 156) = *(_QWORD *)a4;
  v7 = *((_DWORD *)a4 + 2);
  *(_DWORD *)(a1 + 16) |= 0x4000u;
  *(_DWORD *)(a1 + 164) = v7;
LABEL_9:
  *a6 = 1;
  return v6;
}

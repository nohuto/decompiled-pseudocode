/*
 * XREFs of ?SetBufferProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1402359F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140185FB0 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSIT.c)
 */

__int64 __fastcall DirectComposition::CCursorVisualMarshaler::SetBufferProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // rax

  v6 = 0;
  *a6 = 0;
  if ( a3 == 51 )
  {
    if ( a4 && a5 == 8 )
    {
      v8 = *(_QWORD *)a4;
      *(_DWORD *)(a1 + 336) |= 1u;
      *(_QWORD *)(a1 + 344) = v8;
      goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 52 )
  {
    if ( a4 && a5 == 8 )
    {
      v7 = *(_QWORD *)a4;
      *(_DWORD *)(a1 + 336) |= 2u;
      *(_QWORD *)(a1 + 352) = v7;
LABEL_10:
      *a6 = 1;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CVisualMarshaler::SetBufferProperty(a1, a2, a3, a4, a5, a6);
}

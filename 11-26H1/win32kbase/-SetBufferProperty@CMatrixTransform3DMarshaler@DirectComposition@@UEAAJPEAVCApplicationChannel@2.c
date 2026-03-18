/*
 * XREFs of ?SetBufferProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401A3AD0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

__int64 __fastcall DirectComposition::CMatrixTransform3DMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        _OWORD *a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  _OWORD *v8; // rsi

  v6 = 0;
  *a6 = 0;
  if ( a3 == 17 && a4 && a5 == 64 )
  {
    v8 = (_OWORD *)(a1 + 72);
    if ( memcmp((const void *)(a1 + 72), a4, 0x40uLL) )
    {
      *v8 = *a4;
      v8[1] = a4[1];
      v8[2] = a4[2];
      v8[3] = a4[3];
      *a6 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}

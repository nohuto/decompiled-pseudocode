/*
 * XREFs of ?SetBufferProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023F730
 * Callers:
 *     <none>
 * Callees:
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400B4F08 (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveColorMarshaler::SetBufferProperty(
        _QWORD *a1,
        DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rdx

  v6 = 0;
  *a6 = 0;
  if ( !a3 && a4 && a5 == 16 )
  {
    v8 = a1[7] - *a4;
    if ( !v8 )
      v8 = a1[8] - a4[1];
    if ( v8 )
    {
      *(_OWORD *)(a1 + 7) = *(_OWORD *)a4;
      *a6 = 1;
    }
    if ( a1[5] )
    {
      DirectComposition::CApplicationChannel::UnbindAllAnimations(
        a2,
        (struct DirectComposition::CResourceMarshaler *)a1);
      *a6 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}

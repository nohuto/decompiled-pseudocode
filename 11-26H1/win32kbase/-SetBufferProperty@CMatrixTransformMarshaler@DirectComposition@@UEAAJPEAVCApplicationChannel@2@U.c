/*
 * XREFs of ?SetBufferProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023D230
 * Callers:
 *     <none>
 * Callees:
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400B4F08 (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CMatrixTransformMarshaler::SetBufferProperty(
        _QWORD *a1,
        DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        __int64 a5,
        char *a6)
{
  unsigned int v6; // ebx
  char v9; // r8
  __int64 v10; // rcx

  v6 = 0;
  if ( a3 == 7 && a5 == 24 )
  {
    v9 = *a6;
    v10 = a1[9] - *a4;
    if ( !v10 )
    {
      v10 = a1[10] - a4[1];
      if ( !v10 )
        v10 = a1[11] - a4[2];
    }
    if ( v10 )
    {
      v9 = 1;
      *(_OWORD *)(a1 + 9) = *(_OWORD *)a4;
      a1[11] = a4[2];
    }
    if ( a1[5] )
    {
      DirectComposition::CApplicationChannel::UnbindAllAnimations(
        a2,
        (struct DirectComposition::CResourceMarshaler *)a1);
      v9 = 1;
    }
    *a6 = v9;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}

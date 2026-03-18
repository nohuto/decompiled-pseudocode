/*
 * XREFs of ?SetBufferProperty@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022DFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022DF1C (-SetBufferProperty@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 */

__int64 __fastcall DirectComposition::CLinearGradientLegacyMilBrushMarshaler::SetBufferProperty(
        DirectComposition::CLinearGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  __int64 v7; // xmm0_8
  __int64 v8; // xmm0_8

  result = 0LL;
  *a6 = 0;
  if ( a3 == 8 )
  {
    if ( a4 && a5 == 8 )
    {
      v8 = *a4;
      *((_DWORD *)this + 4) |= 0x2000u;
      *((_QWORD *)this + 16) = v8;
      goto LABEL_10;
    }
  }
  else
  {
    if ( a3 != 9 )
      return DirectComposition::CGradientLegacyMilBrushMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
    if ( a4 && a5 == 8 )
    {
      v7 = *a4;
      *((_DWORD *)this + 4) |= 0x4000u;
      *((_QWORD *)this + 17) = v7;
LABEL_10:
      *a6 = 1;
      return result;
    }
  }
  return 3221225485LL;
}

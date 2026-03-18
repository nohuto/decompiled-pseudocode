/*
 * XREFs of ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x1801075F0
 * Callers:
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x1801076A8 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CExpressionValue::CopyIntoFloatArray(CExpressionValue *this, __int64 a2, float *a3)
{
  int v3; // edx
  unsigned int v4; // edx

  v3 = *((_DWORD *)this + 16);
  *a3 = 0.0;
  if ( v3 )
  {
    if ( v3 != 42 )
    {
      switch ( v3 )
      {
        case 17:
        case 18:
        case 35:
        case 52:
        case 69:
        case 70:
        case 71:
        case 104:
        case 265:
          break;
        default:
          v4 = 0;
          goto LABEL_4;
      }
    }
    v4 = v3 >> 4;
    if ( v4 > 0x10 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x235u, 0LL);
      return 2147500037LL;
    }
    else
    {
LABEL_4:
      memcpy_0(a3, this, 4LL * v4);
      return 0LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147023728, 0x22Cu, 0LL);
    return 2147943568LL;
  }
}

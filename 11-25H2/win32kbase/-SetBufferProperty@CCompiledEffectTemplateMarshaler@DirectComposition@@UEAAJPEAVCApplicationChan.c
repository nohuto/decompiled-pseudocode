/*
 * XREFs of ?SetBufferProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1402394F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::SetBufferProperty(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 4 && a5 == 8 )
    *((_QWORD *)this + 11) = *a4;
  else
    return (unsigned int)-1073741811;
  return v6;
}

/*
 * XREFs of ?SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x14019FEB4
 * Callers:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140185FB0 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSIT.c)
 * Callees:
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14022AECC (-UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@UDCOMPOSI.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetRelativeOffsetHelper(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        _DWORD *a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edi

  v5 = 0;
  if ( a4 == 12 )
  {
    *((_DWORD *)this + 23) = *a3;
    *((_DWORD *)this + 24) = a3[1];
    *((_DWORD *)this + 25) = a3[2];
    if ( *((_QWORD *)this + 5) )
    {
      DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 32LL);
      DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 33LL);
      DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 34LL);
    }
    *((_DWORD *)this + 4) |= 0x2000000u;
    *a5 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}

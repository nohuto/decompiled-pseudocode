/*
 * XREFs of ?SetBufferProperty@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022DD10
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x14010635C (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionDynamicTextureMarshaler::SetBufferProperty(
        DirectComposition::CCompositionDynamicTextureMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 || !a4 && a5 )
    return 3221225485LL;
  result = DirectComposition::CMarshaledArrayBase::Copy(
             (DirectComposition::CCompositionDynamicTextureMarshaler *)((char *)this + 56),
             a4,
             a5,
             0x10uLL,
             0x74644344u);
  if ( (int)result >= 0 )
  {
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x20u;
  }
  return result;
}

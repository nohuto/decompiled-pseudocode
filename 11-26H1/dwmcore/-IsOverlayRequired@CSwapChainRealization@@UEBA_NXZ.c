/*
 * XREFs of ?IsOverlayRequired@CSwapChainRealization@@UEBA_NXZ @ 0x1802ADDC0
 * Callers:
 *     ?Create@CSwapChainRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802ACC7C (-Create@CSwapChainRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AE.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSwapChainRealization::IsOverlayRequired(CSwapChainRealization *this)
{
  __int64 v1; // rdx
  bool result; // al

  if ( *((char *)this + 216) < 0 )
    return 1;
  v1 = *((_QWORD *)this + 33);
  result = 0;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 176) & 0x400000) != 0 )
      return 1;
  }
  return result;
}

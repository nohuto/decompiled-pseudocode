/*
 * XREFs of ?Create@CSwapChainRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802ACC7C
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180129AD8 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCSwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSwapChainRealization@@@Z @ 0x1802AC6C4 (--0-$com_ptr_t@VCSwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSwapChainReal.c)
 *     ??0CSwapChainRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802AC6F0 (--0CSwapChainRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 *     ??1?$com_ptr_t@VCSwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802AC870 (--1-$com_ptr_t@VCSwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsureTexture@CSwapChainRealization@@IEAAJXZ @ 0x1802ACF30 (-EnsureTexture@CSwapChainRealization@@IEAAJXZ.c)
 *     ?IsOverlayRequired@CSwapChainRealization@@UEBA_NXZ @ 0x1802ADDC0 (-IsOverlayRequired@CSwapChainRealization@@UEBA_NXZ.c)
 */

__int64 __fastcall CSwapChainRealization::Create(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        CSwapChainRealization **a6)
{
  __int64 v10; // rax
  CSwapChainRealization *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  CSwapChainRealization *v15[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = (__int64)operator new(0x140uLL);
  if ( v10 )
    v10 = CSwapChainRealization::CSwapChainRealization(v10, a1, a2, a3, a4, a5);
  wil::com_ptr_t<CSwapChainRealization,wil::err_returncode_policy>::com_ptr_t<CSwapChainRealization,wil::err_returncode_policy>(
    v15,
    v10);
  v11 = v15[0];
  v12 = CSwapChainRealization::EnsureTexture(v15[0]);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( CSwapChainRealization::IsOverlayRequired(v11) || *((_DWORD *)v11 + 31) == 1 || CDeviceManager::s_bXbox )
      *((_BYTE *)v11 + 314) = 0;
    v13 = 0;
    v15[0] = 0LL;
    *a6 = v11;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
      (const char *)(unsigned int)v12);
    *((_QWORD *)v11 + 29) = 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
      (const char *)v13);
  }
  wil::com_ptr_t<CSwapChainRealization,wil::err_returncode_policy>::~com_ptr_t<CSwapChainRealization,wil::err_returncode_policy>((__int64 *)v15);
  return v13;
}

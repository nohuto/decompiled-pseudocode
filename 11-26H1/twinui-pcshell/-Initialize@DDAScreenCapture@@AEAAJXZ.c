/*
 * XREFs of ?Initialize@DDAScreenCapture@@AEAAJXZ @ 0x1803EEB60
 * Callers:
 *     ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x1803EE150 (-CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?InitializeDuplication@DDAScreenCapture@@AEAAJXZ @ 0x1803EECA4 (-InitializeDuplication@DDAScreenCapture@@AEAAJXZ.c)
 */

__int64 __fastcall DDAScreenCapture::Initialize(DDAScreenCapture *this)
{
  D3D_DRIVER_TYPE *v1; // rbx
  __int64 *ppImmediateContext; // rbp
  __int64 *ppDevice; // r14
  HRESULT v5; // esi
  int v7; // eax
  unsigned int v8; // ebx
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v10[3]; // [rsp+58h] [rbp-40h] BYREF
  char v11; // [rsp+64h] [rbp-34h] BYREF
  D3D_FEATURE_LEVEL pFeatureLevels[4]; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v1 = (D3D_DRIVER_TYPE *)v10;
  *(__m128i *)pFeatureLevels = _mm_load_si128((const __m128i *)&_xmm);
  v10[0] = 1;
  v10[1] = 5;
  ppImmediateContext = (__int64 *)((char *)this + 112);
  v10[2] = 2;
  ppDevice = (__int64 *)((char *)this + 104);
  pFeatureLevel = 0;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(ppImmediateContext);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(ppDevice);
    v5 = D3D11CreateDevice(
           0LL,
           *v1,
           0LL,
           0,
           pFeatureLevels,
           4u,
           7u,
           (ID3D11Device **)ppDevice,
           &pFeatureLevel,
           (ID3D11DeviceContext **)ppImmediateContext);
    if ( v5 >= 0 )
      break;
    if ( ++v1 == (D3D_DRIVER_TYPE *)&v11 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  v7 = DDAScreenCapture::InitializeDuplication(this);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v7);
  return v8;
}

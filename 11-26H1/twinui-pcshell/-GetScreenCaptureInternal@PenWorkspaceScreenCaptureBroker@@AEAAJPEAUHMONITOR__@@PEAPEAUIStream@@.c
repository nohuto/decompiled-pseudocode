/*
 * XREFs of ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803E9770
 * Callers:
 *     ?GetScreenCapture@PenWorkspaceScreenCaptureBroker@@UEAAJPEAPEAUIStream@@PEAUHMONITOR__@@@Z @ 0x1803E9720 (-GetScreenCapture@PenWorkspaceScreenCaptureBroker@@UEAAJPEAPEAUIStream@@PEAUHMONITOR__@@@Z.c)
 *     ?GetScreenCaptureWithWICBitmap@PenWorkspaceScreenCaptureBroker@@UEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803E99B0 (-GetScreenCaptureWithWICBitmap@PenWorkspaceScreenCaptureBroker@@UEAAJPEAUHMONITOR__@@PEAPEAUIStr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$reset@VDDAScreenCapture@@$0A@@?$shared_ptr@VDDAScreenCapture@@@std@@QEAAXPEAVDDAScreenCapture@@@Z @ 0x1803E9214 (--$reset@VDDAScreenCapture@@$0A@@-$shared_ptr@VDDAScreenCapture@@@std@@QEAAXPEAVDDAScreenCapture.c)
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x1803E99D4 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 *     ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x1803EE150 (-CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z.c)
 *     ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803EE20C (-GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBit.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PenWorkspaceScreenCaptureBroker::GetScreenCaptureInternal(
        PenWorkspaceScreenCaptureBroker *this,
        HMONITOR a2,
        struct IStream **a3,
        struct IWICBitmapSource **a4)
{
  DDAScreenCapture **v5; // rdi
  int v6; // eax
  int ScreenCaptureAsWicBitmapSource; // ebx
  HRESULT Instance; // eax
  DDAScreenCapture *v9; // rbx
  __int64 v10; // r8
  int StreamOfWICBitmapSourceWithOptions; // eax
  struct IWICImagingFactory *v12; // rbx
  HRESULT (__stdcall *CreateFormatConverter)(IWICImagingFactory *, IWICFormatConverter **); // rdi
  int v14; // eax
  __int64 v15; // rdx
  struct DDAScreenCapture *v16; // rax
  struct IWICImagingFactory *ppv[2]; // [rsp+40h] [rbp-20h] BYREF
  GUID v19; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IWICBitmapSource *v21; // [rsp+80h] [rbp+20h] BYREF
  struct DDAScreenCapture *v22; // [rsp+98h] [rbp+38h] BYREF

  if ( a4 )
    *a4 = 0LL;
  v5 = (DDAScreenCapture **)((char *)this + 48);
  if ( *((_QWORD *)this + 6) )
  {
LABEL_7:
    ppv[0] = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)ppv);
    Instance = CoCreateInstance(
                 &CLSID_WICImagingFactory2,
                 0LL,
                 1u,
                 &GUID_7b816b45_1996_4476_b132_de9e247c8af0,
                 (LPVOID *)ppv);
    ScreenCaptureAsWicBitmapSource = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
        (const char *)(unsigned int)Instance);
LABEL_21:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)ppv);
      return (unsigned int)ScreenCaptureAsWicBitmapSource;
    }
    v21 = 0LL;
    v9 = *v5;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v21);
    ScreenCaptureAsWicBitmapSource = DDAScreenCapture::GetScreenCaptureAsWicBitmapSource(v9, ppv[0], &v21);
    if ( ScreenCaptureAsWicBitmapSource < 0 )
    {
LABEL_10:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v21);
      goto LABEL_21;
    }
    v19 = GUID_WICPixelFormat32bppBGRA;
    StreamOfWICBitmapSourceWithOptions = GetStreamOfWICBitmapSourceWithOptions(ppv[0], v21, v10, &v19);
    ScreenCaptureAsWicBitmapSource = StreamOfWICBitmapSourceWithOptions;
    if ( StreamOfWICBitmapSourceWithOptions < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x63,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
        (const char *)(unsigned int)StreamOfWICBitmapSourceWithOptions);
      goto LABEL_10;
    }
    if ( a4 )
    {
      v22 = 0LL;
      v12 = ppv[0];
      CreateFormatConverter = ppv[0]->lpVtbl->CreateFormatConverter;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v22);
      v14 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct DDAScreenCapture **))CreateFormatConverter)(
              v12,
              &v22);
      ScreenCaptureAsWicBitmapSource = v14;
      if ( v14 < 0 )
      {
        v15 = 105LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v22);
        goto LABEL_10;
      }
      v14 = (*(__int64 (__fastcall **)(struct DDAScreenCapture *, struct IWICBitmapSource *, GUID *, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v22 + 64LL))(
              v22,
              v21,
              &GUID_WICPixelFormat32bppPBGRA,
              0LL,
              0LL,
              0LL,
              1);
      ScreenCaptureAsWicBitmapSource = v14;
      if ( v14 < 0 )
      {
        v15 = 112LL;
        goto LABEL_16;
      }
      v16 = v22;
      v22 = 0LL;
      *a4 = (struct IWICBitmapSource *)v16;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v22);
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v21);
    ScreenCaptureAsWicBitmapSource = 0;
    goto LABEL_21;
  }
  v22 = 0LL;
  v6 = DDAScreenCapture::CreateInstance(&v22, a2);
  ScreenCaptureAsWicBitmapSource = v6;
  if ( v6 >= 0 )
  {
    std::shared_ptr<DDAScreenCapture>::reset<DDAScreenCapture,0>(v5, (__int64)v22);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50,
    (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)ScreenCaptureAsWicBitmapSource;
}

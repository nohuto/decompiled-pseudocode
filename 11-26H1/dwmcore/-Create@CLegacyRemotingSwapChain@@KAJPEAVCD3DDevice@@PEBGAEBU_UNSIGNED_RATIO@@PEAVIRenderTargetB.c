/*
 * XREFs of ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802A7F50
 * Callers:
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180296E40 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCLegacyRemotingSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802A2408 (--1-$com_ptr_t@VCLegacyRemotingSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@AEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAUHINSTANCE__@@@Z @ 0x1802A7CF4 (--0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@AEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@.c)
 *     ?Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z @ 0x1802A86B8 (-Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::Create(
        struct CD3DDevice *a1,
        const unsigned __int16 *a2,
        const struct _UNSIGNED_RATIO *a3,
        struct IRenderTargetBitmap *a4,
        void *a5,
        struct ILegacyRemotingSwapChain **a6)
{
  struct ILegacyRemotingSwapChain **v6; // rsi
  HMODULE LibraryA; // rbx
  CLegacyRemotingSwapChain *v12; // rax
  struct ILegacyRemotingSwapChain **v13; // rax
  CLegacyRemotingSwapChain *v14; // rbx
  int v15; // eax
  unsigned int v16; // edi

  v6 = a6;
  *a6 = 0LL;
  LibraryA = LoadLibraryA("rdsdwmdr.dll");
  if ( LibraryA )
  {
    v12 = (CLegacyRemotingSwapChain *)operator new(0xD0uLL);
    if ( v12 )
    {
      v13 = (struct ILegacyRemotingSwapChain **)CLegacyRemotingSwapChain::CLegacyRemotingSwapChain(
                                                  v12,
                                                  a1,
                                                  a3,
                                                  a4,
                                                  a5,
                                                  LibraryA);
      a6 = v13;
      v14 = (CLegacyRemotingSwapChain *)v13;
      if ( v13 )
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v13 + 2));
    }
    else
    {
      v14 = 0LL;
      a6 = 0LL;
    }
    v15 = CLegacyRemotingSwapChain::Initialize(v14, a2);
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x23u, 0LL);
    }
    else
    {
      a6 = 0LL;
      *v6 = v14;
    }
    wil::com_ptr_t<CLegacyRemotingSwapChain,wil::err_returncode_policy>::~com_ptr_t<CLegacyRemotingSwapChain,wil::err_returncode_policy>(&a6);
  }
  else
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x29u, 0LL);
  }
  return v16;
}

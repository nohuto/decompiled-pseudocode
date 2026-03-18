/*
 * XREFs of ?Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802A2638
 * Callers:
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x180254DC0 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1801744A0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProducer@@@Z @ 0x1801D3C5C (--0-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProdu.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180215DF4 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??$?0$$V@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@@@IEAA@XZ @ 0x1802A2384 (--$-0$$V@-$CDeviceResourceT@V-$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@.c)
 *     ??1?$com_ptr_t@VCLegacyRemotingSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802A2408 (--1-$com_ptr_t@VCLegacyRemotingSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CDummyRemotingSwapChain@@IEAAJPEBG@Z @ 0x1802A2C04 (-Initialize@CDummyRemotingSwapChain@@IEAAJPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDummyRemotingSwapChain::Create(struct IDXGIOutputDWM *a1, struct ILegacyRemotingSwapChain **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rbx
  HMODULE LibraryA; // r14
  CDeviceManager *v8; // rcx
  int DefaultDevice; // eax
  char *v10; // rax
  char *v11; // rsi
  int v12; // edi
  __int64 v13; // rdx
  int v14; // eax
  struct CD3DDevice *v16; // [rsp+30h] [rbp-D0h] BYREF
  char *v17; // [rsp+38h] [rbp-C8h] BYREF
  char v18[8]; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+48h] [rbp-B8h]
  __int64 v20; // [rsp+68h] [rbp-98h]
  unsigned __int16 v21[48]; // [rsp+B0h] [rbp-50h] BYREF

  *a2 = 0LL;
  memset_0(v18, 0, 0xC8uLL);
  v4 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, char *))(*(_QWORD *)a1 + 32LL))(a1, v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x16u, 0LL);
  }
  else
  {
    v6 = v20;
    LibraryA = LoadLibraryA("rdsdwmdr.dll");
    if ( LibraryA )
    {
      v16 = 0LL;
      v17 = 0LL;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v16);
      DefaultDevice = CDeviceManager::GetDefaultDevice(v8, &v16);
      v5 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DefaultDevice, 0x20u, 0LL);
      }
      else
      {
        v10 = (char *)operator new(0x130uLL);
        v11 = v10;
        if ( v10 )
        {
          v12 = v19;
          CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>((__int64)v10);
          *(_QWORD *)v11 = &CDummyRemotingSwapChain::`vftable'{for `IDeviceResource'};
          *((_QWORD *)v11 + 1) = &CDummyRemotingSwapChain::`vftable'{for `IPixelFormat'};
          wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(
            (_QWORD *)v11 + 6,
            v13);
          wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
            (_QWORD *)v11 + 7,
            (__int64)a1);
          *((_QWORD *)v11 + 8) = LibraryA;
          *((_QWORD *)v11 + 9) = 0LL;
          *((_QWORD *)v11 + 10) = 0LL;
          *((_DWORD *)v11 + 22) = v12;
          *(_QWORD *)(v11 + 92) = v6;
          `vector constructor iterator'(
            v11 + 104,
            96LL,
            2LL,
            (void (__fastcall *)(char *))CDummyRemotingSwapChain::CPresentStats::CPresentStats);
          *((_DWORD *)v11 + 74) = 0;
          v17 = v11;
          CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 16));
        }
        else
        {
          v11 = 0LL;
        }
        v14 = CDummyRemotingSwapChain::Initialize((CDummyRemotingSwapChain *)v11, v21);
        v5 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x28u, 0LL);
        }
        else
        {
          v17 = 0LL;
          *a2 = (struct ILegacyRemotingSwapChain *)v11;
        }
      }
      wil::com_ptr_t<CLegacyRemotingSwapChain,wil::err_returncode_policy>::~com_ptr_t<CLegacyRemotingSwapChain,wil::err_returncode_policy>(&v17);
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v16);
    }
    else
    {
      v5 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x2Eu, 0LL);
    }
  }
  return v5;
}

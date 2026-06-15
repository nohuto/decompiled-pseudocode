/*
 * XREFs of ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x180104BC0
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointStore@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointStore@@AEAPEBG@Z @ 0x1800AFE00 (--$MakeAndInitialize@VCEndpointStore@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointStore.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Initialize@CAudioSessionManager@@QEAAJPEBG@Z @ 0x180082ABC (-Initialize@CAudioSessionManager@@QEAAJPEBG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800AC0B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??1?$unique_ptr@VCAudioSessionManager@@U?$default_delete@VCAudioSessionManager@@@std@@@std@@QEAA@XZ @ 0x1800B0E68 (--1-$unique_ptr@VCAudioSessionManager@@U-$default_delete@VCAudioSessionManager@@@std@@@std@@QEAA.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x1800B105C (--0CAudioSessionManager@@QEAA@XZ.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ??R?$default_delete@VCAudioSessionManager@@@std@@QEBAXPEAVCAudioSessionManager@@@Z @ 0x1800D3334 (--R-$default_delete@VCAudioSessionManager@@@std@@QEBAXPEAVCAudioSessionManager@@@Z.c)
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@PEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@$$QEAPEAUIMMDevice@@@Z @ 0x180104790 (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@PEAUIMMDevice@@@Detai.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointStore::RuntimeClassInitialize(CEndpointStore *this, const unsigned __int16 *a2)
{
  __int64 (*GetDevice)(void); // rbx
  int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  struct IMMDevice *v8; // rax
  __int64 v9; // rcx
  CAudioSessionManager *v10; // rbx
  CAudioSessionManager *v11; // rax
  CAudioSessionManager *v12; // rdx
  CAudioSessionManager *v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  unsigned __int64 v19; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMMDevice *v21; // [rsp+50h] [rbp+18h] BYREF
  struct IMMDevice *v22; // [rsp+58h] [rbp+20h] BYREF

  v21 = 0LL;
  GetDevice = (__int64 (*)(void))g_DeviceEnumerator->lpVtbl->GetDevice;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v21);
  try
  {
    v5 = GetDevice();
    if ( v5 >= 0 )
    {
      *((_BYTE *)this + 256) = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, struct IMMDevice *))(*(_QWORD *)g_AudioResourceManager + 88LL))(
                                 g_AudioResourceManager,
                                 v21);
      v8 = (struct IMMDevice *)operator new(0x130uLL);
      v10 = (CAudioSessionManager *)v8;
      v22 = v8;
      if ( v8 )
      {
        memset_0(v8, 0, 0x130uLL);
        v11 = CAudioSessionManager::CAudioSessionManager(v10);
      }
      else
      {
        v11 = 0LL;
      }
      v22 = 0LL;
      v12 = (CAudioSessionManager *)*((_QWORD *)this + 12);
      *((_QWORD *)this + 12) = v11;
      if ( v12 )
        std::default_delete<CAudioSessionManager>::operator()(v9, v12);
      std::unique_ptr<CAudioSessionManager>::~unique_ptr<CAudioSessionManager>(&v22);
      v13 = (CAudioSessionManager *)*((_QWORD *)this + 12);
      if ( v13 )
      {
        v14 = CAudioSessionManager::Initialize(v13, a2);
        v15 = v14;
        if ( v14 >= 0 )
        {
          v22 = v21;
          v16 = *((_QWORD *)this + 13);
          *((_QWORD *)this + 13) = 0LL;
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          v17 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore,IMMDevice *>(
                  (void ***)this + 13,
                  &v22);
          v18 = v17;
          if ( v17 >= 0 )
          {
            v19 = -1LL;
            do
              ++v19;
            while ( a2[v19] );
            std::wstring::assign((char *)this + 16, a2, v19);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
            result = 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x73,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
              (const char *)(unsigned int)v17);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
            result = v18;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x71,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
            (const char *)(unsigned int)v14);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
          result = v15;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x70,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
          (const char *)0x8007000ELL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
        result = 2147942414LL;
      }
    }
    else
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
      result = (unsigned int)v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x78,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
                           v6);
  }
  return result;
}

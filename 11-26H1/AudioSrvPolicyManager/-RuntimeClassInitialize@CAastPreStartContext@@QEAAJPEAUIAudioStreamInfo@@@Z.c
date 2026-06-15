/*
 * XREFs of ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180042BAC
 * Callers:
 *     ??$MakeAndInitialize@VCAastPreStartContext@@UIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInfo@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInfo@@@Z @ 0x1800428B8 (--$MakeAndInitialize@VCAastPreStartContext@@UIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInf.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180012380 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180021570 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18003B680 (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18003D428 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAastPreStartContext::RuntimeClassInitialize(void **this, struct IAudioStreamInfo *a2)
{
  __int64 v4; // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  _WORD *v13; // rax
  const unsigned __int16 *v14; // rbx
  unsigned int v15; // eax
  const unsigned __int16 *v16; // rdx
  int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  int updated; // eax
  bool v21; // [rsp+40h] [rbp-38h] BYREF
  DWORD dwMilliseconds; // [rsp+44h] [rbp-34h] BYREF
  float v23; // [rsp+48h] [rbp-30h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-2Ch] BYREF
  __int64 v25; // [rsp+50h] [rbp-28h] BYREF
  __int64 v26[4]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  bool v28; // [rsp+88h] [rbp+10h] BYREF
  bool v29; // [rsp+90h] [rbp+18h] BYREF
  bool v30; // [rsp+98h] [rbp+20h] BYREF

  v4 = *(_QWORD *)a2;
  v25 = 0LL;
  v5 = *(__int64 (**)(void))(v4 + 24);
  try
  {
    v6 = v5();
    v7 = v6;
    if ( v6 >= 0 )
    {
      v10 = *(_QWORD *)a2;
      v26[0] = 0LL;
      v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v10 + 32))(a2, v26);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v13 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26[0] + 72LL))(v26[0]);
        v14 = (const unsigned __int16 *)(this + 3);
        std::wstring::assign(this + 3, v13);
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 48LL))(v25);
        *((_DWORD *)this + 5) = v15;
        v30 = 0;
        v29 = 0;
        v28 = 0;
        v21 = 0;
        v23 = 0.0;
        v16 = (const unsigned __int16 *)(this + 3);
        if ( (unsigned __int64)this[6] > 7 )
          v16 = *(const unsigned __int16 **)v14;
        v17 = CApplicationManager::ApplyEndpointVolumeOverride(
                (CApplicationManager *)&v29,
                v16,
                v15,
                &v30,
                &v29,
                &v23,
                &v28,
                &v21);
        v18 = v17;
        if ( v17 >= 0 )
        {
          if ( v30 )
          {
            v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 48LL))(v25);
            CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, v19, 4);
          }
          if ( v29 || v28 )
          {
            dwMilliseconds = 0;
            pcbData = 4;
            RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
              L"AastRenderDelayInMs",
              0x18u,
              0LL,
              &dwMilliseconds,
              &pcbData);
            if ( dwMilliseconds )
              Sleep(dwMilliseconds);
            if ( (unsigned __int64)this[6] > 7 )
              v14 = *(const unsigned __int16 **)v14;
            updated = CApplicationManager::UpdateEndpointVolume((CApplicationManager *)v28, v14, v29, v23, v28, v21);
            if ( updated < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                104LL,
                (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
                (const char *)(unsigned int)updated);
          }
          *((_BYTE *)this + 16) = 1;
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v26);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4D,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
            (const char *)(unsigned int)v17);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v26);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
          result = v18;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
          (const char *)(unsigned int)v11);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v26);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
        result = v12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
      result = v7;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6F,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
                           v8);
  }
  return result;
}

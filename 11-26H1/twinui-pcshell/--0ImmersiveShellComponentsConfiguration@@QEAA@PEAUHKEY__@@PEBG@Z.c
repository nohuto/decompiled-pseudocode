/*
 * XREFs of ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x1803D98A0
 * Callers:
 *     ??$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA?AU?$com_ptr@UImmersiveShellComponentsConfiguration@@@0@$$QEAPEAUHKEY__@@$$QEAPEBG@Z @ 0x1803D9364 (--$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA-AU-$com_ptr@UImm.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0ComponentCreator@@QEAA@XZ @ 0x18018BAEC (--0ComponentCreator@@QEAA@XZ.c)
 *     ??1?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x1803586C4 (--1-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pair@_KURect@Foundat.c)
 *     ??0?$producers_base@UImmersiveShellComponentsConfiguration@@V?$tuple@UIImmersiveShellCreationBehavior@@@std@@@impl@winrt@@QEAA@XZ @ 0x1803D987C (--0-$producers_base@UImmersiveShellComponentsConfiguration@@V-$tuple@UIImmersiveShellCreationBeh.c)
 *     ??4?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803D9B4C (--4-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndInfo@.c)
 *     ?GetComponents@ImmersiveShellComponentsConfiguration@@CA?AV?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803E4EC8 (-GetComponents@ImmersiveShellComponentsConfiguration@@CA-AV-$vector@UClassIdAndInfo@ImmersiveShe.c)
 */

// Hidden C++ exception states: #wind=5
ImmersiveShellComponentsConfiguration *__fastcall ImmersiveShellComponentsConfiguration::ImmersiveShellComponentsConfiguration(
        ImmersiveShellComponentsConfiguration *this,
        HKEY a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rcx
  __int64 Components; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v11[56]; // [rsp+20h] [rbp-38h] BYREF

  winrt::impl::producers_base<ImmersiveShellComponentsConfiguration,std::tuple<IImmersiveShellCreationBehavior>>::producers_base<ImmersiveShellComponentsConfiguration,std::tuple<IImmersiveShellCreationBehavior>>(this);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v6 + 16, 1LL);
  *(_QWORD *)this = &ImmersiveShellComponentsConfiguration::`vftable'{for `winrt::impl::producers_base<ImmersiveShellComponentsConfiguration,std::tuple<IImmersiveShellCreationBehavior>>'};
  *((_QWORD *)this + 1) = &ImmersiveShellComponentsConfiguration::`vftable'{for `winrt::impl::root_implements<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  ComponentCreator::ComponentCreator((ImmersiveShellComponentsConfiguration *)((char *)this + 96));
  Components = ImmersiveShellComponentsConfiguration::GetComponents(v11, a2, a3, L"Components");
  std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::operator=((char *)this + 24, Components);
  std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::~vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>((__int64)v11);
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3) )
  {
    v8 = ImmersiveShellComponentsConfiguration::GetComponents(v11, a2, a3, L"PerMonitorComponents");
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::operator=((char *)this + 48, v8);
    std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::~vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>((__int64)v11);
    v9 = ImmersiveShellComponentsConfiguration::GetComponents(v11, a2, a3, L"PerProxyMonitorComponents");
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::operator=((char *)this + 72, v9);
    std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::~vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>((__int64)v11);
  }
  return this;
}

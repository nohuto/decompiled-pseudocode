/*
 * XREFs of ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x1803CFC84
 * Callers:
 *     ??$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA?AU?$com_ptr@UImmersiveShellComponentsConfiguration@@@0@$$QEAPEAUHKEY__@@$$QEAPEBG@Z @ 0x1803CF6E8 (--$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA-AU-$com_ptr@UImm.c)
 * Callees:
 *     ??0ComponentCreator@@QEAA@XZ @ 0x180192CA8 (--0ComponentCreator@@QEAA@XZ.c)
 *     ??1?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x180352750 (--1-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pair@_KURect@Foundat.c)
 *     ??0?$producers_base@UImmersiveShellComponentsConfiguration@@V?$tuple@UIImmersiveShellCreationBehavior@@@std@@@impl@winrt@@QEAA@XZ @ 0x1803CFC60 (--0-$producers_base@UImmersiveShellComponentsConfiguration@@V-$tuple@UIImmersiveShellCreationBeh.c)
 *     ??4?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803CFEDC (--4-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndInfo@.c)
 *     ?GetComponents@ImmersiveShellComponentsConfiguration@@CA?AV?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803DBF5C (-GetComponents@ImmersiveShellComponentsConfiguration@@CA-AV-$vector@UClassIdAndInfo@ImmersiveShe.c)
 */

// Hidden C++ exception states: #wind=5
ImmersiveShellComponentsConfiguration *__fastcall ImmersiveShellComponentsConfiguration::ImmersiveShellComponentsConfiguration(
        ImmersiveShellComponentsConfiguration *this,
        HKEY a2,
        const unsigned __int16 *a3)
{
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  __int64 Components; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v12[56]; // [rsp+20h] [rbp-38h] BYREF

  winrt::impl::producers_base<ImmersiveShellComponentsConfiguration,std::tuple<IImmersiveShellCreationBehavior>>::producers_base<ImmersiveShellComponentsConfiguration,std::tuple<IImmersiveShellCreationBehavior>>(this);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v6[2] = 1LL;
  *v6 = &ImmersiveShellComponentsConfiguration::`vftable'{for `winrt::impl::producers_base<ImmersiveShellComponentsConfiguration,std::tuple<IImmersiveShellCreationBehavior>>'};
  v6[1] = &ImmersiveShellComponentsConfiguration::`vftable'{for `winrt::impl::root_implements<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior>'};
  v7 = v6 + 3;
  v6[3] = 0LL;
  v6[4] = 0LL;
  v6[5] = 0LL;
  v6[6] = 0LL;
  v6[7] = 0LL;
  v6[8] = 0LL;
  v6[9] = 0LL;
  v6[10] = 0LL;
  v6[11] = 0LL;
  ComponentCreator::ComponentCreator((ComponentCreator *)(v6 + 12));
  Components = ImmersiveShellComponentsConfiguration::GetComponents(v12, a2, a3, L"Components");
  std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::operator=(v7, Components);
  std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::~vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>((__int64)v12);
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v7[1] - *v7) >> 3) )
  {
    v9 = ImmersiveShellComponentsConfiguration::GetComponents(v12, a2, a3, L"PerMonitorComponents");
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::operator=((char *)this + 48, v9);
    std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::~vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>((__int64)v12);
    v10 = ImmersiveShellComponentsConfiguration::GetComponents(v12, a2, a3, L"PerProxyMonitorComponents");
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::operator=((char *)this + 72, v10);
    std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::~vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>((__int64)v12);
  }
  return this;
}

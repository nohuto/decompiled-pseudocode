/*
 * XREFs of ??1WindowingEnvironmentConfig@@UEAA@XZ @ 0x1801CC6A4
 * Callers:
 *     ??_GWindowingEnvironmentConfig@@UEAAPEAXI@Z @ 0x18043D9E0 (--_GWindowingEnvironmentConfig@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1801CC718 (--1-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKUDispla.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowingEnvironmentConfig::~WindowingEnvironmentConfig(WindowingEnvironmentConfig *this)
{
  *(_QWORD *)this = &WindowingEnvironmentConfig::`vftable';
  *((_QWORD *)this + 4) = &WindowingEnvironmentConfig::`vftable'{for `IWindowingEnvironmentConfig'};
  *((_QWORD *)this + 5) = &WindowingEnvironmentConfig::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IWindowingEnvironmentConfigInternal>'};
  std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>((char *)this + 104);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 10);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 8);
  *((_DWORD *)this + 13) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}

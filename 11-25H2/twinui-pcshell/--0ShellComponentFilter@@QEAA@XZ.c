/*
 * XREFs of ??0ShellComponentFilter@@QEAA@XZ @ 0x1802C9980
 * Callers:
 *     ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x18024D150 (-CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x1800C0454 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 */

// Hidden C++ exception states: #wind=1
ShellComponentFilter *__fastcall ShellComponentFilter::ShellComponentFilter(ShellComponentFilter *this)
{
  HMODULE Library; // rax

  *(_QWORD *)this = 0LL;
  Library = LoadLibraryExW(L"Container.Policy.Manager.dll", 0LL, 0x800u);
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
    (HMODULE *)this,
    Library);
  if ( *(_QWORD *)this )
    *((_QWORD *)this + 1) = GetProcAddress(*(HMODULE *)this, "GetContainerPolicyBoolEx");
  return this;
}

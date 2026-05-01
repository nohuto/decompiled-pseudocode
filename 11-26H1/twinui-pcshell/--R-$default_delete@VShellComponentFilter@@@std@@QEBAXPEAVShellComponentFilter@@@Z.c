/*
 * XREFs of ??R?$default_delete@VShellComponentFilter@@@std@@QEBAXPEAVShellComponentFilter@@@Z @ 0x1803E4AB0
 * Callers:
 *     ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x180241100 (-CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@.c)
 *     ??1?$unique_ptr@VShellComponentFilter@@U?$default_delete@VShellComponentFilter@@@std@@@std@@QEAA@XZ @ 0x1802C6730 (--1-$unique_ptr@VShellComponentFilter@@U-$default_delete@VShellComponentFilter@@@std@@@std@@QEAA.c)
 *     _dynamic_atexit_destructor_for__shellComponentFilter__ @ 0x180708B30 (_dynamic_atexit_destructor_for__shellComponentFilter__.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802C5D28 (--1-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-$int.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<ShellComponentFilter>::operator()(__int64 a1, HMODULE *a2)
{
  if ( a2 )
  {
    wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x10);
  }
}

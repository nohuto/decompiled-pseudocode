/*
 * XREFs of ?close_reset@?$close_invoke_helper@$00P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x180337494
 * Callers:
 *     ?reset@?$unique_any_array_ptr@PEAXU?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@U?$unique_any_array_deleter@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@2@@wil@@QEAAXXZ @ 0x180337798 (-reset@-$unique_any_array_ptr@PEAXU-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1803B43B4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 * Callees:
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D7858 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801E046C (--0last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details::close_invoke_helper<1,void * (*)(void *),&void * LocalFree(void *),void *>::close_reset(
        HLOCAL hMem)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  wil::last_error_context::last_error_context((wil::last_error_context *)&v2);
  LocalFree(hMem);
  wil::last_error_context::~last_error_context((wil::last_error_context *)&v2);
}

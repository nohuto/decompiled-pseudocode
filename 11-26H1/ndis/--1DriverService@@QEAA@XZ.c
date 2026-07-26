/*
 * XREFs of ??1DriverService@@QEAA@XZ @ 0x140148054
 * Callers:
 *     ??1KModule@@QEAA@XZ @ 0x140148080 (--1KModule@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14008C0E0 (-reset@-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@P6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400DF47C (--1-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@P6A_JPEAX@Z$1-ObfDereferenceObject@@YA_.c)
 */

void __fastcall DriverService::~DriverService(void **this)
{
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (*)(void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (*)(void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>(this + 5);
  wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset(this, 0LL);
}

/*
 * XREFs of ?replace@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAAX$$QEAV123@@Z @ 0x18001795C
 * Callers:
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x1800163AC (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 * Callees:
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180029C68 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002AFDC (--1last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::replace(
        void **a1,
        void **a2)
{
  void *v2; // rsi
  void *v4; // rbp
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a2;
  if ( *a1 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v6);
    CoTaskMemFree(v2);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v6);
  }
  *a1 = v4;
  *a2 = 0LL;
}
